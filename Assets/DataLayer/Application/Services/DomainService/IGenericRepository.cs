using MongoDB.Bson;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Linq.Expressions;
using System.Text;
using System.Threading.Tasks;

namespace Assets.DataLayer.Application.Services.DomainService
{
    public interface IGenericRepository<T>
    {
        public IQueryable<T> AsQueryable();
        public List<T> Get();
        public List<T> Get(Expression<Func<T, bool>> expressions);
        public T Get(ObjectId id);
        public T Create(T entity);
        public void Update(T entity);
        public void Remove(ObjectId id);
    }
}
