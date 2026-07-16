/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementRequest.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>
#include <aws/partnercentral-revenue-measurement/model/CatalogName.h>

#include <utility>

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {

/**
 */
class GetRevenueAttributionAllocationRequest : public PartnerCentralRevenueMeasurementRequest {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API GetRevenueAttributionAllocationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetRevenueAttributionAllocation"; }

  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog that contains the resource.</p>
   */
  inline CatalogName GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  inline void SetCatalog(CatalogName value) {
    m_catalogHasBeenSet = true;
    m_catalog = value;
  }
  inline GetRevenueAttributionAllocationRequest& WithCatalog(CatalogName value) {
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
  GetRevenueAttributionAllocationRequest& WithRevenueAttributionIdentifier(RevenueAttributionIdentifierT&& value) {
    SetRevenueAttributionIdentifier(std::forward<RevenueAttributionIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The allocation identifier.</p>
   */
  inline const Aws::String& GetRevenueAttributionAllocationId() const { return m_revenueAttributionAllocationId; }
  inline bool RevenueAttributionAllocationIdHasBeenSet() const { return m_revenueAttributionAllocationIdHasBeenSet; }
  template <typename RevenueAttributionAllocationIdT = Aws::String>
  void SetRevenueAttributionAllocationId(RevenueAttributionAllocationIdT&& value) {
    m_revenueAttributionAllocationIdHasBeenSet = true;
    m_revenueAttributionAllocationId = std::forward<RevenueAttributionAllocationIdT>(value);
  }
  template <typename RevenueAttributionAllocationIdT = Aws::String>
  GetRevenueAttributionAllocationRequest& WithRevenueAttributionAllocationId(RevenueAttributionAllocationIdT&& value) {
    SetRevenueAttributionAllocationId(std::forward<RevenueAttributionAllocationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Point-in-time revision number to query.</p>
   */
  inline const Aws::String& GetRevenueAttributionRevision() const { return m_revenueAttributionRevision; }
  inline bool RevenueAttributionRevisionHasBeenSet() const { return m_revenueAttributionRevisionHasBeenSet; }
  template <typename RevenueAttributionRevisionT = Aws::String>
  void SetRevenueAttributionRevision(RevenueAttributionRevisionT&& value) {
    m_revenueAttributionRevisionHasBeenSet = true;
    m_revenueAttributionRevision = std::forward<RevenueAttributionRevisionT>(value);
  }
  template <typename RevenueAttributionRevisionT = Aws::String>
  GetRevenueAttributionAllocationRequest& WithRevenueAttributionRevision(RevenueAttributionRevisionT&& value) {
    SetRevenueAttributionRevision(std::forward<RevenueAttributionRevisionT>(value));
    return *this;
  }
  ///@}
 private:
  CatalogName m_catalog{CatalogName::NOT_SET};

  Aws::String m_revenueAttributionIdentifier;

  Aws::String m_revenueAttributionAllocationId;

  Aws::String m_revenueAttributionRevision;
  bool m_catalogHasBeenSet = false;
  bool m_revenueAttributionIdentifierHasBeenSet = false;
  bool m_revenueAttributionAllocationIdHasBeenSet = false;
  bool m_revenueAttributionRevisionHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
