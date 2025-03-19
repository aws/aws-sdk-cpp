/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-incidents/model/ResponsePlanSummary.h>
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
namespace SSMIncidents
{
namespace Model
{
  class ListResponsePlansResult
  {
  public:
    AWS_SSMINCIDENTS_API ListResponsePlansResult() = default;
    AWS_SSMINCIDENTS_API ListResponsePlansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API ListResponsePlansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResponsePlansResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of each response plan.</p>
     */
    inline const Aws::Vector<ResponsePlanSummary>& GetResponsePlanSummaries() const { return m_responsePlanSummaries; }
    template<typename ResponsePlanSummariesT = Aws::Vector<ResponsePlanSummary>>
    void SetResponsePlanSummaries(ResponsePlanSummariesT&& value) { m_responsePlanSummariesHasBeenSet = true; m_responsePlanSummaries = std::forward<ResponsePlanSummariesT>(value); }
    template<typename ResponsePlanSummariesT = Aws::Vector<ResponsePlanSummary>>
    ListResponsePlansResult& WithResponsePlanSummaries(ResponsePlanSummariesT&& value) { SetResponsePlanSummaries(std::forward<ResponsePlanSummariesT>(value)); return *this;}
    template<typename ResponsePlanSummariesT = ResponsePlanSummary>
    ListResponsePlansResult& AddResponsePlanSummaries(ResponsePlanSummariesT&& value) { m_responsePlanSummariesHasBeenSet = true; m_responsePlanSummaries.emplace_back(std::forward<ResponsePlanSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResponsePlansResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ResponsePlanSummary> m_responsePlanSummaries;
    bool m_responsePlanSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
