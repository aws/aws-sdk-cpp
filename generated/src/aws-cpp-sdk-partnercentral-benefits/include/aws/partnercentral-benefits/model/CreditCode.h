/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>
#include <aws/partnercentral-benefits/model/BenefitAllocationStatus.h>
#include <aws/partnercentral-benefits/model/MonetaryValue.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralBenefits {
namespace Model {

/**
 * <p>Represents an AWS credit code that can be applied to an AWS account for
 * billing purposes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/CreditCode">AWS
 * API Reference</a></p>
 */
class CreditCode {
 public:
  AWS_PARTNERCENTRALBENEFITS_API CreditCode() = default;
  AWS_PARTNERCENTRALBENEFITS_API CreditCode(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API CreditCode& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The AWS account ID that the credit code is associated with or can be applied
   * to.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  CreditCode& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The monetary value of the credit code.</p>
   */
  inline const MonetaryValue& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = MonetaryValue>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = MonetaryValue>
  CreditCode& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The actual credit code string that can be redeemed in the AWS billing
   * console.</p>
   */
  inline const Aws::String& GetAwsCreditCode() const { return m_awsCreditCode; }
  inline bool AwsCreditCodeHasBeenSet() const { return m_awsCreditCodeHasBeenSet; }
  template <typename AwsCreditCodeT = Aws::String>
  void SetAwsCreditCode(AwsCreditCodeT&& value) {
    m_awsCreditCodeHasBeenSet = true;
    m_awsCreditCode = std::forward<AwsCreditCodeT>(value);
  }
  template <typename AwsCreditCodeT = Aws::String>
  CreditCode& WithAwsCreditCode(AwsCreditCodeT&& value) {
    SetAwsCreditCode(std::forward<AwsCreditCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the credit code (e.g., active, redeemed, expired).</p>
   */
  inline BenefitAllocationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(BenefitAllocationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreditCode& WithStatus(BenefitAllocationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the credit code was issued.</p>
   */
  inline const Aws::Utils::DateTime& GetIssuedAt() const { return m_issuedAt; }
  inline bool IssuedAtHasBeenSet() const { return m_issuedAtHasBeenSet; }
  template <typename IssuedAtT = Aws::Utils::DateTime>
  void SetIssuedAt(IssuedAtT&& value) {
    m_issuedAtHasBeenSet = true;
    m_issuedAt = std::forward<IssuedAtT>(value);
  }
  template <typename IssuedAtT = Aws::Utils::DateTime>
  CreditCode& WithIssuedAt(IssuedAtT&& value) {
    SetIssuedAt(std::forward<IssuedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the credit code expires and can no longer be redeemed.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  CreditCode& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;
  bool m_awsAccountIdHasBeenSet = false;

  MonetaryValue m_value;
  bool m_valueHasBeenSet = false;

  Aws::String m_awsCreditCode;
  bool m_awsCreditCodeHasBeenSet = false;

  BenefitAllocationStatus m_status{BenefitAllocationStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::Utils::DateTime m_issuedAt{};
  bool m_issuedAtHasBeenSet = false;

  Aws::Utils::DateTime m_expiresAt{};
  bool m_expiresAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
