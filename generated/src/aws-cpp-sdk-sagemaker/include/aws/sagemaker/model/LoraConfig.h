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
 * <p>The Low-Rank Adaptation (LoRA) configuration for a training session,
 * including the rank and alpha parameters.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LoraConfig">AWS
 * API Reference</a></p>
 */
class LoraConfig {
 public:
  AWS_SAGEMAKER_API LoraConfig() = default;
  AWS_SAGEMAKER_API LoraConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API LoraConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The rank of the Low-Rank Adaptation (LoRA) adapter matrices.</p>
   */
  inline int GetRank() const { return m_rank; }
  inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }
  inline void SetRank(int value) {
    m_rankHasBeenSet = true;
    m_rank = value;
  }
  inline LoraConfig& WithRank(int value) {
    SetRank(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Low-Rank Adaptation (LoRA) scaling factor.</p>
   */
  inline int GetAlpha() const { return m_alpha; }
  inline bool AlphaHasBeenSet() const { return m_alphaHasBeenSet; }
  inline void SetAlpha(int value) {
    m_alphaHasBeenSet = true;
    m_alpha = value;
  }
  inline LoraConfig& WithAlpha(int value) {
    SetAlpha(value);
    return *this;
  }
  ///@}
 private:
  int m_rank{0};

  int m_alpha{0};
  bool m_rankHasBeenSet = false;
  bool m_alphaHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
