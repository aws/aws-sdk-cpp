/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/BusinessValidationCode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralAccount {
namespace Model {

/**
 * <p>Contains information about a business rule validation error that occurred
 * during an operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/BusinessValidationError">AWS
 * API Reference</a></p>
 */
class BusinessValidationError {
 public:
  AWS_PARTNERCENTRALACCOUNT_API BusinessValidationError() = default;
  AWS_PARTNERCENTRALACCOUNT_API BusinessValidationError(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API BusinessValidationError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A description of the business validation error.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  BusinessValidationError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A code identifying the specific business validation error.</p>
   */
  inline BusinessValidationCode GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(BusinessValidationCode value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline BusinessValidationError& WithCode(BusinessValidationCode value) {
    SetCode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;
  bool m_messageHasBeenSet = false;

  BusinessValidationCode m_code{BusinessValidationCode::NOT_SET};
  bool m_codeHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
