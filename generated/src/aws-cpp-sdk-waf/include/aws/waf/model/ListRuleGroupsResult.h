/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/RuleGroupSummary.h>
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
namespace WAF
{
namespace Model
{
  class ListRuleGroupsResult
  {
  public:
    AWS_WAF_API ListRuleGroupsResult() = default;
    AWS_WAF_API ListRuleGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API ListRuleGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If you have more <code>RuleGroups</code> than the number that you specified
     * for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>RuleGroups</code>, submit
     * another <code>ListRuleGroups</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListRuleGroupsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a>RuleGroup</a> objects.</p>
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
} // namespace WAF
} // namespace Aws
