/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/ResolverQueryLogConfig.h>
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
  class GetResolverQueryLogConfigResult
  {
  public:
    AWS_ROUTE53RESOLVER_API GetResolverQueryLogConfigResult();
    AWS_ROUTE53RESOLVER_API GetResolverQueryLogConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API GetResolverQueryLogConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the Resolver query logging configuration that you specified
     * in a <code>GetQueryLogConfig</code> request.</p>
     */
    inline const ResolverQueryLogConfig& GetResolverQueryLogConfig() const{ return m_resolverQueryLogConfig; }

    /**
     * <p>Information about the Resolver query logging configuration that you specified
     * in a <code>GetQueryLogConfig</code> request.</p>
     */
    inline void SetResolverQueryLogConfig(const ResolverQueryLogConfig& value) { m_resolverQueryLogConfig = value; }

    /**
     * <p>Information about the Resolver query logging configuration that you specified
     * in a <code>GetQueryLogConfig</code> request.</p>
     */
    inline void SetResolverQueryLogConfig(ResolverQueryLogConfig&& value) { m_resolverQueryLogConfig = std::move(value); }

    /**
     * <p>Information about the Resolver query logging configuration that you specified
     * in a <code>GetQueryLogConfig</code> request.</p>
     */
    inline GetResolverQueryLogConfigResult& WithResolverQueryLogConfig(const ResolverQueryLogConfig& value) { SetResolverQueryLogConfig(value); return *this;}

    /**
     * <p>Information about the Resolver query logging configuration that you specified
     * in a <code>GetQueryLogConfig</code> request.</p>
     */
    inline GetResolverQueryLogConfigResult& WithResolverQueryLogConfig(ResolverQueryLogConfig&& value) { SetResolverQueryLogConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetResolverQueryLogConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetResolverQueryLogConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetResolverQueryLogConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ResolverQueryLogConfig m_resolverQueryLogConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
