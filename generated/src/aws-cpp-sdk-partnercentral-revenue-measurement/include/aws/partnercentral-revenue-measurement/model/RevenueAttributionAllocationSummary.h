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
 * <p>Summary information about a revenue attribution allocation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/RevenueAttributionAllocationSummary">AWS
 * API Reference</a></p>
 */
class RevenueAttributionAllocationSummary {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API RevenueAttributionAllocationSummary() = default;
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API RevenueAttributionAllocationSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API RevenueAttributionAllocationSummary& operator=(
      const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Unique allocation identifier.</p>
   */
  inline const Aws::String& GetRevenueAttributionAllocationId() const { return m_revenueAttributionAllocationId; }
  inline bool RevenueAttributionAllocationIdHasBeenSet() const { return m_revenueAttributionAllocationIdHasBeenSet; }
  template <typename RevenueAttributionAllocationIdT = Aws::String>
  void SetRevenueAttributionAllocationId(RevenueAttributionAllocationIdT&& value) {
    m_revenueAttributionAllocationIdHasBeenSet = true;
    m_revenueAttributionAllocationId = std::forward<RevenueAttributionAllocationIdT>(value);
  }
  template <typename RevenueAttributionAllocationIdT = Aws::String>
  RevenueAttributionAllocationSummary& WithRevenueAttributionAllocationId(RevenueAttributionAllocationIdT&& value) {
    SetRevenueAttributionAllocationId(std::forward<RevenueAttributionAllocationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revenue attribution identifier.</p>
   */
  inline const Aws::String& GetRevenueAttributionIdentifier() const { return m_revenueAttributionIdentifier; }
  inline bool RevenueAttributionIdentifierHasBeenSet() const { return m_revenueAttributionIdentifierHasBeenSet; }
  template <typename RevenueAttributionIdentifierT = Aws::String>
  void SetRevenueAttributionIdentifier(RevenueAttributionIdentifierT&& value) {
    m_revenueAttributionIdentifierHasBeenSet = true;
    m_revenueAttributionIdentifier = std::forward<RevenueAttributionIdentifierT>(value);
  }
  template <typename RevenueAttributionIdentifierT = Aws::String>
  RevenueAttributionAllocationSummary& WithRevenueAttributionIdentifier(RevenueAttributionIdentifierT&& value) {
    SetRevenueAttributionIdentifier(std::forward<RevenueAttributionIdentifierT>(value));
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
  inline RevenueAttributionAllocationSummary& WithEntityType(EntityType value) {
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
  RevenueAttributionAllocationSummary& WithEntityIdentifier(EntityIdentifierT&& value) {
    SetEntityIdentifier(std::forward<EntityIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the associated deal entity.</p>
   */
  inline const Aws::String& GetEntityName() const { return m_entityName; }
  inline bool EntityNameHasBeenSet() const { return m_entityNameHasBeenSet; }
  template <typename EntityNameT = Aws::String>
  void SetEntityName(EntityNameT&& value) {
    m_entityNameHasBeenSet = true;
    m_entityName = std::forward<EntityNameT>(value);
  }
  template <typename EntityNameT = Aws::String>
  RevenueAttributionAllocationSummary& WithEntityName(EntityNameT&& value) {
    SetEntityName(std::forward<EntityNameT>(value));
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
  RevenueAttributionAllocationSummary& WithCustomerAwsAccountId(CustomerAwsAccountIdT&& value) {
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
  RevenueAttributionAllocationSummary& WithRevenueSharePercent(RevenueSharePercentT&& value) {
    SetRevenueSharePercent(std::forward<RevenueSharePercentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>First day of the effective month.</p>
   */
  inline const Aws::String& GetEffectiveFrom() const { return m_effectiveFrom; }
  inline bool EffectiveFromHasBeenSet() const { return m_effectiveFromHasBeenSet; }
  template <typename EffectiveFromT = Aws::String>
  void SetEffectiveFrom(EffectiveFromT&& value) {
    m_effectiveFromHasBeenSet = true;
    m_effectiveFrom = std::forward<EffectiveFromT>(value);
  }
  template <typename EffectiveFromT = Aws::String>
  RevenueAttributionAllocationSummary& WithEffectiveFrom(EffectiveFromT&& value) {
    SetEffectiveFrom(std::forward<EffectiveFromT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Last day of the effective month.</p>
   */
  inline const Aws::String& GetEffectiveUntil() const { return m_effectiveUntil; }
  inline bool EffectiveUntilHasBeenSet() const { return m_effectiveUntilHasBeenSet; }
  template <typename EffectiveUntilT = Aws::String>
  void SetEffectiveUntil(EffectiveUntilT&& value) {
    m_effectiveUntilHasBeenSet = true;
    m_effectiveUntil = std::forward<EffectiveUntilT>(value);
  }
  template <typename EffectiveUntilT = Aws::String>
  RevenueAttributionAllocationSummary& WithEffectiveUntil(EffectiveUntilT&& value) {
    SetEffectiveUntil(std::forward<EffectiveUntilT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current allocation status.</p>
   */
  inline AllocationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AllocationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RevenueAttributionAllocationSummary& WithStatus(AllocationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_revenueAttributionAllocationId;

  Aws::String m_revenueAttributionIdentifier;

  EntityType m_entityType{EntityType::NOT_SET};

  Aws::String m_entityIdentifier;

  Aws::String m_entityName;

  Aws::String m_customerAwsAccountId;

  Aws::String m_revenueSharePercent;

  Aws::String m_effectiveFrom;

  Aws::String m_effectiveUntil;

  AllocationStatus m_status{AllocationStatus::NOT_SET};
  bool m_revenueAttributionAllocationIdHasBeenSet = false;
  bool m_revenueAttributionIdentifierHasBeenSet = false;
  bool m_entityTypeHasBeenSet = false;
  bool m_entityIdentifierHasBeenSet = false;
  bool m_entityNameHasBeenSet = false;
  bool m_customerAwsAccountIdHasBeenSet = false;
  bool m_revenueSharePercentHasBeenSet = false;
  bool m_effectiveFromHasBeenSet = false;
  bool m_effectiveUntilHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
