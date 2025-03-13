/**
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
    AWS_ROUTE53RESOLVER_API ListFirewallDomainsResult() = default;
    AWS_ROUTE53RESOLVER_API ListFirewallDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListFirewallDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    ListFirewallDomainsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the domains in the firewall domain list. </p> <p>This might be a
     * partial list of the domains that you've defined in the domain list. For
     * information, see <code>MaxResults</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDomains() const { return m_domains; }
    template<typename DomainsT = Aws::Vector<Aws::String>>
    void SetDomains(DomainsT&& value) { m_domainsHasBeenSet = true; m_domains = std::forward<DomainsT>(value); }
    template<typename DomainsT = Aws::Vector<Aws::String>>
    ListFirewallDomainsResult& WithDomains(DomainsT&& value) { SetDomains(std::forward<DomainsT>(value)); return *this;}
    template<typename DomainsT = Aws::String>
    ListFirewallDomainsResult& AddDomains(DomainsT&& value) { m_domainsHasBeenSet = true; m_domains.emplace_back(std::forward<DomainsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFirewallDomainsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_domains;
    bool m_domainsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
