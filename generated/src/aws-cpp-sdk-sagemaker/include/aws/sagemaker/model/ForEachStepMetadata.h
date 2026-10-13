/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ForEachSelectorResult.h>
#include <aws/sagemaker/model/ForEachStatus.h>

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
 * <p>The status, the iteration-step counts, and the selector information for a
 * ForEach step execution.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ForEachStepMetadata">AWS
 * API Reference</a></p>
 */
class ForEachStepMetadata {
 public:
  AWS_SAGEMAKER_API ForEachStepMetadata() = default;
  AWS_SAGEMAKER_API ForEachStepMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ForEachStepMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status of the ForEach step execution.</p>
   */
  inline ForEachStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ForEachStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ForEachStepMetadata& WithStatus(ForEachStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of input items that the ForEach step iterates over.</p>
   */
  inline int GetInputItemCount() const { return m_inputItemCount; }
  inline bool InputItemCountHasBeenSet() const { return m_inputItemCountHasBeenSet; }
  inline void SetInputItemCount(int value) {
    m_inputItemCountHasBeenSet = true;
    m_inputItemCount = value;
  }
  inline ForEachStepMetadata& WithInputItemCount(int value) {
    SetInputItemCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of steps generated across all iterations of the ForEach
   * step.</p>
   */
  inline int GetTotalStepCount() const { return m_totalStepCount; }
  inline bool TotalStepCountHasBeenSet() const { return m_totalStepCountHasBeenSet; }
  inline void SetTotalStepCount(int value) {
    m_totalStepCountHasBeenSet = true;
    m_totalStepCount = value;
  }
  inline ForEachStepMetadata& WithTotalStepCount(int value) {
    SetTotalStepCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of iteration steps that completed successfully.</p>
   */
  inline int GetSucceededStepCount() const { return m_succeededStepCount; }
  inline bool SucceededStepCountHasBeenSet() const { return m_succeededStepCountHasBeenSet; }
  inline void SetSucceededStepCount(int value) {
    m_succeededStepCountHasBeenSet = true;
    m_succeededStepCount = value;
  }
  inline ForEachStepMetadata& WithSucceededStepCount(int value) {
    SetSucceededStepCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of iteration steps that failed.</p>
   */
  inline int GetFailedStepCount() const { return m_failedStepCount; }
  inline bool FailedStepCountHasBeenSet() const { return m_failedStepCountHasBeenSet; }
  inline void SetFailedStepCount(int value) {
    m_failedStepCountHasBeenSet = true;
    m_failedStepCount = value;
  }
  inline ForEachStepMetadata& WithFailedStepCount(int value) {
    SetFailedStepCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of iteration steps that were stopped.</p>
   */
  inline int GetStoppedStepCount() const { return m_stoppedStepCount; }
  inline bool StoppedStepCountHasBeenSet() const { return m_stoppedStepCountHasBeenSet; }
  inline void SetStoppedStepCount(int value) {
    m_stoppedStepCountHasBeenSet = true;
    m_stoppedStepCount = value;
  }
  inline ForEachStepMetadata& WithStoppedStepCount(int value) {
    SetStoppedStepCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Identifies the body step and iteration selected within the ForEach step.</p>
   */
  inline const ForEachSelectorResult& GetSelector() const { return m_selector; }
  inline bool SelectorHasBeenSet() const { return m_selectorHasBeenSet; }
  template <typename SelectorT = ForEachSelectorResult>
  void SetSelector(SelectorT&& value) {
    m_selectorHasBeenSet = true;
    m_selector = std::forward<SelectorT>(value);
  }
  template <typename SelectorT = ForEachSelectorResult>
  ForEachStepMetadata& WithSelector(SelectorT&& value) {
    SetSelector(std::forward<SelectorT>(value));
    return *this;
  }
  ///@}
 private:
  ForEachStatus m_status{ForEachStatus::NOT_SET};

  int m_inputItemCount{0};

  int m_totalStepCount{0};

  int m_succeededStepCount{0};

  int m_failedStepCount{0};

  int m_stoppedStepCount{0};

  ForEachSelectorResult m_selector;
  bool m_statusHasBeenSet = false;
  bool m_inputItemCountHasBeenSet = false;
  bool m_totalStepCountHasBeenSet = false;
  bool m_succeededStepCountHasBeenSet = false;
  bool m_failedStepCountHasBeenSet = false;
  bool m_stoppedStepCountHasBeenSet = false;
  bool m_selectorHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
