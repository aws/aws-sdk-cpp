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
  class CreateResolverQueryLogConfigResult
  {
  public:
    AWS_ROUTE53RESOLVER_API CreateResolverQueryLogConfigResult() = default;
    AWS_ROUTE53RESOLVER_API CreateResolverQueryLogConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API CreateResolverQueryLogConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the <code>CreateResolverQueryLogConfig</code> request,
     * including the status of the request.</p>
     */
    inline const ResolverQueryLogConfig& GetResolverQueryLogConfig() const { return m_resolverQueryLogConfig; }
    template<typename ResolverQueryLogConfigT = ResolverQueryLogConfig>
    void SetResolverQueryLogConfig(ResolverQueryLogConfigT&& value) { m_resolverQueryLogConfigHasBeenSet = true; m_resolverQueryLogConfig = std::forward<ResolverQueryLogConfigT>(value); }
    template<typename ResolverQueryLogConfigT = ResolverQueryLogConfig>
    CreateResolverQueryLogConfigResult& WithResolverQueryLogConfig(ResolverQueryLogConfigT&& value) { SetResolverQueryLogConfig(std::forward<ResolverQueryLogConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateResolverQueryLogConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ResolverQueryLogConfig m_resolverQueryLogConfig;
    bool m_resolverQueryLogConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
