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
 * <p>Error thrown for access denied scenarios with flexible HTTP status
 * mapping</p> <p>Runtime HTTP Status Code Mapping:</p> <ul> <li>HTTP 401
 * (Unauthorized): TOKEN_EXPIRED, AUTHCODE_EXPIRED</li> <li>HTTP 403 (Forbidden):
 * USER_CREDENTIALS_CHANGED, INSUFFICIENT_PERMISSIONS</li> </ul> <p>The specific
 * HTTP status code is determined at runtime based on the error enum value.
 * Consumers should use the error field to determine the specific access denial
 * reason.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/AccessDeniedException">AWS
 * API Reference</a></p>
 */
class AccessDeniedException {
 public:
  AWS_SIGNIN_API AccessDeniedException() = default;
  AWS_SIGNIN_API AccessDeniedException(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNIN_API AccessDeniedException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>OAuth 2.0 error code indicating the specific type of access denial Can be
   * TOKEN_EXPIRED, AUTHCODE_EXPIRED, USER_CREDENTIALS_CHANGED, or
   * INSUFFICIENT_PERMISSIONS</p>
   */
  inline OAuth2ErrorCode GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  inline void SetError(OAuth2ErrorCode value) {
    m_errorHasBeenSet = true;
    m_error = value;
  }
  inline AccessDeniedException& WithError(OAuth2ErrorCode value) {
    SetError(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Detailed message explaining the access denial Provides specific information
   * about why access was denied</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  AccessDeniedException& WithMessage(MessageT&& value) {
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
