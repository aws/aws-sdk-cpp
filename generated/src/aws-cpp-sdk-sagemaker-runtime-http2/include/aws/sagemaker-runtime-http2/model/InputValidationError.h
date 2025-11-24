/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMakerRuntimeHTTP2 {
namespace Model {

/**
 * <p>The input fails to satisfy the constraints specified by an AWS
 * service.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-runtime-http2-2025-10-01/InputValidationError">AWS
 * API Reference</a></p>
 */
class InputValidationError {
 public:
  AWS_SAGEMAKERRUNTIMEHTTP2_API InputValidationError() = default;
  AWS_SAGEMAKERRUNTIMEHTTP2_API InputValidationError(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERRUNTIMEHTTP2_API InputValidationError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERRUNTIMEHTTP2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Error message.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  InputValidationError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error code.</p>
   */
  inline const Aws::String& GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  template <typename ErrorCodeT = Aws::String>
  void SetErrorCode(ErrorCodeT&& value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = std::forward<ErrorCodeT>(value);
  }
  template <typename ErrorCodeT = Aws::String>
  InputValidationError& WithErrorCode(ErrorCodeT&& value) {
    SetErrorCode(std::forward<ErrorCodeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;
  bool m_messageHasBeenSet = false;

  Aws::String m_errorCode;
  bool m_errorCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerRuntimeHTTP2
}  // namespace Aws
