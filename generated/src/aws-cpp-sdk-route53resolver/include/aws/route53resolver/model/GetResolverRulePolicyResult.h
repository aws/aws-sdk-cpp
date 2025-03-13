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
  class GetResolverRulePolicyResult
  {
  public:
    AWS_ROUTE53RESOLVER_API GetResolverRulePolicyResult() = default;
    AWS_ROUTE53RESOLVER_API GetResolverRulePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API GetResolverRulePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Resolver rule policy for the rule that you specified in a
     * <code>GetResolverRulePolicy</code> request.</p>
     */
    inline const Aws::String& GetResolverRulePolicy() const { return m_resolverRulePolicy; }
    template<typename ResolverRulePolicyT = Aws::String>
    void SetResolverRulePolicy(ResolverRulePolicyT&& value) { m_resolverRulePolicyHasBeenSet = true; m_resolverRulePolicy = std::forward<ResolverRulePolicyT>(value); }
    template<typename ResolverRulePolicyT = Aws::String>
    GetResolverRulePolicyResult& WithResolverRulePolicy(ResolverRulePolicyT&& value) { SetResolverRulePolicy(std::forward<ResolverRulePolicyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResolverRulePolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resolverRulePolicy;
    bool m_resolverRulePolicyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
