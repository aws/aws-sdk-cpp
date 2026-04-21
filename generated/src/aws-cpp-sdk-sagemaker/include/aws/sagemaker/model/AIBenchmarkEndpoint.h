/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AIBenchmarkInferenceComponent.h>

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
 * <p>The SageMaker endpoint configuration for benchmarking.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AIBenchmarkEndpoint">AWS
 * API Reference</a></p>
 */
class AIBenchmarkEndpoint {
 public:
  AWS_SAGEMAKER_API AIBenchmarkEndpoint() = default;
  AWS_SAGEMAKER_API AIBenchmarkEndpoint(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AIBenchmarkEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name or Amazon Resource Name (ARN) of the SageMaker endpoint to
   * benchmark.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  AIBenchmarkEndpoint& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The hostname of the specific container to target within a multi-container
   * endpoint.</p>
   */
  inline const Aws::String& GetTargetContainerHostname() const { return m_targetContainerHostname; }
  inline bool TargetContainerHostnameHasBeenSet() const { return m_targetContainerHostnameHasBeenSet; }
  template <typename TargetContainerHostnameT = Aws::String>
  void SetTargetContainerHostname(TargetContainerHostnameT&& value) {
    m_targetContainerHostnameHasBeenSet = true;
    m_targetContainerHostname = std::forward<TargetContainerHostnameT>(value);
  }
  template <typename TargetContainerHostnameT = Aws::String>
  AIBenchmarkEndpoint& WithTargetContainerHostname(TargetContainerHostnameT&& value) {
    SetTargetContainerHostname(std::forward<TargetContainerHostnameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of inference components to benchmark on the endpoint.</p>
   */
  inline const Aws::Vector<AIBenchmarkInferenceComponent>& GetInferenceComponents() const { return m_inferenceComponents; }
  inline bool InferenceComponentsHasBeenSet() const { return m_inferenceComponentsHasBeenSet; }
  template <typename InferenceComponentsT = Aws::Vector<AIBenchmarkInferenceComponent>>
  void SetInferenceComponents(InferenceComponentsT&& value) {
    m_inferenceComponentsHasBeenSet = true;
    m_inferenceComponents = std::forward<InferenceComponentsT>(value);
  }
  template <typename InferenceComponentsT = Aws::Vector<AIBenchmarkInferenceComponent>>
  AIBenchmarkEndpoint& WithInferenceComponents(InferenceComponentsT&& value) {
    SetInferenceComponents(std::forward<InferenceComponentsT>(value));
    return *this;
  }
  template <typename InferenceComponentsT = AIBenchmarkInferenceComponent>
  AIBenchmarkEndpoint& AddInferenceComponents(InferenceComponentsT&& value) {
    m_inferenceComponentsHasBeenSet = true;
    m_inferenceComponents.emplace_back(std::forward<InferenceComponentsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;

  Aws::String m_targetContainerHostname;

  Aws::Vector<AIBenchmarkInferenceComponent> m_inferenceComponents;
  bool m_identifierHasBeenSet = false;
  bool m_targetContainerHostnameHasBeenSet = false;
  bool m_inferenceComponentsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
