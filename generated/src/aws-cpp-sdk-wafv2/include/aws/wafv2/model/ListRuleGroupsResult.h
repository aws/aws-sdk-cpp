/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/RuleGroupSummary.h>
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
namespace WAFV2
{
namespace Model
{
  class ListRuleGroupsResult
  {
  public:
    AWS_WAFV2_API ListRuleGroupsResult() = default;
    AWS_WAFV2_API ListRuleGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API ListRuleGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListRuleGroupsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Array of rule groups. If you specified a <code>Limit</code> in your request,
     * this might not be the full list. </p>
     */
    inline const Aws::Vector<RuleGroupSummary>& GetRuleGroups() const { return m_ruleGroups; }
    template<typename RuleGroupsT = Aws::Vector<RuleGroupSummary>>
    void SetRuleGroups(RuleGroupsT&& value) { m_ruleGroupsHasBeenSet = true; m_ruleGroups = std::forward<RuleGroupsT>(value); }
    template<typename RuleGroupsT = Aws::Vector<RuleGroupSummary>>
    ListRuleGroupsResult& WithRuleGroups(RuleGroupsT&& value) { SetRuleGroups(std::forward<RuleGroupsT>(value)); return *this;}
    template<typename RuleGroupsT = RuleGroupSummary>
    ListRuleGroupsResult& AddRuleGroups(RuleGroupsT&& value) { m_ruleGroupsHasBeenSet = true; m_ruleGroups.emplace_back(std::forward<RuleGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRuleGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::Vector<RuleGroupSummary> m_ruleGroups;
    bool m_ruleGroupsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
