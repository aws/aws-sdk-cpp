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
 * <p>Error thrown when request conflicts with current state</p> <p>HTTP Status
 * Code: 409 Conflict</p> <p>Used when the request conflicts with the current state
 * of the resource</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/ConflictException">AWS
 * API Reference</a></p>
 */
class ConflictException {
 public:
  AWS_SIGNIN_API ConflictException() = default;
  AWS_SIGNIN_API ConflictException(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNIN_API ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>OAuth 2.0 error code indicating conflict Will be CONFLICT</p>
   */
  inline OAuth2ErrorCode GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  inline void SetError(OAuth2ErrorCode value) {
    m_errorHasBeenSet = true;
    m_error = value;
  }
  inline ConflictException& WithError(OAuth2ErrorCode value) {
    SetError(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Detailed message explaining the conflict Provides specific information about
   * what caused the conflict</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ConflictException& WithMessage(MessageT&& value) {
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
