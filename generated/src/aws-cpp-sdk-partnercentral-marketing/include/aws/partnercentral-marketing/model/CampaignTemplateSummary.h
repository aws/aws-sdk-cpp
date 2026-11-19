/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/AssetLanguage.h>
#include <aws/partnercentral-marketing/model/CampaignTemplateCollection.h>
#include <aws/partnercentral-marketing/model/CustomerSegment.h>
#include <aws/partnercentral-marketing/model/Industry.h>
#include <aws/partnercentral-marketing/model/Theme.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace PartnerCentralMarketing {
namespace Model {

/**
 * <p>Summary representation of a campaign template, returned by
 * search.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/CampaignTemplateSummary">AWS
 * API Reference</a></p>
 */
class CampaignTemplateSummary {
 public:
  AWS_PARTNERCENTRALMARKETING_API CampaignTemplateSummary() = default;
  AWS_PARTNERCENTRALMARKETING_API CampaignTemplateSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API CampaignTemplateSummary& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The campaign template identifier.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CampaignTemplateSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CampaignTemplateSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Target industry for filtering or categorization.</p>
   */
  inline Industry GetIndustry() const { return m_industry; }
  inline bool IndustryHasBeenSet() const { return m_industryHasBeenSet; }
  inline void SetIndustry(Industry value) {
    m_industryHasBeenSet = true;
    m_industry = value;
  }
  inline CampaignTemplateSummary& WithIndustry(Industry value) {
    SetIndustry(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Campaign use case for filtering or categorization.</p>
   */
  inline const Aws::String& GetUseCase() const { return m_useCase; }
  inline bool UseCaseHasBeenSet() const { return m_useCaseHasBeenSet; }
  template <typename UseCaseT = Aws::String>
  void SetUseCase(UseCaseT&& value) {
    m_useCaseHasBeenSet = true;
    m_useCase = std::forward<UseCaseT>(value);
  }
  template <typename UseCaseT = Aws::String>
  CampaignTemplateSummary& WithUseCase(UseCaseT&& value) {
    SetUseCase(std::forward<UseCaseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The campaign overview. See <code>CampaignTemplate$Description</code>.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CampaignTemplateSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Language the template is authored in. See
   * <code>CampaignTemplate$LanguageCode</code>.</p>
   */
  inline AssetLanguage GetLanguageCode() const { return m_languageCode; }
  inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
  inline void SetLanguageCode(AssetLanguage value) {
    m_languageCodeHasBeenSet = true;
    m_languageCode = value;
  }
  inline CampaignTemplateSummary& WithLanguageCode(AssetLanguage value) {
    SetLanguageCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The browsing context the template is listed in. See
   * <code>CampaignTemplate$Collection</code>.</p>
   */
  inline CampaignTemplateCollection GetCollection() const { return m_collection; }
  inline bool CollectionHasBeenSet() const { return m_collectionHasBeenSet; }
  inline void SetCollection(CampaignTemplateCollection value) {
    m_collectionHasBeenSet = true;
    m_collection = value;
  }
  inline CampaignTemplateSummary& WithCollection(CampaignTemplateCollection value) {
    SetCollection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AWS services the template promotes.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAwsServices() const { return m_awsServices; }
  inline bool AwsServicesHasBeenSet() const { return m_awsServicesHasBeenSet; }
  template <typename AwsServicesT = Aws::Vector<Aws::String>>
  void SetAwsServices(AwsServicesT&& value) {
    m_awsServicesHasBeenSet = true;
    m_awsServices = std::forward<AwsServicesT>(value);
  }
  template <typename AwsServicesT = Aws::Vector<Aws::String>>
  CampaignTemplateSummary& WithAwsServices(AwsServicesT&& value) {
    SetAwsServices(std::forward<AwsServicesT>(value));
    return *this;
  }
  template <typename AwsServicesT = Aws::String>
  CampaignTemplateSummary& AddAwsServices(AwsServicesT&& value) {
    m_awsServicesHasBeenSet = true;
    m_awsServices.emplace_back(std::forward<AwsServicesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The customer segments the template is written for. See
   * <code>CampaignTemplate$CustomerSegments</code>.</p>
   */
  inline const Aws::Vector<CustomerSegment>& GetCustomerSegments() const { return m_customerSegments; }
  inline bool CustomerSegmentsHasBeenSet() const { return m_customerSegmentsHasBeenSet; }
  template <typename CustomerSegmentsT = Aws::Vector<CustomerSegment>>
  void SetCustomerSegments(CustomerSegmentsT&& value) {
    m_customerSegmentsHasBeenSet = true;
    m_customerSegments = std::forward<CustomerSegmentsT>(value);
  }
  template <typename CustomerSegmentsT = Aws::Vector<CustomerSegment>>
  CampaignTemplateSummary& WithCustomerSegments(CustomerSegmentsT&& value) {
    SetCustomerSegments(std::forward<CustomerSegmentsT>(value));
    return *this;
  }
  inline CampaignTemplateSummary& AddCustomerSegments(CustomerSegment value) {
    m_customerSegmentsHasBeenSet = true;
    m_customerSegments.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The template's marketing themes. See
   * <code>CampaignTemplate$Themes</code>.</p>
   */
  inline const Aws::Vector<Theme>& GetThemes() const { return m_themes; }
  inline bool ThemesHasBeenSet() const { return m_themesHasBeenSet; }
  template <typename ThemesT = Aws::Vector<Theme>>
  void SetThemes(ThemesT&& value) {
    m_themesHasBeenSet = true;
    m_themes = std::forward<ThemesT>(value);
  }
  template <typename ThemesT = Aws::Vector<Theme>>
  CampaignTemplateSummary& WithThemes(ThemesT&& value) {
    SetThemes(std::forward<ThemesT>(value));
    return *this;
  }
  inline CampaignTemplateSummary& AddThemes(Theme value) {
    m_themesHasBeenSet = true;
    m_themes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Thumbnail URL.</p>
   */
  inline const Aws::String& GetThumbnailUrl() const { return m_thumbnailUrl; }
  inline bool ThumbnailUrlHasBeenSet() const { return m_thumbnailUrlHasBeenSet; }
  template <typename ThumbnailUrlT = Aws::String>
  void SetThumbnailUrl(ThumbnailUrlT&& value) {
    m_thumbnailUrlHasBeenSet = true;
    m_thumbnailUrl = std::forward<ThumbnailUrlT>(value);
  }
  template <typename ThumbnailUrlT = Aws::String>
  CampaignTemplateSummary& WithThumbnailUrl(ThumbnailUrlT&& value) {
    SetThumbnailUrl(std::forward<ThumbnailUrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_name;

  Industry m_industry{Industry::NOT_SET};

  Aws::String m_useCase;

  Aws::String m_description;

  AssetLanguage m_languageCode{AssetLanguage::NOT_SET};

  CampaignTemplateCollection m_collection{CampaignTemplateCollection::NOT_SET};

  Aws::Vector<Aws::String> m_awsServices;

  Aws::Vector<CustomerSegment> m_customerSegments;

  Aws::Vector<Theme> m_themes;

  Aws::String m_thumbnailUrl;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_industryHasBeenSet = false;
  bool m_useCaseHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_languageCodeHasBeenSet = false;
  bool m_collectionHasBeenSet = false;
  bool m_awsServicesHasBeenSet = false;
  bool m_customerSegmentsHasBeenSet = false;
  bool m_themesHasBeenSet = false;
  bool m_thumbnailUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
