/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/ResolverEndpoint.h>
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
  class ListResolverEndpointsResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ListResolverEndpointsResult() = default;
    AWS_ROUTE53RESOLVER_API ListResolverEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListResolverEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If more than <code>MaxResults</code> IP addresses match the specified
     * criteria, you can submit another <code>ListResolverEndpoint</code> request to
     * get the next group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResolverEndpointsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you specified for <code>MaxResults</code> in the request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListResolverEndpointsResult& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Resolver endpoints that were created by using the current Amazon Web
     * Services account, and that match the specified filters, if any.</p>
     */
    inline const Aws::Vector<ResolverEndpoint>& GetResolverEndpoints() const { return m_resolverEndpoints; }
    template<typename ResolverEndpointsT = Aws::Vector<ResolverEndpoint>>
    void SetResolverEndpoints(ResolverEndpointsT&& value) { m_resolverEndpointsHasBeenSet = true; m_resolverEndpoints = std::forward<ResolverEndpointsT>(value); }
    template<typename ResolverEndpointsT = Aws::Vector<ResolverEndpoint>>
    ListResolverEndpointsResult& WithResolverEndpoints(ResolverEndpointsT&& value) { SetResolverEndpoints(std::forward<ResolverEndpointsT>(value)); return *this;}
    template<typename ResolverEndpointsT = ResolverEndpoint>
    ListResolverEndpointsResult& AddResolverEndpoints(ResolverEndpointsT&& value) { m_resolverEndpointsHasBeenSet = true; m_resolverEndpoints.emplace_back(std::forward<ResolverEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResolverEndpointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<ResolverEndpoint> m_resolverEndpoints;
    bool m_resolverEndpointsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
