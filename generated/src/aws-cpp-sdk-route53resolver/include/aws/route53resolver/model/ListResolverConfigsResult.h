/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/ResolverConfig.h>
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
  class ListResolverConfigsResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ListResolverConfigsResult();
    AWS_ROUTE53RESOLVER_API ListResolverConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListResolverConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If a response includes the last of the Resolver configurations that are
     * associated with the current Amazon Web Services account, <code>NextToken</code>
     * doesn't appear in the response.</p> <p>If a response doesn't include the last of
     * the configurations, you can get more configurations by submitting another
     * <code>ListResolverConfigs</code> request. Get the value of
     * <code>NextToken</code> that Amazon Route 53 returned in the previous response
     * and include it in <code>NextToken</code> in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If a response includes the last of the Resolver configurations that are
     * associated with the current Amazon Web Services account, <code>NextToken</code>
     * doesn't appear in the response.</p> <p>If a response doesn't include the last of
     * the configurations, you can get more configurations by submitting another
     * <code>ListResolverConfigs</code> request. Get the value of
     * <code>NextToken</code> that Amazon Route 53 returned in the previous response
     * and include it in <code>NextToken</code> in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If a response includes the last of the Resolver configurations that are
     * associated with the current Amazon Web Services account, <code>NextToken</code>
     * doesn't appear in the response.</p> <p>If a response doesn't include the last of
     * the configurations, you can get more configurations by submitting another
     * <code>ListResolverConfigs</code> request. Get the value of
     * <code>NextToken</code> that Amazon Route 53 returned in the previous response
     * and include it in <code>NextToken</code> in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If a response includes the last of the Resolver configurations that are
     * associated with the current Amazon Web Services account, <code>NextToken</code>
     * doesn't appear in the response.</p> <p>If a response doesn't include the last of
     * the configurations, you can get more configurations by submitting another
     * <code>ListResolverConfigs</code> request. Get the value of
     * <code>NextToken</code> that Amazon Route 53 returned in the previous response
     * and include it in <code>NextToken</code> in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If a response includes the last of the Resolver configurations that are
     * associated with the current Amazon Web Services account, <code>NextToken</code>
     * doesn't appear in the response.</p> <p>If a response doesn't include the last of
     * the configurations, you can get more configurations by submitting another
     * <code>ListResolverConfigs</code> request. Get the value of
     * <code>NextToken</code> that Amazon Route 53 returned in the previous response
     * and include it in <code>NextToken</code> in the next request.</p>
     */
    inline ListResolverConfigsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If a response includes the last of the Resolver configurations that are
     * associated with the current Amazon Web Services account, <code>NextToken</code>
     * doesn't appear in the response.</p> <p>If a response doesn't include the last of
     * the configurations, you can get more configurations by submitting another
     * <code>ListResolverConfigs</code> request. Get the value of
     * <code>NextToken</code> that Amazon Route 53 returned in the previous response
     * and include it in <code>NextToken</code> in the next request.</p>
     */
    inline ListResolverConfigsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If a response includes the last of the Resolver configurations that are
     * associated with the current Amazon Web Services account, <code>NextToken</code>
     * doesn't appear in the response.</p> <p>If a response doesn't include the last of
     * the configurations, you can get more configurations by submitting another
     * <code>ListResolverConfigs</code> request. Get the value of
     * <code>NextToken</code> that Amazon Route 53 returned in the previous response
     * and include it in <code>NextToken</code> in the next request.</p>
     */
    inline ListResolverConfigsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array that contains one <code>ResolverConfigs</code> element for each
     * Resolver configuration that is associated with the current Amazon Web Services
     * account.</p>
     */
    inline const Aws::Vector<ResolverConfig>& GetResolverConfigs() const{ return m_resolverConfigs; }

    /**
     * <p>An array that contains one <code>ResolverConfigs</code> element for each
     * Resolver configuration that is associated with the current Amazon Web Services
     * account.</p>
     */
    inline void SetResolverConfigs(const Aws::Vector<ResolverConfig>& value) { m_resolverConfigs = value; }

    /**
     * <p>An array that contains one <code>ResolverConfigs</code> element for each
     * Resolver configuration that is associated with the current Amazon Web Services
     * account.</p>
     */
    inline void SetResolverConfigs(Aws::Vector<ResolverConfig>&& value) { m_resolverConfigs = std::move(value); }

    /**
     * <p>An array that contains one <code>ResolverConfigs</code> element for each
     * Resolver configuration that is associated with the current Amazon Web Services
     * account.</p>
     */
    inline ListResolverConfigsResult& WithResolverConfigs(const Aws::Vector<ResolverConfig>& value) { SetResolverConfigs(value); return *this;}

    /**
     * <p>An array that contains one <code>ResolverConfigs</code> element for each
     * Resolver configuration that is associated with the current Amazon Web Services
     * account.</p>
     */
    inline ListResolverConfigsResult& WithResolverConfigs(Aws::Vector<ResolverConfig>&& value) { SetResolverConfigs(std::move(value)); return *this;}

    /**
     * <p>An array that contains one <code>ResolverConfigs</code> element for each
     * Resolver configuration that is associated with the current Amazon Web Services
     * account.</p>
     */
    inline ListResolverConfigsResult& AddResolverConfigs(const ResolverConfig& value) { m_resolverConfigs.push_back(value); return *this; }

    /**
     * <p>An array that contains one <code>ResolverConfigs</code> element for each
     * Resolver configuration that is associated with the current Amazon Web Services
     * account.</p>
     */
    inline ListResolverConfigsResult& AddResolverConfigs(ResolverConfig&& value) { m_resolverConfigs.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ResolverConfig> m_resolverConfigs;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
