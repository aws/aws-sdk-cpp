/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DataSetSummary.h>
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
  class SearchDataSetsResult
  {
  public:
    AWS_QUICKSIGHT_API SearchDataSetsResult() = default;
    AWS_QUICKSIGHT_API SearchDataSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API SearchDataSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <code>DataSetSummaries</code> object that returns a summary of a
     * dataset.</p>
     */
    inline const Aws::Vector<DataSetSummary>& GetDataSetSummaries() const { return m_dataSetSummaries; }
    template<typename DataSetSummariesT = Aws::Vector<DataSetSummary>>
    void SetDataSetSummaries(DataSetSummariesT&& value) { m_dataSetSummariesHasBeenSet = true; m_dataSetSummaries = std::forward<DataSetSummariesT>(value); }
    template<typename DataSetSummariesT = Aws::Vector<DataSetSummary>>
    SearchDataSetsResult& WithDataSetSummaries(DataSetSummariesT&& value) { SetDataSetSummaries(std::forward<DataSetSummariesT>(value)); return *this;}
    template<typename DataSetSummariesT = DataSetSummary>
    SearchDataSetsResult& AddDataSetSummaries(DataSetSummariesT&& value) { m_dataSetSummariesHasBeenSet = true; m_dataSetSummaries.emplace_back(std::forward<DataSetSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchDataSetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline SearchDataSetsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchDataSetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataSetSummary> m_dataSetSummaries;
    bool m_dataSetSummariesHasBeenSet = false;

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
