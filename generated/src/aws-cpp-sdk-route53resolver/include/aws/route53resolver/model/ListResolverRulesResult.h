/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListResolverRulesResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ListResolverRulesResult();
    AWS_ROUTE53RESOLVER_API ListResolverRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListResolverRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If more than <code>MaxResults</code> Resolver rules match the specified
     * criteria, you can submit another <code>ListResolverRules</code> request to get
     * the next group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If more than <code>MaxResults</code> Resolver rules match the specified
     * criteria, you can submit another <code>ListResolverRules</code> request to get
     * the next group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If more than <code>MaxResults</code> Resolver rules match the specified
     * criteria, you can submit another <code>ListResolverRules</code> request to get
     * the next group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If more than <code>MaxResults</code> Resolver rules match the specified
     * criteria, you can submit another <code>ListResolverRules</code> request to get
     * the next group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If more than <code>MaxResults</code> Resolver rules match the specified
     * criteria, you can submit another <code>ListResolverRules</code> request to get
     * the next group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline ListResolverRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If more than <code>MaxResults</code> Resolver rules match the specified
     * criteria, you can submit another <code>ListResolverRules</code> request to get
     * the next group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline ListResolverRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If more than <code>MaxResults</code> Resolver rules match the specified
     * criteria, you can submit another <code>ListResolverRules</code> request to get
     * the next group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline ListResolverRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The value that you specified for <code>MaxResults</code> in the request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The value that you specified for <code>MaxResults</code> in the request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResults = value; }

    /**
     * <p>The value that you specified for <code>MaxResults</code> in the request.</p>
     */
    inline ListResolverRulesResult& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The Resolver rules that were created using the current Amazon Web Services
     * account and that match the specified filters, if any.</p>
     */
    inline const Aws::Vector<ResolverRule>& GetResolverRules() const{ return m_resolverRules; }

    /**
     * <p>The Resolver rules that were created using the current Amazon Web Services
     * account and that match the specified filters, if any.</p>
     */
    inline void SetResolverRules(const Aws::Vector<ResolverRule>& value) { m_resolverRules = value; }

    /**
     * <p>The Resolver rules that were created using the current Amazon Web Services
     * account and that match the specified filters, if any.</p>
     */
    inline void SetResolverRules(Aws::Vector<ResolverRule>&& value) { m_resolverRules = std::move(value); }

    /**
     * <p>The Resolver rules that were created using the current Amazon Web Services
     * account and that match the specified filters, if any.</p>
     */
    inline ListResolverRulesResult& WithResolverRules(const Aws::Vector<ResolverRule>& value) { SetResolverRules(value); return *this;}

    /**
     * <p>The Resolver rules that were created using the current Amazon Web Services
     * account and that match the specified filters, if any.</p>
     */
    inline ListResolverRulesResult& WithResolverRules(Aws::Vector<ResolverRule>&& value) { SetResolverRules(std::move(value)); return *this;}

    /**
     * <p>The Resolver rules that were created using the current Amazon Web Services
     * account and that match the specified filters, if any.</p>
     */
    inline ListResolverRulesResult& AddResolverRules(const ResolverRule& value) { m_resolverRules.push_back(value); return *this; }

    /**
     * <p>The Resolver rules that were created using the current Amazon Web Services
     * account and that match the specified filters, if any.</p>
     */
    inline ListResolverRulesResult& AddResolverRules(ResolverRule&& value) { m_resolverRules.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    int m_maxResults;

    Aws::Vector<ResolverRule> m_resolverRules;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
