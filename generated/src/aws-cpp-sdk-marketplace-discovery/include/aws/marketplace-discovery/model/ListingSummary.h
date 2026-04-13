/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/Category.h>
#include <aws/marketplace-discovery/model/FulfillmentOptionSummary.h>
#include <aws/marketplace-discovery/model/ListingBadge.h>
#include <aws/marketplace-discovery/model/ListingSummaryAssociatedEntity.h>
#include <aws/marketplace-discovery/model/PricingModel.h>
#include <aws/marketplace-discovery/model/PricingUnit.h>
#include <aws/marketplace-discovery/model/ReviewSummary.h>
#include <aws/marketplace-discovery/model/SellerInformation.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>Summary information about a listing returned by search operations, including
 * the listing name, description, badges, categories, pricing models, reviews, and
 * associated products.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/ListingSummary">AWS
 * API Reference</a></p>
 */
class ListingSummary {
 public:
  AWS_MARKETPLACEDISCOVERY_API ListingSummary() = default;
  AWS_MARKETPLACEDISCOVERY_API ListingSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API ListingSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the listing.</p>
   */
  inline const Aws::String& GetListingId() const { return m_listingId; }
  inline bool ListingIdHasBeenSet() const { return m_listingIdHasBeenSet; }
  template <typename ListingIdT = Aws::String>
  void SetListingId(ListingIdT&& value) {
    m_listingIdHasBeenSet = true;
    m_listingId = std::forward<ListingIdT>(value);
  }
  template <typename ListingIdT = Aws::String>
  ListingSummary& WithListingId(ListingIdT&& value) {
    SetListingId(std::forward<ListingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable display name of the listing.</p>
   */
  inline const Aws::String& GetListingName() const { return m_listingName; }
  inline bool ListingNameHasBeenSet() const { return m_listingNameHasBeenSet; }
  template <typename ListingNameT = Aws::String>
  void SetListingName(ListingNameT&& value) {
    m_listingNameHasBeenSet = true;
    m_listingName = std::forward<ListingNameT>(value);
  }
  template <typename ListingNameT = Aws::String>
  ListingSummary& WithListingName(ListingNameT&& value) {
    SetListingName(std::forward<ListingNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity who created and published the listing.</p>
   */
  inline const SellerInformation& GetPublisher() const { return m_publisher; }
  inline bool PublisherHasBeenSet() const { return m_publisherHasBeenSet; }
  template <typename PublisherT = SellerInformation>
  void SetPublisher(PublisherT&& value) {
    m_publisherHasBeenSet = true;
    m_publisher = std::forward<PublisherT>(value);
  }
  template <typename PublisherT = SellerInformation>
  ListingSummary& WithPublisher(PublisherT&& value) {
    SetPublisher(std::forward<PublisherT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the catalog that the listing belongs to.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  ListingSummary& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A 1–3 sentence summary describing the key aspects of the listing.</p>
   */
  inline const Aws::String& GetShortDescription() const { return m_shortDescription; }
  inline bool ShortDescriptionHasBeenSet() const { return m_shortDescriptionHasBeenSet; }
  template <typename ShortDescriptionT = Aws::String>
  void SetShortDescription(ShortDescriptionT&& value) {
    m_shortDescriptionHasBeenSet = true;
    m_shortDescription = std::forward<ShortDescriptionT>(value);
  }
  template <typename ShortDescriptionT = Aws::String>
  ListingSummary& WithShortDescription(ShortDescriptionT&& value) {
    SetShortDescription(std::forward<ShortDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the logo thumbnail image for the listing.</p>
   */
  inline const Aws::String& GetLogoThumbnailUrl() const { return m_logoThumbnailUrl; }
  inline bool LogoThumbnailUrlHasBeenSet() const { return m_logoThumbnailUrlHasBeenSet; }
  template <typename LogoThumbnailUrlT = Aws::String>
  void SetLogoThumbnailUrl(LogoThumbnailUrlT&& value) {
    m_logoThumbnailUrlHasBeenSet = true;
    m_logoThumbnailUrl = std::forward<LogoThumbnailUrlT>(value);
  }
  template <typename LogoThumbnailUrlT = Aws::String>
  ListingSummary& WithLogoThumbnailUrl(LogoThumbnailUrlT&& value) {
    SetLogoThumbnailUrl(std::forward<LogoThumbnailUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The categories used to classify this listing into logical groups.</p>
   */
  inline const Aws::Vector<Category>& GetCategories() const { return m_categories; }
  inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
  template <typename CategoriesT = Aws::Vector<Category>>
  void SetCategories(CategoriesT&& value) {
    m_categoriesHasBeenSet = true;
    m_categories = std::forward<CategoriesT>(value);
  }
  template <typename CategoriesT = Aws::Vector<Category>>
  ListingSummary& WithCategories(CategoriesT&& value) {
    SetCategories(std::forward<CategoriesT>(value));
    return *this;
  }
  template <typename CategoriesT = Category>
  ListingSummary& AddCategories(CategoriesT&& value) {
    m_categoriesHasBeenSet = true;
    m_categories.emplace_back(std::forward<CategoriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of fulfillment options available for the listing.</p>
   */
  inline const Aws::Vector<FulfillmentOptionSummary>& GetFulfillmentOptionSummaries() const { return m_fulfillmentOptionSummaries; }
  inline bool FulfillmentOptionSummariesHasBeenSet() const { return m_fulfillmentOptionSummariesHasBeenSet; }
  template <typename FulfillmentOptionSummariesT = Aws::Vector<FulfillmentOptionSummary>>
  void SetFulfillmentOptionSummaries(FulfillmentOptionSummariesT&& value) {
    m_fulfillmentOptionSummariesHasBeenSet = true;
    m_fulfillmentOptionSummaries = std::forward<FulfillmentOptionSummariesT>(value);
  }
  template <typename FulfillmentOptionSummariesT = Aws::Vector<FulfillmentOptionSummary>>
  ListingSummary& WithFulfillmentOptionSummaries(FulfillmentOptionSummariesT&& value) {
    SetFulfillmentOptionSummaries(std::forward<FulfillmentOptionSummariesT>(value));
    return *this;
  }
  template <typename FulfillmentOptionSummariesT = FulfillmentOptionSummary>
  ListingSummary& AddFulfillmentOptionSummaries(FulfillmentOptionSummariesT&& value) {
    m_fulfillmentOptionSummariesHasBeenSet = true;
    m_fulfillmentOptionSummaries.emplace_back(std::forward<FulfillmentOptionSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Badges indicating special attributes of the listing.</p>
   */
  inline const Aws::Vector<ListingBadge>& GetBadges() const { return m_badges; }
  inline bool BadgesHasBeenSet() const { return m_badgesHasBeenSet; }
  template <typename BadgesT = Aws::Vector<ListingBadge>>
  void SetBadges(BadgesT&& value) {
    m_badgesHasBeenSet = true;
    m_badges = std::forward<BadgesT>(value);
  }
  template <typename BadgesT = Aws::Vector<ListingBadge>>
  ListingSummary& WithBadges(BadgesT&& value) {
    SetBadges(std::forward<BadgesT>(value));
    return *this;
  }
  template <typename BadgesT = ListingBadge>
  ListingSummary& AddBadges(BadgesT&& value) {
    m_badgesHasBeenSet = true;
    m_badges.emplace_back(std::forward<BadgesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of customer reviews for the listing.</p>
   */
  inline const ReviewSummary& GetReviewSummary() const { return m_reviewSummary; }
  inline bool ReviewSummaryHasBeenSet() const { return m_reviewSummaryHasBeenSet; }
  template <typename ReviewSummaryT = ReviewSummary>
  void SetReviewSummary(ReviewSummaryT&& value) {
    m_reviewSummaryHasBeenSet = true;
    m_reviewSummary = std::forward<ReviewSummaryT>(value);
  }
  template <typename ReviewSummaryT = ReviewSummary>
  ListingSummary& WithReviewSummary(ReviewSummaryT&& value) {
    SetReviewSummary(std::forward<ReviewSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pricing models for offers associated with this listing.</p>
   */
  inline const Aws::Vector<PricingModel>& GetPricingModels() const { return m_pricingModels; }
  inline bool PricingModelsHasBeenSet() const { return m_pricingModelsHasBeenSet; }
  template <typename PricingModelsT = Aws::Vector<PricingModel>>
  void SetPricingModels(PricingModelsT&& value) {
    m_pricingModelsHasBeenSet = true;
    m_pricingModels = std::forward<PricingModelsT>(value);
  }
  template <typename PricingModelsT = Aws::Vector<PricingModel>>
  ListingSummary& WithPricingModels(PricingModelsT&& value) {
    SetPricingModels(std::forward<PricingModelsT>(value));
    return *this;
  }
  template <typename PricingModelsT = PricingModel>
  ListingSummary& AddPricingModels(PricingModelsT&& value) {
    m_pricingModelsHasBeenSet = true;
    m_pricingModels.emplace_back(std::forward<PricingModelsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pricing units that define the billing dimensions for offers associated
   * with this listing.</p>
   */
  inline const Aws::Vector<PricingUnit>& GetPricingUnits() const { return m_pricingUnits; }
  inline bool PricingUnitsHasBeenSet() const { return m_pricingUnitsHasBeenSet; }
  template <typename PricingUnitsT = Aws::Vector<PricingUnit>>
  void SetPricingUnits(PricingUnitsT&& value) {
    m_pricingUnitsHasBeenSet = true;
    m_pricingUnits = std::forward<PricingUnitsT>(value);
  }
  template <typename PricingUnitsT = Aws::Vector<PricingUnit>>
  ListingSummary& WithPricingUnits(PricingUnitsT&& value) {
    SetPricingUnits(std::forward<PricingUnitsT>(value));
    return *this;
  }
  template <typename PricingUnitsT = PricingUnit>
  ListingSummary& AddPricingUnits(PricingUnitsT&& value) {
    m_pricingUnitsHasBeenSet = true;
    m_pricingUnits.emplace_back(std::forward<PricingUnitsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The products associated with this listing.</p>
   */
  inline const Aws::Vector<ListingSummaryAssociatedEntity>& GetAssociatedEntities() const { return m_associatedEntities; }
  inline bool AssociatedEntitiesHasBeenSet() const { return m_associatedEntitiesHasBeenSet; }
  template <typename AssociatedEntitiesT = Aws::Vector<ListingSummaryAssociatedEntity>>
  void SetAssociatedEntities(AssociatedEntitiesT&& value) {
    m_associatedEntitiesHasBeenSet = true;
    m_associatedEntities = std::forward<AssociatedEntitiesT>(value);
  }
  template <typename AssociatedEntitiesT = Aws::Vector<ListingSummaryAssociatedEntity>>
  ListingSummary& WithAssociatedEntities(AssociatedEntitiesT&& value) {
    SetAssociatedEntities(std::forward<AssociatedEntitiesT>(value));
    return *this;
  }
  template <typename AssociatedEntitiesT = ListingSummaryAssociatedEntity>
  ListingSummary& AddAssociatedEntities(AssociatedEntitiesT&& value) {
    m_associatedEntitiesHasBeenSet = true;
    m_associatedEntities.emplace_back(std::forward<AssociatedEntitiesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_listingId;

  Aws::String m_listingName;

  SellerInformation m_publisher;

  Aws::String m_catalog;

  Aws::String m_shortDescription;

  Aws::String m_logoThumbnailUrl;

  Aws::Vector<Category> m_categories;

  Aws::Vector<FulfillmentOptionSummary> m_fulfillmentOptionSummaries;

  Aws::Vector<ListingBadge> m_badges;

  ReviewSummary m_reviewSummary;

  Aws::Vector<PricingModel> m_pricingModels;

  Aws::Vector<PricingUnit> m_pricingUnits;

  Aws::Vector<ListingSummaryAssociatedEntity> m_associatedEntities;
  bool m_listingIdHasBeenSet = false;
  bool m_listingNameHasBeenSet = false;
  bool m_publisherHasBeenSet = false;
  bool m_catalogHasBeenSet = false;
  bool m_shortDescriptionHasBeenSet = false;
  bool m_logoThumbnailUrlHasBeenSet = false;
  bool m_categoriesHasBeenSet = false;
  bool m_fulfillmentOptionSummariesHasBeenSet = false;
  bool m_badgesHasBeenSet = false;
  bool m_reviewSummaryHasBeenSet = false;
  bool m_pricingModelsHasBeenSet = false;
  bool m_pricingUnitsHasBeenSet = false;
  bool m_associatedEntitiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
