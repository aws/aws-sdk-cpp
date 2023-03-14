/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/ResolverDnssecConfig.h>
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
  class GetResolverDnssecConfigResult
  {
  public:
    AWS_ROUTE53RESOLVER_API GetResolverDnssecConfigResult();
    AWS_ROUTE53RESOLVER_API GetResolverDnssecConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API GetResolverDnssecConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The information about a configuration for DNSSEC validation.</p>
     */
    inline const ResolverDnssecConfig& GetResolverDNSSECConfig() const{ return m_resolverDNSSECConfig; }

    /**
     * <p>The information about a configuration for DNSSEC validation.</p>
     */
    inline void SetResolverDNSSECConfig(const ResolverDnssecConfig& value) { m_resolverDNSSECConfig = value; }

    /**
     * <p>The information about a configuration for DNSSEC validation.</p>
     */
    inline void SetResolverDNSSECConfig(ResolverDnssecConfig&& value) { m_resolverDNSSECConfig = std::move(value); }

    /**
     * <p>The information about a configuration for DNSSEC validation.</p>
     */
    inline GetResolverDnssecConfigResult& WithResolverDNSSECConfig(const ResolverDnssecConfig& value) { SetResolverDNSSECConfig(value); return *this;}

    /**
     * <p>The information about a configuration for DNSSEC validation.</p>
     */
    inline GetResolverDnssecConfigResult& WithResolverDNSSECConfig(ResolverDnssecConfig&& value) { SetResolverDNSSECConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetResolverDnssecConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetResolverDnssecConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetResolverDnssecConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ResolverDnssecConfig m_resolverDNSSECConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
