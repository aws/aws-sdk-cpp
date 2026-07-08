/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>
#include <aws/partnercentral-revenue-measurement/model/EntityType.h>
#include <aws/partnercentral-revenue-measurement/model/RevenueAttributionAllocationAction.h>
#include <aws/partnercentral-revenue-measurement/model/RevenueAttributionAllocationErrorCode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace PartnerCentralRevenueMeasurement {
namespace Model {

/**
 * <p>Details of a validation error for a single revenue attribution allocation
 * record.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/RevenueAttributionAllocationErrorDetail">AWS
 * API Reference</a></p>
 */
class RevenueAttributionAllocationErrorDetail {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API RevenueAttributionAllocationErrorDetail() = default;
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API RevenueAttributionAllocationErrorDetail(
      const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API RevenueAttributionAllocationErrorDetail& operator=(
      const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The allocation identifier. Present for UPDATE actions; absent for CREATE
   * actions.</p>
   */
  inline const Aws::String& GetRevenueAttributionAllocationId() const { return m_revenueAttributionAllocationId; }
  inline bool RevenueAttributionAllocationIdHasBeenSet() const { return m_revenueAttributionAllocationIdHasBeenSet; }
  template <typename RevenueAttributionAllocationIdT = Aws::String>
  void SetRevenueAttributionAllocationId(RevenueAttributionAllocationIdT&& value) {
    m_revenueAttributionAllocationIdHasBeenSet = true;
    m_revenueAttributionAllocationId = std::forward<RevenueAttributionAllocationIdT>(value);
  }
  template <typename RevenueAttributionAllocationIdT = Aws::String>
  RevenueAttributionAllocationErrorDetail& WithRevenueAttributionAllocationId(RevenueAttributionAllocationIdT&& value) {
    SetRevenueAttributionAllocationId(std::forward<RevenueAttributionAllocationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The deal entity type of the failing record.</p>
   */
  inline EntityType GetEntityType() const { return m_entityType; }
  inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
  inline void SetEntityType(EntityType value) {
    m_entityTypeHasBeenSet = true;
    m_entityType = value;
  }
  inline RevenueAttributionAllocationErrorDetail& WithEntityType(EntityType value) {
    SetEntityType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The deal entity identifier of the failing record.</p>
   */
  inline const Aws::String& GetEntityId() const { return m_entityId; }
  inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
  template <typename EntityIdT = Aws::String>
  void SetEntityId(EntityIdT&& value) {
    m_entityIdHasBeenSet = true;
    m_entityId = std::forward<EntityIdT>(value);
  }
  template <typename EntityIdT = Aws::String>
  RevenueAttributionAllocationErrorDetail& WithEntityId(EntityIdT&& value) {
    SetEntityId(std::forward<EntityIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The customer AWS account ID of the failing record.</p>
   */
  inline const Aws::String& GetCustomerAwsAccountId() const { return m_customerAwsAccountId; }
  inline bool CustomerAwsAccountIdHasBeenSet() const { return m_customerAwsAccountIdHasBeenSet; }
  template <typename CustomerAwsAccountIdT = Aws::String>
  void SetCustomerAwsAccountId(CustomerAwsAccountIdT&& value) {
    m_customerAwsAccountIdHasBeenSet = true;
    m_customerAwsAccountId = std::forward<CustomerAwsAccountIdT>(value);
  }
  template <typename CustomerAwsAccountIdT = Aws::String>
  RevenueAttributionAllocationErrorDetail& WithCustomerAwsAccountId(CustomerAwsAccountIdT&& value) {
    SetCustomerAwsAccountId(std::forward<CustomerAwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Effective start date of the failing record.</p>
   */
  inline const Aws::String& GetEffectiveFrom() const { return m_effectiveFrom; }
  inline bool EffectiveFromHasBeenSet() const { return m_effectiveFromHasBeenSet; }
  template <typename EffectiveFromT = Aws::String>
  void SetEffectiveFrom(EffectiveFromT&& value) {
    m_effectiveFromHasBeenSet = true;
    m_effectiveFrom = std::forward<EffectiveFromT>(value);
  }
  template <typename EffectiveFromT = Aws::String>
  RevenueAttributionAllocationErrorDetail& WithEffectiveFrom(EffectiveFromT&& value) {
    SetEffectiveFrom(std::forward<EffectiveFromT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Effective end date of the failing record.</p>
   */
  inline const Aws::String& GetEffectiveUntil() const { return m_effectiveUntil; }
  inline bool EffectiveUntilHasBeenSet() const { return m_effectiveUntilHasBeenSet; }
  template <typename EffectiveUntilT = Aws::String>
  void SetEffectiveUntil(EffectiveUntilT&& value) {
    m_effectiveUntilHasBeenSet = true;
    m_effectiveUntil = std::forward<EffectiveUntilT>(value);
  }
  template <typename EffectiveUntilT = Aws::String>
  RevenueAttributionAllocationErrorDetail& WithEffectiveUntil(EffectiveUntilT&& value) {
    SetEffectiveUntil(std::forward<EffectiveUntilT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action that was attempted.</p>
   */
  inline RevenueAttributionAllocationAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(RevenueAttributionAllocationAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline RevenueAttributionAllocationErrorDetail& WithAction(RevenueAttributionAllocationAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Machine-readable error code.</p>
   */
  inline RevenueAttributionAllocationErrorCode GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  inline void SetErrorCode(RevenueAttributionAllocationErrorCode value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = value;
  }
  inline RevenueAttributionAllocationErrorDetail& WithErrorCode(RevenueAttributionAllocationErrorCode value) {
    SetErrorCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Human-readable error description.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  RevenueAttributionAllocationErrorDetail& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_revenueAttributionAllocationId;

  EntityType m_entityType{EntityType::NOT_SET};

  Aws::String m_entityId;

  Aws::String m_customerAwsAccountId;

  Aws::String m_effectiveFrom;

  Aws::String m_effectiveUntil;

  RevenueAttributionAllocationAction m_action{RevenueAttributionAllocationAction::NOT_SET};

  RevenueAttributionAllocationErrorCode m_errorCode{RevenueAttributionAllocationErrorCode::NOT_SET};

  Aws::String m_errorMessage;
  bool m_revenueAttributionAllocationIdHasBeenSet = false;
  bool m_entityTypeHasBeenSet = false;
  bool m_entityIdHasBeenSet = false;
  bool m_customerAwsAccountIdHasBeenSet = false;
  bool m_effectiveFromHasBeenSet = false;
  bool m_effectiveUntilHasBeenSet = false;
  bool m_actionHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
