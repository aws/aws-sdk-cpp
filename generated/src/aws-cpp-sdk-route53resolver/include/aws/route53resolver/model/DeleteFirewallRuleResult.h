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
    AWS_ROUTE53RESOLVER_API DeleteFirewallRuleResult();
    AWS_ROUTE53RESOLVER_API DeleteFirewallRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API DeleteFirewallRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The specification for the firewall rule that you just deleted.</p>
     */
    inline const FirewallRule& GetFirewallRule() const{ return m_firewallRule; }

    /**
     * <p>The specification for the firewall rule that you just deleted.</p>
     */
    inline void SetFirewallRule(const FirewallRule& value) { m_firewallRule = value; }

    /**
     * <p>The specification for the firewall rule that you just deleted.</p>
     */
    inline void SetFirewallRule(FirewallRule&& value) { m_firewallRule = std::move(value); }

    /**
     * <p>The specification for the firewall rule that you just deleted.</p>
     */
    inline DeleteFirewallRuleResult& WithFirewallRule(const FirewallRule& value) { SetFirewallRule(value); return *this;}

    /**
     * <p>The specification for the firewall rule that you just deleted.</p>
     */
    inline DeleteFirewallRuleResult& WithFirewallRule(FirewallRule&& value) { SetFirewallRule(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteFirewallRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteFirewallRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteFirewallRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    FirewallRule m_firewallRule;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
