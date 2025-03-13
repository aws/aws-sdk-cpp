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
    AWS_CLOUDWATCHRUM_API UpdateRumMetricDefinitionRequest() = default;

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
    inline const Aws::String& GetAppMonitorName() const { return m_appMonitorName; }
    inline bool AppMonitorNameHasBeenSet() const { return m_appMonitorNameHasBeenSet; }
    template<typename AppMonitorNameT = Aws::String>
    void SetAppMonitorName(AppMonitorNameT&& value) { m_appMonitorNameHasBeenSet = true; m_appMonitorName = std::forward<AppMonitorNameT>(value); }
    template<typename AppMonitorNameT = Aws::String>
    UpdateRumMetricDefinitionRequest& WithAppMonitorName(AppMonitorNameT&& value) { SetAppMonitorName(std::forward<AppMonitorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination to send the metrics to. Valid values are
     * <code>CloudWatch</code> and <code>Evidently</code>. If you specify
     * <code>Evidently</code>, you must also specify the ARN of the CloudWatchEvidently
     * experiment that will receive the metrics and an IAM role that has permission to
     * write to the experiment.</p>
     */
    inline MetricDestination GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(MetricDestination value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline UpdateRumMetricDefinitionRequest& WithDestination(MetricDestination value) { SetDestination(value); return *this;}
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
    inline const Aws::String& GetDestinationArn() const { return m_destinationArn; }
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }
    template<typename DestinationArnT = Aws::String>
    void SetDestinationArn(DestinationArnT&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::forward<DestinationArnT>(value); }
    template<typename DestinationArnT = Aws::String>
    UpdateRumMetricDefinitionRequest& WithDestinationArn(DestinationArnT&& value) { SetDestinationArn(std::forward<DestinationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the new definition that you want to use for this
     * metric.</p>
     */
    inline const MetricDefinitionRequest& GetMetricDefinition() const { return m_metricDefinition; }
    inline bool MetricDefinitionHasBeenSet() const { return m_metricDefinitionHasBeenSet; }
    template<typename MetricDefinitionT = MetricDefinitionRequest>
    void SetMetricDefinition(MetricDefinitionT&& value) { m_metricDefinitionHasBeenSet = true; m_metricDefinition = std::forward<MetricDefinitionT>(value); }
    template<typename MetricDefinitionT = MetricDefinitionRequest>
    UpdateRumMetricDefinitionRequest& WithMetricDefinition(MetricDefinitionT&& value) { SetMetricDefinition(std::forward<MetricDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the metric definition to update.</p>
     */
    inline const Aws::String& GetMetricDefinitionId() const { return m_metricDefinitionId; }
    inline bool MetricDefinitionIdHasBeenSet() const { return m_metricDefinitionIdHasBeenSet; }
    template<typename MetricDefinitionIdT = Aws::String>
    void SetMetricDefinitionId(MetricDefinitionIdT&& value) { m_metricDefinitionIdHasBeenSet = true; m_metricDefinitionId = std::forward<MetricDefinitionIdT>(value); }
    template<typename MetricDefinitionIdT = Aws::String>
    UpdateRumMetricDefinitionRequest& WithMetricDefinitionId(MetricDefinitionIdT&& value) { SetMetricDefinitionId(std::forward<MetricDefinitionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appMonitorName;
    bool m_appMonitorNameHasBeenSet = false;

    MetricDestination m_destination{MetricDestination::NOT_SET};
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
