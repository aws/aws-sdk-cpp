/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/AppComponentCompliance.h>
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
namespace ResilienceHub
{
namespace Model
{
  class ListAppComponentCompliancesResult
  {
  public:
    AWS_RESILIENCEHUB_API ListAppComponentCompliancesResult() = default;
    AWS_RESILIENCEHUB_API ListAppComponentCompliancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListAppComponentCompliancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The compliances for an Resilience Hub Application Component, returned as an
     * object. This object contains the names of the Application Components,
     * compliances, costs, resiliency scores, outage scores, and more.</p>
     */
    inline const Aws::Vector<AppComponentCompliance>& GetComponentCompliances() const { return m_componentCompliances; }
    template<typename ComponentCompliancesT = Aws::Vector<AppComponentCompliance>>
    void SetComponentCompliances(ComponentCompliancesT&& value) { m_componentCompliancesHasBeenSet = true; m_componentCompliances = std::forward<ComponentCompliancesT>(value); }
    template<typename ComponentCompliancesT = Aws::Vector<AppComponentCompliance>>
    ListAppComponentCompliancesResult& WithComponentCompliances(ComponentCompliancesT&& value) { SetComponentCompliances(std::forward<ComponentCompliancesT>(value)); return *this;}
    template<typename ComponentCompliancesT = AppComponentCompliance>
    ListAppComponentCompliancesResult& AddComponentCompliances(ComponentCompliancesT&& value) { m_componentCompliancesHasBeenSet = true; m_componentCompliances.emplace_back(std::forward<ComponentCompliancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAppComponentCompliancesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAppComponentCompliancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AppComponentCompliance> m_componentCompliances;
    bool m_componentCompliancesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
