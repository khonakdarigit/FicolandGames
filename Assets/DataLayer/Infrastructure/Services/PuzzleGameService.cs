using Assets.DataLayer.Application.Services;
using Assets.DataLayer.Domain.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Unity.VisualScripting;

namespace Assets.DataLayer.Infrastructure.Services
{
    internal class PuzzleGameService : IPuzzleGameService
    {
        private readonly ApplicationDbService _dbService;

        public PuzzleGameService(ApplicationDbService dbService)
        {
            _dbService = dbService;
        }

        public PuzzleGameLevel GetPuzzleLevel(int LevelNumber)
        {
            return _dbService.PuzzleGameLevel.AsQueryable().FirstOrDefault(c => c.LevelNumber == LevelNumber).CloneViaFakeSerialization<PuzzleGameLevel>();
        }

        public List<PuzzleGameLevel> GetPuzzleLevels()
        {
            return _dbService.PuzzleGameLevel.AsQueryable().ToList();
        }

        public PuzzleGameLevel UpdatePuzzleLevel(PuzzleGameLevel level)
        {
            _dbService.PuzzleGameLevel.Update(level);
            return GetPuzzleLevel(level.LevelNumber);
        }
    }
}
