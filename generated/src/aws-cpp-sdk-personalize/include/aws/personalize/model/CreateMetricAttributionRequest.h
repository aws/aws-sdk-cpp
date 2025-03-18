/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/personalize/model/MetricAttributionOutput.h>
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
  class CreateMetricAttributionRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API CreateMetricAttributionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMetricAttribution"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A name for the metric attribution.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateMetricAttributionRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the destination dataset group for the
     * metric attribution.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const { return m_datasetGroupArn; }
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }
    template<typename DatasetGroupArnT = Aws::String>
    void SetDatasetGroupArn(DatasetGroupArnT&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::forward<DatasetGroupArnT>(value); }
    template<typename DatasetGroupArnT = Aws::String>
    CreateMetricAttributionRequest& WithDatasetGroupArn(DatasetGroupArnT&& value) { SetDatasetGroupArn(std::forward<DatasetGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of metric attributes for the metric attribution. Each metric attribute
     * specifies an event type to track and a function. Available functions are
     * <code>SUM()</code> or <code>SAMPLECOUNT()</code>. For SUM() functions, provide
     * the dataset type (either Interactions or Items) and column to sum as a
     * parameter. For example SUM(Items.PRICE).</p>
     */
    inline const Aws::Vector<MetricAttribute>& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = Aws::Vector<MetricAttribute>>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Aws::Vector<MetricAttribute>>
    CreateMetricAttributionRequest& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    template<typename MetricsT = MetricAttribute>
    CreateMetricAttributionRequest& AddMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics.emplace_back(std::forward<MetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The output configuration details for the metric attribution.</p>
     */
    inline const MetricAttributionOutput& GetMetricsOutputConfig() const { return m_metricsOutputConfig; }
    inline bool MetricsOutputConfigHasBeenSet() const { return m_metricsOutputConfigHasBeenSet; }
    template<typename MetricsOutputConfigT = MetricAttributionOutput>
    void SetMetricsOutputConfig(MetricsOutputConfigT&& value) { m_metricsOutputConfigHasBeenSet = true; m_metricsOutputConfig = std::forward<MetricsOutputConfigT>(value); }
    template<typename MetricsOutputConfigT = MetricAttributionOutput>
    CreateMetricAttributionRequest& WithMetricsOutputConfig(MetricsOutputConfigT&& value) { SetMetricsOutputConfig(std::forward<MetricsOutputConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet = false;

    Aws::Vector<MetricAttribute> m_metrics;
    bool m_metricsHasBeenSet = false;

    MetricAttributionOutput m_metricsOutputConfig;
    bool m_metricsOutputConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
