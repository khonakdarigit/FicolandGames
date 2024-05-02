using Realms;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.DataLayer.Domain.Models
{
    public class GameSetting : RealmObject
    {
        public bool GameMute { get; set; }
    }
}
