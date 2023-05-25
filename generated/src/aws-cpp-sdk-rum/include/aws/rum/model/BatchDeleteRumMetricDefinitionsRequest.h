/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/rum/CloudWatchRUMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rum/model/MetricDestination.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class BatchDeleteRumMetricDefinitionsRequest : public CloudWatchRUMRequest
  {
  public:
    AWS_CLOUDWATCHRUM_API BatchDeleteRumMetricDefinitionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteRumMetricDefinitions"; }

    AWS_CLOUDWATCHRUM_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHRUM_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the CloudWatch RUM app monitor that is sending these metrics.</p>
     */
    inline const Aws::String& GetAppMonitorName() const{ return m_appMonitorName; }

    /**
     * <p>The name of the CloudWatch RUM app monitor that is sending these metrics.</p>
     */
    inline bool AppMonitorNameHasBeenSet() const { return m_appMonitorNameHasBeenSet; }

    /**
     * <p>The name of the CloudWatch RUM app monitor that is sending these metrics.</p>
     */
    inline void SetAppMonitorName(const Aws::String& value) { m_appMonitorNameHasBeenSet = true; m_appMonitorName = value; }

    /**
     * <p>The name of the CloudWatch RUM app monitor that is sending these metrics.</p>
     */
    inline void SetAppMonitorName(Aws::String&& value) { m_appMonitorNameHasBeenSet = true; m_appMonitorName = std::move(value); }

    /**
     * <p>The name of the CloudWatch RUM app monitor that is sending these metrics.</p>
     */
    inline void SetAppMonitorName(const char* value) { m_appMonitorNameHasBeenSet = true; m_appMonitorName.assign(value); }

    /**
     * <p>The name of the CloudWatch RUM app monitor that is sending these metrics.</p>
     */
    inline BatchDeleteRumMetricDefinitionsRequest& WithAppMonitorName(const Aws::String& value) { SetAppMonitorName(value); return *this;}

    /**
     * <p>The name of the CloudWatch RUM app monitor that is sending these metrics.</p>
     */
    inline BatchDeleteRumMetricDefinitionsRequest& WithAppMonitorName(Aws::String&& value) { SetAppMonitorName(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudWatch RUM app monitor that is sending these metrics.</p>
     */
    inline BatchDeleteRumMetricDefinitionsRequest& WithAppMonitorName(const char* value) { SetAppMonitorName(value); return *this;}


    /**
     * <p>Defines the destination where you want to stop sending the specified metrics.
     * Valid values are <code>CloudWatch</code> and <code>Evidently</code>. If you
     * specify <code>Evidently</code>, you must also specify the ARN of the
     * CloudWatchEvidently experiment that is to be the destination and an IAM role
     * that has permission to write to the experiment.</p>
     */
    inline const MetricDestination& GetDestination() const{ return m_destination; }

    /**
     * <p>Defines the destination where you want to stop sending the specified metrics.
     * Valid values are <code>CloudWatch</code> and <code>Evidently</code>. If you
     * specify <code>Evidently</code>, you must also specify the ARN of the
     * CloudWatchEvidently experiment that is to be the destination and an IAM role
     * that has permission to write to the experiment.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>Defines the destination where you want to stop sending the specified metrics.
     * Valid values are <code>CloudWatch</code> and <code>Evidently</code>. If you
     * specify <code>Evidently</code>, you must also specify the ARN of the
     * CloudWatchEvidently experiment that is to be the destination and an IAM role
     * that has permission to write to the experiment.</p>
     */
    inline void SetDestination(const MetricDestination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>Defines the destination where you want to stop sending the specified metrics.
     * Valid values are <code>CloudWatch</code> and <code>Evidently</code>. If you
     * specify <code>Evidently</code>, you must also specify the ARN of the
     * CloudWatchEvidently experiment that is to be the destination and an IAM role
     * that has permission to write to the experiment.</p>
     */
    inline void SetDestination(MetricDestination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>Defines the destination where you want to stop sending the specified metrics.
     * Valid values are <code>CloudWatch</code> and <code>Evidently</code>. If you
     * specify <code>Evidently</code>, you must also specify the ARN of the
     * CloudWatchEvidently experiment that is to be the destination and an IAM role
     * that has permission to write to the experiment.</p>
     */
    inline BatchDeleteRumMetricDefinitionsRequest& WithDestination(const MetricDestination& value) { SetDestination(value); return *this;}

    /**
     * <p>Defines the destination where you want to stop sending the specified metrics.
     * Valid values are <code>CloudWatch</code> and <code>Evidently</code>. If you
     * specify <code>Evidently</code>, you must also specify the ARN of the
     * CloudWatchEvidently experiment that is to be the destination and an IAM role
     * that has permission to write to the experiment.</p>
     */
    inline BatchDeleteRumMetricDefinitionsRequest& WithDestination(MetricDestination&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter. </p> <p>This parameter specifies the ARN of the
     * Evidently experiment that was receiving the metrics that are being deleted.</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter. </p> <p>This parameter specifies the ARN of the
     * Evidently experiment that was receiving the metrics that are being deleted.</p>
     */
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter. </p> <p>This parameter specifies the ARN of the
     * Evidently experiment that was receiving the metrics that are being deleted.</p>
     */
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter. </p> <p>This parameter specifies the ARN of the
     * Evidently experiment that was receiving the metrics that are being deleted.</p>
     */
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter. </p> <p>This parameter specifies the ARN of the
     * Evidently experiment that was receiving the metrics that are being deleted.</p>
     */
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter. </p> <p>This parameter specifies the ARN of the
     * Evidently experiment that was receiving the metrics that are being deleted.</p>
     */
    inline BatchDeleteRumMetricDefinitionsRequest& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter. </p> <p>This parameter specifies the ARN of the
     * Evidently experiment that was receiving the metrics that are being deleted.</p>
     */
    inline BatchDeleteRumMetricDefinitionsRequest& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}

    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter. </p> <p>This parameter specifies the ARN of the
     * Evidently experiment that was receiving the metrics that are being deleted.</p>
     */
    inline BatchDeleteRumMetricDefinitionsRequest& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}


    /**
     * <p>An array of structures which define the metrics that you want to stop
     * sending.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricDefinitionIds() const{ return m_metricDefinitionIds; }

    /**
     * <p>An array of structures which define the metrics that you want to stop
     * sending.</p>
     */
    inline bool MetricDefinitionIdsHasBeenSet() const { return m_metricDefinitionIdsHasBeenSet; }

    /**
     * <p>An array of structures which define the metrics that you want to stop
     * sending.</p>
     */
    inline void SetMetricDefinitionIds(const Aws::Vector<Aws::String>& value) { m_metricDefinitionIdsHasBeenSet = true; m_metricDefinitionIds = value; }

    /**
     * <p>An array of structures which define the metrics that you want to stop
     * sending.</p>
     */
    inline void SetMetricDefinitionIds(Aws::Vector<Aws::String>&& value) { m_metricDefinitionIdsHasBeenSet = true; m_metricDefinitionIds = std::move(value); }

    /**
     * <p>An array of structures which define the metrics that you want to stop
     * sending.</p>
     */
    inline BatchDeleteRumMetricDefinitionsRequest& WithMetricDefinitionIds(const Aws::Vector<Aws::String>& value) { SetMetricDefinitionIds(value); return *this;}

    /**
     * <p>An array of structures which define the metrics that you want to stop
     * sending.</p>
     */
    inline BatchDeleteRumMetricDefinitionsRequest& WithMetricDefinitionIds(Aws::Vector<Aws::String>&& value) { SetMetricDefinitionIds(std::move(value)); return *this;}

    /**
     * <p>An array of structures which define the metrics that you want to stop
     * sending.</p>
     */
    inline BatchDeleteRumMetricDefinitionsRequest& AddMetricDefinitionIds(const Aws::String& value) { m_metricDefinitionIdsHasBeenSet = true; m_metricDefinitionIds.push_back(value); return *this; }

    /**
     * <p>An array of structures which define the metrics that you want to stop
     * sending.</p>
     */
    inline BatchDeleteRumMetricDefinitionsRequest& AddMetricDefinitionIds(Aws::String&& value) { m_metricDefinitionIdsHasBeenSet = true; m_metricDefinitionIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of structures which define the metrics that you want to stop
     * sending.</p>
     */
    inline BatchDeleteRumMetricDefinitionsRequest& AddMetricDefinitionIds(const char* value) { m_metricDefinitionIdsHasBeenSet = true; m_metricDefinitionIds.push_back(value); return *this; }

  private:

    Aws::String m_appMonitorName;
    bool m_appMonitorNameHasBeenSet = false;

    MetricDestination m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_metricDefinitionIds;
    bool m_metricDefinitionIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
