using MongoDB.Bson;
using Realms;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.DataLayer.Domain.Models
{
    public class PlayerInfo : RealmObject
    {
        [PrimaryKey]
        public ObjectId _id { get; set; } = ObjectId.GenerateNewId();
        public string UserName { get; set; }
        public GameSetting Setting { get; set; }
    }
}
