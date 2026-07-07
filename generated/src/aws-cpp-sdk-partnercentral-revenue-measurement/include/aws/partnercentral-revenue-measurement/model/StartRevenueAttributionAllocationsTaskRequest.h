/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementRequest.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>
#include <aws/partnercentral-revenue-measurement/model/CatalogName.h>
#include <aws/partnercentral-revenue-measurement/model/RevenueShareAllocation.h>

#include <utility>

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {

/**
 */
class StartRevenueAttributionAllocationsTaskRequest : public PartnerCentralRevenueMeasurementRequest {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API StartRevenueAttributionAllocationsTaskRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartRevenueAttributionAllocationsTask"; }

  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog context for this operation.</p>
   */
  inline CatalogName GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  inline void SetCatalog(CatalogName value) {
    m_catalogHasBeenSet = true;
    m_catalog = value;
  }
  inline StartRevenueAttributionAllocationsTaskRequest& WithCatalog(CatalogName value) {
    SetCatalog(value);
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
  StartRevenueAttributionAllocationsTaskRequest& WithRevenueAttributionIdentifier(RevenueAttributionIdentifierT&& value) {
    SetRevenueAttributionIdentifier(std::forward<RevenueAttributionIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current revision of the revenue attribution for optimistic locking.</p>
   */
  inline const Aws::String& GetRevenueAttributionRevision() const { return m_revenueAttributionRevision; }
  inline bool RevenueAttributionRevisionHasBeenSet() const { return m_revenueAttributionRevisionHasBeenSet; }
  template <typename RevenueAttributionRevisionT = Aws::String>
  void SetRevenueAttributionRevision(RevenueAttributionRevisionT&& value) {
    m_revenueAttributionRevisionHasBeenSet = true;
    m_revenueAttributionRevision = std::forward<RevenueAttributionRevisionT>(value);
  }
  template <typename RevenueAttributionRevisionT = Aws::String>
  StartRevenueAttributionAllocationsTaskRequest& WithRevenueAttributionRevision(RevenueAttributionRevisionT&& value) {
    SetRevenueAttributionRevision(std::forward<RevenueAttributionRevisionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of allocation changes to process in this batch.</p>
   */
  inline const Aws::Vector<RevenueShareAllocation>& GetRevenueShareAllocations() const { return m_revenueShareAllocations; }
  inline bool RevenueShareAllocationsHasBeenSet() const { return m_revenueShareAllocationsHasBeenSet; }
  template <typename RevenueShareAllocationsT = Aws::Vector<RevenueShareAllocation>>
  void SetRevenueShareAllocations(RevenueShareAllocationsT&& value) {
    m_revenueShareAllocationsHasBeenSet = true;
    m_revenueShareAllocations = std::forward<RevenueShareAllocationsT>(value);
  }
  template <typename RevenueShareAllocationsT = Aws::Vector<RevenueShareAllocation>>
  StartRevenueAttributionAllocationsTaskRequest& WithRevenueShareAllocations(RevenueShareAllocationsT&& value) {
    SetRevenueShareAllocations(std::forward<RevenueShareAllocationsT>(value));
    return *this;
  }
  template <typename RevenueShareAllocationsT = RevenueShareAllocation>
  StartRevenueAttributionAllocationsTaskRequest& AddRevenueShareAllocations(RevenueShareAllocationsT&& value) {
    m_revenueShareAllocationsHasBeenSet = true;
    m_revenueShareAllocations.emplace_back(std::forward<RevenueShareAllocationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Idempotency token for deduplication and retry.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartRevenueAttributionAllocationsTaskRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Human-readable description of the batch.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  StartRevenueAttributionAllocationsTaskRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  CatalogName m_catalog{CatalogName::NOT_SET};

  Aws::String m_revenueAttributionIdentifier;

  Aws::String m_revenueAttributionRevision;

  Aws::Vector<RevenueShareAllocation> m_revenueShareAllocations;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_description;
  bool m_catalogHasBeenSet = false;
  bool m_revenueAttributionIdentifierHasBeenSet = false;
  bool m_revenueAttributionRevisionHasBeenSet = false;
  bool m_revenueShareAllocationsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
