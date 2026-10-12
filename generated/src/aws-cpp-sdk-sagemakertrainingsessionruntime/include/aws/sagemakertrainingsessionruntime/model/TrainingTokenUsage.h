/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>

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
 * <p>The token usage statistics for training operations.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/TrainingTokenUsage">AWS
 * API Reference</a></p>
 */
class TrainingTokenUsage {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API TrainingTokenUsage() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API TrainingTokenUsage(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API TrainingTokenUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of training tokens consumed by the operation.</p>
   */
  inline int GetTrainingTokens() const { return m_trainingTokens; }
  inline bool TrainingTokensHasBeenSet() const { return m_trainingTokensHasBeenSet; }
  inline void SetTrainingTokens(int value) {
    m_trainingTokensHasBeenSet = true;
    m_trainingTokens = value;
  }
  inline TrainingTokenUsage& WithTrainingTokens(int value) {
    SetTrainingTokens(value);
    return *this;
  }
  ///@}
 private:
  int m_trainingTokens{0};
  bool m_trainingTokensHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
