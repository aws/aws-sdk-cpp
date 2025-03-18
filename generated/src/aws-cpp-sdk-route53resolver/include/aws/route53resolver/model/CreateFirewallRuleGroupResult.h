/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/FirewallRuleGroup.h>
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
namespace Route53Resolver
{
namespace Model
{
  class CreateFirewallRuleGroupResult
  {
  public:
    AWS_ROUTE53RESOLVER_API CreateFirewallRuleGroupResult() = default;
    AWS_ROUTE53RESOLVER_API CreateFirewallRuleGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API CreateFirewallRuleGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of rules used to filter DNS network traffic. </p>
     */
    inline const FirewallRuleGroup& GetFirewallRuleGroup() const { return m_firewallRuleGroup; }
    template<typename FirewallRuleGroupT = FirewallRuleGroup>
    void SetFirewallRuleGroup(FirewallRuleGroupT&& value) { m_firewallRuleGroupHasBeenSet = true; m_firewallRuleGroup = std::forward<FirewallRuleGroupT>(value); }
    template<typename FirewallRuleGroupT = FirewallRuleGroup>
    CreateFirewallRuleGroupResult& WithFirewallRuleGroup(FirewallRuleGroupT&& value) { SetFirewallRuleGroup(std::forward<FirewallRuleGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateFirewallRuleGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    FirewallRuleGroup m_firewallRuleGroup;
    bool m_firewallRuleGroupHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
