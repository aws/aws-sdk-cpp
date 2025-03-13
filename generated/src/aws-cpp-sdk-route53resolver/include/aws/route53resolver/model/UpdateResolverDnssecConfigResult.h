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
  class UpdateResolverDnssecConfigResult
  {
  public:
    AWS_ROUTE53RESOLVER_API UpdateResolverDnssecConfigResult() = default;
    AWS_ROUTE53RESOLVER_API UpdateResolverDnssecConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API UpdateResolverDnssecConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A complex type that contains settings for the specified DNSSEC
     * configuration.</p>
     */
    inline const ResolverDnssecConfig& GetResolverDNSSECConfig() const { return m_resolverDNSSECConfig; }
    template<typename ResolverDNSSECConfigT = ResolverDnssecConfig>
    void SetResolverDNSSECConfig(ResolverDNSSECConfigT&& value) { m_resolverDNSSECConfigHasBeenSet = true; m_resolverDNSSECConfig = std::forward<ResolverDNSSECConfigT>(value); }
    template<typename ResolverDNSSECConfigT = ResolverDnssecConfig>
    UpdateResolverDnssecConfigResult& WithResolverDNSSECConfig(ResolverDNSSECConfigT&& value) { SetResolverDNSSECConfig(std::forward<ResolverDNSSECConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateResolverDnssecConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ResolverDnssecConfig m_resolverDNSSECConfig;
    bool m_resolverDNSSECConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
