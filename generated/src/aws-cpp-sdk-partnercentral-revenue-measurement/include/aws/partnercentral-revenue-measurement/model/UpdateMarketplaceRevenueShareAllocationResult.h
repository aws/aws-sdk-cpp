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
class UpdateMarketplaceRevenueShareAllocationResult {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API UpdateMarketplaceRevenueShareAllocationResult() = default;
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API UpdateMarketplaceRevenueShareAllocationResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API UpdateMarketplaceRevenueShareAllocationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the updated allocation.</p>
   */
  inline const Aws::String& GetMarketplaceRevenueShareAllocationId() const { return m_marketplaceRevenueShareAllocationId; }
  template <typename MarketplaceRevenueShareAllocationIdT = Aws::String>
  void SetMarketplaceRevenueShareAllocationId(MarketplaceRevenueShareAllocationIdT&& value) {
    m_marketplaceRevenueShareAllocationIdHasBeenSet = true;
    m_marketplaceRevenueShareAllocationId = std::forward<MarketplaceRevenueShareAllocationIdT>(value);
  }
  template <typename MarketplaceRevenueShareAllocationIdT = Aws::String>
  UpdateMarketplaceRevenueShareAllocationResult& WithMarketplaceRevenueShareAllocationId(MarketplaceRevenueShareAllocationIdT&& value) {
    SetMarketplaceRevenueShareAllocationId(std::forward<MarketplaceRevenueShareAllocationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Marketplace product identifier.</p>
   */
  inline const Aws::String& GetProductId() const { return m_productId; }
  template <typename ProductIdT = Aws::String>
  void SetProductId(ProductIdT&& value) {
    m_productIdHasBeenSet = true;
    m_productId = std::forward<ProductIdT>(value);
  }
  template <typename ProductIdT = Aws::String>
  UpdateMarketplaceRevenueShareAllocationResult& WithProductId(ProductIdT&& value) {
    SetProductId(std::forward<ProductIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the AWS Marketplace product.</p>
   */
  inline const Aws::String& GetProductName() const { return m_productName; }
  template <typename ProductNameT = Aws::String>
  void SetProductName(ProductNameT&& value) {
    m_productNameHasBeenSet = true;
    m_productName = std::forward<ProductNameT>(value);
  }
  template <typename ProductNameT = Aws::String>
  UpdateMarketplaceRevenueShareAllocationResult& WithProductName(ProductNameT&& value) {
    SetProductName(std::forward<ProductNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the parent marketplace revenue share.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  UpdateMarketplaceRevenueShareAllocationResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effective start date of the allocation.</p>
   */
  inline const Aws::String& GetEffectiveFrom() const { return m_effectiveFrom; }
  template <typename EffectiveFromT = Aws::String>
  void SetEffectiveFrom(EffectiveFromT&& value) {
    m_effectiveFromHasBeenSet = true;
    m_effectiveFrom = std::forward<EffectiveFromT>(value);
  }
  template <typename EffectiveFromT = Aws::String>
  UpdateMarketplaceRevenueShareAllocationResult& WithEffectiveFrom(EffectiveFromT&& value) {
    SetEffectiveFrom(std::forward<EffectiveFromT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effective end date of the allocation, or null if open-ended.</p>
   */
  inline const Aws::String& GetEffectiveUntil() const { return m_effectiveUntil; }
  template <typename EffectiveUntilT = Aws::String>
  void SetEffectiveUntil(EffectiveUntilT&& value) {
    m_effectiveUntilHasBeenSet = true;
    m_effectiveUntil = std::forward<EffectiveUntilT>(value);
  }
  template <typename EffectiveUntilT = Aws::String>
  UpdateMarketplaceRevenueShareAllocationResult& WithEffectiveUntil(EffectiveUntilT&& value) {
    SetEffectiveUntil(std::forward<EffectiveUntilT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revenue share percentage.</p>
   */
  inline const Aws::String& GetRevenueSharePercent() const { return m_revenueSharePercent; }
  template <typename RevenueSharePercentT = Aws::String>
  void SetRevenueSharePercent(RevenueSharePercentT&& value) {
    m_revenueSharePercentHasBeenSet = true;
    m_revenueSharePercent = std::forward<RevenueSharePercentT>(value);
  }
  template <typename RevenueSharePercentT = Aws::String>
  UpdateMarketplaceRevenueShareAllocationResult& WithRevenueSharePercent(RevenueSharePercentT&& value) {
    SetRevenueSharePercent(std::forward<RevenueSharePercentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the allocation.</p>
   */
  inline AllocationStatus GetStatus() const { return m_status; }
  inline void SetStatus(AllocationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateMarketplaceRevenueShareAllocationResult& WithStatus(AllocationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date when the allocation was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
  template <typename CreatedDateT = Aws::Utils::DateTime>
  void SetCreatedDate(CreatedDateT&& value) {
    m_createdDateHasBeenSet = true;
    m_createdDate = std::forward<CreatedDateT>(value);
  }
  template <typename CreatedDateT = Aws::Utils::DateTime>
  UpdateMarketplaceRevenueShareAllocationResult& WithCreatedDate(CreatedDateT&& value) {
    SetCreatedDate(std::forward<CreatedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date when the allocation was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
  template <typename LastModifiedDateT = Aws::Utils::DateTime>
  void SetLastModifiedDate(LastModifiedDateT&& value) {
    m_lastModifiedDateHasBeenSet = true;
    m_lastModifiedDate = std::forward<LastModifiedDateT>(value);
  }
  template <typename LastModifiedDateT = Aws::Utils::DateTime>
  UpdateMarketplaceRevenueShareAllocationResult& WithLastModifiedDate(LastModifiedDateT&& value) {
    SetLastModifiedDate(std::forward<LastModifiedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The latest revision of the parent marketplace revenue share after the
   * update.</p>
   */
  inline const Aws::String& GetLatestMarketplaceRevenueShareRevision() const { return m_latestMarketplaceRevenueShareRevision; }
  template <typename LatestMarketplaceRevenueShareRevisionT = Aws::String>
  void SetLatestMarketplaceRevenueShareRevision(LatestMarketplaceRevenueShareRevisionT&& value) {
    m_latestMarketplaceRevenueShareRevisionHasBeenSet = true;
    m_latestMarketplaceRevenueShareRevision = std::forward<LatestMarketplaceRevenueShareRevisionT>(value);
  }
  template <typename LatestMarketplaceRevenueShareRevisionT = Aws::String>
  UpdateMarketplaceRevenueShareAllocationResult& WithLatestMarketplaceRevenueShareRevision(LatestMarketplaceRevenueShareRevisionT&& value) {
    SetLatestMarketplaceRevenueShareRevision(std::forward<LatestMarketplaceRevenueShareRevisionT>(value));
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
  UpdateMarketplaceRevenueShareAllocationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_marketplaceRevenueShareAllocationId;

  Aws::String m_productId;

  Aws::String m_productName;

  Aws::String m_arn;

  Aws::String m_effectiveFrom;

  Aws::String m_effectiveUntil;

  Aws::String m_revenueSharePercent;

  AllocationStatus m_status{AllocationStatus::NOT_SET};

  Aws::Utils::DateTime m_createdDate{};

  Aws::Utils::DateTime m_lastModifiedDate{};

  Aws::String m_latestMarketplaceRevenueShareRevision;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_marketplaceRevenueShareAllocationIdHasBeenSet = false;
  bool m_productIdHasBeenSet = false;
  bool m_productNameHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_effectiveFromHasBeenSet = false;
  bool m_effectiveUntilHasBeenSet = false;
  bool m_revenueSharePercentHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdDateHasBeenSet = false;
  bool m_lastModifiedDateHasBeenSet = false;
  bool m_latestMarketplaceRevenueShareRevisionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
