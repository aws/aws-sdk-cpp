/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/FirewallRuleGroup.h>
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
    AWS_ROUTE53RESOLVER_API CreateFirewallRuleGroupResult();
    AWS_ROUTE53RESOLVER_API CreateFirewallRuleGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API CreateFirewallRuleGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of rules used to filter DNS network traffic. </p>
     */
    inline const FirewallRuleGroup& GetFirewallRuleGroup() const{ return m_firewallRuleGroup; }

    /**
     * <p>A collection of rules used to filter DNS network traffic. </p>
     */
    inline void SetFirewallRuleGroup(const FirewallRuleGroup& value) { m_firewallRuleGroup = value; }

    /**
     * <p>A collection of rules used to filter DNS network traffic. </p>
     */
    inline void SetFirewallRuleGroup(FirewallRuleGroup&& value) { m_firewallRuleGroup = std::move(value); }

    /**
     * <p>A collection of rules used to filter DNS network traffic. </p>
     */
    inline CreateFirewallRuleGroupResult& WithFirewallRuleGroup(const FirewallRuleGroup& value) { SetFirewallRuleGroup(value); return *this;}

    /**
     * <p>A collection of rules used to filter DNS network traffic. </p>
     */
    inline CreateFirewallRuleGroupResult& WithFirewallRuleGroup(FirewallRuleGroup&& value) { SetFirewallRuleGroup(std::move(value)); return *this;}

  private:

    FirewallRuleGroup m_firewallRuleGroup;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
