/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>
#include <aws/partnercentral-revenue-measurement/model/AllocationStatus.h>
#include <aws/partnercentral-revenue-measurement/model/EntityType.h>
#include <aws/partnercentral-revenue-measurement/model/RevenueAttributionAllocationAction.h>

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
 * <p>A single allocation change within a batch request.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/RevenueShareAllocation">AWS
 * API Reference</a></p>
 */
class RevenueShareAllocation {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API RevenueShareAllocation() = default;
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API RevenueShareAllocation(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API RevenueShareAllocation& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The operation type: CREATE or UPDATE.</p>
   */
  inline RevenueAttributionAllocationAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(RevenueAttributionAllocationAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline RevenueShareAllocation& WithAction(RevenueAttributionAllocationAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The allocation to update. Required when Action is UPDATE.</p>
   */
  inline const Aws::String& GetRevenueAttributionAllocationId() const { return m_revenueAttributionAllocationId; }
  inline bool RevenueAttributionAllocationIdHasBeenSet() const { return m_revenueAttributionAllocationIdHasBeenSet; }
  template <typename RevenueAttributionAllocationIdT = Aws::String>
  void SetRevenueAttributionAllocationId(RevenueAttributionAllocationIdT&& value) {
    m_revenueAttributionAllocationIdHasBeenSet = true;
    m_revenueAttributionAllocationId = std::forward<RevenueAttributionAllocationIdT>(value);
  }
  template <typename RevenueAttributionAllocationIdT = Aws::String>
  RevenueShareAllocation& WithRevenueAttributionAllocationId(RevenueAttributionAllocationIdT&& value) {
    SetRevenueAttributionAllocationId(std::forward<RevenueAttributionAllocationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the associated deal entity.</p>
   */
  inline EntityType GetEntityType() const { return m_entityType; }
  inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
  inline void SetEntityType(EntityType value) {
    m_entityTypeHasBeenSet = true;
    m_entityType = value;
  }
  inline RevenueShareAllocation& WithEntityType(EntityType value) {
    SetEntityType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the associated deal entity.</p>
   */
  inline const Aws::String& GetEntityIdentifier() const { return m_entityIdentifier; }
  inline bool EntityIdentifierHasBeenSet() const { return m_entityIdentifierHasBeenSet; }
  template <typename EntityIdentifierT = Aws::String>
  void SetEntityIdentifier(EntityIdentifierT&& value) {
    m_entityIdentifierHasBeenSet = true;
    m_entityIdentifier = std::forward<EntityIdentifierT>(value);
  }
  template <typename EntityIdentifierT = Aws::String>
  RevenueShareAllocation& WithEntityIdentifier(EntityIdentifierT&& value) {
    SetEntityIdentifier(std::forward<EntityIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The customer AWS account ID for this associated deal entity.</p>
   */
  inline const Aws::String& GetCustomerAwsAccountId() const { return m_customerAwsAccountId; }
  inline bool CustomerAwsAccountIdHasBeenSet() const { return m_customerAwsAccountIdHasBeenSet; }
  template <typename CustomerAwsAccountIdT = Aws::String>
  void SetCustomerAwsAccountId(CustomerAwsAccountIdT&& value) {
    m_customerAwsAccountIdHasBeenSet = true;
    m_customerAwsAccountId = std::forward<CustomerAwsAccountIdT>(value);
  }
  template <typename CustomerAwsAccountIdT = Aws::String>
  RevenueShareAllocation& WithCustomerAwsAccountId(CustomerAwsAccountIdT&& value) {
    SetCustomerAwsAccountId(std::forward<CustomerAwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Revenue share percentage.</p>
   */
  inline const Aws::String& GetRevenueSharePercent() const { return m_revenueSharePercent; }
  inline bool RevenueSharePercentHasBeenSet() const { return m_revenueSharePercentHasBeenSet; }
  template <typename RevenueSharePercentT = Aws::String>
  void SetRevenueSharePercent(RevenueSharePercentT&& value) {
    m_revenueSharePercentHasBeenSet = true;
    m_revenueSharePercent = std::forward<RevenueSharePercentT>(value);
  }
  template <typename RevenueSharePercentT = Aws::String>
  RevenueShareAllocation& WithRevenueSharePercent(RevenueSharePercentT&& value) {
    SetRevenueSharePercent(std::forward<RevenueSharePercentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effective start date for this allocation.</p>
   */
  inline const Aws::String& GetEffectiveFrom() const { return m_effectiveFrom; }
  inline bool EffectiveFromHasBeenSet() const { return m_effectiveFromHasBeenSet; }
  template <typename EffectiveFromT = Aws::String>
  void SetEffectiveFrom(EffectiveFromT&& value) {
    m_effectiveFromHasBeenSet = true;
    m_effectiveFrom = std::forward<EffectiveFromT>(value);
  }
  template <typename EffectiveFromT = Aws::String>
  RevenueShareAllocation& WithEffectiveFrom(EffectiveFromT&& value) {
    SetEffectiveFrom(std::forward<EffectiveFromT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effective end date for this allocation.</p>
   */
  inline const Aws::String& GetEffectiveUntil() const { return m_effectiveUntil; }
  inline bool EffectiveUntilHasBeenSet() const { return m_effectiveUntilHasBeenSet; }
  template <typename EffectiveUntilT = Aws::String>
  void SetEffectiveUntil(EffectiveUntilT&& value) {
    m_effectiveUntilHasBeenSet = true;
    m_effectiveUntil = std::forward<EffectiveUntilT>(value);
  }
  template <typename EffectiveUntilT = Aws::String>
  RevenueShareAllocation& WithEffectiveUntil(EffectiveUntilT&& value) {
    SetEffectiveUntil(std::forward<EffectiveUntilT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Allocation status. Defaults to ACTIVE on CREATE.</p>
   */
  inline AllocationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AllocationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RevenueShareAllocation& WithStatus(AllocationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  RevenueAttributionAllocationAction m_action{RevenueAttributionAllocationAction::NOT_SET};

  Aws::String m_revenueAttributionAllocationId;

  EntityType m_entityType{EntityType::NOT_SET};

  Aws::String m_entityIdentifier;

  Aws::String m_customerAwsAccountId;

  Aws::String m_revenueSharePercent;

  Aws::String m_effectiveFrom;

  Aws::String m_effectiveUntil;

  AllocationStatus m_status{AllocationStatus::NOT_SET};
  bool m_actionHasBeenSet = false;
  bool m_revenueAttributionAllocationIdHasBeenSet = false;
  bool m_entityTypeHasBeenSet = false;
  bool m_entityIdentifierHasBeenSet = false;
  bool m_customerAwsAccountIdHasBeenSet = false;
  bool m_revenueSharePercentHasBeenSet = false;
  bool m_effectiveFromHasBeenSet = false;
  bool m_effectiveUntilHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
