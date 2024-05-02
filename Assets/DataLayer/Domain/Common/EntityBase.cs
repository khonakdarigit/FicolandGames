using Realms;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.DataLayer.Domain.Common
{
    [System.Serializable]
    public class EntityBase : RealmObject
    {
        [PrimaryKey]
        public string Id { get; set; }
    }
}
