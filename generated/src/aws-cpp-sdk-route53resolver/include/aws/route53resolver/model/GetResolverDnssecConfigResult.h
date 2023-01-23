/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/ResolverDnssecConfig.h>
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

  private:

    ResolverDnssecConfig m_resolverDNSSECConfig;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
