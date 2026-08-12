/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WellArchitected {
namespace Model {

/**
 * <p>Progress information for a recommendation generation process.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/Progress">AWS
 * API Reference</a></p>
 */
class Progress {
 public:
  AWS_WELLARCHITECTED_API Progress() = default;
  AWS_WELLARCHITECTED_API Progress(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Progress& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of generation steps that have been completed.</p>
   */
  inline int GetStepsCompleted() const { return m_stepsCompleted; }
  inline bool StepsCompletedHasBeenSet() const { return m_stepsCompletedHasBeenSet; }
  inline void SetStepsCompleted(int value) {
    m_stepsCompletedHasBeenSet = true;
    m_stepsCompleted = value;
  }
  inline Progress& WithStepsCompleted(int value) {
    SetStepsCompleted(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of steps in the generation process.</p>
   */
  inline int GetTotalSteps() const { return m_totalSteps; }
  inline bool TotalStepsHasBeenSet() const { return m_totalStepsHasBeenSet; }
  inline void SetTotalSteps(int value) {
    m_totalStepsHasBeenSet = true;
    m_totalSteps = value;
  }
  inline Progress& WithTotalSteps(int value) {
    SetTotalSteps(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The completion percentage of the generation process (0-100).</p>
   */
  inline double GetCompletionPercentage() const { return m_completionPercentage; }
  inline bool CompletionPercentageHasBeenSet() const { return m_completionPercentageHasBeenSet; }
  inline void SetCompletionPercentage(double value) {
    m_completionPercentageHasBeenSet = true;
    m_completionPercentage = value;
  }
  inline Progress& WithCompletionPercentage(double value) {
    SetCompletionPercentage(value);
    return *this;
  }
  ///@}
 private:
  int m_stepsCompleted{0};

  int m_totalSteps{0};

  double m_completionPercentage{0.0};
  bool m_stepsCompletedHasBeenSet = false;
  bool m_totalStepsHasBeenSet = false;
  bool m_completionPercentageHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
