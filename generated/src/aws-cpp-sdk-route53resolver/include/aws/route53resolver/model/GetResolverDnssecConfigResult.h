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
    AWS_ROUTE53RESOLVER_API GetResolverDnssecConfigResult() = default;
    AWS_ROUTE53RESOLVER_API GetResolverDnssecConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API GetResolverDnssecConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The information about a configuration for DNSSEC validation.</p>
     */
    inline const ResolverDnssecConfig& GetResolverDNSSECConfig() const { return m_resolverDNSSECConfig; }
    template<typename ResolverDNSSECConfigT = ResolverDnssecConfig>
    void SetResolverDNSSECConfig(ResolverDNSSECConfigT&& value) { m_resolverDNSSECConfigHasBeenSet = true; m_resolverDNSSECConfig = std::forward<ResolverDNSSECConfigT>(value); }
    template<typename ResolverDNSSECConfigT = ResolverDnssecConfig>
    GetResolverDnssecConfigResult& WithResolverDNSSECConfig(ResolverDNSSECConfigT&& value) { SetResolverDNSSECConfig(std::forward<ResolverDNSSECConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResolverDnssecConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
