/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CleanupFailureErrorCode.h>

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
 * <p>The Amazon S3 output resources associated with an upstream step that the
 * Cleanup step could not delete.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CleanupFailure">AWS
 * API Reference</a></p>
 */
class CleanupFailure {
 public:
  AWS_SAGEMAKER_API CleanupFailure() = default;
  AWS_SAGEMAKER_API CleanupFailure(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API CleanupFailure& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the upstream step whose Amazon S3 output resources the Cleanup
   * step could not delete.</p>
   */
  inline const Aws::String& GetStepName() const { return m_stepName; }
  inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }
  template <typename StepNameT = Aws::String>
  void SetStepName(StepNameT&& value) {
    m_stepNameHasBeenSet = true;
    m_stepName = std::forward<StepNameT>(value);
  }
  template <typename StepNameT = Aws::String>
  CleanupFailure& WithStepName(StepNameT&& value) {
    SetStepName(std::forward<StepNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error code that identifies why the Cleanup step could not delete the
   * output resources associated with the upstream step.</p>
   */
  inline CleanupFailureErrorCode GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  inline void SetErrorCode(CleanupFailureErrorCode value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = value;
  }
  inline CleanupFailure& WithErrorCode(CleanupFailureErrorCode value) {
    SetErrorCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message describing why the Cleanup step could not delete the output
   * resources associated with the upstream step.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  CleanupFailure& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_stepName;

  CleanupFailureErrorCode m_errorCode{CleanupFailureErrorCode::NOT_SET};

  Aws::String m_errorMessage;
  bool m_stepNameHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
