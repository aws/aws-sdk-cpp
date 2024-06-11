﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-query/model/QueryStatus.h>
#include <aws/timestream-query/model/Row.h>
#include <aws/timestream-query/model/ColumnInfo.h>
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
namespace TimestreamQuery
{
namespace Model
{
  class QueryResult
  {
  public:
    AWS_TIMESTREAMQUERY_API QueryResult();
    AWS_TIMESTREAMQUERY_API QueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMQUERY_API QueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A unique ID for the given query. </p>
     */
    inline const Aws::String& GetQueryId() const{ return m_queryId; }
    inline void SetQueryId(const Aws::String& value) { m_queryId = value; }
    inline void SetQueryId(Aws::String&& value) { m_queryId = std::move(value); }
    inline void SetQueryId(const char* value) { m_queryId.assign(value); }
    inline QueryResult& WithQueryId(const Aws::String& value) { SetQueryId(value); return *this;}
    inline QueryResult& WithQueryId(Aws::String&& value) { SetQueryId(std::move(value)); return *this;}
    inline QueryResult& WithQueryId(const char* value) { SetQueryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A pagination token that can be used again on a <code>Query</code> call to
     * get the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline QueryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline QueryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline QueryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The result set rows returned by the query. </p>
     */
    inline const Aws::Vector<Row>& GetRows() const{ return m_rows; }
    inline void SetRows(const Aws::Vector<Row>& value) { m_rows = value; }
    inline void SetRows(Aws::Vector<Row>&& value) { m_rows = std::move(value); }
    inline QueryResult& WithRows(const Aws::Vector<Row>& value) { SetRows(value); return *this;}
    inline QueryResult& WithRows(Aws::Vector<Row>&& value) { SetRows(std::move(value)); return *this;}
    inline QueryResult& AddRows(const Row& value) { m_rows.push_back(value); return *this; }
    inline QueryResult& AddRows(Row&& value) { m_rows.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The column data types of the returned result set. </p>
     */
    inline const Aws::Vector<ColumnInfo>& GetColumnInfo() const{ return m_columnInfo; }
    inline void SetColumnInfo(const Aws::Vector<ColumnInfo>& value) { m_columnInfo = value; }
    inline void SetColumnInfo(Aws::Vector<ColumnInfo>&& value) { m_columnInfo = std::move(value); }
    inline QueryResult& WithColumnInfo(const Aws::Vector<ColumnInfo>& value) { SetColumnInfo(value); return *this;}
    inline QueryResult& WithColumnInfo(Aws::Vector<ColumnInfo>&& value) { SetColumnInfo(std::move(value)); return *this;}
    inline QueryResult& AddColumnInfo(const ColumnInfo& value) { m_columnInfo.push_back(value); return *this; }
    inline QueryResult& AddColumnInfo(ColumnInfo&& value) { m_columnInfo.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the status of the query, including progress and bytes
     * scanned.</p>
     */
    inline const QueryStatus& GetQueryStatus() const{ return m_queryStatus; }
    inline void SetQueryStatus(const QueryStatus& value) { m_queryStatus = value; }
    inline void SetQueryStatus(QueryStatus&& value) { m_queryStatus = std::move(value); }
    inline QueryResult& WithQueryStatus(const QueryStatus& value) { SetQueryStatus(value); return *this;}
    inline QueryResult& WithQueryStatus(QueryStatus&& value) { SetQueryStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline QueryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline QueryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline QueryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_queryId;

    Aws::String m_nextToken;

    Aws::Vector<Row> m_rows;

    Aws::Vector<ColumnInfo> m_columnInfo;

    QueryStatus m_queryStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
