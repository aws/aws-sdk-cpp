/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/ResolverEndpoint.h>
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
  class CreateResolverEndpointResult
  {
  public:
    AWS_ROUTE53RESOLVER_API CreateResolverEndpointResult() = default;
    AWS_ROUTE53RESOLVER_API CreateResolverEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API CreateResolverEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the <code>CreateResolverEndpoint</code> request, including
     * the status of the request.</p>
     */
    inline const ResolverEndpoint& GetResolverEndpoint() const { return m_resolverEndpoint; }
    template<typename ResolverEndpointT = ResolverEndpoint>
    void SetResolverEndpoint(ResolverEndpointT&& value) { m_resolverEndpointHasBeenSet = true; m_resolverEndpoint = std::forward<ResolverEndpointT>(value); }
    template<typename ResolverEndpointT = ResolverEndpoint>
    CreateResolverEndpointResult& WithResolverEndpoint(ResolverEndpointT&& value) { SetResolverEndpoint(std::forward<ResolverEndpointT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateResolverEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ResolverEndpoint m_resolverEndpoint;
    bool m_resolverEndpointHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
