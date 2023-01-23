/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/rum/CloudWatchRUMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rum/model/MetricDestination.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CloudWatchRUM
{
namespace Model
{

  /**
   */
  class BatchGetRumMetricDefinitionsRequest : public CloudWatchRUMRequest
  {
  public:
    AWS_CLOUDWATCHRUM_API BatchGetRumMetricDefinitionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetRumMetricDefinitions"; }

    AWS_CLOUDWATCHRUM_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHRUM_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the CloudWatch RUM app monitor that is sending the metrics.</p>
     */
    inline const Aws::String& GetAppMonitorName() const{ return m_appMonitorName; }

    /**
     * <p>The name of the CloudWatch RUM app monitor that is sending the metrics.</p>
     */
    inline bool AppMonitorNameHasBeenSet() const { return m_appMonitorNameHasBeenSet; }

    /**
     * <p>The name of the CloudWatch RUM app monitor that is sending the metrics.</p>
     */
    inline void SetAppMonitorName(const Aws::String& value) { m_appMonitorNameHasBeenSet = true; m_appMonitorName = value; }

    /**
     * <p>The name of the CloudWatch RUM app monitor that is sending the metrics.</p>
     */
    inline void SetAppMonitorName(Aws::String&& value) { m_appMonitorNameHasBeenSet = true; m_appMonitorName = std::move(value); }

    /**
     * <p>The name of the CloudWatch RUM app monitor that is sending the metrics.</p>
     */
    inline void SetAppMonitorName(const char* value) { m_appMonitorNameHasBeenSet = true; m_appMonitorName.assign(value); }

    /**
     * <p>The name of the CloudWatch RUM app monitor that is sending the metrics.</p>
     */
    inline BatchGetRumMetricDefinitionsRequest& WithAppMonitorName(const Aws::String& value) { SetAppMonitorName(value); return *this;}

    /**
     * <p>The name of the CloudWatch RUM app monitor that is sending the metrics.</p>
     */
    inline BatchGetRumMetricDefinitionsRequest& WithAppMonitorName(Aws::String&& value) { SetAppMonitorName(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudWatch RUM app monitor that is sending the metrics.</p>
     */
    inline BatchGetRumMetricDefinitionsRequest& WithAppMonitorName(const char* value) { SetAppMonitorName(value); return *this;}


    /**
     * <p>The type of destination that you want to view metrics for. Valid values are
     * <code>CloudWatch</code> and <code>Evidently</code>.</p>
     */
    inline const MetricDestination& GetDestination() const{ return m_destination; }

    /**
     * <p>The type of destination that you want to view metrics for. Valid values are
     * <code>CloudWatch</code> and <code>Evidently</code>.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The type of destination that you want to view metrics for. Valid values are
     * <code>CloudWatch</code> and <code>Evidently</code>.</p>
     */
    inline void SetDestination(const MetricDestination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The type of destination that you want to view metrics for. Valid values are
     * <code>CloudWatch</code> and <code>Evidently</code>.</p>
     */
    inline void SetDestination(MetricDestination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The type of destination that you want to view metrics for. Valid values are
     * <code>CloudWatch</code> and <code>Evidently</code>.</p>
     */
    inline BatchGetRumMetricDefinitionsRequest& WithDestination(const MetricDestination& value) { SetDestination(value); return *this;}

    /**
     * <p>The type of destination that you want to view metrics for. Valid values are
     * <code>CloudWatch</code> and <code>Evidently</code>.</p>
     */
    inline BatchGetRumMetricDefinitionsRequest& WithDestination(MetricDestination&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter.</p> <p>This parameter specifies the ARN of the
     * Evidently experiment that corresponds to the destination.</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter.</p> <p>This parameter specifies the ARN of the
     * Evidently experiment that corresponds to the destination.</p>
     */
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter.</p> <p>This parameter specifies the ARN of the
     * Evidently experiment that corresponds to the destination.</p>
     */
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter.</p> <p>This parameter specifies the ARN of the
     * Evidently experiment that corresponds to the destination.</p>
     */
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter.</p> <p>This parameter specifies the ARN of the
     * Evidently experiment that corresponds to the destination.</p>
     */
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter.</p> <p>This parameter specifies the ARN of the
     * Evidently experiment that corresponds to the destination.</p>
     */
    inline BatchGetRumMetricDefinitionsRequest& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter.</p> <p>This parameter specifies the ARN of the
     * Evidently experiment that corresponds to the destination.</p>
     */
    inline BatchGetRumMetricDefinitionsRequest& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter.</p> <p>This parameter specifies the ARN of the
     * Evidently experiment that corresponds to the destination.</p>
     */
    inline BatchGetRumMetricDefinitionsRequest& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}


    /**
     * <p>The maximum number of results to return in one operation. The default is 50.
     * The maximum that you can specify is 100.</p> <p>To retrieve the remaining
     * results, make another call with the returned <code>NextToken</code> value. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in one operation. The default is 50.
     * The maximum that you can specify is 100.</p> <p>To retrieve the remaining
     * results, make another call with the returned <code>NextToken</code> value. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in one operation. The default is 50.
     * The maximum that you can specify is 100.</p> <p>To retrieve the remaining
     * results, make another call with the returned <code>NextToken</code> value. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in one operation. The default is 50.
     * The maximum that you can specify is 100.</p> <p>To retrieve the remaining
     * results, make another call with the returned <code>NextToken</code> value. </p>
     */
    inline BatchGetRumMetricDefinitionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Use the token returned by the previous operation to request the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Use the token returned by the previous operation to request the next page of
     * results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Use the token returned by the previous operation to request the next page of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Use the token returned by the previous operation to request the next page of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Use the token returned by the previous operation to request the next page of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Use the token returned by the previous operation to request the next page of
     * results.</p>
     */
    inline BatchGetRumMetricDefinitionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Use the token returned by the previous operation to request the next page of
     * results.</p>
     */
    inline BatchGetRumMetricDefinitionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Use the token returned by the previous operation to request the next page of
     * results.</p>
     */
    inline BatchGetRumMetricDefinitionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_appMonitorName;
    bool m_appMonitorNameHasBeenSet = false;

    MetricDestination m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
