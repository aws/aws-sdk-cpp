/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/personalize/model/MetricAttributionOutput.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/MetricAttribute.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class UpdateMetricAttributionRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API UpdateMetricAttributionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMetricAttribution"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Add new metric attributes to the metric attribution.</p>
     */
    inline const Aws::Vector<MetricAttribute>& GetAddMetrics() const { return m_addMetrics; }
    inline bool AddMetricsHasBeenSet() const { return m_addMetricsHasBeenSet; }
    template<typename AddMetricsT = Aws::Vector<MetricAttribute>>
    void SetAddMetrics(AddMetricsT&& value) { m_addMetricsHasBeenSet = true; m_addMetrics = std::forward<AddMetricsT>(value); }
    template<typename AddMetricsT = Aws::Vector<MetricAttribute>>
    UpdateMetricAttributionRequest& WithAddMetrics(AddMetricsT&& value) { SetAddMetrics(std::forward<AddMetricsT>(value)); return *this;}
    template<typename AddMetricsT = MetricAttribute>
    UpdateMetricAttributionRequest& AddAddMetrics(AddMetricsT&& value) { m_addMetricsHasBeenSet = true; m_addMetrics.emplace_back(std::forward<AddMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Remove metric attributes from the metric attribution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveMetrics() const { return m_removeMetrics; }
    inline bool RemoveMetricsHasBeenSet() const { return m_removeMetricsHasBeenSet; }
    template<typename RemoveMetricsT = Aws::Vector<Aws::String>>
    void SetRemoveMetrics(RemoveMetricsT&& value) { m_removeMetricsHasBeenSet = true; m_removeMetrics = std::forward<RemoveMetricsT>(value); }
    template<typename RemoveMetricsT = Aws::Vector<Aws::String>>
    UpdateMetricAttributionRequest& WithRemoveMetrics(RemoveMetricsT&& value) { SetRemoveMetrics(std::forward<RemoveMetricsT>(value)); return *this;}
    template<typename RemoveMetricsT = Aws::String>
    UpdateMetricAttributionRequest& AddRemoveMetrics(RemoveMetricsT&& value) { m_removeMetricsHasBeenSet = true; m_removeMetrics.emplace_back(std::forward<RemoveMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An output config for the metric attribution.</p>
     */
    inline const MetricAttributionOutput& GetMetricsOutputConfig() const { return m_metricsOutputConfig; }
    inline bool MetricsOutputConfigHasBeenSet() const { return m_metricsOutputConfigHasBeenSet; }
    template<typename MetricsOutputConfigT = MetricAttributionOutput>
    void SetMetricsOutputConfig(MetricsOutputConfigT&& value) { m_metricsOutputConfigHasBeenSet = true; m_metricsOutputConfig = std::forward<MetricsOutputConfigT>(value); }
    template<typename MetricsOutputConfigT = MetricAttributionOutput>
    UpdateMetricAttributionRequest& WithMetricsOutputConfig(MetricsOutputConfigT&& value) { SetMetricsOutputConfig(std::forward<MetricsOutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the metric attribution to update.</p>
     */
    inline const Aws::String& GetMetricAttributionArn() const { return m_metricAttributionArn; }
    inline bool MetricAttributionArnHasBeenSet() const { return m_metricAttributionArnHasBeenSet; }
    template<typename MetricAttributionArnT = Aws::String>
    void SetMetricAttributionArn(MetricAttributionArnT&& value) { m_metricAttributionArnHasBeenSet = true; m_metricAttributionArn = std::forward<MetricAttributionArnT>(value); }
    template<typename MetricAttributionArnT = Aws::String>
    UpdateMetricAttributionRequest& WithMetricAttributionArn(MetricAttributionArnT&& value) { SetMetricAttributionArn(std::forward<MetricAttributionArnT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MetricAttribute> m_addMetrics;
    bool m_addMetricsHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeMetrics;
    bool m_removeMetricsHasBeenSet = false;

    MetricAttributionOutput m_metricsOutputConfig;
    bool m_metricsOutputConfigHasBeenSet = false;

    Aws::String m_metricAttributionArn;
    bool m_metricAttributionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
