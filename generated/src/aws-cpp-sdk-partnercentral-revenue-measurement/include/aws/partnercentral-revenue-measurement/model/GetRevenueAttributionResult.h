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
#include <aws/partnercentral-revenue-measurement/model/CatalogName.h>
#include <aws/partnercentral-revenue-measurement/model/MarketplaceProductSummary.h>
#include <aws/partnercentral-revenue-measurement/model/TenancyModel.h>

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
class GetRevenueAttributionResult {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API GetRevenueAttributionResult() = default;
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API GetRevenueAttributionResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API GetRevenueAttributionResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the revenue attribution.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetRevenueAttributionResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the revenue attribution.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  GetRevenueAttributionResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The catalog that the revenue attribution belongs to.</p>
   */
  inline CatalogName GetCatalog() const { return m_catalog; }
  inline void SetCatalog(CatalogName value) {
    m_catalogHasBeenSet = true;
    m_catalog = value;
  }
  inline GetRevenueAttributionResult& WithCatalog(CatalogName value) {
    SetCatalog(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the revenue attribution.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetRevenueAttributionResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the revenue attribution.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetRevenueAttributionResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tenancy model for this revenue attribution.</p>
   */
  inline TenancyModel GetTenancyModel() const { return m_tenancyModel; }
  inline void SetTenancyModel(TenancyModel value) {
    m_tenancyModelHasBeenSet = true;
    m_tenancyModel = value;
  }
  inline GetRevenueAttributionResult& WithTenancyModel(TenancyModel value) {
    SetTenancyModel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The associated AWS Marketplace product listing, if set.</p>
   */
  inline const MarketplaceProductSummary& GetMarketplaceProduct() const { return m_marketplaceProduct; }
  template <typename MarketplaceProductT = MarketplaceProductSummary>
  void SetMarketplaceProduct(MarketplaceProductT&& value) {
    m_marketplaceProductHasBeenSet = true;
    m_marketplaceProduct = std::forward<MarketplaceProductT>(value);
  }
  template <typename MarketplaceProductT = MarketplaceProductSummary>
  GetRevenueAttributionResult& WithMarketplaceProduct(MarketplaceProductT&& value) {
    SetMarketplaceProduct(std::forward<MarketplaceProductT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date when the revenue attribution was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
  template <typename CreatedDateT = Aws::Utils::DateTime>
  void SetCreatedDate(CreatedDateT&& value) {
    m_createdDateHasBeenSet = true;
    m_createdDate = std::forward<CreatedDateT>(value);
  }
  template <typename CreatedDateT = Aws::Utils::DateTime>
  GetRevenueAttributionResult& WithCreatedDate(CreatedDateT&& value) {
    SetCreatedDate(std::forward<CreatedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date when the revenue attribution was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
  template <typename LastModifiedDateT = Aws::Utils::DateTime>
  void SetLastModifiedDate(LastModifiedDateT&& value) {
    m_lastModifiedDateHasBeenSet = true;
    m_lastModifiedDate = std::forward<LastModifiedDateT>(value);
  }
  template <typename LastModifiedDateT = Aws::Utils::DateTime>
  GetRevenueAttributionResult& WithLastModifiedDate(LastModifiedDateT&& value) {
    SetLastModifiedDate(std::forward<LastModifiedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision of the retrieved attribution.</p>
   */
  inline const Aws::String& GetRevision() const { return m_revision; }
  template <typename RevisionT = Aws::String>
  void SetRevision(RevisionT&& value) {
    m_revisionHasBeenSet = true;
    m_revision = std::forward<RevisionT>(value);
  }
  template <typename RevisionT = Aws::String>
  GetRevenueAttributionResult& WithRevision(RevisionT&& value) {
    SetRevision(std::forward<RevisionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The latest revision of the attribution.</p>
   */
  inline const Aws::String& GetLatestRevision() const { return m_latestRevision; }
  template <typename LatestRevisionT = Aws::String>
  void SetLatestRevision(LatestRevisionT&& value) {
    m_latestRevisionHasBeenSet = true;
    m_latestRevision = std::forward<LatestRevisionT>(value);
  }
  template <typename LatestRevisionT = Aws::String>
  GetRevenueAttributionResult& WithLatestRevision(LatestRevisionT&& value) {
    SetLatestRevision(std::forward<LatestRevisionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date from which this revenue attribution is effective, derived from the
   * earliest allocation start date (YYYY-MM-DD).</p>
   */
  inline const Aws::String& GetEffectiveFrom() const { return m_effectiveFrom; }
  template <typename EffectiveFromT = Aws::String>
  void SetEffectiveFrom(EffectiveFromT&& value) {
    m_effectiveFromHasBeenSet = true;
    m_effectiveFrom = std::forward<EffectiveFromT>(value);
  }
  template <typename EffectiveFromT = Aws::String>
  GetRevenueAttributionResult& WithEffectiveFrom(EffectiveFromT&& value) {
    SetEffectiveFrom(std::forward<EffectiveFromT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date until which this revenue attribution is effective, derived from the
   * latest allocation end date (YYYY-MM-DD).</p>
   */
  inline const Aws::String& GetEffectiveUntil() const { return m_effectiveUntil; }
  template <typename EffectiveUntilT = Aws::String>
  void SetEffectiveUntil(EffectiveUntilT&& value) {
    m_effectiveUntilHasBeenSet = true;
    m_effectiveUntil = std::forward<EffectiveUntilT>(value);
  }
  template <typename EffectiveUntilT = Aws::String>
  GetRevenueAttributionResult& WithEffectiveUntil(EffectiveUntilT&& value) {
    SetEffectiveUntil(std::forward<EffectiveUntilT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of allocations under this revenue attribution whose Status
   * is ACTIVE.</p>
   */
  inline int64_t GetTotalActiveRevenueAttributionAllocationCount() const { return m_totalActiveRevenueAttributionAllocationCount; }
  inline void SetTotalActiveRevenueAttributionAllocationCount(int64_t value) {
    m_totalActiveRevenueAttributionAllocationCountHasBeenSet = true;
    m_totalActiveRevenueAttributionAllocationCount = value;
  }
  inline GetRevenueAttributionResult& WithTotalActiveRevenueAttributionAllocationCount(int64_t value) {
    SetTotalActiveRevenueAttributionAllocationCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of allocations under this revenue attribution, counting both
   * ACTIVE and INACTIVE.</p>
   */
  inline int64_t GetTotalRevenueAttributionAllocationCount() const { return m_totalRevenueAttributionAllocationCount; }
  inline void SetTotalRevenueAttributionAllocationCount(int64_t value) {
    m_totalRevenueAttributionAllocationCountHasBeenSet = true;
    m_totalRevenueAttributionAllocationCount = value;
  }
  inline GetRevenueAttributionResult& WithTotalRevenueAttributionAllocationCount(int64_t value) {
    SetTotalRevenueAttributionAllocationCount(value);
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
  GetRevenueAttributionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_arn;

  Aws::String m_id;

  CatalogName m_catalog{CatalogName::NOT_SET};

  Aws::String m_name;

  Aws::String m_description;

  TenancyModel m_tenancyModel{TenancyModel::NOT_SET};

  MarketplaceProductSummary m_marketplaceProduct;

  Aws::Utils::DateTime m_createdDate{};

  Aws::Utils::DateTime m_lastModifiedDate{};

  Aws::String m_revision;

  Aws::String m_latestRevision;

  Aws::String m_effectiveFrom;

  Aws::String m_effectiveUntil;

  int64_t m_totalActiveRevenueAttributionAllocationCount{0};

  int64_t m_totalRevenueAttributionAllocationCount{0};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_catalogHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_tenancyModelHasBeenSet = false;
  bool m_marketplaceProductHasBeenSet = false;
  bool m_createdDateHasBeenSet = false;
  bool m_lastModifiedDateHasBeenSet = false;
  bool m_revisionHasBeenSet = false;
  bool m_latestRevisionHasBeenSet = false;
  bool m_effectiveFromHasBeenSet = false;
  bool m_effectiveUntilHasBeenSet = false;
  bool m_totalActiveRevenueAttributionAllocationCountHasBeenSet = false;
  bool m_totalRevenueAttributionAllocationCountHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
