/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>The relative weights of the four routing signals, each from 0 to 1. Specify
 * all four weights or none. If you specify them, they must sum to 1.0, within
 * 0.001. If you specify none, the global inference gateway uses default
 * weights.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/GlobalInferenceGatewayRoutingWeights">AWS
 * API Reference</a></p>
 */
class GlobalInferenceGatewayRoutingWeights {
 public:
  AWS_SAGEMAKER_API GlobalInferenceGatewayRoutingWeights() = default;
  AWS_SAGEMAKER_API GlobalInferenceGatewayRoutingWeights(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API GlobalInferenceGatewayRoutingWeights& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The weight of the free key-value (KV) cache capacity on the cluster.</p>
   */
  inline double GetKVHeadroom() const { return m_kVHeadroom; }
  inline bool KVHeadroomHasBeenSet() const { return m_kVHeadroomHasBeenSet; }
  inline void SetKVHeadroom(double value) {
    m_kVHeadroomHasBeenSet = true;
    m_kVHeadroom = value;
  }
  inline GlobalInferenceGatewayRoutingWeights& WithKVHeadroom(double value) {
    SetKVHeadroom(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The weight of the number of requests that are waiting on the cluster.</p>
   */
  inline double GetQueueDepth() const { return m_queueDepth; }
  inline bool QueueDepthHasBeenSet() const { return m_queueDepthHasBeenSet; }
  inline void SetQueueDepth(double value) {
    m_queueDepthHasBeenSet = true;
    m_queueDepth = value;
  }
  inline GlobalInferenceGatewayRoutingWeights& WithQueueDepth(double value) {
    SetQueueDepth(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The weight of how close the cluster is to the caller.</p>
   */
  inline double GetRegionProximity() const { return m_regionProximity; }
  inline bool RegionProximityHasBeenSet() const { return m_regionProximityHasBeenSet; }
  inline void SetRegionProximity(double value) {
    m_regionProximityHasBeenSet = true;
    m_regionProximity = value;
  }
  inline GlobalInferenceGatewayRoutingWeights& WithRegionProximity(double value) {
    SetRegionProximity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The weight of the recent error rate of the cluster.</p>
   */
  inline double GetErrorRate() const { return m_errorRate; }
  inline bool ErrorRateHasBeenSet() const { return m_errorRateHasBeenSet; }
  inline void SetErrorRate(double value) {
    m_errorRateHasBeenSet = true;
    m_errorRate = value;
  }
  inline GlobalInferenceGatewayRoutingWeights& WithErrorRate(double value) {
    SetErrorRate(value);
    return *this;
  }
  ///@}
 private:
  double m_kVHeadroom{0.0};

  double m_queueDepth{0.0};

  double m_regionProximity{0.0};

  double m_errorRate{0.0};
  bool m_kVHeadroomHasBeenSet = false;
  bool m_queueDepthHasBeenSet = false;
  bool m_regionProximityHasBeenSet = false;
  bool m_errorRateHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
