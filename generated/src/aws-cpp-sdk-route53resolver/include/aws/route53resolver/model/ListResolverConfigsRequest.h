/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class ListResolverConfigsRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API ListResolverConfigsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResolverConfigs"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The maximum number of Resolver configurations that you want to return in the
     * response to a <code>ListResolverConfigs</code> request. If you don't specify a
     * value for <code>MaxResults</code>, up to 100 Resolver configurations are
     * returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of Resolver configurations that you want to return in the
     * response to a <code>ListResolverConfigs</code> request. If you don't specify a
     * value for <code>MaxResults</code>, up to 100 Resolver configurations are
     * returned.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of Resolver configurations that you want to return in the
     * response to a <code>ListResolverConfigs</code> request. If you don't specify a
     * value for <code>MaxResults</code>, up to 100 Resolver configurations are
     * returned.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of Resolver configurations that you want to return in the
     * response to a <code>ListResolverConfigs</code> request. If you don't specify a
     * value for <code>MaxResults</code>, up to 100 Resolver configurations are
     * returned.</p>
     */
    inline ListResolverConfigsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>(Optional) If the current Amazon Web Services account has more than
     * <code>MaxResults</code> Resolver configurations, use <code>NextToken</code> to
     * get the second and subsequent pages of results.</p> <p>For the first
     * <code>ListResolverConfigs</code> request, omit this value.</p> <p>For the second
     * and subsequent requests, get the value of <code>NextToken</code> from the
     * previous response and specify that value for <code>NextToken</code> in the
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>(Optional) If the current Amazon Web Services account has more than
     * <code>MaxResults</code> Resolver configurations, use <code>NextToken</code> to
     * get the second and subsequent pages of results.</p> <p>For the first
     * <code>ListResolverConfigs</code> request, omit this value.</p> <p>For the second
     * and subsequent requests, get the value of <code>NextToken</code> from the
     * previous response and specify that value for <code>NextToken</code> in the
     * request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>(Optional) If the current Amazon Web Services account has more than
     * <code>MaxResults</code> Resolver configurations, use <code>NextToken</code> to
     * get the second and subsequent pages of results.</p> <p>For the first
     * <code>ListResolverConfigs</code> request, omit this value.</p> <p>For the second
     * and subsequent requests, get the value of <code>NextToken</code> from the
     * previous response and specify that value for <code>NextToken</code> in the
     * request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>(Optional) If the current Amazon Web Services account has more than
     * <code>MaxResults</code> Resolver configurations, use <code>NextToken</code> to
     * get the second and subsequent pages of results.</p> <p>For the first
     * <code>ListResolverConfigs</code> request, omit this value.</p> <p>For the second
     * and subsequent requests, get the value of <code>NextToken</code> from the
     * previous response and specify that value for <code>NextToken</code> in the
     * request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>(Optional) If the current Amazon Web Services account has more than
     * <code>MaxResults</code> Resolver configurations, use <code>NextToken</code> to
     * get the second and subsequent pages of results.</p> <p>For the first
     * <code>ListResolverConfigs</code> request, omit this value.</p> <p>For the second
     * and subsequent requests, get the value of <code>NextToken</code> from the
     * previous response and specify that value for <code>NextToken</code> in the
     * request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>(Optional) If the current Amazon Web Services account has more than
     * <code>MaxResults</code> Resolver configurations, use <code>NextToken</code> to
     * get the second and subsequent pages of results.</p> <p>For the first
     * <code>ListResolverConfigs</code> request, omit this value.</p> <p>For the second
     * and subsequent requests, get the value of <code>NextToken</code> from the
     * previous response and specify that value for <code>NextToken</code> in the
     * request.</p>
     */
    inline ListResolverConfigsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>(Optional) If the current Amazon Web Services account has more than
     * <code>MaxResults</code> Resolver configurations, use <code>NextToken</code> to
     * get the second and subsequent pages of results.</p> <p>For the first
     * <code>ListResolverConfigs</code> request, omit this value.</p> <p>For the second
     * and subsequent requests, get the value of <code>NextToken</code> from the
     * previous response and specify that value for <code>NextToken</code> in the
     * request.</p>
     */
    inline ListResolverConfigsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>(Optional) If the current Amazon Web Services account has more than
     * <code>MaxResults</code> Resolver configurations, use <code>NextToken</code> to
     * get the second and subsequent pages of results.</p> <p>For the first
     * <code>ListResolverConfigs</code> request, omit this value.</p> <p>For the second
     * and subsequent requests, get the value of <code>NextToken</code> from the
     * previous response and specify that value for <code>NextToken</code> in the
     * request.</p>
     */
    inline ListResolverConfigsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
