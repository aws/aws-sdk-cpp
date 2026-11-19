/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/ContentRecommendation.h>
#include <aws/marketplace-catalog/model/RecommendationCitation.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceCatalog {
namespace Model {

/**
 * <p>The content recommendations for a product listing, with one member for each
 * listing field. A member is absent if nothing is recommended for that
 * field.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ProductContentRecommendations">AWS
 * API Reference</a></p>
 */
class ProductContentRecommendations {
 public:
  AWS_MARKETPLACECATALOG_API ProductContentRecommendations() = default;
  AWS_MARKETPLACECATALOG_API ProductContentRecommendations(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API ProductContentRecommendations& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The recommendation for the product title.</p>
   */
  inline const ContentRecommendation& GetProductTitle() const { return m_productTitle; }
  inline bool ProductTitleHasBeenSet() const { return m_productTitleHasBeenSet; }
  template <typename ProductTitleT = ContentRecommendation>
  void SetProductTitle(ProductTitleT&& value) {
    m_productTitleHasBeenSet = true;
    m_productTitle = std::forward<ProductTitleT>(value);
  }
  template <typename ProductTitleT = ContentRecommendation>
  ProductContentRecommendations& WithProductTitle(ProductTitleT&& value) {
    SetProductTitle(std::forward<ProductTitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommendation for the short description.</p>
   */
  inline const ContentRecommendation& GetShortDescription() const { return m_shortDescription; }
  inline bool ShortDescriptionHasBeenSet() const { return m_shortDescriptionHasBeenSet; }
  template <typename ShortDescriptionT = ContentRecommendation>
  void SetShortDescription(ShortDescriptionT&& value) {
    m_shortDescriptionHasBeenSet = true;
    m_shortDescription = std::forward<ShortDescriptionT>(value);
  }
  template <typename ShortDescriptionT = ContentRecommendation>
  ProductContentRecommendations& WithShortDescription(ShortDescriptionT&& value) {
    SetShortDescription(std::forward<ShortDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommendation for the long description.</p>
   */
  inline const ContentRecommendation& GetLongDescription() const { return m_longDescription; }
  inline bool LongDescriptionHasBeenSet() const { return m_longDescriptionHasBeenSet; }
  template <typename LongDescriptionT = ContentRecommendation>
  void SetLongDescription(LongDescriptionT&& value) {
    m_longDescriptionHasBeenSet = true;
    m_longDescription = std::forward<LongDescriptionT>(value);
  }
  template <typename LongDescriptionT = ContentRecommendation>
  ProductContentRecommendations& WithLongDescription(LongDescriptionT&& value) {
    SetLongDescription(std::forward<LongDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommendation for the support description.</p>
   */
  inline const ContentRecommendation& GetSupportDescription() const { return m_supportDescription; }
  inline bool SupportDescriptionHasBeenSet() const { return m_supportDescriptionHasBeenSet; }
  template <typename SupportDescriptionT = ContentRecommendation>
  void SetSupportDescription(SupportDescriptionT&& value) {
    m_supportDescriptionHasBeenSet = true;
    m_supportDescription = std::forward<SupportDescriptionT>(value);
  }
  template <typename SupportDescriptionT = ContentRecommendation>
  ProductContentRecommendations& WithSupportDescription(SupportDescriptionT&& value) {
    SetSupportDescription(std::forward<SupportDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommendation for the highlights.</p>
   */
  inline const ContentRecommendation& GetHighlights() const { return m_highlights; }
  inline bool HighlightsHasBeenSet() const { return m_highlightsHasBeenSet; }
  template <typename HighlightsT = ContentRecommendation>
  void SetHighlights(HighlightsT&& value) {
    m_highlightsHasBeenSet = true;
    m_highlights = std::forward<HighlightsT>(value);
  }
  template <typename HighlightsT = ContentRecommendation>
  ProductContentRecommendations& WithHighlights(HighlightsT&& value) {
    SetHighlights(std::forward<HighlightsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommendation for the search keywords.</p>
   */
  inline const ContentRecommendation& GetSearchKeywords() const { return m_searchKeywords; }
  inline bool SearchKeywordsHasBeenSet() const { return m_searchKeywordsHasBeenSet; }
  template <typename SearchKeywordsT = ContentRecommendation>
  void SetSearchKeywords(SearchKeywordsT&& value) {
    m_searchKeywordsHasBeenSet = true;
    m_searchKeywords = std::forward<SearchKeywordsT>(value);
  }
  template <typename SearchKeywordsT = ContentRecommendation>
  ProductContentRecommendations& WithSearchKeywords(SearchKeywordsT&& value) {
    SetSearchKeywords(std::forward<SearchKeywordsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommendation for the categories.</p>
   */
  inline const ContentRecommendation& GetCategories() const { return m_categories; }
  inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
  template <typename CategoriesT = ContentRecommendation>
  void SetCategories(CategoriesT&& value) {
    m_categoriesHasBeenSet = true;
    m_categories = std::forward<CategoriesT>(value);
  }
  template <typename CategoriesT = ContentRecommendation>
  ProductContentRecommendations& WithCategories(CategoriesT&& value) {
    SetCategories(std::forward<CategoriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommendation for the additional resources. Each alternative has up to 3
   * resources.</p>
   */
  inline const ContentRecommendation& GetAdditionalResources() const { return m_additionalResources; }
  inline bool AdditionalResourcesHasBeenSet() const { return m_additionalResourcesHasBeenSet; }
  template <typename AdditionalResourcesT = ContentRecommendation>
  void SetAdditionalResources(AdditionalResourcesT&& value) {
    m_additionalResourcesHasBeenSet = true;
    m_additionalResources = std::forward<AdditionalResourcesT>(value);
  }
  template <typename AdditionalResourcesT = ContentRecommendation>
  ProductContentRecommendations& WithAdditionalResources(AdditionalResourcesT&& value) {
    SetAdditionalResources(std::forward<AdditionalResourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sources that the recommendations are based on. You can have up to 5
   * sources. The list is empty if there are none.</p>
   */
  inline const Aws::Vector<RecommendationCitation>& GetCitations() const { return m_citations; }
  inline bool CitationsHasBeenSet() const { return m_citationsHasBeenSet; }
  template <typename CitationsT = Aws::Vector<RecommendationCitation>>
  void SetCitations(CitationsT&& value) {
    m_citationsHasBeenSet = true;
    m_citations = std::forward<CitationsT>(value);
  }
  template <typename CitationsT = Aws::Vector<RecommendationCitation>>
  ProductContentRecommendations& WithCitations(CitationsT&& value) {
    SetCitations(std::forward<CitationsT>(value));
    return *this;
  }
  template <typename CitationsT = RecommendationCitation>
  ProductContentRecommendations& AddCitations(CitationsT&& value) {
    m_citationsHasBeenSet = true;
    m_citations.emplace_back(std::forward<CitationsT>(value));
    return *this;
  }
  ///@}
 private:
  ContentRecommendation m_productTitle;

  ContentRecommendation m_shortDescription;

  ContentRecommendation m_longDescription;

  ContentRecommendation m_supportDescription;

  ContentRecommendation m_highlights;

  ContentRecommendation m_searchKeywords;

  ContentRecommendation m_categories;

  ContentRecommendation m_additionalResources;

  Aws::Vector<RecommendationCitation> m_citations;
  bool m_productTitleHasBeenSet = false;
  bool m_shortDescriptionHasBeenSet = false;
  bool m_longDescriptionHasBeenSet = false;
  bool m_supportDescriptionHasBeenSet = false;
  bool m_highlightsHasBeenSet = false;
  bool m_searchKeywordsHasBeenSet = false;
  bool m_categoriesHasBeenSet = false;
  bool m_additionalResourcesHasBeenSet = false;
  bool m_citationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
