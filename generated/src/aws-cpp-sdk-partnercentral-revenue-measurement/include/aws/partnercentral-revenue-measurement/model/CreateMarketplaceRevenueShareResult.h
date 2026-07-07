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
class CreateMarketplaceRevenueShareResult {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API CreateMarketplaceRevenueShareResult() = default;
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API CreateMarketplaceRevenueShareResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API CreateMarketplaceRevenueShareResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The AWS Marketplace product identifier of the newly created revenue
   * share.</p>
   */
  inline const Aws::String& GetProductId() const { return m_productId; }
  template <typename ProductIdT = Aws::String>
  void SetProductId(ProductIdT&& value) {
    m_productIdHasBeenSet = true;
    m_productId = std::forward<ProductIdT>(value);
  }
  template <typename ProductIdT = Aws::String>
  CreateMarketplaceRevenueShareResult& WithProductId(ProductIdT&& value) {
    SetProductId(std::forward<ProductIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the newly created marketplace revenue
   * share.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CreateMarketplaceRevenueShareResult& WithArn(ArnT&& value) {
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
  inline CreateMarketplaceRevenueShareResult& WithCatalog(CatalogName value) {
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
  CreateMarketplaceRevenueShareResult& WithProductCode(ProductCodeT&& value) {
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
  CreateMarketplaceRevenueShareResult& WithProductName(ProductNameT&& value) {
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
  CreateMarketplaceRevenueShareResult& WithCreatedDate(CreatedDateT&& value) {
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
  CreateMarketplaceRevenueShareResult& WithLastModifiedDate(LastModifiedDateT&& value) {
    SetLastModifiedDate(std::forward<LastModifiedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision number of the newly created marketplace revenue share.</p>
   */
  inline int64_t GetRevision() const { return m_revision; }
  inline void SetRevision(int64_t value) {
    m_revisionHasBeenSet = true;
    m_revision = value;
  }
  inline CreateMarketplaceRevenueShareResult& WithRevision(int64_t value) {
    SetRevision(value);
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
  CreateMarketplaceRevenueShareResult& WithRequestId(RequestIdT&& value) {
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
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
