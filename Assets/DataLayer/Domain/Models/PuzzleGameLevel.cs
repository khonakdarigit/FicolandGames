using MongoDB.Bson;
using Realms;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.DataLayer.Domain.Models
{
    public class PuzzleGameLevel : RealmObject
    {
        [PrimaryKey]
        public ObjectId _id { get; set; } = ObjectId.GenerateNewId();
        public int LevelNumber { get; set; }
        public bool IsComplete { get; set; }

        public string SavedPuzzlePartLocation { get; set; }
    }
}
