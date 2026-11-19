/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/AssetLanguage.h>
#include <aws/partnercentral-marketing/model/CampaignAssetTemplate.h>
#include <aws/partnercentral-marketing/model/CampaignTemplateCollection.h>
#include <aws/partnercentral-marketing/model/CustomerSegment.h>
#include <aws/partnercentral-marketing/model/Industry.h>
#include <aws/partnercentral-marketing/model/ReferenceMaterial.h>
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
 * <p>A platform-managed campaign template — an AWS-authored kit of asset
 * blueprints a partner creates a campaign from.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/CampaignTemplate">AWS
 * API Reference</a></p>
 */
class CampaignTemplate {
 public:
  AWS_PARTNERCENTRALMARKETING_API CampaignTemplate() = default;
  AWS_PARTNERCENTRALMARKETING_API CampaignTemplate(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API CampaignTemplate& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
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
  CampaignTemplate& WithId(IdT&& value) {
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
  CampaignTemplate& WithName(NameT&& value) {
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
  inline CampaignTemplate& WithIndustry(Industry value) {
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
  CampaignTemplate& WithUseCase(UseCaseT&& value) {
    SetUseCase(std::forward<UseCaseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A short overview of the campaign, as plain text in the template's language:
   * no HTML and no character entities. Absent when the template has none; never an
   * empty string.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CampaignTemplate& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Language the template is authored in, which a campaign created from it takes.
   * A template has one language; the same content in another language is another
   * template.</p>
   */
  inline AssetLanguage GetLanguageCode() const { return m_languageCode; }
  inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
  inline void SetLanguageCode(AssetLanguage value) {
    m_languageCodeHasBeenSet = true;
    m_languageCode = value;
  }
  inline CampaignTemplate& WithLanguageCode(AssetLanguage value) {
    SetLanguageCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The browsing context the template is listed in. Every template has exactly
   * one.</p>
   */
  inline CampaignTemplateCollection GetCollection() const { return m_collection; }
  inline bool CollectionHasBeenSet() const { return m_collectionHasBeenSet; }
  inline void SetCollection(CampaignTemplateCollection value) {
    m_collectionHasBeenSet = true;
    m_collection = value;
  }
  inline CampaignTemplate& WithCollection(CampaignTemplateCollection value) {
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
  CampaignTemplate& WithAwsServices(AwsServicesT&& value) {
    SetAwsServices(std::forward<AwsServicesT>(value));
    return *this;
  }
  template <typename AwsServicesT = Aws::String>
  CampaignTemplate& AddAwsServices(AwsServicesT&& value) {
    m_awsServicesHasBeenSet = true;
    m_awsServices.emplace_back(std::forward<AwsServicesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The customer segments the template is written for. Absent when the template
   * names none, in which case it matches every <code>CustomerSegments</code> search
   * filter.</p>
   */
  inline const Aws::Vector<CustomerSegment>& GetCustomerSegments() const { return m_customerSegments; }
  inline bool CustomerSegmentsHasBeenSet() const { return m_customerSegmentsHasBeenSet; }
  template <typename CustomerSegmentsT = Aws::Vector<CustomerSegment>>
  void SetCustomerSegments(CustomerSegmentsT&& value) {
    m_customerSegmentsHasBeenSet = true;
    m_customerSegments = std::forward<CustomerSegmentsT>(value);
  }
  template <typename CustomerSegmentsT = Aws::Vector<CustomerSegment>>
  CampaignTemplate& WithCustomerSegments(CustomerSegmentsT&& value) {
    SetCustomerSegments(std::forward<CustomerSegmentsT>(value));
    return *this;
  }
  inline CampaignTemplate& AddCustomerSegments(CustomerSegment value) {
    m_customerSegmentsHasBeenSet = true;
    m_customerSegments.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The template's marketing themes. Absent when the template names none, in
   * which case it matches every <code>Themes</code> search filter.</p>
   */
  inline const Aws::Vector<Theme>& GetThemes() const { return m_themes; }
  inline bool ThemesHasBeenSet() const { return m_themesHasBeenSet; }
  template <typename ThemesT = Aws::Vector<Theme>>
  void SetThemes(ThemesT&& value) {
    m_themesHasBeenSet = true;
    m_themes = std::forward<ThemesT>(value);
  }
  template <typename ThemesT = Aws::Vector<Theme>>
  CampaignTemplate& WithThemes(ThemesT&& value) {
    SetThemes(std::forward<ThemesT>(value));
    return *this;
  }
  inline CampaignTemplate& AddThemes(Theme value) {
    m_themesHasBeenSet = true;
    m_themes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Estimated setup time.</p>
   */
  inline const Aws::String& GetSetupDuration() const { return m_setupDuration; }
  inline bool SetupDurationHasBeenSet() const { return m_setupDurationHasBeenSet; }
  template <typename SetupDurationT = Aws::String>
  void SetSetupDuration(SetupDurationT&& value) {
    m_setupDurationHasBeenSet = true;
    m_setupDuration = std::forward<SetupDurationT>(value);
  }
  template <typename SetupDurationT = Aws::String>
  CampaignTemplate& WithSetupDuration(SetupDurationT&& value) {
    SetSetupDuration(std::forward<SetupDurationT>(value));
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
  CampaignTemplate& WithThumbnailUrl(ThumbnailUrlT&& value) {
    SetThumbnailUrl(std::forward<ThumbnailUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instant the template becomes available to partners. Until then the
   * template does not exist to a partner: SearchCampaignTemplates omits it and
   * GetCampaignTemplate returns ResourceNotFoundException.</p>
   */
  inline const Aws::Utils::DateTime& GetEffectiveDateBegin() const { return m_effectiveDateBegin; }
  inline bool EffectiveDateBeginHasBeenSet() const { return m_effectiveDateBeginHasBeenSet; }
  template <typename EffectiveDateBeginT = Aws::Utils::DateTime>
  void SetEffectiveDateBegin(EffectiveDateBeginT&& value) {
    m_effectiveDateBeginHasBeenSet = true;
    m_effectiveDateBegin = std::forward<EffectiveDateBeginT>(value);
  }
  template <typename EffectiveDateBeginT = Aws::Utils::DateTime>
  CampaignTemplate& WithEffectiveDateBegin(EffectiveDateBeginT&& value) {
    SetEffectiveDateBegin(std::forward<EffectiveDateBeginT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ordered asset blueprints. One call serves both template browsing and
   * server-side copy-at-create.</p>
   */
  inline const Aws::Vector<CampaignAssetTemplate>& GetAssetTemplates() const { return m_assetTemplates; }
  inline bool AssetTemplatesHasBeenSet() const { return m_assetTemplatesHasBeenSet; }
  template <typename AssetTemplatesT = Aws::Vector<CampaignAssetTemplate>>
  void SetAssetTemplates(AssetTemplatesT&& value) {
    m_assetTemplatesHasBeenSet = true;
    m_assetTemplates = std::forward<AssetTemplatesT>(value);
  }
  template <typename AssetTemplatesT = Aws::Vector<CampaignAssetTemplate>>
  CampaignTemplate& WithAssetTemplates(AssetTemplatesT&& value) {
    SetAssetTemplates(std::forward<AssetTemplatesT>(value));
    return *this;
  }
  template <typename AssetTemplatesT = CampaignAssetTemplate>
  CampaignTemplate& AddAssetTemplates(AssetTemplatesT&& value) {
    m_assetTemplatesHasBeenSet = true;
    m_assetTemplates.emplace_back(std::forward<AssetTemplatesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The template's reference materials: guides, briefs, copy blocks and other
   * files a partner downloads and uses in their own channels. Kept apart from
   * <code>AssetTemplates</code> because none of them can become a campaign asset —
   * they have no editable field and nothing to activate — and listing them beside
   * the blueprints invited a <code>BatchCreateCampaignAsset</code> that could only
   * fail.</p> <p>Absent when the template has none.</p>
   */
  inline const Aws::Vector<ReferenceMaterial>& GetReferenceMaterials() const { return m_referenceMaterials; }
  inline bool ReferenceMaterialsHasBeenSet() const { return m_referenceMaterialsHasBeenSet; }
  template <typename ReferenceMaterialsT = Aws::Vector<ReferenceMaterial>>
  void SetReferenceMaterials(ReferenceMaterialsT&& value) {
    m_referenceMaterialsHasBeenSet = true;
    m_referenceMaterials = std::forward<ReferenceMaterialsT>(value);
  }
  template <typename ReferenceMaterialsT = Aws::Vector<ReferenceMaterial>>
  CampaignTemplate& WithReferenceMaterials(ReferenceMaterialsT&& value) {
    SetReferenceMaterials(std::forward<ReferenceMaterialsT>(value));
    return *this;
  }
  template <typename ReferenceMaterialsT = ReferenceMaterial>
  CampaignTemplate& AddReferenceMaterials(ReferenceMaterialsT&& value) {
    m_referenceMaterialsHasBeenSet = true;
    m_referenceMaterials.emplace_back(std::forward<ReferenceMaterialsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Creation timestamp.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CampaignTemplate& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Last update timestamp.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  CampaignTemplate& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
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

  Aws::String m_setupDuration;

  Aws::String m_thumbnailUrl;

  Aws::Utils::DateTime m_effectiveDateBegin{};

  Aws::Vector<CampaignAssetTemplate> m_assetTemplates;

  Aws::Vector<ReferenceMaterial> m_referenceMaterials;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
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
  bool m_setupDurationHasBeenSet = false;
  bool m_thumbnailUrlHasBeenSet = false;
  bool m_effectiveDateBeginHasBeenSet = false;
  bool m_assetTemplatesHasBeenSet = false;
  bool m_referenceMaterialsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
