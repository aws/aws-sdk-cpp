/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/ResolverRule.h>
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
  class GetResolverRuleResult
  {
  public:
    AWS_ROUTE53RESOLVER_API GetResolverRuleResult() = default;
    AWS_ROUTE53RESOLVER_API GetResolverRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API GetResolverRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the Resolver rule that you specified in a
     * <code>GetResolverRule</code> request.</p>
     */
    inline const ResolverRule& GetResolverRule() const { return m_resolverRule; }
    template<typename ResolverRuleT = ResolverRule>
    void SetResolverRule(ResolverRuleT&& value) { m_resolverRuleHasBeenSet = true; m_resolverRule = std::forward<ResolverRuleT>(value); }
    template<typename ResolverRuleT = ResolverRule>
    GetResolverRuleResult& WithResolverRule(ResolverRuleT&& value) { SetResolverRule(std::forward<ResolverRuleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResolverRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ResolverRule m_resolverRule;
    bool m_resolverRuleHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
