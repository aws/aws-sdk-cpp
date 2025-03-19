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
  class CreateFirewallRuleResult
  {
  public:
    AWS_ROUTE53RESOLVER_API CreateFirewallRuleResult() = default;
    AWS_ROUTE53RESOLVER_API CreateFirewallRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API CreateFirewallRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The firewall rule that you just created. </p>
     */
    inline const FirewallRule& GetFirewallRule() const { return m_firewallRule; }
    template<typename FirewallRuleT = FirewallRule>
    void SetFirewallRule(FirewallRuleT&& value) { m_firewallRuleHasBeenSet = true; m_firewallRule = std::forward<FirewallRuleT>(value); }
    template<typename FirewallRuleT = FirewallRule>
    CreateFirewallRuleResult& WithFirewallRule(FirewallRuleT&& value) { SetFirewallRule(std::forward<FirewallRuleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateFirewallRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
