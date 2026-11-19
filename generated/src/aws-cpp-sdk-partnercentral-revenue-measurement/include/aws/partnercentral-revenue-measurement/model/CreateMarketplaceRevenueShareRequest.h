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
#include <aws/partnercentral-revenue-measurement/model/MarketplaceRevenueShareProductEntry.h>
#include <aws/partnercentral-revenue-measurement/model/Tag.h>

#include <utility>

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {

/**
 */
class CreateMarketplaceRevenueShareRequest : public PartnerCentralRevenueMeasurementRequest {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API CreateMarketplaceRevenueShareRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateMarketplaceRevenueShare"; }

  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog in which to create the marketplace revenue share.</p>
   */
  inline CatalogName GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  inline void SetCatalog(CatalogName value) {
    m_catalogHasBeenSet = true;
    m_catalog = value;
  }
  inline CreateMarketplaceRevenueShareRequest& WithCatalog(CatalogName value) {
    SetCatalog(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique token to ensure idempotency of the create request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateMarketplaceRevenueShareRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The products in the marketplace revenue share, each with its typed account
   * lists. 1 to 25 products.</p>
   */
  inline const Aws::Vector<MarketplaceRevenueShareProductEntry>& GetProducts() const { return m_products; }
  inline bool ProductsHasBeenSet() const { return m_productsHasBeenSet; }
  template <typename ProductsT = Aws::Vector<MarketplaceRevenueShareProductEntry>>
  void SetProducts(ProductsT&& value) {
    m_productsHasBeenSet = true;
    m_products = std::forward<ProductsT>(value);
  }
  template <typename ProductsT = Aws::Vector<MarketplaceRevenueShareProductEntry>>
  CreateMarketplaceRevenueShareRequest& WithProducts(ProductsT&& value) {
    SetProducts(std::forward<ProductsT>(value));
    return *this;
  }
  template <typename ProductsT = MarketplaceRevenueShareProductEntry>
  CreateMarketplaceRevenueShareRequest& AddProducts(ProductsT&& value) {
    m_productsHasBeenSet = true;
    m_products.emplace_back(std::forward<ProductsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags to associate with the marketplace revenue share upon creation.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateMarketplaceRevenueShareRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateMarketplaceRevenueShareRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  CatalogName m_catalog{CatalogName::NOT_SET};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::Vector<MarketplaceRevenueShareProductEntry> m_products;

  Aws::Vector<Tag> m_tags;
  bool m_catalogHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_productsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
