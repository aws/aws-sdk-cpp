/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Route53
{
namespace Model
{

  /**
   */
  class ListQueryLoggingConfigsRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API ListQueryLoggingConfigsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListQueryLoggingConfigs"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;

    AWS_ROUTE53_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>(Optional) If you want to list the query logging configuration that is
     * associated with a hosted zone, specify the ID in <code>HostedZoneId</code>. </p>
     * <p>If you don't specify a hosted zone ID, <code>ListQueryLoggingConfigs</code>
     * returns all of the configurations that are associated with the current Amazon
     * Web Services account.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>(Optional) If you want to list the query logging configuration that is
     * associated with a hosted zone, specify the ID in <code>HostedZoneId</code>. </p>
     * <p>If you don't specify a hosted zone ID, <code>ListQueryLoggingConfigs</code>
     * returns all of the configurations that are associated with the current Amazon
     * Web Services account.</p>
     */
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }

    /**
     * <p>(Optional) If you want to list the query logging configuration that is
     * associated with a hosted zone, specify the ID in <code>HostedZoneId</code>. </p>
     * <p>If you don't specify a hosted zone ID, <code>ListQueryLoggingConfigs</code>
     * returns all of the configurations that are associated with the current Amazon
     * Web Services account.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>(Optional) If you want to list the query logging configuration that is
     * associated with a hosted zone, specify the ID in <code>HostedZoneId</code>. </p>
     * <p>If you don't specify a hosted zone ID, <code>ListQueryLoggingConfigs</code>
     * returns all of the configurations that are associated with the current Amazon
     * Web Services account.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }

    /**
     * <p>(Optional) If you want to list the query logging configuration that is
     * associated with a hosted zone, specify the ID in <code>HostedZoneId</code>. </p>
     * <p>If you don't specify a hosted zone ID, <code>ListQueryLoggingConfigs</code>
     * returns all of the configurations that are associated with the current Amazon
     * Web Services account.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>(Optional) If you want to list the query logging configuration that is
     * associated with a hosted zone, specify the ID in <code>HostedZoneId</code>. </p>
     * <p>If you don't specify a hosted zone ID, <code>ListQueryLoggingConfigs</code>
     * returns all of the configurations that are associated with the current Amazon
     * Web Services account.</p>
     */
    inline ListQueryLoggingConfigsRequest& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>(Optional) If you want to list the query logging configuration that is
     * associated with a hosted zone, specify the ID in <code>HostedZoneId</code>. </p>
     * <p>If you don't specify a hosted zone ID, <code>ListQueryLoggingConfigs</code>
     * returns all of the configurations that are associated with the current Amazon
     * Web Services account.</p>
     */
    inline ListQueryLoggingConfigsRequest& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}

    /**
     * <p>(Optional) If you want to list the query logging configuration that is
     * associated with a hosted zone, specify the ID in <code>HostedZoneId</code>. </p>
     * <p>If you don't specify a hosted zone ID, <code>ListQueryLoggingConfigs</code>
     * returns all of the configurations that are associated with the current Amazon
     * Web Services account.</p>
     */
    inline ListQueryLoggingConfigsRequest& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}


    /**
     * <p>(Optional) If the current Amazon Web Services account has more than
     * <code>MaxResults</code> query logging configurations, use <code>NextToken</code>
     * to get the second and subsequent pages of results.</p> <p>For the first
     * <code>ListQueryLoggingConfigs</code> request, omit this value.</p> <p>For the
     * second and subsequent requests, get the value of <code>NextToken</code> from the
     * previous response and specify that value for <code>NextToken</code> in the
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>(Optional) If the current Amazon Web Services account has more than
     * <code>MaxResults</code> query logging configurations, use <code>NextToken</code>
     * to get the second and subsequent pages of results.</p> <p>For the first
     * <code>ListQueryLoggingConfigs</code> request, omit this value.</p> <p>For the
     * second and subsequent requests, get the value of <code>NextToken</code> from the
     * previous response and specify that value for <code>NextToken</code> in the
     * request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>(Optional) If the current Amazon Web Services account has more than
     * <code>MaxResults</code> query logging configurations, use <code>NextToken</code>
     * to get the second and subsequent pages of results.</p> <p>For the first
     * <code>ListQueryLoggingConfigs</code> request, omit this value.</p> <p>For the
     * second and subsequent requests, get the value of <code>NextToken</code> from the
     * previous response and specify that value for <code>NextToken</code> in the
     * request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>(Optional) If the current Amazon Web Services account has more than
     * <code>MaxResults</code> query logging configurations, use <code>NextToken</code>
     * to get the second and subsequent pages of results.</p> <p>For the first
     * <code>ListQueryLoggingConfigs</code> request, omit this value.</p> <p>For the
     * second and subsequent requests, get the value of <code>NextToken</code> from the
     * previous response and specify that value for <code>NextToken</code> in the
     * request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>(Optional) If the current Amazon Web Services account has more than
     * <code>MaxResults</code> query logging configurations, use <code>NextToken</code>
     * to get the second and subsequent pages of results.</p> <p>For the first
     * <code>ListQueryLoggingConfigs</code> request, omit this value.</p> <p>For the
     * second and subsequent requests, get the value of <code>NextToken</code> from the
     * previous response and specify that value for <code>NextToken</code> in the
     * request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>(Optional) If the current Amazon Web Services account has more than
     * <code>MaxResults</code> query logging configurations, use <code>NextToken</code>
     * to get the second and subsequent pages of results.</p> <p>For the first
     * <code>ListQueryLoggingConfigs</code> request, omit this value.</p> <p>For the
     * second and subsequent requests, get the value of <code>NextToken</code> from the
     * previous response and specify that value for <code>NextToken</code> in the
     * request.</p>
     */
    inline ListQueryLoggingConfigsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>(Optional) If the current Amazon Web Services account has more than
     * <code>MaxResults</code> query logging configurations, use <code>NextToken</code>
     * to get the second and subsequent pages of results.</p> <p>For the first
     * <code>ListQueryLoggingConfigs</code> request, omit this value.</p> <p>For the
     * second and subsequent requests, get the value of <code>NextToken</code> from the
     * previous response and specify that value for <code>NextToken</code> in the
     * request.</p>
     */
    inline ListQueryLoggingConfigsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>(Optional) If the current Amazon Web Services account has more than
     * <code>MaxResults</code> query logging configurations, use <code>NextToken</code>
     * to get the second and subsequent pages of results.</p> <p>For the first
     * <code>ListQueryLoggingConfigs</code> request, omit this value.</p> <p>For the
     * second and subsequent requests, get the value of <code>NextToken</code> from the
     * previous response and specify that value for <code>NextToken</code> in the
     * request.</p>
     */
    inline ListQueryLoggingConfigsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>(Optional) The maximum number of query logging configurations that you want
     * Amazon Route 53 to return in response to the current request. If the current
     * Amazon Web Services account has more than <code>MaxResults</code>
     * configurations, use the value of <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListQueryLoggingConfigs.html#API_ListQueryLoggingConfigs_RequestSyntax">NextToken</a>
     * in the response to get the next page of results.</p> <p>If you don't specify a
     * value for <code>MaxResults</code>, Route 53 returns up to 100
     * configurations.</p>
     */
    inline const Aws::String& GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>(Optional) The maximum number of query logging configurations that you want
     * Amazon Route 53 to return in response to the current request. If the current
     * Amazon Web Services account has more than <code>MaxResults</code>
     * configurations, use the value of <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListQueryLoggingConfigs.html#API_ListQueryLoggingConfigs_RequestSyntax">NextToken</a>
     * in the response to get the next page of results.</p> <p>If you don't specify a
     * value for <code>MaxResults</code>, Route 53 returns up to 100
     * configurations.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>(Optional) The maximum number of query logging configurations that you want
     * Amazon Route 53 to return in response to the current request. If the current
     * Amazon Web Services account has more than <code>MaxResults</code>
     * configurations, use the value of <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListQueryLoggingConfigs.html#API_ListQueryLoggingConfigs_RequestSyntax">NextToken</a>
     * in the response to get the next page of results.</p> <p>If you don't specify a
     * value for <code>MaxResults</code>, Route 53 returns up to 100
     * configurations.</p>
     */
    inline void SetMaxResults(const Aws::String& value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>(Optional) The maximum number of query logging configurations that you want
     * Amazon Route 53 to return in response to the current request. If the current
     * Amazon Web Services account has more than <code>MaxResults</code>
     * configurations, use the value of <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListQueryLoggingConfigs.html#API_ListQueryLoggingConfigs_RequestSyntax">NextToken</a>
     * in the response to get the next page of results.</p> <p>If you don't specify a
     * value for <code>MaxResults</code>, Route 53 returns up to 100
     * configurations.</p>
     */
    inline void SetMaxResults(Aws::String&& value) { m_maxResultsHasBeenSet = true; m_maxResults = std::move(value); }

    /**
     * <p>(Optional) The maximum number of query logging configurations that you want
     * Amazon Route 53 to return in response to the current request. If the current
     * Amazon Web Services account has more than <code>MaxResults</code>
     * configurations, use the value of <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListQueryLoggingConfigs.html#API_ListQueryLoggingConfigs_RequestSyntax">NextToken</a>
     * in the response to get the next page of results.</p> <p>If you don't specify a
     * value for <code>MaxResults</code>, Route 53 returns up to 100
     * configurations.</p>
     */
    inline void SetMaxResults(const char* value) { m_maxResultsHasBeenSet = true; m_maxResults.assign(value); }

    /**
     * <p>(Optional) The maximum number of query logging configurations that you want
     * Amazon Route 53 to return in response to the current request. If the current
     * Amazon Web Services account has more than <code>MaxResults</code>
     * configurations, use the value of <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListQueryLoggingConfigs.html#API_ListQueryLoggingConfigs_RequestSyntax">NextToken</a>
     * in the response to get the next page of results.</p> <p>If you don't specify a
     * value for <code>MaxResults</code>, Route 53 returns up to 100
     * configurations.</p>
     */
    inline ListQueryLoggingConfigsRequest& WithMaxResults(const Aws::String& value) { SetMaxResults(value); return *this;}

    /**
     * <p>(Optional) The maximum number of query logging configurations that you want
     * Amazon Route 53 to return in response to the current request. If the current
     * Amazon Web Services account has more than <code>MaxResults</code>
     * configurations, use the value of <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListQueryLoggingConfigs.html#API_ListQueryLoggingConfigs_RequestSyntax">NextToken</a>
     * in the response to get the next page of results.</p> <p>If you don't specify a
     * value for <code>MaxResults</code>, Route 53 returns up to 100
     * configurations.</p>
     */
    inline ListQueryLoggingConfigsRequest& WithMaxResults(Aws::String&& value) { SetMaxResults(std::move(value)); return *this;}

    /**
     * <p>(Optional) The maximum number of query logging configurations that you want
     * Amazon Route 53 to return in response to the current request. If the current
     * Amazon Web Services account has more than <code>MaxResults</code>
     * configurations, use the value of <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListQueryLoggingConfigs.html#API_ListQueryLoggingConfigs_RequestSyntax">NextToken</a>
     * in the response to get the next page of results.</p> <p>If you don't specify a
     * value for <code>MaxResults</code>, Route 53 returns up to 100
     * configurations.</p>
     */
    inline ListQueryLoggingConfigsRequest& WithMaxResults(const char* value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
