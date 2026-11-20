/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/GlobalInferenceGatewayRoutingWeights.h>

#include <utility>

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
 * <p>The routing configuration of a global inference gateway. To add or remove
 * in-cluster inference gateways, use <code>AddInferenceGateway</code> and
 * <code>RemoveInferenceGateway</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/GlobalInferenceGatewayRouting">AWS
 * API Reference</a></p>
 */
class GlobalInferenceGatewayRouting {
 public:
  AWS_SAGEMAKER_API GlobalInferenceGatewayRouting() = default;
  AWS_SAGEMAKER_API GlobalInferenceGatewayRouting(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API GlobalInferenceGatewayRouting& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The weights that the global inference gateway applies to each routing signal
   * when it scores the in-cluster inference gateways for a request.</p>
   */
  inline const GlobalInferenceGatewayRoutingWeights& GetWeights() const { return m_weights; }
  inline bool WeightsHasBeenSet() const { return m_weightsHasBeenSet; }
  template <typename WeightsT = GlobalInferenceGatewayRoutingWeights>
  void SetWeights(WeightsT&& value) {
    m_weightsHasBeenSet = true;
    m_weights = std::forward<WeightsT>(value);
  }
  template <typename WeightsT = GlobalInferenceGatewayRoutingWeights>
  GlobalInferenceGatewayRouting& WithWeights(WeightsT&& value) {
    SetWeights(std::forward<WeightsT>(value));
    return *this;
  }
  ///@}
 private:
  GlobalInferenceGatewayRoutingWeights m_weights;
  bool m_weightsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
