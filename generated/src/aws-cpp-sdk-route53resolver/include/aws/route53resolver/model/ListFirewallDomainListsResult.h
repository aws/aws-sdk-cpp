/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/FirewallDomainListMetadata.h>
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
  class ListFirewallDomainListsResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ListFirewallDomainListsResult() = default;
    AWS_ROUTE53RESOLVER_API ListFirewallDomainListsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListFirewallDomainListsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    ListFirewallDomainListsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the domain lists that you have defined. </p> <p>This might be a
     * partial list of the domain lists that you've defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline const Aws::Vector<FirewallDomainListMetadata>& GetFirewallDomainLists() const { return m_firewallDomainLists; }
    template<typename FirewallDomainListsT = Aws::Vector<FirewallDomainListMetadata>>
    void SetFirewallDomainLists(FirewallDomainListsT&& value) { m_firewallDomainListsHasBeenSet = true; m_firewallDomainLists = std::forward<FirewallDomainListsT>(value); }
    template<typename FirewallDomainListsT = Aws::Vector<FirewallDomainListMetadata>>
    ListFirewallDomainListsResult& WithFirewallDomainLists(FirewallDomainListsT&& value) { SetFirewallDomainLists(std::forward<FirewallDomainListsT>(value)); return *this;}
    template<typename FirewallDomainListsT = FirewallDomainListMetadata>
    ListFirewallDomainListsResult& AddFirewallDomainLists(FirewallDomainListsT&& value) { m_firewallDomainListsHasBeenSet = true; m_firewallDomainLists.emplace_back(std::forward<FirewallDomainListsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFirewallDomainListsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<FirewallDomainListMetadata> m_firewallDomainLists;
    bool m_firewallDomainListsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
