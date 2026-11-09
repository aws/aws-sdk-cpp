/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signin/Signin_EXPORTS.h>
#include <aws/signin/model/OAuth2ErrorCode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Signin {
namespace Model {

/**
 * <p>The request failed because it contains a malformed, missing, or invalid
 * parameter.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/ValidationException">AWS
 * API Reference</a></p>
 */
class ValidationException {
 public:
  AWS_SIGNIN_API ValidationException() = default;
  AWS_SIGNIN_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNIN_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The specific code depends on which validation failed.</p>
   */
  inline OAuth2ErrorCode GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  inline void SetError(OAuth2ErrorCode value) {
    m_errorHasBeenSet = true;
    m_error = value;
  }
  inline ValidationException& WithError(OAuth2ErrorCode value) {
    SetError(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The validation constraint that failed.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ValidationException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  OAuth2ErrorCode m_error{OAuth2ErrorCode::NOT_SET};

  Aws::String m_message;
  bool m_errorHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
