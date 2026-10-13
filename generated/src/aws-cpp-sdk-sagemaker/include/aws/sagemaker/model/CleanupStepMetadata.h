/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CleanupFailure.h>

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
 * <p>The cleanup outcomes for Amazon S3 output resources associated with upstream
 * steps.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CleanupStepMetadata">AWS
 * API Reference</a></p>
 */
class CleanupStepMetadata {
 public:
  AWS_SAGEMAKER_API CleanupStepMetadata() = default;
  AWS_SAGEMAKER_API CleanupStepMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API CleanupStepMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The names of upstream steps whose Amazon S3 output resources the Cleanup step
   * deleted successfully.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCleanedSteps() const { return m_cleanedSteps; }
  inline bool CleanedStepsHasBeenSet() const { return m_cleanedStepsHasBeenSet; }
  template <typename CleanedStepsT = Aws::Vector<Aws::String>>
  void SetCleanedSteps(CleanedStepsT&& value) {
    m_cleanedStepsHasBeenSet = true;
    m_cleanedSteps = std::forward<CleanedStepsT>(value);
  }
  template <typename CleanedStepsT = Aws::Vector<Aws::String>>
  CleanupStepMetadata& WithCleanedSteps(CleanedStepsT&& value) {
    SetCleanedSteps(std::forward<CleanedStepsT>(value));
    return *this;
  }
  template <typename CleanedStepsT = Aws::String>
  CleanupStepMetadata& AddCleanedSteps(CleanedStepsT&& value) {
    m_cleanedStepsHasBeenSet = true;
    m_cleanedSteps.emplace_back(std::forward<CleanedStepsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The upstream steps whose Amazon S3 output resources the Cleanup step could
   * not delete.</p>
   */
  inline const Aws::Vector<CleanupFailure>& GetFailedSteps() const { return m_failedSteps; }
  inline bool FailedStepsHasBeenSet() const { return m_failedStepsHasBeenSet; }
  template <typename FailedStepsT = Aws::Vector<CleanupFailure>>
  void SetFailedSteps(FailedStepsT&& value) {
    m_failedStepsHasBeenSet = true;
    m_failedSteps = std::forward<FailedStepsT>(value);
  }
  template <typename FailedStepsT = Aws::Vector<CleanupFailure>>
  CleanupStepMetadata& WithFailedSteps(FailedStepsT&& value) {
    SetFailedSteps(std::forward<FailedStepsT>(value));
    return *this;
  }
  template <typename FailedStepsT = CleanupFailure>
  CleanupStepMetadata& AddFailedSteps(FailedStepsT&& value) {
    m_failedStepsHasBeenSet = true;
    m_failedSteps.emplace_back(std::forward<FailedStepsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The names of upstream steps that the Cleanup step skipped. The Cleanup step
   * skips a step when the output properties needed to locate its resources are
   * unavailable.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSkippedSteps() const { return m_skippedSteps; }
  inline bool SkippedStepsHasBeenSet() const { return m_skippedStepsHasBeenSet; }
  template <typename SkippedStepsT = Aws::Vector<Aws::String>>
  void SetSkippedSteps(SkippedStepsT&& value) {
    m_skippedStepsHasBeenSet = true;
    m_skippedSteps = std::forward<SkippedStepsT>(value);
  }
  template <typename SkippedStepsT = Aws::Vector<Aws::String>>
  CleanupStepMetadata& WithSkippedSteps(SkippedStepsT&& value) {
    SetSkippedSteps(std::forward<SkippedStepsT>(value));
    return *this;
  }
  template <typename SkippedStepsT = Aws::String>
  CleanupStepMetadata& AddSkippedSteps(SkippedStepsT&& value) {
    m_skippedStepsHasBeenSet = true;
    m_skippedSteps.emplace_back(std::forward<SkippedStepsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_cleanedSteps;

  Aws::Vector<CleanupFailure> m_failedSteps;

  Aws::Vector<Aws::String> m_skippedSteps;
  bool m_cleanedStepsHasBeenSet = false;
  bool m_failedStepsHasBeenSet = false;
  bool m_skippedStepsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
