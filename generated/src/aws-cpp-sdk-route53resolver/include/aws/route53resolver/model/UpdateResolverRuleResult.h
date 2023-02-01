/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/ResolverRule.h>
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
  class UpdateResolverRuleResult
  {
  public:
    AWS_ROUTE53RESOLVER_API UpdateResolverRuleResult();
    AWS_ROUTE53RESOLVER_API UpdateResolverRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API UpdateResolverRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The response to an <code>UpdateResolverRule</code> request.</p>
     */
    inline const ResolverRule& GetResolverRule() const{ return m_resolverRule; }

    /**
     * <p>The response to an <code>UpdateResolverRule</code> request.</p>
     */
    inline void SetResolverRule(const ResolverRule& value) { m_resolverRule = value; }

    /**
     * <p>The response to an <code>UpdateResolverRule</code> request.</p>
     */
    inline void SetResolverRule(ResolverRule&& value) { m_resolverRule = std::move(value); }

    /**
     * <p>The response to an <code>UpdateResolverRule</code> request.</p>
     */
    inline UpdateResolverRuleResult& WithResolverRule(const ResolverRule& value) { SetResolverRule(value); return *this;}

    /**
     * <p>The response to an <code>UpdateResolverRule</code> request.</p>
     */
    inline UpdateResolverRuleResult& WithResolverRule(ResolverRule&& value) { SetResolverRule(std::move(value)); return *this;}

  private:

    ResolverRule m_resolverRule;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
