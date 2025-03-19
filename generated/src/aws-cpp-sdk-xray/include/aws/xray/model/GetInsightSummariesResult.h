/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/InsightSummary.h>
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
namespace XRay
{
namespace Model
{
  class GetInsightSummariesResult
  {
  public:
    AWS_XRAY_API GetInsightSummariesResult() = default;
    AWS_XRAY_API GetInsightSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API GetInsightSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summary of each insight within the group matching the provided filters.
     * The summary contains the InsightID, start and end time, the root cause service,
     * the root cause and client impact statistics, the top anomalous services, and the
     * status of the insight.</p>
     */
    inline const Aws::Vector<InsightSummary>& GetInsightSummaries() const { return m_insightSummaries; }
    template<typename InsightSummariesT = Aws::Vector<InsightSummary>>
    void SetInsightSummaries(InsightSummariesT&& value) { m_insightSummariesHasBeenSet = true; m_insightSummaries = std::forward<InsightSummariesT>(value); }
    template<typename InsightSummariesT = Aws::Vector<InsightSummary>>
    GetInsightSummariesResult& WithInsightSummaries(InsightSummariesT&& value) { SetInsightSummaries(std::forward<InsightSummariesT>(value)); return *this;}
    template<typename InsightSummariesT = InsightSummary>
    GetInsightSummariesResult& AddInsightSummaries(InsightSummariesT&& value) { m_insightSummariesHasBeenSet = true; m_insightSummaries.emplace_back(std::forward<InsightSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetInsightSummariesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInsightSummariesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InsightSummary> m_insightSummaries;
    bool m_insightSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
