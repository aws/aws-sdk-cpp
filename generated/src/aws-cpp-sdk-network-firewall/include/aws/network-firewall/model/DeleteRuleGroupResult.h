/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/RuleGroupResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeleteRuleGroupResult
  {
  public:
    AWS_NETWORKFIREWALL_API DeleteRuleGroupResult() = default;
    AWS_NETWORKFIREWALL_API DeleteRuleGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API DeleteRuleGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    DeleteRuleGroupResult& WithRuleGroupResponse(RuleGroupResponseT&& value) { SetRuleGroupResponse(std::forward<RuleGroupResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteRuleGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RuleGroupResponse m_ruleGroupResponse;
    bool m_ruleGroupResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
