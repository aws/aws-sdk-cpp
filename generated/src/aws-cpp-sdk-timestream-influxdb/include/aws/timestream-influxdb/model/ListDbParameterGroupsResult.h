﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-influxdb/model/DbParameterGroupSummary.h>
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
  class ListDbParameterGroupsResult
  {
  public:
    AWS_TIMESTREAMINFLUXDB_API ListDbParameterGroupsResult();
    AWS_TIMESTREAMINFLUXDB_API ListDbParameterGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMINFLUXDB_API ListDbParameterGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of Timestream for InfluxDB DB parameter group summaries.</p>
     */
    inline const Aws::Vector<DbParameterGroupSummary>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<DbParameterGroupSummary>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<DbParameterGroupSummary>&& value) { m_items = std::move(value); }
    inline ListDbParameterGroupsResult& WithItems(const Aws::Vector<DbParameterGroupSummary>& value) { SetItems(value); return *this;}
    inline ListDbParameterGroupsResult& WithItems(Aws::Vector<DbParameterGroupSummary>&& value) { SetItems(std::move(value)); return *this;}
    inline ListDbParameterGroupsResult& AddItems(const DbParameterGroupSummary& value) { m_items.push_back(value); return *this; }
    inline ListDbParameterGroupsResult& AddItems(DbParameterGroupSummary&& value) { m_items.push_back(std::move(value)); return *this; }
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
    inline ListDbParameterGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDbParameterGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDbParameterGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDbParameterGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDbParameterGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDbParameterGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DbParameterGroupSummary> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
