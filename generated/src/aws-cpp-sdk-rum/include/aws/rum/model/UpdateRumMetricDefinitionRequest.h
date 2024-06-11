/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/rum/CloudWatchRUMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rum/model/MetricDestination.h>
#include <aws/rum/model/MetricDefinitionRequest.h>
#include <utility>

namespace Aws
{
namespace CloudWatchRUM
{
namespace Model
{

  /**
   */
  class UpdateRumMetricDefinitionRequest : public CloudWatchRUMRequest
  {
  public:
    AWS_CLOUDWATCHRUM_API UpdateRumMetricDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRumMetricDefinition"; }

    AWS_CLOUDWATCHRUM_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the CloudWatch RUM app monitor that sends these metrics.</p>
     */
    inline const Aws::String& GetAppMonitorName() const{ return m_appMonitorName; }
    inline bool AppMonitorNameHasBeenSet() const { return m_appMonitorNameHasBeenSet; }
    inline void SetAppMonitorName(const Aws::String& value) { m_appMonitorNameHasBeenSet = true; m_appMonitorName = value; }
    inline void SetAppMonitorName(Aws::String&& value) { m_appMonitorNameHasBeenSet = true; m_appMonitorName = std::move(value); }
    inline void SetAppMonitorName(const char* value) { m_appMonitorNameHasBeenSet = true; m_appMonitorName.assign(value); }
    inline UpdateRumMetricDefinitionRequest& WithAppMonitorName(const Aws::String& value) { SetAppMonitorName(value); return *this;}
    inline UpdateRumMetricDefinitionRequest& WithAppMonitorName(Aws::String&& value) { SetAppMonitorName(std::move(value)); return *this;}
    inline UpdateRumMetricDefinitionRequest& WithAppMonitorName(const char* value) { SetAppMonitorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination to send the metrics to. Valid values are
     * <code>CloudWatch</code> and <code>Evidently</code>. If you specify
     * <code>Evidently</code>, you must also specify the ARN of the CloudWatchEvidently
     * experiment that will receive the metrics and an IAM role that has permission to
     * write to the experiment.</p>
     */
    inline const MetricDestination& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const MetricDestination& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(MetricDestination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline UpdateRumMetricDefinitionRequest& WithDestination(const MetricDestination& value) { SetDestination(value); return *this;}
    inline UpdateRumMetricDefinitionRequest& WithDestination(MetricDestination&& value) { SetDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter.</p> <p>This parameter specifies the ARN of the
     * Evidently experiment that is to receive the metrics. You must have already
     * defined this experiment as a valid destination. For more information, see <a
     * href="https://docs.aws.amazon.com/cloudwatchrum/latest/APIReference/API_PutRumMetricsDestination.html">PutRumMetricsDestination</a>.</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }
    inline UpdateRumMetricDefinitionRequest& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}
    inline UpdateRumMetricDefinitionRequest& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}
    inline UpdateRumMetricDefinitionRequest& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the new definition that you want to use for this
     * metric.</p>
     */
    inline const MetricDefinitionRequest& GetMetricDefinition() const{ return m_metricDefinition; }
    inline bool MetricDefinitionHasBeenSet() const { return m_metricDefinitionHasBeenSet; }
    inline void SetMetricDefinition(const MetricDefinitionRequest& value) { m_metricDefinitionHasBeenSet = true; m_metricDefinition = value; }
    inline void SetMetricDefinition(MetricDefinitionRequest&& value) { m_metricDefinitionHasBeenSet = true; m_metricDefinition = std::move(value); }
    inline UpdateRumMetricDefinitionRequest& WithMetricDefinition(const MetricDefinitionRequest& value) { SetMetricDefinition(value); return *this;}
    inline UpdateRumMetricDefinitionRequest& WithMetricDefinition(MetricDefinitionRequest&& value) { SetMetricDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the metric definition to update.</p>
     */
    inline const Aws::String& GetMetricDefinitionId() const{ return m_metricDefinitionId; }
    inline bool MetricDefinitionIdHasBeenSet() const { return m_metricDefinitionIdHasBeenSet; }
    inline void SetMetricDefinitionId(const Aws::String& value) { m_metricDefinitionIdHasBeenSet = true; m_metricDefinitionId = value; }
    inline void SetMetricDefinitionId(Aws::String&& value) { m_metricDefinitionIdHasBeenSet = true; m_metricDefinitionId = std::move(value); }
    inline void SetMetricDefinitionId(const char* value) { m_metricDefinitionIdHasBeenSet = true; m_metricDefinitionId.assign(value); }
    inline UpdateRumMetricDefinitionRequest& WithMetricDefinitionId(const Aws::String& value) { SetMetricDefinitionId(value); return *this;}
    inline UpdateRumMetricDefinitionRequest& WithMetricDefinitionId(Aws::String&& value) { SetMetricDefinitionId(std::move(value)); return *this;}
    inline UpdateRumMetricDefinitionRequest& WithMetricDefinitionId(const char* value) { SetMetricDefinitionId(value); return *this;}
    ///@}
  private:

    Aws::String m_appMonitorName;
    bool m_appMonitorNameHasBeenSet = false;

    MetricDestination m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;

    MetricDefinitionRequest m_metricDefinition;
    bool m_metricDefinitionHasBeenSet = false;

    Aws::String m_metricDefinitionId;
    bool m_metricDefinitionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
