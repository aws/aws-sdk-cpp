/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/model/ResourceMetricSelection.h>

#include <utility>

namespace Aws {
namespace CloudWatch {
namespace Model {

/**
 * <p>Specifies the resource ARN and optional replacement metric selections for an
 * <code>UpdateResourceMetricsConfiguration</code> request.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/UpdateResourceMetricsConfigurationInput">AWS
 * API Reference</a></p>
 */
class UpdateResourceMetricsConfigurationRequest : public CloudWatchRequest {
 public:
  AWS_CLOUDWATCH_API UpdateResourceMetricsConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateResourceMetricsConfiguration"; }

  AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Web Services resource to update
   * the resource metrics configuration for.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  UpdateResourceMetricsConfigurationRequest& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies which metrics Amazon CloudWatch collects for the resource. The
   * selections that you provide completely replace any existing metric
   * selections.</p> <p>If you omit this parameter, Amazon CloudWatch removes any
   * existing metric selection filter and collects all available detailed metrics for
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
  UpdateResourceMetricsConfigurationRequest& WithMetricSelections(MetricSelectionsT&& value) {
    SetMetricSelections(std::forward<MetricSelectionsT>(value));
    return *this;
  }
  template <typename MetricSelectionsT = ResourceMetricSelection>
  UpdateResourceMetricsConfigurationRequest& AddMetricSelections(MetricSelectionsT&& value) {
    m_metricSelectionsHasBeenSet = true;
    m_metricSelections.emplace_back(std::forward<MetricSelectionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;

  Aws::Vector<ResourceMetricSelection> m_metricSelections;
  bool m_resourceArnHasBeenSet = false;
  bool m_metricSelectionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
