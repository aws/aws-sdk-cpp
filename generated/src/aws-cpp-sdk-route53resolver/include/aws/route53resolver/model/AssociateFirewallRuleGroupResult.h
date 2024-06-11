﻿/**
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
  class AssociateFirewallRuleGroupResult
  {
  public:
    AWS_ROUTE53RESOLVER_API AssociateFirewallRuleGroupResult();
    AWS_ROUTE53RESOLVER_API AssociateFirewallRuleGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API AssociateFirewallRuleGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The association that you just created. The association has an ID that you can
     * use to identify it in other requests, like update and delete.</p>
     */
    inline const FirewallRuleGroupAssociation& GetFirewallRuleGroupAssociation() const{ return m_firewallRuleGroupAssociation; }
    inline void SetFirewallRuleGroupAssociation(const FirewallRuleGroupAssociation& value) { m_firewallRuleGroupAssociation = value; }
    inline void SetFirewallRuleGroupAssociation(FirewallRuleGroupAssociation&& value) { m_firewallRuleGroupAssociation = std::move(value); }
    inline AssociateFirewallRuleGroupResult& WithFirewallRuleGroupAssociation(const FirewallRuleGroupAssociation& value) { SetFirewallRuleGroupAssociation(value); return *this;}
    inline AssociateFirewallRuleGroupResult& WithFirewallRuleGroupAssociation(FirewallRuleGroupAssociation&& value) { SetFirewallRuleGroupAssociation(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AssociateFirewallRuleGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AssociateFirewallRuleGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AssociateFirewallRuleGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    FirewallRuleGroupAssociation m_firewallRuleGroupAssociation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
