/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-influxdb/model/DbInstanceForClusterSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace TimestreamInfluxDB
{
namespace Model
{
  class ListDbInstancesForClusterResult
  {
  public:
    AWS_TIMESTREAMINFLUXDB_API ListDbInstancesForClusterResult();
    AWS_TIMESTREAMINFLUXDB_API ListDbInstancesForClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMINFLUXDB_API ListDbInstancesForClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of Timestream for InfluxDB instance summaries belonging to the
     * cluster.</p>
     */
    inline const Aws::Vector<DbInstanceForClusterSummary>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<DbInstanceForClusterSummary>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<DbInstanceForClusterSummary>&& value) { m_items = std::move(value); }
    inline ListDbInstancesForClusterResult& WithItems(const Aws::Vector<DbInstanceForClusterSummary>& value) { SetItems(value); return *this;}
    inline ListDbInstancesForClusterResult& WithItems(Aws::Vector<DbInstanceForClusterSummary>&& value) { SetItems(std::move(value)); return *this;}
    inline ListDbInstancesForClusterResult& AddItems(const DbInstanceForClusterSummary& value) { m_items.push_back(value); return *this; }
    inline ListDbInstancesForClusterResult& AddItems(DbInstanceForClusterSummary&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token from a previous call of the operation. When this value is provided, the
     * service returns results from where the previous response left off.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDbInstancesForClusterResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDbInstancesForClusterResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDbInstancesForClusterResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDbInstancesForClusterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDbInstancesForClusterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDbInstancesForClusterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DbInstanceForClusterSummary> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
