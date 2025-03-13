/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/RuleGroup.h>
#include <aws/network-firewall/model/RuleGroupResponse.h>
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
  class DescribeRuleGroupResult
  {
  public:
    AWS_NETWORKFIREWALL_API DescribeRuleGroupResult() = default;
    AWS_NETWORKFIREWALL_API DescribeRuleGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API DescribeRuleGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the rule group. The token marks the state of the rule group
     * resource at the time of the request. </p> <p>To make changes to the rule group,
     * you provide the token in your request. Network Firewall uses the token to ensure
     * that the rule group hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the rule group again to get a current copy of it with a
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline const Aws::String& GetUpdateToken() const { return m_updateToken; }
    template<typename UpdateTokenT = Aws::String>
    void SetUpdateToken(UpdateTokenT&& value) { m_updateTokenHasBeenSet = true; m_updateToken = std::forward<UpdateTokenT>(value); }
    template<typename UpdateTokenT = Aws::String>
    DescribeRuleGroupResult& WithUpdateToken(UpdateTokenT&& value) { SetUpdateToken(std::forward<UpdateTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object that defines the rules in a rule group. This, along with
     * <a>RuleGroupResponse</a>, define the rule group. You can retrieve all objects
     * for a rule group by calling <a>DescribeRuleGroup</a>. </p> <p>Network Firewall
     * uses a rule group to inspect and control network traffic. You define stateless
     * rule groups to inspect individual packets and you define stateful rule groups to
     * inspect packets in the context of their traffic flow. </p> <p>To use a rule
     * group, you include it by reference in an Network Firewall firewall policy, then
     * you use the policy in a firewall. You can reference a rule group from more than
     * one firewall policy, and you can use a firewall policy in more than one
     * firewall. </p>
     */
    inline const RuleGroup& GetRuleGroup() const { return m_ruleGroup; }
    template<typename RuleGroupT = RuleGroup>
    void SetRuleGroup(RuleGroupT&& value) { m_ruleGroupHasBeenSet = true; m_ruleGroup = std::forward<RuleGroupT>(value); }
    template<typename RuleGroupT = RuleGroup>
    DescribeRuleGroupResult& WithRuleGroup(RuleGroupT&& value) { SetRuleGroup(std::forward<RuleGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The high-level properties of a rule group. This, along with the
     * <a>RuleGroup</a>, define the rule group. You can retrieve all objects for a rule
     * group by calling <a>DescribeRuleGroup</a>. </p>
     */
    inline const RuleGroupResponse& GetRuleGroupResponse() const { return m_ruleGroupResponse; }
    template<typename RuleGroupResponseT = RuleGroupResponse>
    void SetRuleGroupResponse(RuleGroupResponseT&& value) { m_ruleGroupResponseHasBeenSet = true; m_ruleGroupResponse = std::forward<RuleGroupResponseT>(value); }
    template<typename RuleGroupResponseT = RuleGroupResponse>
    DescribeRuleGroupResult& WithRuleGroupResponse(RuleGroupResponseT&& value) { SetRuleGroupResponse(std::forward<RuleGroupResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRuleGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_updateToken;
    bool m_updateTokenHasBeenSet = false;

    RuleGroup m_ruleGroup;
    bool m_ruleGroupHasBeenSet = false;

    RuleGroupResponse m_ruleGroupResponse;
    bool m_ruleGroupResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
