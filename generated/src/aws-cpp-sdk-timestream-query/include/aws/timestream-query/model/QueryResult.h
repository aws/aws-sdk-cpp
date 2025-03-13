/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-query/model/QueryStatus.h>
#include <aws/timestream-query/model/QueryInsightsResponse.h>
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
    AWS_TIMESTREAMQUERY_API QueryResult() = default;
    AWS_TIMESTREAMQUERY_API QueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMQUERY_API QueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A unique ID for the given query. </p>
     */
    inline const Aws::String& GetQueryId() const { return m_queryId; }
    template<typename QueryIdT = Aws::String>
    void SetQueryId(QueryIdT&& value) { m_queryIdHasBeenSet = true; m_queryId = std::forward<QueryIdT>(value); }
    template<typename QueryIdT = Aws::String>
    QueryResult& WithQueryId(QueryIdT&& value) { SetQueryId(std::forward<QueryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A pagination token that can be used again on a <code>Query</code> call to
     * get the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    QueryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The result set rows returned by the query. </p>
     */
    inline const Aws::Vector<Row>& GetRows() const { return m_rows; }
    template<typename RowsT = Aws::Vector<Row>>
    void SetRows(RowsT&& value) { m_rowsHasBeenSet = true; m_rows = std::forward<RowsT>(value); }
    template<typename RowsT = Aws::Vector<Row>>
    QueryResult& WithRows(RowsT&& value) { SetRows(std::forward<RowsT>(value)); return *this;}
    template<typename RowsT = Row>
    QueryResult& AddRows(RowsT&& value) { m_rowsHasBeenSet = true; m_rows.emplace_back(std::forward<RowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The column data types of the returned result set. </p>
     */
    inline const Aws::Vector<ColumnInfo>& GetColumnInfo() const { return m_columnInfo; }
    template<typename ColumnInfoT = Aws::Vector<ColumnInfo>>
    void SetColumnInfo(ColumnInfoT&& value) { m_columnInfoHasBeenSet = true; m_columnInfo = std::forward<ColumnInfoT>(value); }
    template<typename ColumnInfoT = Aws::Vector<ColumnInfo>>
    QueryResult& WithColumnInfo(ColumnInfoT&& value) { SetColumnInfo(std::forward<ColumnInfoT>(value)); return *this;}
    template<typename ColumnInfoT = ColumnInfo>
    QueryResult& AddColumnInfo(ColumnInfoT&& value) { m_columnInfoHasBeenSet = true; m_columnInfo.emplace_back(std::forward<ColumnInfoT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the status of the query, including progress and bytes
     * scanned.</p>
     */
    inline const QueryStatus& GetQueryStatus() const { return m_queryStatus; }
    template<typename QueryStatusT = QueryStatus>
    void SetQueryStatus(QueryStatusT&& value) { m_queryStatusHasBeenSet = true; m_queryStatus = std::forward<QueryStatusT>(value); }
    template<typename QueryStatusT = QueryStatus>
    QueryResult& WithQueryStatus(QueryStatusT&& value) { SetQueryStatus(std::forward<QueryStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Encapsulates <code>QueryInsights</code> containing insights and metrics
     * related to the query that you executed.</p>
     */
    inline const QueryInsightsResponse& GetQueryInsightsResponse() const { return m_queryInsightsResponse; }
    template<typename QueryInsightsResponseT = QueryInsightsResponse>
    void SetQueryInsightsResponse(QueryInsightsResponseT&& value) { m_queryInsightsResponseHasBeenSet = true; m_queryInsightsResponse = std::forward<QueryInsightsResponseT>(value); }
    template<typename QueryInsightsResponseT = QueryInsightsResponse>
    QueryResult& WithQueryInsightsResponse(QueryInsightsResponseT&& value) { SetQueryInsightsResponse(std::forward<QueryInsightsResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    QueryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Row> m_rows;
    bool m_rowsHasBeenSet = false;

    Aws::Vector<ColumnInfo> m_columnInfo;
    bool m_columnInfoHasBeenSet = false;

    QueryStatus m_queryStatus;
    bool m_queryStatusHasBeenSet = false;

    QueryInsightsResponse m_queryInsightsResponse;
    bool m_queryInsightsResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
