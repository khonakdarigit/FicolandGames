using Assets.DataLayer.Domain.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.DataLayer.Application.Services
{
    public interface IPuzzleGameService
    {
        public List<PuzzleGameLevel> GetPuzzleLevels();
        public PuzzleGameLevel GetPuzzleLevel(int LevelNumber);
        public PuzzleGameLevel UpdatePuzzleLevel(PuzzleGameLevel level);

    }
}
