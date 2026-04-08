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
#include <aws/marketplace-discovery/model/FulfillmentOptionSummary.h>
#include <aws/marketplace-discovery/model/ListingAssociatedEntity.h>
#include <aws/marketplace-discovery/model/ListingBadge.h>
#include <aws/marketplace-discovery/model/PricingModel.h>
#include <aws/marketplace-discovery/model/PricingUnit.h>
#include <aws/marketplace-discovery/model/PromotionalMedia.h>
#include <aws/marketplace-discovery/model/Resource.h>
#include <aws/marketplace-discovery/model/ReviewSummary.h>
#include <aws/marketplace-discovery/model/SellerEngagement.h>
#include <aws/marketplace-discovery/model/SellerInformation.h>
#include <aws/marketplace-discovery/model/UseCaseEntry.h>

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
class GetListingResult {
 public:
  AWS_MARKETPLACEDISCOVERY_API GetListingResult() = default;
  AWS_MARKETPLACEDISCOVERY_API GetListingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MARKETPLACEDISCOVERY_API GetListingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The products and offers associated with this listing. Each entity contains
   * product and offer information.</p>
   */
  inline const Aws::Vector<ListingAssociatedEntity>& GetAssociatedEntities() const { return m_associatedEntities; }
  template <typename AssociatedEntitiesT = Aws::Vector<ListingAssociatedEntity>>
  void SetAssociatedEntities(AssociatedEntitiesT&& value) {
    m_associatedEntitiesHasBeenSet = true;
    m_associatedEntities = std::forward<AssociatedEntitiesT>(value);
  }
  template <typename AssociatedEntitiesT = Aws::Vector<ListingAssociatedEntity>>
  GetListingResult& WithAssociatedEntities(AssociatedEntitiesT&& value) {
    SetAssociatedEntities(std::forward<AssociatedEntitiesT>(value));
    return *this;
  }
  template <typename AssociatedEntitiesT = ListingAssociatedEntity>
  GetListingResult& AddAssociatedEntities(AssociatedEntitiesT&& value) {
    m_associatedEntitiesHasBeenSet = true;
    m_associatedEntities.emplace_back(std::forward<AssociatedEntitiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Badges indicating special attributes of the listing, such as free tier
   * eligibility, free trial availability, or Quick Launch support.</p>
   */
  inline const Aws::Vector<ListingBadge>& GetBadges() const { return m_badges; }
  template <typename BadgesT = Aws::Vector<ListingBadge>>
  void SetBadges(BadgesT&& value) {
    m_badgesHasBeenSet = true;
    m_badges = std::forward<BadgesT>(value);
  }
  template <typename BadgesT = Aws::Vector<ListingBadge>>
  GetListingResult& WithBadges(BadgesT&& value) {
    SetBadges(std::forward<BadgesT>(value));
    return *this;
  }
  template <typename BadgesT = ListingBadge>
  GetListingResult& AddBadges(BadgesT&& value) {
    m_badgesHasBeenSet = true;
    m_badges.emplace_back(std::forward<BadgesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the catalog that the listing belongs to.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  GetListingResult& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The categories used to classify this listing into logical groups.</p>
   */
  inline const Aws::Vector<Category>& GetCategories() const { return m_categories; }
  template <typename CategoriesT = Aws::Vector<Category>>
  void SetCategories(CategoriesT&& value) {
    m_categoriesHasBeenSet = true;
    m_categories = std::forward<CategoriesT>(value);
  }
  template <typename CategoriesT = Aws::Vector<Category>>
  GetListingResult& WithCategories(CategoriesT&& value) {
    SetCategories(std::forward<CategoriesT>(value));
    return *this;
  }
  template <typename CategoriesT = Category>
  GetListingResult& AddCategories(CategoriesT&& value) {
    m_categoriesHasBeenSet = true;
    m_categories.emplace_back(std::forward<CategoriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of fulfillment options available for deploying or accessing the
   * listing, such as AMI, SaaS, or Container.</p>
   */
  inline const Aws::Vector<FulfillmentOptionSummary>& GetFulfillmentOptionSummaries() const { return m_fulfillmentOptionSummaries; }
  template <typename FulfillmentOptionSummariesT = Aws::Vector<FulfillmentOptionSummary>>
  void SetFulfillmentOptionSummaries(FulfillmentOptionSummariesT&& value) {
    m_fulfillmentOptionSummariesHasBeenSet = true;
    m_fulfillmentOptionSummaries = std::forward<FulfillmentOptionSummariesT>(value);
  }
  template <typename FulfillmentOptionSummariesT = Aws::Vector<FulfillmentOptionSummary>>
  GetListingResult& WithFulfillmentOptionSummaries(FulfillmentOptionSummariesT&& value) {
    SetFulfillmentOptionSummaries(std::forward<FulfillmentOptionSummariesT>(value));
    return *this;
  }
  template <typename FulfillmentOptionSummariesT = FulfillmentOptionSummary>
  GetListingResult& AddFulfillmentOptionSummaries(FulfillmentOptionSummariesT&& value) {
    m_fulfillmentOptionSummariesHasBeenSet = true;
    m_fulfillmentOptionSummaries.emplace_back(std::forward<FulfillmentOptionSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of key features that the listing offers to customers.</p>
   */
  inline const Aws::Vector<Aws::String>& GetHighlights() const { return m_highlights; }
  template <typename HighlightsT = Aws::Vector<Aws::String>>
  void SetHighlights(HighlightsT&& value) {
    m_highlightsHasBeenSet = true;
    m_highlights = std::forward<HighlightsT>(value);
  }
  template <typename HighlightsT = Aws::Vector<Aws::String>>
  GetListingResult& WithHighlights(HighlightsT&& value) {
    SetHighlights(std::forward<HighlightsT>(value));
    return *this;
  }
  template <typename HighlightsT = Aws::String>
  GetListingResult& AddHighlights(HighlightsT&& value) {
    m_highlightsHasBeenSet = true;
    m_highlights.emplace_back(std::forward<HighlightsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional guidance explaining how to use data in this listing. Primarily
   * defines how to integrate with a multi-product listing.</p>
   */
  inline const Aws::String& GetIntegrationGuide() const { return m_integrationGuide; }
  template <typename IntegrationGuideT = Aws::String>
  void SetIntegrationGuide(IntegrationGuideT&& value) {
    m_integrationGuideHasBeenSet = true;
    m_integrationGuide = std::forward<IntegrationGuideT>(value);
  }
  template <typename IntegrationGuideT = Aws::String>
  GetListingResult& WithIntegrationGuide(IntegrationGuideT&& value) {
    SetIntegrationGuide(std::forward<IntegrationGuideT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the listing.</p>
   */
  inline const Aws::String& GetListingId() const { return m_listingId; }
  template <typename ListingIdT = Aws::String>
  void SetListingId(ListingIdT&& value) {
    m_listingIdHasBeenSet = true;
    m_listingId = std::forward<ListingIdT>(value);
  }
  template <typename ListingIdT = Aws::String>
  GetListingResult& WithListingId(ListingIdT&& value) {
    SetListingId(std::forward<ListingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable display name of the listing.</p>
   */
  inline const Aws::String& GetListingName() const { return m_listingName; }
  template <typename ListingNameT = Aws::String>
  void SetListingName(ListingNameT&& value) {
    m_listingNameHasBeenSet = true;
    m_listingName = std::forward<ListingNameT>(value);
  }
  template <typename ListingNameT = Aws::String>
  GetListingResult& WithListingName(ListingNameT&& value) {
    SetListingName(std::forward<ListingNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the logo thumbnail image for the listing.</p>
   */
  inline const Aws::String& GetLogoThumbnailUrl() const { return m_logoThumbnailUrl; }
  template <typename LogoThumbnailUrlT = Aws::String>
  void SetLogoThumbnailUrl(LogoThumbnailUrlT&& value) {
    m_logoThumbnailUrlHasBeenSet = true;
    m_logoThumbnailUrl = std::forward<LogoThumbnailUrlT>(value);
  }
  template <typename LogoThumbnailUrlT = Aws::String>
  GetListingResult& WithLogoThumbnailUrl(LogoThumbnailUrlT&& value) {
    SetLogoThumbnailUrl(std::forward<LogoThumbnailUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A detailed description of what the listing offers, in paragraph format.</p>
   */
  inline const Aws::String& GetLongDescription() const { return m_longDescription; }
  template <typename LongDescriptionT = Aws::String>
  void SetLongDescription(LongDescriptionT&& value) {
    m_longDescriptionHasBeenSet = true;
    m_longDescription = std::forward<LongDescriptionT>(value);
  }
  template <typename LongDescriptionT = Aws::String>
  GetListingResult& WithLongDescription(LongDescriptionT&& value) {
    SetLongDescription(std::forward<LongDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pricing models for offers associated with this listing, such as
   * usage-based, contract, BYOL, or free.</p>
   */
  inline const Aws::Vector<PricingModel>& GetPricingModels() const { return m_pricingModels; }
  template <typename PricingModelsT = Aws::Vector<PricingModel>>
  void SetPricingModels(PricingModelsT&& value) {
    m_pricingModelsHasBeenSet = true;
    m_pricingModels = std::forward<PricingModelsT>(value);
  }
  template <typename PricingModelsT = Aws::Vector<PricingModel>>
  GetListingResult& WithPricingModels(PricingModelsT&& value) {
    SetPricingModels(std::forward<PricingModelsT>(value));
    return *this;
  }
  template <typename PricingModelsT = PricingModel>
  GetListingResult& AddPricingModels(PricingModelsT&& value) {
    m_pricingModelsHasBeenSet = true;
    m_pricingModels.emplace_back(std::forward<PricingModelsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pricing units that define the billing dimensions for offers associated
   * with this listing, such as users, hosts, or data.</p>
   */
  inline const Aws::Vector<PricingUnit>& GetPricingUnits() const { return m_pricingUnits; }
  template <typename PricingUnitsT = Aws::Vector<PricingUnit>>
  void SetPricingUnits(PricingUnitsT&& value) {
    m_pricingUnitsHasBeenSet = true;
    m_pricingUnits = std::forward<PricingUnitsT>(value);
  }
  template <typename PricingUnitsT = Aws::Vector<PricingUnit>>
  GetListingResult& WithPricingUnits(PricingUnitsT&& value) {
    SetPricingUnits(std::forward<PricingUnitsT>(value));
    return *this;
  }
  template <typename PricingUnitsT = PricingUnit>
  GetListingResult& AddPricingUnits(PricingUnitsT&& value) {
    m_pricingUnitsHasBeenSet = true;
    m_pricingUnits.emplace_back(std::forward<PricingUnitsT>(value));
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
  GetListingResult& WithPromotionalMedia(PromotionalMediaT&& value) {
    SetPromotionalMedia(std::forward<PromotionalMediaT>(value));
    return *this;
  }
  template <typename PromotionalMediaT = PromotionalMedia>
  GetListingResult& AddPromotionalMedia(PromotionalMediaT&& value) {
    m_promotionalMediaHasBeenSet = true;
    m_promotionalMedia.emplace_back(std::forward<PromotionalMediaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity who created and published the listing.</p>
   */
  inline const SellerInformation& GetPublisher() const { return m_publisher; }
  template <typename PublisherT = SellerInformation>
  void SetPublisher(PublisherT&& value) {
    m_publisherHasBeenSet = true;
    m_publisher = std::forward<PublisherT>(value);
  }
  template <typename PublisherT = SellerInformation>
  GetListingResult& WithPublisher(PublisherT&& value) {
    SetPublisher(std::forward<PublisherT>(value));
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
  GetListingResult& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  template <typename ResourcesT = Resource>
  GetListingResult& AddResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources.emplace_back(std::forward<ResourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of customer reviews available for the listing, including average
   * rating and total review count by source.</p>
   */
  inline const ReviewSummary& GetReviewSummary() const { return m_reviewSummary; }
  template <typename ReviewSummaryT = ReviewSummary>
  void SetReviewSummary(ReviewSummaryT&& value) {
    m_reviewSummaryHasBeenSet = true;
    m_reviewSummary = std::forward<ReviewSummaryT>(value);
  }
  template <typename ReviewSummaryT = ReviewSummary>
  GetListingResult& WithReviewSummary(ReviewSummaryT&& value) {
    SetReviewSummary(std::forward<ReviewSummaryT>(value));
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
  GetListingResult& WithSellerEngagements(SellerEngagementsT&& value) {
    SetSellerEngagements(std::forward<SellerEngagementsT>(value));
    return *this;
  }
  template <typename SellerEngagementsT = SellerEngagement>
  GetListingResult& AddSellerEngagements(SellerEngagementsT&& value) {
    m_sellerEngagementsHasBeenSet = true;
    m_sellerEngagements.emplace_back(std::forward<SellerEngagementsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A 1–3 sentence summary describing the key aspects of the listing.</p>
   */
  inline const Aws::String& GetShortDescription() const { return m_shortDescription; }
  template <typename ShortDescriptionT = Aws::String>
  void SetShortDescription(ShortDescriptionT&& value) {
    m_shortDescriptionHasBeenSet = true;
    m_shortDescription = std::forward<ShortDescriptionT>(value);
  }
  template <typename ShortDescriptionT = Aws::String>
  GetListingResult& WithShortDescription(ShortDescriptionT&& value) {
    SetShortDescription(std::forward<ShortDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Use cases associated with the listing, describing scenarios where the product
   * can be applied.</p>
   */
  inline const Aws::Vector<UseCaseEntry>& GetUseCases() const { return m_useCases; }
  template <typename UseCasesT = Aws::Vector<UseCaseEntry>>
  void SetUseCases(UseCasesT&& value) {
    m_useCasesHasBeenSet = true;
    m_useCases = std::forward<UseCasesT>(value);
  }
  template <typename UseCasesT = Aws::Vector<UseCaseEntry>>
  GetListingResult& WithUseCases(UseCasesT&& value) {
    SetUseCases(std::forward<UseCasesT>(value));
    return *this;
  }
  template <typename UseCasesT = UseCaseEntry>
  GetListingResult& AddUseCases(UseCasesT&& value) {
    m_useCasesHasBeenSet = true;
    m_useCases.emplace_back(std::forward<UseCasesT>(value));
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
  GetListingResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ListingAssociatedEntity> m_associatedEntities;

  Aws::Vector<ListingBadge> m_badges;

  Aws::String m_catalog;

  Aws::Vector<Category> m_categories;

  Aws::Vector<FulfillmentOptionSummary> m_fulfillmentOptionSummaries;

  Aws::Vector<Aws::String> m_highlights;

  Aws::String m_integrationGuide;

  Aws::String m_listingId;

  Aws::String m_listingName;

  Aws::String m_logoThumbnailUrl;

  Aws::String m_longDescription;

  Aws::Vector<PricingModel> m_pricingModels;

  Aws::Vector<PricingUnit> m_pricingUnits;

  Aws::Vector<PromotionalMedia> m_promotionalMedia;

  SellerInformation m_publisher;

  Aws::Vector<Resource> m_resources;

  ReviewSummary m_reviewSummary;

  Aws::Vector<SellerEngagement> m_sellerEngagements;

  Aws::String m_shortDescription;

  Aws::Vector<UseCaseEntry> m_useCases;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_associatedEntitiesHasBeenSet = false;
  bool m_badgesHasBeenSet = false;
  bool m_catalogHasBeenSet = false;
  bool m_categoriesHasBeenSet = false;
  bool m_fulfillmentOptionSummariesHasBeenSet = false;
  bool m_highlightsHasBeenSet = false;
  bool m_integrationGuideHasBeenSet = false;
  bool m_listingIdHasBeenSet = false;
  bool m_listingNameHasBeenSet = false;
  bool m_logoThumbnailUrlHasBeenSet = false;
  bool m_longDescriptionHasBeenSet = false;
  bool m_pricingModelsHasBeenSet = false;
  bool m_pricingUnitsHasBeenSet = false;
  bool m_promotionalMediaHasBeenSet = false;
  bool m_publisherHasBeenSet = false;
  bool m_resourcesHasBeenSet = false;
  bool m_reviewSummaryHasBeenSet = false;
  bool m_sellerEngagementsHasBeenSet = false;
  bool m_shortDescriptionHasBeenSet = false;
  bool m_useCasesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
