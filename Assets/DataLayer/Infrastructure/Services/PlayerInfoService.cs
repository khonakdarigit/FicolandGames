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
    public class PlayerInfoService : IPlayerInfoService
    {
        private readonly ApplicationDbService _dbService;

        public PlayerInfoService(ApplicationDbService dbService)
        {
            _dbService = dbService;
        }

        public PlayerInfo GetPlayerInfo()
        {
            return _dbService.PlayerInfo.AsQueryable().FirstOrDefault().CloneViaFakeSerialization<PlayerInfo>();
        }



        public PlayerInfo UpdatePlayerInfo(PlayerInfo playerInfo)
        {
            _dbService.PlayerInfo.Update(playerInfo);
            return GetPlayerInfo();
        }
    }
}
