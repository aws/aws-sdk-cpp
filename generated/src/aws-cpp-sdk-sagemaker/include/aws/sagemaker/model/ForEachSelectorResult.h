/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
 * <p>The result of the selector that identifies an iteration of a ForEach
 * step.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ForEachSelectorResult">AWS
 * API Reference</a></p>
 */
class ForEachSelectorResult {
 public:
  AWS_SAGEMAKER_API ForEachSelectorResult() = default;
  AWS_SAGEMAKER_API ForEachSelectorResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ForEachSelectorResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the step associated with the iteration.</p>
   */
  inline const Aws::String& GetStepName() const { return m_stepName; }
  inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }
  template <typename StepNameT = Aws::String>
  void SetStepName(StepNameT&& value) {
    m_stepNameHasBeenSet = true;
    m_stepName = std::forward<StepNameT>(value);
  }
  template <typename StepNameT = Aws::String>
  ForEachSelectorResult& WithStepName(StepNameT&& value) {
    SetStepName(std::forward<StepNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The index of the iteration within the ForEach step.</p>
   */
  inline int GetIndex() const { return m_index; }
  inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
  inline void SetIndex(int value) {
    m_indexHasBeenSet = true;
    m_index = value;
  }
  inline ForEachSelectorResult& WithIndex(int value) {
    SetIndex(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_stepName;

  int m_index{0};
  bool m_stepNameHasBeenSet = false;
  bool m_indexHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
