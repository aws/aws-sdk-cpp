/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/FirewallDomainList.h>
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
  class DeleteFirewallDomainListResult
  {
  public:
    AWS_ROUTE53RESOLVER_API DeleteFirewallDomainListResult();
    AWS_ROUTE53RESOLVER_API DeleteFirewallDomainListResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API DeleteFirewallDomainListResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The domain list that you just deleted. </p>
     */
    inline const FirewallDomainList& GetFirewallDomainList() const{ return m_firewallDomainList; }

    /**
     * <p>The domain list that you just deleted. </p>
     */
    inline void SetFirewallDomainList(const FirewallDomainList& value) { m_firewallDomainList = value; }

    /**
     * <p>The domain list that you just deleted. </p>
     */
    inline void SetFirewallDomainList(FirewallDomainList&& value) { m_firewallDomainList = std::move(value); }

    /**
     * <p>The domain list that you just deleted. </p>
     */
    inline DeleteFirewallDomainListResult& WithFirewallDomainList(const FirewallDomainList& value) { SetFirewallDomainList(value); return *this;}

    /**
     * <p>The domain list that you just deleted. </p>
     */
    inline DeleteFirewallDomainListResult& WithFirewallDomainList(FirewallDomainList&& value) { SetFirewallDomainList(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteFirewallDomainListResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteFirewallDomainListResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteFirewallDomainListResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    FirewallDomainList m_firewallDomainList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
