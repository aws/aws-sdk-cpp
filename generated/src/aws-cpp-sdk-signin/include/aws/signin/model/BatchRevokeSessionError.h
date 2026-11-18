/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signin/Signin_EXPORTS.h>

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
 * <p>A session that could not be revoked</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/BatchRevokeSessionError">AWS
 * API Reference</a></p>
 */
class BatchRevokeSessionError {
 public:
  AWS_SIGNIN_API BatchRevokeSessionError() = default;
  AWS_SIGNIN_API BatchRevokeSessionError(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNIN_API BatchRevokeSessionError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The session ARN</p>
   */
  inline const Aws::String& GetSessionArn() const { return m_sessionArn; }
  inline bool SessionArnHasBeenSet() const { return m_sessionArnHasBeenSet; }
  template <typename SessionArnT = Aws::String>
  void SetSessionArn(SessionArnT&& value) {
    m_sessionArnHasBeenSet = true;
    m_sessionArn = std::forward<SessionArnT>(value);
  }
  template <typename SessionArnT = Aws::String>
  BatchRevokeSessionError& WithSessionArn(SessionArnT&& value) {
    SetSessionArn(std::forward<SessionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error code</p>
   */
  inline const Aws::String& GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  template <typename CodeT = Aws::String>
  void SetCode(CodeT&& value) {
    m_codeHasBeenSet = true;
    m_code = std::forward<CodeT>(value);
  }
  template <typename CodeT = Aws::String>
  BatchRevokeSessionError& WithCode(CodeT&& value) {
    SetCode(std::forward<CodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error message</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  BatchRevokeSessionError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sessionArn;

  Aws::String m_code;

  Aws::String m_message;
  bool m_sessionArnHasBeenSet = false;
  bool m_codeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
