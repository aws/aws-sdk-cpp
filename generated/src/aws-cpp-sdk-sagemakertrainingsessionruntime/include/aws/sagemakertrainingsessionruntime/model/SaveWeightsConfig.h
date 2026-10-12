/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMakerTrainingSessionRuntime {
namespace Model {

/**
 * <p>The configuration for saving model weights as a checkpoint.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/SaveWeightsConfig">AWS
 * API Reference</a></p>
 */
class SaveWeightsConfig {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SaveWeightsConfig() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SaveWeightsConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SaveWeightsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether to merge LoRA adapter weights into the base model before
   * saving. When true, the saved checkpoint contains the full merged model
   * weights.</p>
   */
  inline bool GetMergeWeights() const { return m_mergeWeights; }
  inline bool MergeWeightsHasBeenSet() const { return m_mergeWeightsHasBeenSet; }
  inline void SetMergeWeights(bool value) {
    m_mergeWeightsHasBeenSet = true;
    m_mergeWeights = value;
  }
  inline SaveWeightsConfig& WithMergeWeights(bool value) {
    SetMergeWeights(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable description for the saved checkpoint.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  SaveWeightsConfig& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_mergeWeights{false};

  Aws::String m_description;
  bool m_mergeWeightsHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
