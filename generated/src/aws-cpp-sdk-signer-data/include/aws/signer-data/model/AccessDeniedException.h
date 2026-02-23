/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signer-data/SignerData_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SignerData {
namespace Model {

/**
 * <p>You do not have sufficient permissions to perform this action.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signer-data-2017-08-25/AccessDeniedException">AWS
 * API Reference</a></p>
 */
class AccessDeniedException {
 public:
  AWS_SIGNERDATA_API AccessDeniedException() = default;
  AWS_SIGNERDATA_API AccessDeniedException(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNERDATA_API AccessDeniedException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNERDATA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

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

  ///@{

  inline const Aws::String& GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  template <typename CodeT = Aws::String>
  void SetCode(CodeT&& value) {
    m_codeHasBeenSet = true;
    m_code = std::forward<CodeT>(value);
  }
  template <typename CodeT = Aws::String>
  AccessDeniedException& WithCode(CodeT&& value) {
    SetCode(std::forward<CodeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  Aws::String m_code;
  bool m_messageHasBeenSet = false;
  bool m_codeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SignerData
}  // namespace Aws
