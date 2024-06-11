﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListFirewallDomainsResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ListFirewallDomainsResult();
    AWS_ROUTE53RESOLVER_API ListFirewallDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListFirewallDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListFirewallDomainsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFirewallDomainsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFirewallDomainsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the domains in the firewall domain list. </p> <p>This might be a
     * partial list of the domains that you've defined in the domain list. For
     * information, see <code>MaxResults</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDomains() const{ return m_domains; }
    inline void SetDomains(const Aws::Vector<Aws::String>& value) { m_domains = value; }
    inline void SetDomains(Aws::Vector<Aws::String>&& value) { m_domains = std::move(value); }
    inline ListFirewallDomainsResult& WithDomains(const Aws::Vector<Aws::String>& value) { SetDomains(value); return *this;}
    inline ListFirewallDomainsResult& WithDomains(Aws::Vector<Aws::String>&& value) { SetDomains(std::move(value)); return *this;}
    inline ListFirewallDomainsResult& AddDomains(const Aws::String& value) { m_domains.push_back(value); return *this; }
    inline ListFirewallDomainsResult& AddDomains(Aws::String&& value) { m_domains.push_back(std::move(value)); return *this; }
    inline ListFirewallDomainsResult& AddDomains(const char* value) { m_domains.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFirewallDomainsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFirewallDomainsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFirewallDomainsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<Aws::String> m_domains;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
