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
  class AssociateResolverEndpointIpAddressResult
  {
  public:
    AWS_ROUTE53RESOLVER_API AssociateResolverEndpointIpAddressResult();
    AWS_ROUTE53RESOLVER_API AssociateResolverEndpointIpAddressResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API AssociateResolverEndpointIpAddressResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The response to an <code>AssociateResolverEndpointIpAddress</code>
     * request.</p>
     */
    inline const ResolverEndpoint& GetResolverEndpoint() const{ return m_resolverEndpoint; }

    /**
     * <p>The response to an <code>AssociateResolverEndpointIpAddress</code>
     * request.</p>
     */
    inline void SetResolverEndpoint(const ResolverEndpoint& value) { m_resolverEndpoint = value; }

    /**
     * <p>The response to an <code>AssociateResolverEndpointIpAddress</code>
     * request.</p>
     */
    inline void SetResolverEndpoint(ResolverEndpoint&& value) { m_resolverEndpoint = std::move(value); }

    /**
     * <p>The response to an <code>AssociateResolverEndpointIpAddress</code>
     * request.</p>
     */
    inline AssociateResolverEndpointIpAddressResult& WithResolverEndpoint(const ResolverEndpoint& value) { SetResolverEndpoint(value); return *this;}

    /**
     * <p>The response to an <code>AssociateResolverEndpointIpAddress</code>
     * request.</p>
     */
    inline AssociateResolverEndpointIpAddressResult& WithResolverEndpoint(ResolverEndpoint&& value) { SetResolverEndpoint(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AssociateResolverEndpointIpAddressResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AssociateResolverEndpointIpAddressResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AssociateResolverEndpointIpAddressResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ResolverEndpoint m_resolverEndpoint;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
