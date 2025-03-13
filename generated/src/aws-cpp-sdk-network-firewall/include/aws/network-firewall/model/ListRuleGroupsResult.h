/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/RuleGroupMetadata.h>
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
namespace NetworkFirewall
{
namespace Model
{
  class ListRuleGroupsResult
  {
  public:
    AWS_NETWORKFIREWALL_API ListRuleGroupsResult() = default;
    AWS_NETWORKFIREWALL_API ListRuleGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API ListRuleGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRuleGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule group metadata objects that you've defined. Depending on your
     * setting for max results and the number of rule groups, this might not be the
     * full list. </p>
     */
    inline const Aws::Vector<RuleGroupMetadata>& GetRuleGroups() const { return m_ruleGroups; }
    template<typename RuleGroupsT = Aws::Vector<RuleGroupMetadata>>
    void SetRuleGroups(RuleGroupsT&& value) { m_ruleGroupsHasBeenSet = true; m_ruleGroups = std::forward<RuleGroupsT>(value); }
    template<typename RuleGroupsT = Aws::Vector<RuleGroupMetadata>>
    ListRuleGroupsResult& WithRuleGroups(RuleGroupsT&& value) { SetRuleGroups(std::forward<RuleGroupsT>(value)); return *this;}
    template<typename RuleGroupsT = RuleGroupMetadata>
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

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RuleGroupMetadata> m_ruleGroups;
    bool m_ruleGroupsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
