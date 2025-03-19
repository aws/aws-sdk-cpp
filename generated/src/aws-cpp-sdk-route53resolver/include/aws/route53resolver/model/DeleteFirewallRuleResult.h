/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/FirewallRule.h>
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
  class DeleteFirewallRuleResult
  {
  public:
    AWS_ROUTE53RESOLVER_API DeleteFirewallRuleResult() = default;
    AWS_ROUTE53RESOLVER_API DeleteFirewallRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API DeleteFirewallRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The specification for the firewall rule that you just deleted.</p>
     */
    inline const FirewallRule& GetFirewallRule() const { return m_firewallRule; }
    template<typename FirewallRuleT = FirewallRule>
    void SetFirewallRule(FirewallRuleT&& value) { m_firewallRuleHasBeenSet = true; m_firewallRule = std::forward<FirewallRuleT>(value); }
    template<typename FirewallRuleT = FirewallRule>
    DeleteFirewallRuleResult& WithFirewallRule(FirewallRuleT&& value) { SetFirewallRule(std::forward<FirewallRuleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteFirewallRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    FirewallRule m_firewallRule;
    bool m_firewallRuleHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
