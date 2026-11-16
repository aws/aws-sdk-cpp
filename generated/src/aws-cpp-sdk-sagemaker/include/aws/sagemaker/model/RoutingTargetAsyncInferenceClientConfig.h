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
 * <p>How the inference router submits asynchronous requests to the destinations of
 * a routing target.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RoutingTargetAsyncInferenceClientConfig">AWS
 * API Reference</a></p>
 */
class RoutingTargetAsyncInferenceClientConfig {
 public:
  AWS_SAGEMAKER_API RoutingTargetAsyncInferenceClientConfig() = default;
  AWS_SAGEMAKER_API RoutingTargetAsyncInferenceClientConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API RoutingTargetAsyncInferenceClientConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum time, in seconds, that a request can wait at a destination before
   * the inference router moves it to another destination. The default is 900
   * seconds.</p>
   */
  inline int GetMaxTimeInBacklogSeconds() const { return m_maxTimeInBacklogSeconds; }
  inline bool MaxTimeInBacklogSecondsHasBeenSet() const { return m_maxTimeInBacklogSecondsHasBeenSet; }
  inline void SetMaxTimeInBacklogSeconds(int value) {
    m_maxTimeInBacklogSecondsHasBeenSet = true;
    m_maxTimeInBacklogSeconds = value;
  }
  inline RoutingTargetAsyncInferenceClientConfig& WithMaxTimeInBacklogSeconds(int value) {
    SetMaxTimeInBacklogSeconds(value);
    return *this;
  }
  ///@}
 private:
  int m_maxTimeInBacklogSeconds{0};
  bool m_maxTimeInBacklogSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
