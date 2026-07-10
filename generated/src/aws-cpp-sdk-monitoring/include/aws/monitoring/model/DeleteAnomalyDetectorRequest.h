/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/model/MetricMathAnomalyDetector.h>
#include <aws/monitoring/model/SingleMetricAnomalyDetector.h>

#include <utility>

namespace Aws {
namespace CloudWatch {
namespace Model {

/**
 */
class DeleteAnomalyDetectorRequest : public CloudWatchRequest {
 public:
  AWS_CLOUDWATCH_API DeleteAnomalyDetectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteAnomalyDetector"; }

  AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Specifies the unique identifier of the anomaly detector to delete. If you
   * specify this parameter, you do not need to specify a metric to identify the
   * detector.</p>
   */
  inline const Aws::String& GetAnomalyDetectorId() const { return m_anomalyDetectorId; }
  inline bool AnomalyDetectorIdHasBeenSet() const { return m_anomalyDetectorIdHasBeenSet; }
  template <typename AnomalyDetectorIdT = Aws::String>
  void SetAnomalyDetectorId(AnomalyDetectorIdT&& value) {
    m_anomalyDetectorIdHasBeenSet = true;
    m_anomalyDetectorId = std::forward<AnomalyDetectorIdT>(value);
  }
  template <typename AnomalyDetectorIdT = Aws::String>
  DeleteAnomalyDetectorRequest& WithAnomalyDetectorId(AnomalyDetectorIdT&& value) {
    SetAnomalyDetectorId(std::forward<AnomalyDetectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A single metric anomaly detector to be deleted.</p> <p>When using
   * <code>SingleMetricAnomalyDetector</code>, you cannot include the following
   * parameters in the same operation:</p> <ul> <li> <p> <code>Dimensions</code>,</p>
   * </li> <li> <p> <code>MetricName</code> </p> </li> <li> <p>
   * <code>Namespace</code> </p> </li> <li> <p> <code>Stat</code> </p> </li> <li>
   * <p>the <code>MetricMathAnomalyDetector</code> parameters of
   * <code>DeleteAnomalyDetectorInput</code> </p> </li> </ul> <p>Instead, specify the
   * single metric anomaly detector attributes as part of the
   * <code>SingleMetricAnomalyDetector</code> property.</p>
   */
  inline const SingleMetricAnomalyDetector& GetSingleMetricAnomalyDetector() const { return m_singleMetricAnomalyDetector; }
  inline bool SingleMetricAnomalyDetectorHasBeenSet() const { return m_singleMetricAnomalyDetectorHasBeenSet; }
  template <typename SingleMetricAnomalyDetectorT = SingleMetricAnomalyDetector>
  void SetSingleMetricAnomalyDetector(SingleMetricAnomalyDetectorT&& value) {
    m_singleMetricAnomalyDetectorHasBeenSet = true;
    m_singleMetricAnomalyDetector = std::forward<SingleMetricAnomalyDetectorT>(value);
  }
  template <typename SingleMetricAnomalyDetectorT = SingleMetricAnomalyDetector>
  DeleteAnomalyDetectorRequest& WithSingleMetricAnomalyDetector(SingleMetricAnomalyDetectorT&& value) {
    SetSingleMetricAnomalyDetector(std::forward<SingleMetricAnomalyDetectorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metric math anomaly detector to be deleted.</p> <p>When using
   * <code>MetricMathAnomalyDetector</code>, you cannot include following parameters
   * in the same operation:</p> <ul> <li> <p> <code>Dimensions</code>,</p> </li> <li>
   * <p> <code>MetricName</code> </p> </li> <li> <p> <code>Namespace</code> </p>
   * </li> <li> <p> <code>Stat</code> </p> </li> <li> <p>the
   * <code>SingleMetricAnomalyDetector</code> parameters of
   * <code>DeleteAnomalyDetectorInput</code> </p> </li> </ul> <p>Instead, specify the
   * metric math anomaly detector attributes as part of the
   * <code>MetricMathAnomalyDetector</code> property.</p>
   */
  inline const MetricMathAnomalyDetector& GetMetricMathAnomalyDetector() const { return m_metricMathAnomalyDetector; }
  inline bool MetricMathAnomalyDetectorHasBeenSet() const { return m_metricMathAnomalyDetectorHasBeenSet; }
  template <typename MetricMathAnomalyDetectorT = MetricMathAnomalyDetector>
  void SetMetricMathAnomalyDetector(MetricMathAnomalyDetectorT&& value) {
    m_metricMathAnomalyDetectorHasBeenSet = true;
    m_metricMathAnomalyDetector = std::forward<MetricMathAnomalyDetectorT>(value);
  }
  template <typename MetricMathAnomalyDetectorT = MetricMathAnomalyDetector>
  DeleteAnomalyDetectorRequest& WithMetricMathAnomalyDetector(MetricMathAnomalyDetectorT&& value) {
    SetMetricMathAnomalyDetector(std::forward<MetricMathAnomalyDetectorT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_anomalyDetectorId;

  SingleMetricAnomalyDetector m_singleMetricAnomalyDetector;

  MetricMathAnomalyDetector m_metricMathAnomalyDetector;
  bool m_anomalyDetectorIdHasBeenSet = false;
  bool m_singleMetricAnomalyDetectorHasBeenSet = false;
  bool m_metricMathAnomalyDetectorHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
