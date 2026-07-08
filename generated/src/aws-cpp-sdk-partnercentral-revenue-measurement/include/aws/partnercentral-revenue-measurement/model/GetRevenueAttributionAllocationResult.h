/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>
#include <aws/partnercentral-revenue-measurement/model/AllocationStatus.h>
#include <aws/partnercentral-revenue-measurement/model/EntityType.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace PartnerCentralRevenueMeasurement {
namespace Model {
class GetRevenueAttributionAllocationResult {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API GetRevenueAttributionAllocationResult() = default;
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API GetRevenueAttributionAllocationResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API GetRevenueAttributionAllocationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>Unique allocation identifier.</p>
   */
  inline const Aws::String& GetRevenueAttributionAllocationId() const { return m_revenueAttributionAllocationId; }
  template <typename RevenueAttributionAllocationIdT = Aws::String>
  void SetRevenueAttributionAllocationId(RevenueAttributionAllocationIdT&& value) {
    m_revenueAttributionAllocationIdHasBeenSet = true;
    m_revenueAttributionAllocationId = std::forward<RevenueAttributionAllocationIdT>(value);
  }
  template <typename RevenueAttributionAllocationIdT = Aws::String>
  GetRevenueAttributionAllocationResult& WithRevenueAttributionAllocationId(RevenueAttributionAllocationIdT&& value) {
    SetRevenueAttributionAllocationId(std::forward<RevenueAttributionAllocationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revenue attribution identifier.</p>
   */
  inline const Aws::String& GetRevenueAttributionIdentifier() const { return m_revenueAttributionIdentifier; }
  template <typename RevenueAttributionIdentifierT = Aws::String>
  void SetRevenueAttributionIdentifier(RevenueAttributionIdentifierT&& value) {
    m_revenueAttributionIdentifierHasBeenSet = true;
    m_revenueAttributionIdentifier = std::forward<RevenueAttributionIdentifierT>(value);
  }
  template <typename RevenueAttributionIdentifierT = Aws::String>
  GetRevenueAttributionAllocationResult& WithRevenueAttributionIdentifier(RevenueAttributionIdentifierT&& value) {
    SetRevenueAttributionIdentifier(std::forward<RevenueAttributionIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the associated deal entity.</p>
   */
  inline EntityType GetEntityType() const { return m_entityType; }
  inline void SetEntityType(EntityType value) {
    m_entityTypeHasBeenSet = true;
    m_entityType = value;
  }
  inline GetRevenueAttributionAllocationResult& WithEntityType(EntityType value) {
    SetEntityType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the associated deal entity.</p>
   */
  inline const Aws::String& GetEntityIdentifier() const { return m_entityIdentifier; }
  template <typename EntityIdentifierT = Aws::String>
  void SetEntityIdentifier(EntityIdentifierT&& value) {
    m_entityIdentifierHasBeenSet = true;
    m_entityIdentifier = std::forward<EntityIdentifierT>(value);
  }
  template <typename EntityIdentifierT = Aws::String>
  GetRevenueAttributionAllocationResult& WithEntityIdentifier(EntityIdentifierT&& value) {
    SetEntityIdentifier(std::forward<EntityIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the associated deal entity.</p>
   */
  inline const Aws::String& GetEntityName() const { return m_entityName; }
  template <typename EntityNameT = Aws::String>
  void SetEntityName(EntityNameT&& value) {
    m_entityNameHasBeenSet = true;
    m_entityName = std::forward<EntityNameT>(value);
  }
  template <typename EntityNameT = Aws::String>
  GetRevenueAttributionAllocationResult& WithEntityName(EntityNameT&& value) {
    SetEntityName(std::forward<EntityNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The customer AWS account ID for this associated deal entity.</p>
   */
  inline const Aws::String& GetCustomerAwsAccountId() const { return m_customerAwsAccountId; }
  template <typename CustomerAwsAccountIdT = Aws::String>
  void SetCustomerAwsAccountId(CustomerAwsAccountIdT&& value) {
    m_customerAwsAccountIdHasBeenSet = true;
    m_customerAwsAccountId = std::forward<CustomerAwsAccountIdT>(value);
  }
  template <typename CustomerAwsAccountIdT = Aws::String>
  GetRevenueAttributionAllocationResult& WithCustomerAwsAccountId(CustomerAwsAccountIdT&& value) {
    SetCustomerAwsAccountId(std::forward<CustomerAwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Revenue share percentage.</p>
   */
  inline const Aws::String& GetRevenueSharePercent() const { return m_revenueSharePercent; }
  template <typename RevenueSharePercentT = Aws::String>
  void SetRevenueSharePercent(RevenueSharePercentT&& value) {
    m_revenueSharePercentHasBeenSet = true;
    m_revenueSharePercent = std::forward<RevenueSharePercentT>(value);
  }
  template <typename RevenueSharePercentT = Aws::String>
  GetRevenueAttributionAllocationResult& WithRevenueSharePercent(RevenueSharePercentT&& value) {
    SetRevenueSharePercent(std::forward<RevenueSharePercentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>First day of the effective month.</p>
   */
  inline const Aws::String& GetEffectiveFrom() const { return m_effectiveFrom; }
  template <typename EffectiveFromT = Aws::String>
  void SetEffectiveFrom(EffectiveFromT&& value) {
    m_effectiveFromHasBeenSet = true;
    m_effectiveFrom = std::forward<EffectiveFromT>(value);
  }
  template <typename EffectiveFromT = Aws::String>
  GetRevenueAttributionAllocationResult& WithEffectiveFrom(EffectiveFromT&& value) {
    SetEffectiveFrom(std::forward<EffectiveFromT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Last day of the effective month.</p>
   */
  inline const Aws::String& GetEffectiveUntil() const { return m_effectiveUntil; }
  template <typename EffectiveUntilT = Aws::String>
  void SetEffectiveUntil(EffectiveUntilT&& value) {
    m_effectiveUntilHasBeenSet = true;
    m_effectiveUntil = std::forward<EffectiveUntilT>(value);
  }
  template <typename EffectiveUntilT = Aws::String>
  GetRevenueAttributionAllocationResult& WithEffectiveUntil(EffectiveUntilT&& value) {
    SetEffectiveUntil(std::forward<EffectiveUntilT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current allocation status.</p>
   */
  inline AllocationStatus GetStatus() const { return m_status; }
  inline void SetStatus(AllocationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetRevenueAttributionAllocationResult& WithStatus(AllocationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the allocation was first created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
  template <typename CreatedDateT = Aws::Utils::DateTime>
  void SetCreatedDate(CreatedDateT&& value) {
    m_createdDateHasBeenSet = true;
    m_createdDate = std::forward<CreatedDateT>(value);
  }
  template <typename CreatedDateT = Aws::Utils::DateTime>
  GetRevenueAttributionAllocationResult& WithCreatedDate(CreatedDateT&& value) {
    SetCreatedDate(std::forward<CreatedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the allocation was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
  template <typename LastModifiedDateT = Aws::Utils::DateTime>
  void SetLastModifiedDate(LastModifiedDateT&& value) {
    m_lastModifiedDateHasBeenSet = true;
    m_lastModifiedDate = std::forward<LastModifiedDateT>(value);
  }
  template <typename LastModifiedDateT = Aws::Utils::DateTime>
  GetRevenueAttributionAllocationResult& WithLastModifiedDate(LastModifiedDateT&& value) {
    SetLastModifiedDate(std::forward<LastModifiedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision of this allocation version.</p>
   */
  inline const Aws::String& GetRevenueAttributionRevision() const { return m_revenueAttributionRevision; }
  template <typename RevenueAttributionRevisionT = Aws::String>
  void SetRevenueAttributionRevision(RevenueAttributionRevisionT&& value) {
    m_revenueAttributionRevisionHasBeenSet = true;
    m_revenueAttributionRevision = std::forward<RevenueAttributionRevisionT>(value);
  }
  template <typename RevenueAttributionRevisionT = Aws::String>
  GetRevenueAttributionAllocationResult& WithRevenueAttributionRevision(RevenueAttributionRevisionT&& value) {
    SetRevenueAttributionRevision(std::forward<RevenueAttributionRevisionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The latest committed revision.</p>
   */
  inline const Aws::String& GetRevenueAttributionLatestRevision() const { return m_revenueAttributionLatestRevision; }
  template <typename RevenueAttributionLatestRevisionT = Aws::String>
  void SetRevenueAttributionLatestRevision(RevenueAttributionLatestRevisionT&& value) {
    m_revenueAttributionLatestRevisionHasBeenSet = true;
    m_revenueAttributionLatestRevision = std::forward<RevenueAttributionLatestRevisionT>(value);
  }
  template <typename RevenueAttributionLatestRevisionT = Aws::String>
  GetRevenueAttributionAllocationResult& WithRevenueAttributionLatestRevision(RevenueAttributionLatestRevisionT&& value) {
    SetRevenueAttributionLatestRevision(std::forward<RevenueAttributionLatestRevisionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetRevenueAttributionAllocationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

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

  Aws::Utils::DateTime m_createdDate{};

  Aws::Utils::DateTime m_lastModifiedDate{};

  Aws::String m_revenueAttributionRevision;

  Aws::String m_revenueAttributionLatestRevision;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
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
  bool m_createdDateHasBeenSet = false;
  bool m_lastModifiedDateHasBeenSet = false;
  bool m_revenueAttributionRevisionHasBeenSet = false;
  bool m_revenueAttributionLatestRevisionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
