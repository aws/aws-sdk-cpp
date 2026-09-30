/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/model/ResourceMetricSelection.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatch {
namespace Model {

/**
 * <p>Represents a resource metrics configuration for an Amazon Web Services
 * resource. A resource metrics configuration enables detailed metric collection
 * for the resource that is identified by its Amazon Resource Name (ARN). Each
 * Amazon Web Services resource can have only one resource metrics
 * configuration.</p> <p>This structure is returned by the <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_CreateResourceMetricsConfiguration.html">CreateResourceMetricsConfiguration</a>,
 * <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_UpdateResourceMetricsConfiguration.html">UpdateResourceMetricsConfiguration</a>,
 * and <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetResourceMetricsConfiguration.html">GetResourceMetricsConfiguration</a>
 * operations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ResourceMetricsConfiguration">AWS
 * API Reference</a></p>
 */
class ResourceMetricsConfiguration {
 public:
  AWS_CLOUDWATCH_API ResourceMetricsConfiguration() = default;
  AWS_CLOUDWATCH_API ResourceMetricsConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API ResourceMetricsConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Web Services resource that this
   * configuration applies to.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  ResourceMetricsConfiguration& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the resource metrics configuration was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ResourceMetricsConfiguration& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the resource metrics configuration was last updated.
   * When the configuration is first created, this value is the same as
   * <code>CreatedAt</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ResourceMetricsConfiguration& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metrics that Amazon CloudWatch collects for the resource. If this field
   * is not present, Amazon CloudWatch collects all available detailed metrics for
   * the resource.</p>
   */
  inline const Aws::Vector<ResourceMetricSelection>& GetMetricSelections() const { return m_metricSelections; }
  inline bool MetricSelectionsHasBeenSet() const { return m_metricSelectionsHasBeenSet; }
  template <typename MetricSelectionsT = Aws::Vector<ResourceMetricSelection>>
  void SetMetricSelections(MetricSelectionsT&& value) {
    m_metricSelectionsHasBeenSet = true;
    m_metricSelections = std::forward<MetricSelectionsT>(value);
  }
  template <typename MetricSelectionsT = Aws::Vector<ResourceMetricSelection>>
  ResourceMetricsConfiguration& WithMetricSelections(MetricSelectionsT&& value) {
    SetMetricSelections(std::forward<MetricSelectionsT>(value));
    return *this;
  }
  template <typename MetricSelectionsT = ResourceMetricSelection>
  ResourceMetricsConfiguration& AddMetricSelections(MetricSelectionsT&& value) {
    m_metricSelectionsHasBeenSet = true;
    m_metricSelections.emplace_back(std::forward<MetricSelectionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Vector<ResourceMetricSelection> m_metricSelections;
  bool m_resourceArnHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_metricSelectionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
