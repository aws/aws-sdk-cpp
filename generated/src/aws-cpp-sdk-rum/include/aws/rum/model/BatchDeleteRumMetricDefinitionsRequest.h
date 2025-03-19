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
    AWS_CLOUDWATCHRUM_API BatchDeleteRumMetricDefinitionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteRumMetricDefinitions"; }

    AWS_CLOUDWATCHRUM_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHRUM_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the CloudWatch RUM app monitor that is sending these metrics.</p>
     */
    inline const Aws::String& GetAppMonitorName() const { return m_appMonitorName; }
    inline bool AppMonitorNameHasBeenSet() const { return m_appMonitorNameHasBeenSet; }
    template<typename AppMonitorNameT = Aws::String>
    void SetAppMonitorName(AppMonitorNameT&& value) { m_appMonitorNameHasBeenSet = true; m_appMonitorName = std::forward<AppMonitorNameT>(value); }
    template<typename AppMonitorNameT = Aws::String>
    BatchDeleteRumMetricDefinitionsRequest& WithAppMonitorName(AppMonitorNameT&& value) { SetAppMonitorName(std::forward<AppMonitorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the destination where you want to stop sending the specified metrics.
     * Valid values are <code>CloudWatch</code> and <code>Evidently</code>. If you
     * specify <code>Evidently</code>, you must also specify the ARN of the
     * CloudWatchEvidently experiment that is to be the destination and an IAM role
     * that has permission to write to the experiment.</p>
     */
    inline MetricDestination GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(MetricDestination value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline BatchDeleteRumMetricDefinitionsRequest& WithDestination(MetricDestination value) { SetDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is required if <code>Destination</code> is
     * <code>Evidently</code>. If <code>Destination</code> is <code>CloudWatch</code>,
     * do not use this parameter. </p> <p>This parameter specifies the ARN of the
     * Evidently experiment that was receiving the metrics that are being deleted.</p>
     */
    inline const Aws::String& GetDestinationArn() const { return m_destinationArn; }
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }
    template<typename DestinationArnT = Aws::String>
    void SetDestinationArn(DestinationArnT&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::forward<DestinationArnT>(value); }
    template<typename DestinationArnT = Aws::String>
    BatchDeleteRumMetricDefinitionsRequest& WithDestinationArn(DestinationArnT&& value) { SetDestinationArn(std::forward<DestinationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures which define the metrics that you want to stop
     * sending.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricDefinitionIds() const { return m_metricDefinitionIds; }
    inline bool MetricDefinitionIdsHasBeenSet() const { return m_metricDefinitionIdsHasBeenSet; }
    template<typename MetricDefinitionIdsT = Aws::Vector<Aws::String>>
    void SetMetricDefinitionIds(MetricDefinitionIdsT&& value) { m_metricDefinitionIdsHasBeenSet = true; m_metricDefinitionIds = std::forward<MetricDefinitionIdsT>(value); }
    template<typename MetricDefinitionIdsT = Aws::Vector<Aws::String>>
    BatchDeleteRumMetricDefinitionsRequest& WithMetricDefinitionIds(MetricDefinitionIdsT&& value) { SetMetricDefinitionIds(std::forward<MetricDefinitionIdsT>(value)); return *this;}
    template<typename MetricDefinitionIdsT = Aws::String>
    BatchDeleteRumMetricDefinitionsRequest& AddMetricDefinitionIds(MetricDefinitionIdsT&& value) { m_metricDefinitionIdsHasBeenSet = true; m_metricDefinitionIds.emplace_back(std::forward<MetricDefinitionIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_appMonitorName;
    bool m_appMonitorNameHasBeenSet = false;

    MetricDestination m_destination{MetricDestination::NOT_SET};
    bool m_destinationHasBeenSet = false;

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_metricDefinitionIds;
    bool m_metricDefinitionIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
