/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketingRequest.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/AssetLanguage.h>
#include <aws/partnercentral-marketing/model/CampaignTemplateCollection.h>
#include <aws/partnercentral-marketing/model/Catalog.h>
#include <aws/partnercentral-marketing/model/CustomerSegment.h>
#include <aws/partnercentral-marketing/model/Industry.h>
#include <aws/partnercentral-marketing/model/Theme.h>

#include <utility>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {

/**
 * <p>Input for SearchCampaignTemplates.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/SearchCampaignTemplatesRequest">AWS
 * API Reference</a></p>
 */
class SearchCampaignTemplatesRequest : public PartnerCentralMarketingRequest {
 public:
  AWS_PARTNERCENTRALMARKETING_API SearchCampaignTemplatesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SearchCampaignTemplates"; }

  AWS_PARTNERCENTRALMARKETING_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALMARKETING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog (AWS or Sandbox). AWS and Sandbox templates may differ.</p>
   */
  inline Catalog GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  inline void SetCatalog(Catalog value) {
    m_catalogHasBeenSet = true;
    m_catalog = value;
  }
  inline SearchCampaignTemplatesRequest& WithCatalog(Catalog value) {
    SetCatalog(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Free-text query matched against the template's name and description. Any word
   * may match, and the last word matches as a prefix when it has 3 or more
   * characters, so <code>nov</code> finds Amazon Nova. A template whose name holds
   * the query as a phrase ranks first, then whole-word matches, then prefix-only
   * ones. Omit to browse the whole catalog. Text analysis is derived from each
   * template's own LanguageCode, never from the language filter.</p>
   */
  inline const Aws::String& GetSearchText() const { return m_searchText; }
  inline bool SearchTextHasBeenSet() const { return m_searchTextHasBeenSet; }
  template <typename SearchTextT = Aws::String>
  void SetSearchText(SearchTextT&& value) {
    m_searchTextHasBeenSet = true;
    m_searchText = std::forward<SearchTextT>(value);
  }
  template <typename SearchTextT = Aws::String>
  SearchCampaignTemplatesRequest& WithSearchText(SearchTextT&& value) {
    SetSearchText(std::forward<SearchTextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Restrict to templates in these industries. Values within this member are
   * OR-ed; distinct facet members are AND-ed. Exact, case-sensitive match.</p>
   */
  inline const Aws::Vector<Industry>& GetIndustry() const { return m_industry; }
  inline bool IndustryHasBeenSet() const { return m_industryHasBeenSet; }
  template <typename IndustryT = Aws::Vector<Industry>>
  void SetIndustry(IndustryT&& value) {
    m_industryHasBeenSet = true;
    m_industry = std::forward<IndustryT>(value);
  }
  template <typename IndustryT = Aws::Vector<Industry>>
  SearchCampaignTemplatesRequest& WithIndustry(IndustryT&& value) {
    SetIndustry(std::forward<IndustryT>(value));
    return *this;
  }
  inline SearchCampaignTemplatesRequest& AddIndustry(Industry value) {
    m_industryHasBeenSet = true;
    m_industry.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Restrict to templates with these campaign use cases. Values within this
   * member are OR-ed; distinct facet members are AND-ed. Exact, case-sensitive
   * match.</p>
   */
  inline const Aws::Vector<Aws::String>& GetUseCase() const { return m_useCase; }
  inline bool UseCaseHasBeenSet() const { return m_useCaseHasBeenSet; }
  template <typename UseCaseT = Aws::Vector<Aws::String>>
  void SetUseCase(UseCaseT&& value) {
    m_useCaseHasBeenSet = true;
    m_useCase = std::forward<UseCaseT>(value);
  }
  template <typename UseCaseT = Aws::Vector<Aws::String>>
  SearchCampaignTemplatesRequest& WithUseCase(UseCaseT&& value) {
    SetUseCase(std::forward<UseCaseT>(value));
    return *this;
  }
  template <typename UseCaseT = Aws::String>
  SearchCampaignTemplatesRequest& AddUseCase(UseCaseT&& value) {
    m_useCaseHasBeenSet = true;
    m_useCase.emplace_back(std::forward<UseCaseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Restrict to templates in these language(s), matched by each template's
   * <code>LanguageCode</code>. Values within this member are OR-ed; distinct facet
   * members are AND-ed. Narrows results; it does not reinterpret SearchText.</p>
   */
  inline const Aws::Vector<AssetLanguage>& GetLanguage() const { return m_language; }
  inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
  template <typename LanguageT = Aws::Vector<AssetLanguage>>
  void SetLanguage(LanguageT&& value) {
    m_languageHasBeenSet = true;
    m_language = std::forward<LanguageT>(value);
  }
  template <typename LanguageT = Aws::Vector<AssetLanguage>>
  SearchCampaignTemplatesRequest& WithLanguage(LanguageT&& value) {
    SetLanguage(std::forward<LanguageT>(value));
    return *this;
  }
  inline SearchCampaignTemplatesRequest& AddLanguage(AssetLanguage value) {
    m_languageHasBeenSet = true;
    m_language.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Restrict to templates promoting these AWS services. Values within this member
   * are OR-ed; distinct facet members are AND-ed. Exact, case-sensitive match.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAwsServices() const { return m_awsServices; }
  inline bool AwsServicesHasBeenSet() const { return m_awsServicesHasBeenSet; }
  template <typename AwsServicesT = Aws::Vector<Aws::String>>
  void SetAwsServices(AwsServicesT&& value) {
    m_awsServicesHasBeenSet = true;
    m_awsServices = std::forward<AwsServicesT>(value);
  }
  template <typename AwsServicesT = Aws::Vector<Aws::String>>
  SearchCampaignTemplatesRequest& WithAwsServices(AwsServicesT&& value) {
    SetAwsServices(std::forward<AwsServicesT>(value));
    return *this;
  }
  template <typename AwsServicesT = Aws::String>
  SearchCampaignTemplatesRequest& AddAwsServices(AwsServicesT&& value) {
    m_awsServicesHasBeenSet = true;
    m_awsServices.emplace_back(std::forward<AwsServicesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Restrict to templates for these customer segments. Values within this member
   * are OR-ed; distinct facet members are AND-ed. A template that names no customer
   * segment matches every value.</p>
   */
  inline const Aws::Vector<CustomerSegment>& GetCustomerSegments() const { return m_customerSegments; }
  inline bool CustomerSegmentsHasBeenSet() const { return m_customerSegmentsHasBeenSet; }
  template <typename CustomerSegmentsT = Aws::Vector<CustomerSegment>>
  void SetCustomerSegments(CustomerSegmentsT&& value) {
    m_customerSegmentsHasBeenSet = true;
    m_customerSegments = std::forward<CustomerSegmentsT>(value);
  }
  template <typename CustomerSegmentsT = Aws::Vector<CustomerSegment>>
  SearchCampaignTemplatesRequest& WithCustomerSegments(CustomerSegmentsT&& value) {
    SetCustomerSegments(std::forward<CustomerSegmentsT>(value));
    return *this;
  }
  inline SearchCampaignTemplatesRequest& AddCustomerSegments(CustomerSegment value) {
    m_customerSegmentsHasBeenSet = true;
    m_customerSegments.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Restrict to templates with these themes. Values within this member are OR-ed;
   * distinct facet members are AND-ed. A template that names no theme matches every
   * value.</p>
   */
  inline const Aws::Vector<Theme>& GetThemes() const { return m_themes; }
  inline bool ThemesHasBeenSet() const { return m_themesHasBeenSet; }
  template <typename ThemesT = Aws::Vector<Theme>>
  void SetThemes(ThemesT&& value) {
    m_themesHasBeenSet = true;
    m_themes = std::forward<ThemesT>(value);
  }
  template <typename ThemesT = Aws::Vector<Theme>>
  SearchCampaignTemplatesRequest& WithThemes(ThemesT&& value) {
    SetThemes(std::forward<ThemesT>(value));
    return *this;
  }
  inline SearchCampaignTemplatesRequest& AddThemes(Theme value) {
    m_themesHasBeenSet = true;
    m_themes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Restrict to templates in these collections. Values within this member are
   * OR-ed; distinct facet members are AND-ed. Omit for no restriction; there is no
   * default.</p>
   */
  inline const Aws::Vector<CampaignTemplateCollection>& GetCollection() const { return m_collection; }
  inline bool CollectionHasBeenSet() const { return m_collectionHasBeenSet; }
  template <typename CollectionT = Aws::Vector<CampaignTemplateCollection>>
  void SetCollection(CollectionT&& value) {
    m_collectionHasBeenSet = true;
    m_collection = std::forward<CollectionT>(value);
  }
  template <typename CollectionT = Aws::Vector<CampaignTemplateCollection>>
  SearchCampaignTemplatesRequest& WithCollection(CollectionT&& value) {
    SetCollection(std::forward<CollectionT>(value));
    return *this;
  }
  inline SearchCampaignTemplatesRequest& AddCollection(CampaignTemplateCollection value) {
    m_collectionHasBeenSet = true;
    m_collection.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum results per page.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline SearchCampaignTemplatesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  SearchCampaignTemplatesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Catalog m_catalog{Catalog::NOT_SET};

  Aws::String m_searchText;

  Aws::Vector<Industry> m_industry;

  Aws::Vector<Aws::String> m_useCase;

  Aws::Vector<AssetLanguage> m_language;

  Aws::Vector<Aws::String> m_awsServices;

  Aws::Vector<CustomerSegment> m_customerSegments;

  Aws::Vector<Theme> m_themes;

  Aws::Vector<CampaignTemplateCollection> m_collection;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_catalogHasBeenSet = false;
  bool m_searchTextHasBeenSet = false;
  bool m_industryHasBeenSet = false;
  bool m_useCaseHasBeenSet = false;
  bool m_languageHasBeenSet = false;
  bool m_awsServicesHasBeenSet = false;
  bool m_customerSegmentsHasBeenSet = false;
  bool m_themesHasBeenSet = false;
  bool m_collectionHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
