/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/Category.h>
#include <aws/marketplace-discovery/model/DeployedOnAwsStatus.h>
#include <aws/marketplace-discovery/model/FulfillmentOptionSummary.h>
#include <aws/marketplace-discovery/model/PromotionalMedia.h>
#include <aws/marketplace-discovery/model/Resource.h>
#include <aws/marketplace-discovery/model/SellerEngagement.h>
#include <aws/marketplace-discovery/model/SellerInformation.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {
class GetProductResult {
 public:
  AWS_MARKETPLACEDISCOVERY_API GetProductResult() = default;
  AWS_MARKETPLACEDISCOVERY_API GetProductResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MARKETPLACEDISCOVERY_API GetProductResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the product.</p>
   */
  inline const Aws::String& GetProductId() const { return m_productId; }
  template <typename ProductIdT = Aws::String>
  void SetProductId(ProductIdT&& value) {
    m_productIdHasBeenSet = true;
    m_productId = std::forward<ProductIdT>(value);
  }
  template <typename ProductIdT = Aws::String>
  GetProductResult& WithProductId(ProductIdT&& value) {
    SetProductId(std::forward<ProductIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the catalog that the product belongs to.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  GetProductResult& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable display name of the product.</p>
   */
  inline const Aws::String& GetProductName() const { return m_productName; }
  template <typename ProductNameT = Aws::String>
  void SetProductName(ProductNameT&& value) {
    m_productNameHasBeenSet = true;
    m_productName = std::forward<ProductNameT>(value);
  }
  template <typename ProductNameT = Aws::String>
  GetProductResult& WithProductName(ProductNameT&& value) {
    SetProductName(std::forward<ProductNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the product is deployed on AWS infrastructure.</p>
   */
  inline DeployedOnAwsStatus GetDeployedOnAws() const { return m_deployedOnAws; }
  inline void SetDeployedOnAws(DeployedOnAwsStatus value) {
    m_deployedOnAwsHasBeenSet = true;
    m_deployedOnAws = value;
  }
  inline GetProductResult& WithDeployedOnAws(DeployedOnAwsStatus value) {
    SetDeployedOnAws(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A 1–3 sentence summary describing the key aspects of the product.</p>
   */
  inline const Aws::String& GetShortDescription() const { return m_shortDescription; }
  template <typename ShortDescriptionT = Aws::String>
  void SetShortDescription(ShortDescriptionT&& value) {
    m_shortDescriptionHasBeenSet = true;
    m_shortDescription = std::forward<ShortDescriptionT>(value);
  }
  template <typename ShortDescriptionT = Aws::String>
  GetProductResult& WithShortDescription(ShortDescriptionT&& value) {
    SetShortDescription(std::forward<ShortDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A detailed description of what the product does, in paragraph format.</p>
   */
  inline const Aws::String& GetLongDescription() const { return m_longDescription; }
  template <typename LongDescriptionT = Aws::String>
  void SetLongDescription(LongDescriptionT&& value) {
    m_longDescriptionHasBeenSet = true;
    m_longDescription = std::forward<LongDescriptionT>(value);
  }
  template <typename LongDescriptionT = Aws::String>
  GetProductResult& WithLongDescription(LongDescriptionT&& value) {
    SetLongDescription(std::forward<LongDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity who manufactured the product.</p>
   */
  inline const SellerInformation& GetManufacturer() const { return m_manufacturer; }
  template <typename ManufacturerT = SellerInformation>
  void SetManufacturer(ManufacturerT&& value) {
    m_manufacturerHasBeenSet = true;
    m_manufacturer = std::forward<ManufacturerT>(value);
  }
  template <typename ManufacturerT = SellerInformation>
  GetProductResult& WithManufacturer(ManufacturerT&& value) {
    SetManufacturer(std::forward<ManufacturerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the logo thumbnail image for the product.</p>
   */
  inline const Aws::String& GetLogoThumbnailUrl() const { return m_logoThumbnailUrl; }
  template <typename LogoThumbnailUrlT = Aws::String>
  void SetLogoThumbnailUrl(LogoThumbnailUrlT&& value) {
    m_logoThumbnailUrlHasBeenSet = true;
    m_logoThumbnailUrl = std::forward<LogoThumbnailUrlT>(value);
  }
  template <typename LogoThumbnailUrlT = Aws::String>
  GetProductResult& WithLogoThumbnailUrl(LogoThumbnailUrlT&& value) {
    SetLogoThumbnailUrl(std::forward<LogoThumbnailUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of fulfillment options available for deploying or accessing the
   * product, such as AMI, SaaS, or Container.</p>
   */
  inline const Aws::Vector<FulfillmentOptionSummary>& GetFulfillmentOptionSummaries() const { return m_fulfillmentOptionSummaries; }
  template <typename FulfillmentOptionSummariesT = Aws::Vector<FulfillmentOptionSummary>>
  void SetFulfillmentOptionSummaries(FulfillmentOptionSummariesT&& value) {
    m_fulfillmentOptionSummariesHasBeenSet = true;
    m_fulfillmentOptionSummaries = std::forward<FulfillmentOptionSummariesT>(value);
  }
  template <typename FulfillmentOptionSummariesT = Aws::Vector<FulfillmentOptionSummary>>
  GetProductResult& WithFulfillmentOptionSummaries(FulfillmentOptionSummariesT&& value) {
    SetFulfillmentOptionSummaries(std::forward<FulfillmentOptionSummariesT>(value));
    return *this;
  }
  template <typename FulfillmentOptionSummariesT = FulfillmentOptionSummary>
  GetProductResult& AddFulfillmentOptionSummaries(FulfillmentOptionSummariesT&& value) {
    m_fulfillmentOptionSummariesHasBeenSet = true;
    m_fulfillmentOptionSummaries.emplace_back(std::forward<FulfillmentOptionSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The categories used to classify this product into logical groups.</p>
   */
  inline const Aws::Vector<Category>& GetCategories() const { return m_categories; }
  template <typename CategoriesT = Aws::Vector<Category>>
  void SetCategories(CategoriesT&& value) {
    m_categoriesHasBeenSet = true;
    m_categories = std::forward<CategoriesT>(value);
  }
  template <typename CategoriesT = Aws::Vector<Category>>
  GetProductResult& WithCategories(CategoriesT&& value) {
    SetCategories(std::forward<CategoriesT>(value));
    return *this;
  }
  template <typename CategoriesT = Category>
  GetProductResult& AddCategories(CategoriesT&& value) {
    m_categoriesHasBeenSet = true;
    m_categories.emplace_back(std::forward<CategoriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of key features that the product offers to customers.</p>
   */
  inline const Aws::Vector<Aws::String>& GetHighlights() const { return m_highlights; }
  template <typename HighlightsT = Aws::Vector<Aws::String>>
  void SetHighlights(HighlightsT&& value) {
    m_highlightsHasBeenSet = true;
    m_highlights = std::forward<HighlightsT>(value);
  }
  template <typename HighlightsT = Aws::Vector<Aws::String>>
  GetProductResult& WithHighlights(HighlightsT&& value) {
    SetHighlights(std::forward<HighlightsT>(value));
    return *this;
  }
  template <typename HighlightsT = Aws::String>
  GetProductResult& AddHighlights(HighlightsT&& value) {
    m_highlightsHasBeenSet = true;
    m_highlights.emplace_back(std::forward<HighlightsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Embedded promotional media provided by the creator of the product, such as
   * images and videos.</p>
   */
  inline const Aws::Vector<PromotionalMedia>& GetPromotionalMedia() const { return m_promotionalMedia; }
  template <typename PromotionalMediaT = Aws::Vector<PromotionalMedia>>
  void SetPromotionalMedia(PromotionalMediaT&& value) {
    m_promotionalMediaHasBeenSet = true;
    m_promotionalMedia = std::forward<PromotionalMediaT>(value);
  }
  template <typename PromotionalMediaT = Aws::Vector<PromotionalMedia>>
  GetProductResult& WithPromotionalMedia(PromotionalMediaT&& value) {
    SetPromotionalMedia(std::forward<PromotionalMediaT>(value));
    return *this;
  }
  template <typename PromotionalMediaT = PromotionalMedia>
  GetProductResult& AddPromotionalMedia(PromotionalMediaT&& value) {
    m_promotionalMediaHasBeenSet = true;
    m_promotionalMedia.emplace_back(std::forward<PromotionalMediaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Resources that provide further information about using the product or
   * requesting support, such as documentation links, support contacts, and usage
   * instructions.</p>
   */
  inline const Aws::Vector<Resource>& GetResources() const { return m_resources; }
  template <typename ResourcesT = Aws::Vector<Resource>>
  void SetResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources = std::forward<ResourcesT>(value);
  }
  template <typename ResourcesT = Aws::Vector<Resource>>
  GetProductResult& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  template <typename ResourcesT = Resource>
  GetProductResult& AddResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources.emplace_back(std::forward<ResourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Engagement options available to potential buyers, such as requesting a
   * private offer or requesting a demo.</p>
   */
  inline const Aws::Vector<SellerEngagement>& GetSellerEngagements() const { return m_sellerEngagements; }
  template <typename SellerEngagementsT = Aws::Vector<SellerEngagement>>
  void SetSellerEngagements(SellerEngagementsT&& value) {
    m_sellerEngagementsHasBeenSet = true;
    m_sellerEngagements = std::forward<SellerEngagementsT>(value);
  }
  template <typename SellerEngagementsT = Aws::Vector<SellerEngagement>>
  GetProductResult& WithSellerEngagements(SellerEngagementsT&& value) {
    SetSellerEngagements(std::forward<SellerEngagementsT>(value));
    return *this;
  }
  template <typename SellerEngagementsT = SellerEngagement>
  GetProductResult& AddSellerEngagements(SellerEngagementsT&& value) {
    m_sellerEngagementsHasBeenSet = true;
    m_sellerEngagements.emplace_back(std::forward<SellerEngagementsT>(value));
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
  GetProductResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_productId;

  Aws::String m_catalog;

  Aws::String m_productName;

  DeployedOnAwsStatus m_deployedOnAws{DeployedOnAwsStatus::NOT_SET};

  Aws::String m_shortDescription;

  Aws::String m_longDescription;

  SellerInformation m_manufacturer;

  Aws::String m_logoThumbnailUrl;

  Aws::Vector<FulfillmentOptionSummary> m_fulfillmentOptionSummaries;

  Aws::Vector<Category> m_categories;

  Aws::Vector<Aws::String> m_highlights;

  Aws::Vector<PromotionalMedia> m_promotionalMedia;

  Aws::Vector<Resource> m_resources;

  Aws::Vector<SellerEngagement> m_sellerEngagements;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_productIdHasBeenSet = false;
  bool m_catalogHasBeenSet = false;
  bool m_productNameHasBeenSet = false;
  bool m_deployedOnAwsHasBeenSet = false;
  bool m_shortDescriptionHasBeenSet = false;
  bool m_longDescriptionHasBeenSet = false;
  bool m_manufacturerHasBeenSet = false;
  bool m_logoThumbnailUrlHasBeenSet = false;
  bool m_fulfillmentOptionSummariesHasBeenSet = false;
  bool m_categoriesHasBeenSet = false;
  bool m_highlightsHasBeenSet = false;
  bool m_promotionalMediaHasBeenSet = false;
  bool m_resourcesHasBeenSet = false;
  bool m_sellerEngagementsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
