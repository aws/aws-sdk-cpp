/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DataSourceSummary.h>
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
namespace QuickSight
{
namespace Model
{
  class SearchDataSourcesResult
  {
  public:
    AWS_QUICKSIGHT_API SearchDataSourcesResult() = default;
    AWS_QUICKSIGHT_API SearchDataSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API SearchDataSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <code>DataSourceSummaries</code> object that returns a summary of a data
     * source.</p>
     */
    inline const Aws::Vector<DataSourceSummary>& GetDataSourceSummaries() const { return m_dataSourceSummaries; }
    template<typename DataSourceSummariesT = Aws::Vector<DataSourceSummary>>
    void SetDataSourceSummaries(DataSourceSummariesT&& value) { m_dataSourceSummariesHasBeenSet = true; m_dataSourceSummaries = std::forward<DataSourceSummariesT>(value); }
    template<typename DataSourceSummariesT = Aws::Vector<DataSourceSummary>>
    SearchDataSourcesResult& WithDataSourceSummaries(DataSourceSummariesT&& value) { SetDataSourceSummaries(std::forward<DataSourceSummariesT>(value)); return *this;}
    template<typename DataSourceSummariesT = DataSourceSummary>
    SearchDataSourcesResult& AddDataSourceSummaries(DataSourceSummariesT&& value) { m_dataSourceSummariesHasBeenSet = true; m_dataSourceSummaries.emplace_back(std::forward<DataSourceSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchDataSourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline SearchDataSourcesResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchDataSourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataSourceSummary> m_dataSourceSummaries;
    bool m_dataSourceSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
