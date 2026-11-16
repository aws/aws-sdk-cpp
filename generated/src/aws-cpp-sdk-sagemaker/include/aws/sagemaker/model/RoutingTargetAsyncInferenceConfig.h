/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/RoutingTargetAsyncInferenceClientConfig.h>
#include <aws/sagemaker/model/RoutingTargetAsyncInferenceOutputConfig.h>

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
 * <p>The asynchronous inference settings of a routing target.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RoutingTargetAsyncInferenceConfig">AWS
 * API Reference</a></p>
 */
class RoutingTargetAsyncInferenceConfig {
 public:
  AWS_SAGEMAKER_API RoutingTargetAsyncInferenceConfig() = default;
  AWS_SAGEMAKER_API RoutingTargetAsyncInferenceConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API RoutingTargetAsyncInferenceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 locations for the results of asynchronous requests, and the
   * notification settings.</p>
   */
  inline const RoutingTargetAsyncInferenceOutputConfig& GetOutputConfig() const { return m_outputConfig; }
  inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
  template <typename OutputConfigT = RoutingTargetAsyncInferenceOutputConfig>
  void SetOutputConfig(OutputConfigT&& value) {
    m_outputConfigHasBeenSet = true;
    m_outputConfig = std::forward<OutputConfigT>(value);
  }
  template <typename OutputConfigT = RoutingTargetAsyncInferenceOutputConfig>
  RoutingTargetAsyncInferenceConfig& WithOutputConfig(OutputConfigT&& value) {
    SetOutputConfig(std::forward<OutputConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How the inference router submits requests to destinations.</p>
   */
  inline const RoutingTargetAsyncInferenceClientConfig& GetClientConfig() const { return m_clientConfig; }
  inline bool ClientConfigHasBeenSet() const { return m_clientConfigHasBeenSet; }
  template <typename ClientConfigT = RoutingTargetAsyncInferenceClientConfig>
  void SetClientConfig(ClientConfigT&& value) {
    m_clientConfigHasBeenSet = true;
    m_clientConfig = std::forward<ClientConfigT>(value);
  }
  template <typename ClientConfigT = RoutingTargetAsyncInferenceClientConfig>
  RoutingTargetAsyncInferenceConfig& WithClientConfig(ClientConfigT&& value) {
    SetClientConfig(std::forward<ClientConfigT>(value));
    return *this;
  }
  ///@}
 private:
  RoutingTargetAsyncInferenceOutputConfig m_outputConfig;

  RoutingTargetAsyncInferenceClientConfig m_clientConfig;
  bool m_outputConfigHasBeenSet = false;
  bool m_clientConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
