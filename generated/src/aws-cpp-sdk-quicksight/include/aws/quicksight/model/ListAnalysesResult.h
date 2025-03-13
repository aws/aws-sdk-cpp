/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/AnalysisSummary.h>
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
  class ListAnalysesResult
  {
  public:
    AWS_QUICKSIGHT_API ListAnalysesResult() = default;
    AWS_QUICKSIGHT_API ListAnalysesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListAnalysesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Metadata describing each of the analyses that are listed.</p>
     */
    inline const Aws::Vector<AnalysisSummary>& GetAnalysisSummaryList() const { return m_analysisSummaryList; }
    template<typename AnalysisSummaryListT = Aws::Vector<AnalysisSummary>>
    void SetAnalysisSummaryList(AnalysisSummaryListT&& value) { m_analysisSummaryListHasBeenSet = true; m_analysisSummaryList = std::forward<AnalysisSummaryListT>(value); }
    template<typename AnalysisSummaryListT = Aws::Vector<AnalysisSummary>>
    ListAnalysesResult& WithAnalysisSummaryList(AnalysisSummaryListT&& value) { SetAnalysisSummaryList(std::forward<AnalysisSummaryListT>(value)); return *this;}
    template<typename AnalysisSummaryListT = AnalysisSummary>
    ListAnalysesResult& AddAnalysisSummaryList(AnalysisSummaryListT&& value) { m_analysisSummaryListHasBeenSet = true; m_analysisSummaryList.emplace_back(std::forward<AnalysisSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAnalysesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListAnalysesResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAnalysesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AnalysisSummary> m_analysisSummaryList;
    bool m_analysisSummaryListHasBeenSet = false;

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
