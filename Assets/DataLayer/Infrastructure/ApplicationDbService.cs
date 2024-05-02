using Assets.DataLayer.Application.Services.DomainService;
using Assets.DataLayer.Domain.Models;
using Assets.DataLayer.Infrastructure.Services.DomainService;
using Realms;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.DataLayer.Infrastructure
{
    public class ApplicationDbService
    {
        private readonly Realm _realm;

        public readonly GenericRepository<PlayerInfo> PlayerInfo;
        public readonly GenericRepository<PuzzleGameLevel> PuzzleGameLevel;


        public ApplicationDbService()
        {
            var config = new RealmConfiguration { SchemaVersion = 2 };
            _realm = Realm.GetInstance(config);


            PlayerInfo = new GenericRepository<PlayerInfo>(_realm);
            PuzzleGameLevel = new GenericRepository<PuzzleGameLevel>(_realm);

            //databaseReset();
            SeedDataInitialize();
        }

        private void SeedDataInitialize()
        {
            if (!PlayerInfo.AsQueryable().Any())
            {
                PlayerInfo.Create(new PlayerInfo()
                {

                    UserName = Guid.NewGuid().ToString(),

                    Setting = new GameSetting() { GameMute = false }

                });
            }

            int PuzzleLevelCount = 2;

            int CreateCount = PuzzleLevelCount - PuzzleGameLevel.AsQueryable().Count();


            for (int i = 0; i < CreateCount; i++)
            {
                PuzzleGameLevel.Create(new PuzzleGameLevel()
                {
                    LevelNumber = PuzzleGameLevel.AsQueryable().Count() + 1,
                    IsComplete = false,
                });
            }


        }

        internal void databaseReset()
        {
            _realm.Write(() =>
            {
                _realm.RemoveAll();
            });
        }
    }
}
