/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/BusinessValidationError.h>
#include <aws/partnercentral-account/model/FieldValidationError.h>

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
 * <p>Contains information about a validation error, which can be either a
 * field-level or business rule validation error.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/ValidationError">AWS
 * API Reference</a></p>
 */
class ValidationError {
 public:
  AWS_PARTNERCENTRALACCOUNT_API ValidationError() = default;
  AWS_PARTNERCENTRALACCOUNT_API ValidationError(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API ValidationError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Details about a field-level validation error, if applicable.</p>
   */
  inline const FieldValidationError& GetFieldValidationError() const { return m_fieldValidationError; }
  inline bool FieldValidationErrorHasBeenSet() const { return m_fieldValidationErrorHasBeenSet; }
  template <typename FieldValidationErrorT = FieldValidationError>
  void SetFieldValidationError(FieldValidationErrorT&& value) {
    m_fieldValidationErrorHasBeenSet = true;
    m_fieldValidationError = std::forward<FieldValidationErrorT>(value);
  }
  template <typename FieldValidationErrorT = FieldValidationError>
  ValidationError& WithFieldValidationError(FieldValidationErrorT&& value) {
    SetFieldValidationError(std::forward<FieldValidationErrorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about a business rule validation error, if applicable.</p>
   */
  inline const BusinessValidationError& GetBusinessValidationError() const { return m_businessValidationError; }
  inline bool BusinessValidationErrorHasBeenSet() const { return m_businessValidationErrorHasBeenSet; }
  template <typename BusinessValidationErrorT = BusinessValidationError>
  void SetBusinessValidationError(BusinessValidationErrorT&& value) {
    m_businessValidationErrorHasBeenSet = true;
    m_businessValidationError = std::forward<BusinessValidationErrorT>(value);
  }
  template <typename BusinessValidationErrorT = BusinessValidationError>
  ValidationError& WithBusinessValidationError(BusinessValidationErrorT&& value) {
    SetBusinessValidationError(std::forward<BusinessValidationErrorT>(value));
    return *this;
  }
  ///@}
 private:
  FieldValidationError m_fieldValidationError;
  bool m_fieldValidationErrorHasBeenSet = false;

  BusinessValidationError m_businessValidationError;
  bool m_businessValidationErrorHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
