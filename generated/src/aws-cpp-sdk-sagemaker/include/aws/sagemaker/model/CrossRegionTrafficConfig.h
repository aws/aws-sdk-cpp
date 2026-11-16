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
 * <p>The cross-Region traffic cap for an endpoint. The cap limits the requests per
 * second that the endpoint accepts from inference routers in other Amazon Web
 * Services Regions. The cap is <code>MaxCrossRegionPercentPerEndpoint</code>
 * percent of <code>MaxInvocationsPerSecondPerInstance</code> multiplied by the
 * number of <code>InService</code> instances, rounded up. All production variants
 * and inference components of the endpoint share it. Requests that you send to the
 * endpoint directly aren't counted. A request over the cap fails with a
 * <code>ThrottlingException</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CrossRegionTrafficConfig">AWS
 * API Reference</a></p>
 */
class CrossRegionTrafficConfig {
 public:
  AWS_SAGEMAKER_API CrossRegionTrafficConfig() = default;
  AWS_SAGEMAKER_API CrossRegionTrafficConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API CrossRegionTrafficConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of invocations per second that you expect one
   * <code>InService</code> instance to serve. One value applies to every production
   * variant, whatever its instance type.</p>
   */
  inline int GetMaxInvocationsPerSecondPerInstance() const { return m_maxInvocationsPerSecondPerInstance; }
  inline bool MaxInvocationsPerSecondPerInstanceHasBeenSet() const { return m_maxInvocationsPerSecondPerInstanceHasBeenSet; }
  inline void SetMaxInvocationsPerSecondPerInstance(int value) {
    m_maxInvocationsPerSecondPerInstanceHasBeenSet = true;
    m_maxInvocationsPerSecondPerInstance = value;
  }
  inline CrossRegionTrafficConfig& WithMaxInvocationsPerSecondPerInstance(int value) {
    SetMaxInvocationsPerSecondPerInstance(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of the endpoint's capacity that requests from inference
   * routers in other Amazon Web Services Regions can use.</p>
   */
  inline int GetMaxCrossRegionPercentPerEndpoint() const { return m_maxCrossRegionPercentPerEndpoint; }
  inline bool MaxCrossRegionPercentPerEndpointHasBeenSet() const { return m_maxCrossRegionPercentPerEndpointHasBeenSet; }
  inline void SetMaxCrossRegionPercentPerEndpoint(int value) {
    m_maxCrossRegionPercentPerEndpointHasBeenSet = true;
    m_maxCrossRegionPercentPerEndpoint = value;
  }
  inline CrossRegionTrafficConfig& WithMaxCrossRegionPercentPerEndpoint(int value) {
    SetMaxCrossRegionPercentPerEndpoint(value);
    return *this;
  }
  ///@}
 private:
  int m_maxInvocationsPerSecondPerInstance{0};

  int m_maxCrossRegionPercentPerEndpoint{0};
  bool m_maxInvocationsPerSecondPerInstanceHasBeenSet = false;
  bool m_maxCrossRegionPercentPerEndpointHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
