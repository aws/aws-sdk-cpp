/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/FirewallDomainList.h>
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
  class CreateFirewallDomainListResult
  {
  public:
    AWS_ROUTE53RESOLVER_API CreateFirewallDomainListResult();
    AWS_ROUTE53RESOLVER_API CreateFirewallDomainListResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API CreateFirewallDomainListResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The domain list that you just created.</p>
     */
    inline const FirewallDomainList& GetFirewallDomainList() const{ return m_firewallDomainList; }

    /**
     * <p>The domain list that you just created.</p>
     */
    inline void SetFirewallDomainList(const FirewallDomainList& value) { m_firewallDomainList = value; }

    /**
     * <p>The domain list that you just created.</p>
     */
    inline void SetFirewallDomainList(FirewallDomainList&& value) { m_firewallDomainList = std::move(value); }

    /**
     * <p>The domain list that you just created.</p>
     */
    inline CreateFirewallDomainListResult& WithFirewallDomainList(const FirewallDomainList& value) { SetFirewallDomainList(value); return *this;}

    /**
     * <p>The domain list that you just created.</p>
     */
    inline CreateFirewallDomainListResult& WithFirewallDomainList(FirewallDomainList&& value) { SetFirewallDomainList(std::move(value)); return *this;}

  private:

    FirewallDomainList m_firewallDomainList;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
