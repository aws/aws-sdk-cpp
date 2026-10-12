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
 * <p>The billable token usage for a training session, broken down by operation
 * type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/BillableTokenUsage">AWS
 * API Reference</a></p>
 */
class BillableTokenUsage {
 public:
  AWS_SAGEMAKER_API BillableTokenUsage() = default;
  AWS_SAGEMAKER_API BillableTokenUsage(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API BillableTokenUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of prefill tokens consumed.</p>
   */
  inline long long GetPrefillTokenCount() const { return m_prefillTokenCount; }
  inline bool PrefillTokenCountHasBeenSet() const { return m_prefillTokenCountHasBeenSet; }
  inline void SetPrefillTokenCount(long long value) {
    m_prefillTokenCountHasBeenSet = true;
    m_prefillTokenCount = value;
  }
  inline BillableTokenUsage& WithPrefillTokenCount(long long value) {
    SetPrefillTokenCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of sample tokens consumed.</p>
   */
  inline long long GetSampleTokenCount() const { return m_sampleTokenCount; }
  inline bool SampleTokenCountHasBeenSet() const { return m_sampleTokenCountHasBeenSet; }
  inline void SetSampleTokenCount(long long value) {
    m_sampleTokenCountHasBeenSet = true;
    m_sampleTokenCount = value;
  }
  inline BillableTokenUsage& WithSampleTokenCount(long long value) {
    SetSampleTokenCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of training tokens consumed.</p>
   */
  inline long long GetTrainingTokenCount() const { return m_trainingTokenCount; }
  inline bool TrainingTokenCountHasBeenSet() const { return m_trainingTokenCountHasBeenSet; }
  inline void SetTrainingTokenCount(long long value) {
    m_trainingTokenCountHasBeenSet = true;
    m_trainingTokenCount = value;
  }
  inline BillableTokenUsage& WithTrainingTokenCount(long long value) {
    SetTrainingTokenCount(value);
    return *this;
  }
  ///@}
 private:
  long long m_prefillTokenCount{0};

  long long m_sampleTokenCount{0};

  long long m_trainingTokenCount{0};
  bool m_prefillTokenCountHasBeenSet = false;
  bool m_sampleTokenCountHasBeenSet = false;
  bool m_trainingTokenCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
