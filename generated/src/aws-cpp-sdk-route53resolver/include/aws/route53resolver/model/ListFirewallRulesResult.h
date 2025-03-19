/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/FirewallRule.h>
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
  class ListFirewallRulesResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ListFirewallRulesResult() = default;
    AWS_ROUTE53RESOLVER_API ListFirewallRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListFirewallRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFirewallRulesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the rules that you have defined. </p> <p>This might be a partial
     * list of the firewall rules that you've defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline const Aws::Vector<FirewallRule>& GetFirewallRules() const { return m_firewallRules; }
    template<typename FirewallRulesT = Aws::Vector<FirewallRule>>
    void SetFirewallRules(FirewallRulesT&& value) { m_firewallRulesHasBeenSet = true; m_firewallRules = std::forward<FirewallRulesT>(value); }
    template<typename FirewallRulesT = Aws::Vector<FirewallRule>>
    ListFirewallRulesResult& WithFirewallRules(FirewallRulesT&& value) { SetFirewallRules(std::forward<FirewallRulesT>(value)); return *this;}
    template<typename FirewallRulesT = FirewallRule>
    ListFirewallRulesResult& AddFirewallRules(FirewallRulesT&& value) { m_firewallRulesHasBeenSet = true; m_firewallRules.emplace_back(std::forward<FirewallRulesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFirewallRulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<FirewallRule> m_firewallRules;
    bool m_firewallRulesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
