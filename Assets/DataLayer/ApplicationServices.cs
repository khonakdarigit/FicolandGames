using Assets.DataLayer.Application.Services;
using Assets.DataLayer.Infrastructure;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.DataLayer
{
    public static class ApplicationServices
    {
        public static ApplicationDbService dbService { get; set; }
        public static IPlayerInfoService playerInfoService { get; set; }
        public static IPuzzleGameService puzzleGameService { get; set; }

        public static bool ServiceIsReady { get; set; } = false;
    }
}
