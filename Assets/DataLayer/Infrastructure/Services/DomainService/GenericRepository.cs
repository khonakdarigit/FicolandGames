using Assets.DataLayer.Application.Services.DomainService;
using MongoDB.Bson;
using Realms;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Linq.Expressions;
using System.Text;
using System.Threading.Tasks;

namespace Assets.DataLayer.Infrastructure.Services.DomainService
{
    public class GenericRepository<T> : IGenericRepository<T> where T : IRealmObject
    {
        private readonly Realm _realm;

        public GenericRepository(Realm realm)
        {
            _realm = realm;
        }
        public IQueryable<T> AsQueryable()
        {
            return _realm.All<T>().AsQueryable();
        }

        public T Create(T entity)
        {
            _realm.Write(() =>
            {
                _realm.Add(entity);
            });

            return entity;
        }

        public List<T> Get()
        {
            return _realm.All<T>().ToList();
        }

        public List<T> Get(Expression<Func<T, bool>> expressions)
        {
            return _realm.All<T>().Where(expressions).ToList();
        }

        public T Get(ObjectId id)
        {
            return _realm.Find<T>(id);
        }

        public void Remove(ObjectId id)
        {
            var obj = Get(id);
            if (obj != null)
            {
                _realm.Write(() =>
                {
                    _realm.Remove(obj);
                });
            }
        }

        public void Update(T entity)
        {

            _realm.Write(() =>
            {
                _realm.Add(entity, true);
            });
        }
    }
}
