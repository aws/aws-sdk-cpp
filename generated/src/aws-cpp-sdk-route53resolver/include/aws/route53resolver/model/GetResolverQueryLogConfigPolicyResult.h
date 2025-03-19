/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
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
  class GetResolverQueryLogConfigPolicyResult
  {
  public:
    AWS_ROUTE53RESOLVER_API GetResolverQueryLogConfigPolicyResult() = default;
    AWS_ROUTE53RESOLVER_API GetResolverQueryLogConfigPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API GetResolverQueryLogConfigPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the query logging policy for the query logging
     * configuration that you specified in a
     * <code>GetResolverQueryLogConfigPolicy</code> request.</p>
     */
    inline const Aws::String& GetResolverQueryLogConfigPolicy() const { return m_resolverQueryLogConfigPolicy; }
    template<typename ResolverQueryLogConfigPolicyT = Aws::String>
    void SetResolverQueryLogConfigPolicy(ResolverQueryLogConfigPolicyT&& value) { m_resolverQueryLogConfigPolicyHasBeenSet = true; m_resolverQueryLogConfigPolicy = std::forward<ResolverQueryLogConfigPolicyT>(value); }
    template<typename ResolverQueryLogConfigPolicyT = Aws::String>
    GetResolverQueryLogConfigPolicyResult& WithResolverQueryLogConfigPolicy(ResolverQueryLogConfigPolicyT&& value) { SetResolverQueryLogConfigPolicy(std::forward<ResolverQueryLogConfigPolicyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResolverQueryLogConfigPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resolverQueryLogConfigPolicy;
    bool m_resolverQueryLogConfigPolicyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
