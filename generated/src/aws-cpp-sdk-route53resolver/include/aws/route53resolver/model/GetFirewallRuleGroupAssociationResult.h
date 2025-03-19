/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/FirewallRuleGroupAssociation.h>
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
  class GetFirewallRuleGroupAssociationResult
  {
  public:
    AWS_ROUTE53RESOLVER_API GetFirewallRuleGroupAssociationResult() = default;
    AWS_ROUTE53RESOLVER_API GetFirewallRuleGroupAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API GetFirewallRuleGroupAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The association that you requested. </p>
     */
    inline const FirewallRuleGroupAssociation& GetFirewallRuleGroupAssociation() const { return m_firewallRuleGroupAssociation; }
    template<typename FirewallRuleGroupAssociationT = FirewallRuleGroupAssociation>
    void SetFirewallRuleGroupAssociation(FirewallRuleGroupAssociationT&& value) { m_firewallRuleGroupAssociationHasBeenSet = true; m_firewallRuleGroupAssociation = std::forward<FirewallRuleGroupAssociationT>(value); }
    template<typename FirewallRuleGroupAssociationT = FirewallRuleGroupAssociation>
    GetFirewallRuleGroupAssociationResult& WithFirewallRuleGroupAssociation(FirewallRuleGroupAssociationT&& value) { SetFirewallRuleGroupAssociation(std::forward<FirewallRuleGroupAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFirewallRuleGroupAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    FirewallRuleGroupAssociation m_firewallRuleGroupAssociation;
    bool m_firewallRuleGroupAssociationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
