/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/ValidationError.h>
#include <aws/partnercentral-account/model/ValidationExceptionReason.h>

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
 * <p>The request failed validation. One or more input parameters are invalid,
 * missing, or do not meet the required format or constraints.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/ValidationException">AWS
 * API Reference</a></p>
 */
class ValidationException {
 public:
  AWS_PARTNERCENTRALACCOUNT_API ValidationException() = default;
  AWS_PARTNERCENTRALACCOUNT_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

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

  ///@{
  /**
   * <p>The reason for the validation failure.</p>
   */
  inline ValidationExceptionReason GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  inline void SetReason(ValidationExceptionReason value) {
    m_reasonHasBeenSet = true;
    m_reason = value;
  }
  inline ValidationException& WithReason(ValidationExceptionReason value) {
    SetReason(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of detailed validation errors that occurred during request
   * processing.</p>
   */
  inline const Aws::Vector<ValidationError>& GetErrorDetails() const { return m_errorDetails; }
  inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
  template <typename ErrorDetailsT = Aws::Vector<ValidationError>>
  void SetErrorDetails(ErrorDetailsT&& value) {
    m_errorDetailsHasBeenSet = true;
    m_errorDetails = std::forward<ErrorDetailsT>(value);
  }
  template <typename ErrorDetailsT = Aws::Vector<ValidationError>>
  ValidationException& WithErrorDetails(ErrorDetailsT&& value) {
    SetErrorDetails(std::forward<ErrorDetailsT>(value));
    return *this;
  }
  template <typename ErrorDetailsT = ValidationError>
  ValidationException& AddErrorDetails(ErrorDetailsT&& value) {
    m_errorDetailsHasBeenSet = true;
    m_errorDetails.emplace_back(std::forward<ErrorDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;
  bool m_messageHasBeenSet = false;

  ValidationExceptionReason m_reason{ValidationExceptionReason::NOT_SET};
  bool m_reasonHasBeenSet = false;

  Aws::Vector<ValidationError> m_errorDetails;
  bool m_errorDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
