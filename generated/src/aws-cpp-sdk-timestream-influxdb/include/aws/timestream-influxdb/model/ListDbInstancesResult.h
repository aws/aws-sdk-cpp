/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-influxdb/model/DbInstanceSummary.h>
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
  class ListDbInstancesResult
  {
  public:
    AWS_TIMESTREAMINFLUXDB_API ListDbInstancesResult();
    AWS_TIMESTREAMINFLUXDB_API ListDbInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMINFLUXDB_API ListDbInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of Timestream for InfluxDB DB instance summaries.</p>
     */
    inline const Aws::Vector<DbInstanceSummary>& GetItems() const{ return m_items; }

    /**
     * <p>A list of Timestream for InfluxDB DB instance summaries.</p>
     */
    inline void SetItems(const Aws::Vector<DbInstanceSummary>& value) { m_items = value; }

    /**
     * <p>A list of Timestream for InfluxDB DB instance summaries.</p>
     */
    inline void SetItems(Aws::Vector<DbInstanceSummary>&& value) { m_items = std::move(value); }

    /**
     * <p>A list of Timestream for InfluxDB DB instance summaries.</p>
     */
    inline ListDbInstancesResult& WithItems(const Aws::Vector<DbInstanceSummary>& value) { SetItems(value); return *this;}

    /**
     * <p>A list of Timestream for InfluxDB DB instance summaries.</p>
     */
    inline ListDbInstancesResult& WithItems(Aws::Vector<DbInstanceSummary>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>A list of Timestream for InfluxDB DB instance summaries.</p>
     */
    inline ListDbInstancesResult& AddItems(const DbInstanceSummary& value) { m_items.push_back(value); return *this; }

    /**
     * <p>A list of Timestream for InfluxDB DB instance summaries.</p>
     */
    inline ListDbInstancesResult& AddItems(DbInstanceSummary&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>Token from a previous call of the operation. When this value is provided, the
     * service returns results from where the previous response left off.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token from a previous call of the operation. When this value is provided, the
     * service returns results from where the previous response left off.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token from a previous call of the operation. When this value is provided, the
     * service returns results from where the previous response left off.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Token from a previous call of the operation. When this value is provided, the
     * service returns results from where the previous response left off.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token from a previous call of the operation. When this value is provided, the
     * service returns results from where the previous response left off.</p>
     */
    inline ListDbInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token from a previous call of the operation. When this value is provided, the
     * service returns results from where the previous response left off.</p>
     */
    inline ListDbInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token from a previous call of the operation. When this value is provided, the
     * service returns results from where the previous response left off.</p>
     */
    inline ListDbInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListDbInstancesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListDbInstancesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListDbInstancesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DbInstanceSummary> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
