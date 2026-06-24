/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>Contains information about an error that occurred for a specific security
 * requirement during a batch operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchSecurityRequirementError">AWS
 * API Reference</a></p>
 */
class BatchSecurityRequirementError {
 public:
  AWS_SECURITYAGENT_API BatchSecurityRequirementError() = default;
  AWS_SECURITYAGENT_API BatchSecurityRequirementError(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API BatchSecurityRequirementError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the security requirement that caused the error.</p>
   */
  inline const Aws::String& GetSecurityRequirementName() const { return m_securityRequirementName; }
  inline bool SecurityRequirementNameHasBeenSet() const { return m_securityRequirementNameHasBeenSet; }
  template <typename SecurityRequirementNameT = Aws::String>
  void SetSecurityRequirementName(SecurityRequirementNameT&& value) {
    m_securityRequirementNameHasBeenSet = true;
    m_securityRequirementName = std::forward<SecurityRequirementNameT>(value);
  }
  template <typename SecurityRequirementNameT = Aws::String>
  BatchSecurityRequirementError& WithSecurityRequirementName(SecurityRequirementNameT&& value) {
    SetSecurityRequirementName(std::forward<SecurityRequirementNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error code.</p>
   */
  inline const Aws::String& GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  template <typename CodeT = Aws::String>
  void SetCode(CodeT&& value) {
    m_codeHasBeenSet = true;
    m_code = std::forward<CodeT>(value);
  }
  template <typename CodeT = Aws::String>
  BatchSecurityRequirementError& WithCode(CodeT&& value) {
    SetCode(std::forward<CodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error message.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  BatchSecurityRequirementError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_securityRequirementName;

  Aws::String m_code;

  Aws::String m_message;
  bool m_securityRequirementNameHasBeenSet = false;
  bool m_codeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
