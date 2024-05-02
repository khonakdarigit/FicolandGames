using Assets.DataLayer.Domain.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.DataLayer.Application.Services
{
    public interface IPlayerInfoService
    {
        public PlayerInfo GetPlayerInfo();
        public PlayerInfo UpdatePlayerInfo(PlayerInfo playerInfo);
    }
}
