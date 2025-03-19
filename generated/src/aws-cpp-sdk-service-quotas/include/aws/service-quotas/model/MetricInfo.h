/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ServiceQuotas
{
namespace Model
{

  /**
   * <p>Information about the CloudWatch metric that reflects quota
   * usage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/MetricInfo">AWS
   * API Reference</a></p>
   */
  class MetricInfo
  {
  public:
    AWS_SERVICEQUOTAS_API MetricInfo() = default;
    AWS_SERVICEQUOTAS_API MetricInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API MetricInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The namespace of the metric.</p>
     */
    inline const Aws::String& GetMetricNamespace() const { return m_metricNamespace; }
    inline bool MetricNamespaceHasBeenSet() const { return m_metricNamespaceHasBeenSet; }
    template<typename MetricNamespaceT = Aws::String>
    void SetMetricNamespace(MetricNamespaceT&& value) { m_metricNamespaceHasBeenSet = true; m_metricNamespace = std::forward<MetricNamespaceT>(value); }
    template<typename MetricNamespaceT = Aws::String>
    MetricInfo& WithMetricNamespace(MetricNamespaceT&& value) { SetMetricNamespace(std::forward<MetricNamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the metric.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    MetricInfo& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric dimension. This is a name/value pair that is part of the identity
     * of a metric.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetricDimensions() const { return m_metricDimensions; }
    inline bool MetricDimensionsHasBeenSet() const { return m_metricDimensionsHasBeenSet; }
    template<typename MetricDimensionsT = Aws::Map<Aws::String, Aws::String>>
    void SetMetricDimensions(MetricDimensionsT&& value) { m_metricDimensionsHasBeenSet = true; m_metricDimensions = std::forward<MetricDimensionsT>(value); }
    template<typename MetricDimensionsT = Aws::Map<Aws::String, Aws::String>>
    MetricInfo& WithMetricDimensions(MetricDimensionsT&& value) { SetMetricDimensions(std::forward<MetricDimensionsT>(value)); return *this;}
    template<typename MetricDimensionsKeyT = Aws::String, typename MetricDimensionsValueT = Aws::String>
    MetricInfo& AddMetricDimensions(MetricDimensionsKeyT&& key, MetricDimensionsValueT&& value) {
      m_metricDimensionsHasBeenSet = true; m_metricDimensions.emplace(std::forward<MetricDimensionsKeyT>(key), std::forward<MetricDimensionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The metric statistic that we recommend you use when determining quota
     * usage.</p>
     */
    inline const Aws::String& GetMetricStatisticRecommendation() const { return m_metricStatisticRecommendation; }
    inline bool MetricStatisticRecommendationHasBeenSet() const { return m_metricStatisticRecommendationHasBeenSet; }
    template<typename MetricStatisticRecommendationT = Aws::String>
    void SetMetricStatisticRecommendation(MetricStatisticRecommendationT&& value) { m_metricStatisticRecommendationHasBeenSet = true; m_metricStatisticRecommendation = std::forward<MetricStatisticRecommendationT>(value); }
    template<typename MetricStatisticRecommendationT = Aws::String>
    MetricInfo& WithMetricStatisticRecommendation(MetricStatisticRecommendationT&& value) { SetMetricStatisticRecommendation(std::forward<MetricStatisticRecommendationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_metricNamespace;
    bool m_metricNamespaceHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metricDimensions;
    bool m_metricDimensionsHasBeenSet = false;

    Aws::String m_metricStatisticRecommendation;
    bool m_metricStatisticRecommendationHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
