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
    AWS_ROUTE53RESOLVER_API GetResolverConfigResult() = default;
    AWS_ROUTE53RESOLVER_API GetResolverConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API GetResolverConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the behavior configuration of Route 53 Resolver behavior
     * for the VPC you specified in the <code>GetResolverConfig</code> request.</p>
     */
    inline const ResolverConfig& GetResolverConfig() const { return m_resolverConfig; }
    template<typename ResolverConfigT = ResolverConfig>
    void SetResolverConfig(ResolverConfigT&& value) { m_resolverConfigHasBeenSet = true; m_resolverConfig = std::forward<ResolverConfigT>(value); }
    template<typename ResolverConfigT = ResolverConfig>
    GetResolverConfigResult& WithResolverConfig(ResolverConfigT&& value) { SetResolverConfig(std::forward<ResolverConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResolverConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ResolverConfig m_resolverConfig;
    bool m_resolverConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
