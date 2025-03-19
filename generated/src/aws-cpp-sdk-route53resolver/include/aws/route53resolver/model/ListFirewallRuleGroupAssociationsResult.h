/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/FirewallRuleGroupAssociation.h>
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
  class ListFirewallRuleGroupAssociationsResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ListFirewallRuleGroupAssociationsResult() = default;
    AWS_ROUTE53RESOLVER_API ListFirewallRuleGroupAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListFirewallRuleGroupAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    ListFirewallRuleGroupAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of your firewall rule group associations.</p> <p>This might be a
     * partial list of the associations that you have defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline const Aws::Vector<FirewallRuleGroupAssociation>& GetFirewallRuleGroupAssociations() const { return m_firewallRuleGroupAssociations; }
    template<typename FirewallRuleGroupAssociationsT = Aws::Vector<FirewallRuleGroupAssociation>>
    void SetFirewallRuleGroupAssociations(FirewallRuleGroupAssociationsT&& value) { m_firewallRuleGroupAssociationsHasBeenSet = true; m_firewallRuleGroupAssociations = std::forward<FirewallRuleGroupAssociationsT>(value); }
    template<typename FirewallRuleGroupAssociationsT = Aws::Vector<FirewallRuleGroupAssociation>>
    ListFirewallRuleGroupAssociationsResult& WithFirewallRuleGroupAssociations(FirewallRuleGroupAssociationsT&& value) { SetFirewallRuleGroupAssociations(std::forward<FirewallRuleGroupAssociationsT>(value)); return *this;}
    template<typename FirewallRuleGroupAssociationsT = FirewallRuleGroupAssociation>
    ListFirewallRuleGroupAssociationsResult& AddFirewallRuleGroupAssociations(FirewallRuleGroupAssociationsT&& value) { m_firewallRuleGroupAssociationsHasBeenSet = true; m_firewallRuleGroupAssociations.emplace_back(std::forward<FirewallRuleGroupAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFirewallRuleGroupAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<FirewallRuleGroupAssociation> m_firewallRuleGroupAssociations;
    bool m_firewallRuleGroupAssociationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
