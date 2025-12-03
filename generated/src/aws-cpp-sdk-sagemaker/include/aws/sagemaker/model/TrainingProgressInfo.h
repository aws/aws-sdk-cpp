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
 * <p> The serverless training job progress information. </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrainingProgressInfo">AWS
 * API Reference</a></p>
 */
class TrainingProgressInfo {
 public:
  AWS_SAGEMAKER_API TrainingProgressInfo() = default;
  AWS_SAGEMAKER_API TrainingProgressInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API TrainingProgressInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The total step count per epoch. </p>
   */
  inline long long GetTotalStepCountPerEpoch() const { return m_totalStepCountPerEpoch; }
  inline bool TotalStepCountPerEpochHasBeenSet() const { return m_totalStepCountPerEpochHasBeenSet; }
  inline void SetTotalStepCountPerEpoch(long long value) {
    m_totalStepCountPerEpochHasBeenSet = true;
    m_totalStepCountPerEpoch = value;
  }
  inline TrainingProgressInfo& WithTotalStepCountPerEpoch(long long value) {
    SetTotalStepCountPerEpoch(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The current step number. </p>
   */
  inline long long GetCurrentStep() const { return m_currentStep; }
  inline bool CurrentStepHasBeenSet() const { return m_currentStepHasBeenSet; }
  inline void SetCurrentStep(long long value) {
    m_currentStepHasBeenSet = true;
    m_currentStep = value;
  }
  inline TrainingProgressInfo& WithCurrentStep(long long value) {
    SetCurrentStep(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The current epoch number. </p>
   */
  inline long long GetCurrentEpoch() const { return m_currentEpoch; }
  inline bool CurrentEpochHasBeenSet() const { return m_currentEpochHasBeenSet; }
  inline void SetCurrentEpoch(long long value) {
    m_currentEpochHasBeenSet = true;
    m_currentEpoch = value;
  }
  inline TrainingProgressInfo& WithCurrentEpoch(long long value) {
    SetCurrentEpoch(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The maximum number of epochs for this job. </p>
   */
  inline long long GetMaxEpoch() const { return m_maxEpoch; }
  inline bool MaxEpochHasBeenSet() const { return m_maxEpochHasBeenSet; }
  inline void SetMaxEpoch(long long value) {
    m_maxEpochHasBeenSet = true;
    m_maxEpoch = value;
  }
  inline TrainingProgressInfo& WithMaxEpoch(long long value) {
    SetMaxEpoch(value);
    return *this;
  }
  ///@}
 private:
  long long m_totalStepCountPerEpoch{0};
  bool m_totalStepCountPerEpochHasBeenSet = false;

  long long m_currentStep{0};
  bool m_currentStepHasBeenSet = false;

  long long m_currentEpoch{0};
  bool m_currentEpochHasBeenSet = false;

  long long m_maxEpoch{0};
  bool m_maxEpochHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
