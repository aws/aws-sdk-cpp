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
class GetMarketplaceRevenueShareResult {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API GetMarketplaceRevenueShareResult() = default;
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API GetMarketplaceRevenueShareResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API GetMarketplaceRevenueShareResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The AWS Marketplace product identifier of the revenue share.</p>
   */
  inline const Aws::String& GetProductId() const { return m_productId; }
  template <typename ProductIdT = Aws::String>
  void SetProductId(ProductIdT&& value) {
    m_productIdHasBeenSet = true;
    m_productId = std::forward<ProductIdT>(value);
  }
  template <typename ProductIdT = Aws::String>
  GetMarketplaceRevenueShareResult& WithProductId(ProductIdT&& value) {
    SetProductId(std::forward<ProductIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the marketplace revenue share.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetMarketplaceRevenueShareResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The catalog that the marketplace revenue share belongs to.</p>
   */
  inline CatalogName GetCatalog() const { return m_catalog; }
  inline void SetCatalog(CatalogName value) {
    m_catalogHasBeenSet = true;
    m_catalog = value;
  }
  inline GetMarketplaceRevenueShareResult& WithCatalog(CatalogName value) {
    SetCatalog(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Marketplace product code.</p>
   */
  inline const Aws::String& GetProductCode() const { return m_productCode; }
  template <typename ProductCodeT = Aws::String>
  void SetProductCode(ProductCodeT&& value) {
    m_productCodeHasBeenSet = true;
    m_productCode = std::forward<ProductCodeT>(value);
  }
  template <typename ProductCodeT = Aws::String>
  GetMarketplaceRevenueShareResult& WithProductCode(ProductCodeT&& value) {
    SetProductCode(std::forward<ProductCodeT>(value));
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
  GetMarketplaceRevenueShareResult& WithProductName(ProductNameT&& value) {
    SetProductName(std::forward<ProductNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date when the marketplace revenue share was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
  template <typename CreatedDateT = Aws::Utils::DateTime>
  void SetCreatedDate(CreatedDateT&& value) {
    m_createdDateHasBeenSet = true;
    m_createdDate = std::forward<CreatedDateT>(value);
  }
  template <typename CreatedDateT = Aws::Utils::DateTime>
  GetMarketplaceRevenueShareResult& WithCreatedDate(CreatedDateT&& value) {
    SetCreatedDate(std::forward<CreatedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date when the marketplace revenue share was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
  template <typename LastModifiedDateT = Aws::Utils::DateTime>
  void SetLastModifiedDate(LastModifiedDateT&& value) {
    m_lastModifiedDateHasBeenSet = true;
    m_lastModifiedDate = std::forward<LastModifiedDateT>(value);
  }
  template <typename LastModifiedDateT = Aws::Utils::DateTime>
  GetMarketplaceRevenueShareResult& WithLastModifiedDate(LastModifiedDateT&& value) {
    SetLastModifiedDate(std::forward<LastModifiedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision number of the retrieved marketplace revenue share.</p>
   */
  inline int64_t GetRevision() const { return m_revision; }
  inline void SetRevision(int64_t value) {
    m_revisionHasBeenSet = true;
    m_revision = value;
  }
  inline GetMarketplaceRevenueShareResult& WithRevision(int64_t value) {
    SetRevision(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The latest revision number of the marketplace revenue share.</p>
   */
  inline int64_t GetLatestRevision() const { return m_latestRevision; }
  inline void SetLatestRevision(int64_t value) {
    m_latestRevisionHasBeenSet = true;
    m_latestRevision = value;
  }
  inline GetMarketplaceRevenueShareResult& WithLatestRevision(int64_t value) {
    SetLatestRevision(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of active allocations under this marketplace revenue share.</p>
   */
  inline int64_t GetTotalActiveMarketplaceRevenueShareAllocationCount() const {
    return m_totalActiveMarketplaceRevenueShareAllocationCount;
  }
  inline void SetTotalActiveMarketplaceRevenueShareAllocationCount(int64_t value) {
    m_totalActiveMarketplaceRevenueShareAllocationCountHasBeenSet = true;
    m_totalActiveMarketplaceRevenueShareAllocationCount = value;
  }
  inline GetMarketplaceRevenueShareResult& WithTotalActiveMarketplaceRevenueShareAllocationCount(int64_t value) {
    SetTotalActiveMarketplaceRevenueShareAllocationCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of allocations under this marketplace revenue share.</p>
   */
  inline int64_t GetTotalMarketplaceRevenueShareAllocationCount() const { return m_totalMarketplaceRevenueShareAllocationCount; }
  inline void SetTotalMarketplaceRevenueShareAllocationCount(int64_t value) {
    m_totalMarketplaceRevenueShareAllocationCountHasBeenSet = true;
    m_totalMarketplaceRevenueShareAllocationCount = value;
  }
  inline GetMarketplaceRevenueShareResult& WithTotalMarketplaceRevenueShareAllocationCount(int64_t value) {
    SetTotalMarketplaceRevenueShareAllocationCount(value);
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
  GetMarketplaceRevenueShareResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_productId;

  Aws::String m_arn;

  CatalogName m_catalog{CatalogName::NOT_SET};

  Aws::String m_productCode;

  Aws::String m_productName;

  Aws::Utils::DateTime m_createdDate{};

  Aws::Utils::DateTime m_lastModifiedDate{};

  int64_t m_revision{0};

  int64_t m_latestRevision{0};

  int64_t m_totalActiveMarketplaceRevenueShareAllocationCount{0};

  int64_t m_totalMarketplaceRevenueShareAllocationCount{0};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_productIdHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_catalogHasBeenSet = false;
  bool m_productCodeHasBeenSet = false;
  bool m_productNameHasBeenSet = false;
  bool m_createdDateHasBeenSet = false;
  bool m_lastModifiedDateHasBeenSet = false;
  bool m_revisionHasBeenSet = false;
  bool m_latestRevisionHasBeenSet = false;
  bool m_totalActiveMarketplaceRevenueShareAllocationCountHasBeenSet = false;
  bool m_totalMarketplaceRevenueShareAllocationCountHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
