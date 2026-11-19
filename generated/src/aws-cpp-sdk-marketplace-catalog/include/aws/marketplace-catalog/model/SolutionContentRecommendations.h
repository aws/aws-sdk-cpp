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
 * <p>The content recommendations for a solution listing, with one member for each
 * listing field. A member is absent if nothing is recommended for that
 * field.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/SolutionContentRecommendations">AWS
 * API Reference</a></p>
 */
class SolutionContentRecommendations {
 public:
  AWS_MARKETPLACECATALOG_API SolutionContentRecommendations() = default;
  AWS_MARKETPLACECATALOG_API SolutionContentRecommendations(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API SolutionContentRecommendations& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The recommendation for the external title of the solution.</p>
   */
  inline const ContentRecommendation& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = ContentRecommendation>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = ContentRecommendation>
  SolutionContentRecommendations& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommendation for the value proposition of the solution.</p>
   */
  inline const ContentRecommendation& GetShortDescription() const { return m_shortDescription; }
  inline bool ShortDescriptionHasBeenSet() const { return m_shortDescriptionHasBeenSet; }
  template <typename ShortDescriptionT = ContentRecommendation>
  void SetShortDescription(ShortDescriptionT&& value) {
    m_shortDescriptionHasBeenSet = true;
    m_shortDescription = std::forward<ShortDescriptionT>(value);
  }
  template <typename ShortDescriptionT = ContentRecommendation>
  SolutionContentRecommendations& WithShortDescription(ShortDescriptionT&& value) {
    SetShortDescription(std::forward<ShortDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommendation for the long description of the solution.</p>
   */
  inline const ContentRecommendation& GetLongDescription() const { return m_longDescription; }
  inline bool LongDescriptionHasBeenSet() const { return m_longDescriptionHasBeenSet; }
  template <typename LongDescriptionT = ContentRecommendation>
  void SetLongDescription(LongDescriptionT&& value) {
    m_longDescriptionHasBeenSet = true;
    m_longDescription = std::forward<LongDescriptionT>(value);
  }
  template <typename LongDescriptionT = ContentRecommendation>
  SolutionContentRecommendations& WithLongDescription(LongDescriptionT&& value) {
    SetLongDescription(std::forward<LongDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommendation for the integration details of the solution.</p>
   */
  inline const ContentRecommendation& GetIntegrationDetails() const { return m_integrationDetails; }
  inline bool IntegrationDetailsHasBeenSet() const { return m_integrationDetailsHasBeenSet; }
  template <typename IntegrationDetailsT = ContentRecommendation>
  void SetIntegrationDetails(IntegrationDetailsT&& value) {
    m_integrationDetailsHasBeenSet = true;
    m_integrationDetails = std::forward<IntegrationDetailsT>(value);
  }
  template <typename IntegrationDetailsT = ContentRecommendation>
  SolutionContentRecommendations& WithIntegrationDetails(IntegrationDetailsT&& value) {
    SetIntegrationDetails(std::forward<IntegrationDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommendation for the additional resources. Each alternative has up to 8
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
  SolutionContentRecommendations& WithAdditionalResources(AdditionalResourcesT&& value) {
    SetAdditionalResources(std::forward<AdditionalResourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommendation for the use cases of the solution.</p>
   */
  inline const ContentRecommendation& GetUseCases() const { return m_useCases; }
  inline bool UseCasesHasBeenSet() const { return m_useCasesHasBeenSet; }
  template <typename UseCasesT = ContentRecommendation>
  void SetUseCases(UseCasesT&& value) {
    m_useCasesHasBeenSet = true;
    m_useCases = std::forward<UseCasesT>(value);
  }
  template <typename UseCasesT = ContentRecommendation>
  SolutionContentRecommendations& WithUseCases(UseCasesT&& value) {
    SetUseCases(std::forward<UseCasesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommendation for the case studies of the solution. Each alternative has
   * up to 20 case studies.</p>
   */
  inline const ContentRecommendation& GetCaseStudies() const { return m_caseStudies; }
  inline bool CaseStudiesHasBeenSet() const { return m_caseStudiesHasBeenSet; }
  template <typename CaseStudiesT = ContentRecommendation>
  void SetCaseStudies(CaseStudiesT&& value) {
    m_caseStudiesHasBeenSet = true;
    m_caseStudies = std::forward<CaseStudiesT>(value);
  }
  template <typename CaseStudiesT = ContentRecommendation>
  SolutionContentRecommendations& WithCaseStudies(CaseStudiesT&& value) {
    SetCaseStudies(std::forward<CaseStudiesT>(value));
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
  SolutionContentRecommendations& WithCitations(CitationsT&& value) {
    SetCitations(std::forward<CitationsT>(value));
    return *this;
  }
  template <typename CitationsT = RecommendationCitation>
  SolutionContentRecommendations& AddCitations(CitationsT&& value) {
    m_citationsHasBeenSet = true;
    m_citations.emplace_back(std::forward<CitationsT>(value));
    return *this;
  }
  ///@}
 private:
  ContentRecommendation m_title;

  ContentRecommendation m_shortDescription;

  ContentRecommendation m_longDescription;

  ContentRecommendation m_integrationDetails;

  ContentRecommendation m_additionalResources;

  ContentRecommendation m_useCases;

  ContentRecommendation m_caseStudies;

  Aws::Vector<RecommendationCitation> m_citations;
  bool m_titleHasBeenSet = false;
  bool m_shortDescriptionHasBeenSet = false;
  bool m_longDescriptionHasBeenSet = false;
  bool m_integrationDetailsHasBeenSet = false;
  bool m_additionalResourcesHasBeenSet = false;
  bool m_useCasesHasBeenSet = false;
  bool m_caseStudiesHasBeenSet = false;
  bool m_citationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
