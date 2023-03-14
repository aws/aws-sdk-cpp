/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/ResolverConfig.h>
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
  class GetResolverConfigResult
  {
  public:
    AWS_ROUTE53RESOLVER_API GetResolverConfigResult();
    AWS_ROUTE53RESOLVER_API GetResolverConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API GetResolverConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the behavior configuration of Route 53 Resolver behavior
     * for the VPC you specified in the <code>GetResolverConfig</code> request.</p>
     */
    inline const ResolverConfig& GetResolverConfig() const{ return m_resolverConfig; }

    /**
     * <p>Information about the behavior configuration of Route 53 Resolver behavior
     * for the VPC you specified in the <code>GetResolverConfig</code> request.</p>
     */
    inline void SetResolverConfig(const ResolverConfig& value) { m_resolverConfig = value; }

    /**
     * <p>Information about the behavior configuration of Route 53 Resolver behavior
     * for the VPC you specified in the <code>GetResolverConfig</code> request.</p>
     */
    inline void SetResolverConfig(ResolverConfig&& value) { m_resolverConfig = std::move(value); }

    /**
     * <p>Information about the behavior configuration of Route 53 Resolver behavior
     * for the VPC you specified in the <code>GetResolverConfig</code> request.</p>
     */
    inline GetResolverConfigResult& WithResolverConfig(const ResolverConfig& value) { SetResolverConfig(value); return *this;}

    /**
     * <p>Information about the behavior configuration of Route 53 Resolver behavior
     * for the VPC you specified in the <code>GetResolverConfig</code> request.</p>
     */
    inline GetResolverConfigResult& WithResolverConfig(ResolverConfig&& value) { SetResolverConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetResolverConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetResolverConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetResolverConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ResolverConfig m_resolverConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
