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
 * <p>Error thrown when rate limit is exceeded</p> <p>HTTP Status Code: 429 Too
 * Many Requests</p> <p>Possible OAuth2ErrorCode values:</p> <ul>
 * <li>INVALID_REQUEST: Rate limiting, too many requests, abuse prevention</li>
 * </ul> <p>Possible causes:</p> <ul> <li>Too many token requests from the same
 * client</li> <li>Rate limiting based on client_id or IP address</li> <li>Abuse
 * prevention mechanisms triggered</li> <li>Service protection against excessive
 * token generation</li> </ul><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/TooManyRequestsError">AWS
 * API Reference</a></p>
 */
class TooManyRequestsError {
 public:
  AWS_SIGNIN_API TooManyRequestsError() = default;
  AWS_SIGNIN_API TooManyRequestsError(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNIN_API TooManyRequestsError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>OAuth 2.0 error code indicating the specific type of error Will be
   * INVALID_REQUEST for rate limiting scenarios</p>
   */
  inline OAuth2ErrorCode GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  inline void SetError(OAuth2ErrorCode value) {
    m_errorHasBeenSet = true;
    m_error = value;
  }
  inline TooManyRequestsError& WithError(OAuth2ErrorCode value) {
    SetError(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Detailed message about the rate limiting May include retry-after information
   * or rate limit details</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  TooManyRequestsError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  OAuth2ErrorCode m_error{OAuth2ErrorCode::NOT_SET};
  bool m_errorHasBeenSet = false;

  Aws::String m_message;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
