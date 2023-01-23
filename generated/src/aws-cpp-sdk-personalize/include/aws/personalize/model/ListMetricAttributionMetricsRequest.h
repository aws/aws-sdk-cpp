/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class ListMetricAttributionMetricsRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API ListMetricAttributionMetricsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMetricAttributionMetrics"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the metric attribution to retrieve
     * attributes for.</p>
     */
    inline const Aws::String& GetMetricAttributionArn() const{ return m_metricAttributionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the metric attribution to retrieve
     * attributes for.</p>
     */
    inline bool MetricAttributionArnHasBeenSet() const { return m_metricAttributionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the metric attribution to retrieve
     * attributes for.</p>
     */
    inline void SetMetricAttributionArn(const Aws::String& value) { m_metricAttributionArnHasBeenSet = true; m_metricAttributionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the metric attribution to retrieve
     * attributes for.</p>
     */
    inline void SetMetricAttributionArn(Aws::String&& value) { m_metricAttributionArnHasBeenSet = true; m_metricAttributionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the metric attribution to retrieve
     * attributes for.</p>
     */
    inline void SetMetricAttributionArn(const char* value) { m_metricAttributionArnHasBeenSet = true; m_metricAttributionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the metric attribution to retrieve
     * attributes for.</p>
     */
    inline ListMetricAttributionMetricsRequest& WithMetricAttributionArn(const Aws::String& value) { SetMetricAttributionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the metric attribution to retrieve
     * attributes for.</p>
     */
    inline ListMetricAttributionMetricsRequest& WithMetricAttributionArn(Aws::String&& value) { SetMetricAttributionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the metric attribution to retrieve
     * attributes for.</p>
     */
    inline ListMetricAttributionMetricsRequest& WithMetricAttributionArn(const char* value) { SetMetricAttributionArn(value); return *this;}


    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline ListMetricAttributionMetricsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline ListMetricAttributionMetricsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline ListMetricAttributionMetricsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of metrics to return in one page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of metrics to return in one page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of metrics to return in one page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of metrics to return in one page of results.</p>
     */
    inline ListMetricAttributionMetricsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_metricAttributionArn;
    bool m_metricAttributionArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
