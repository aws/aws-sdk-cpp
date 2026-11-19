/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/ActivationIssue.h>
#include <aws/partnercentral-marketing/model/AssetLanguage.h>
#include <aws/partnercentral-marketing/model/CampaignState.h>
#include <aws/partnercentral-marketing/model/EmailTargetDetail.h>
#include <aws/partnercentral-marketing/model/MonetaryValue.h>
#include <aws/partnercentral-marketing/model/PartnerBadgeDetail.h>
#include <aws/partnercentral-marketing/model/PartnerProfileBranding.h>
#include <aws/partnercentral-marketing/model/Platform.h>
#include <aws/partnercentral-marketing/model/TargetAudience.h>

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
 * <p>A marketing campaign resource.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/Campaign">AWS
 * API Reference</a></p>
 */
class Campaign {
 public:
  AWS_PARTNERCENTRALMARKETING_API Campaign() = default;
  AWS_PARTNERCENTRALMARKETING_API Campaign(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API Campaign& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The campaign identifier.</p>
   */
  inline const Aws::String& GetCampaignId() const { return m_campaignId; }
  inline bool CampaignIdHasBeenSet() const { return m_campaignIdHasBeenSet; }
  template <typename CampaignIdT = Aws::String>
  void SetCampaignId(CampaignIdT&& value) {
    m_campaignIdHasBeenSet = true;
    m_campaignId = std::forward<CampaignIdT>(value);
  }
  template <typename CampaignIdT = Aws::String>
  Campaign& WithCampaignId(CampaignIdT&& value) {
    SetCampaignId(std::forward<CampaignIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The campaign ARN.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  Campaign& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
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
  Campaign& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The campaign's state, derived on every read from <code>EndOn</code> and its
   * assets. See <code>CampaignState</code>.</p>
   */
  inline CampaignState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(CampaignState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline Campaign& WithState(CampaignState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The campaign template this campaign draws its assets from. Set at create,
   * immutable.</p>
   */
  inline const Aws::String& GetCampaignTemplateId() const { return m_campaignTemplateId; }
  inline bool CampaignTemplateIdHasBeenSet() const { return m_campaignTemplateIdHasBeenSet; }
  template <typename CampaignTemplateIdT = Aws::String>
  void SetCampaignTemplateId(CampaignTemplateIdT&& value) {
    m_campaignTemplateIdHasBeenSet = true;
    m_campaignTemplateId = std::forward<CampaignTemplateIdT>(value);
  }
  template <typename CampaignTemplateIdT = Aws::String>
  Campaign& WithCampaignTemplateId(CampaignTemplateIdT&& value) {
    SetCampaignTemplateId(std::forward<CampaignTemplateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The language the campaign's assets are written and typeset in: its template's
   * <code>LanguageCode</code>, set at create. To work in another language, create
   * the campaign from that language's template.</p>
   */
  inline AssetLanguage GetLanguage() const { return m_language; }
  inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
  inline void SetLanguage(AssetLanguage value) {
    m_languageHasBeenSet = true;
    m_language = value;
  }
  inline Campaign& WithLanguage(AssetLanguage value) {
    SetLanguage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The partner's branding — display name, website and logo — from their AWS
   * Partner Central profile, rendered onto every asset of this campaign. Read-only
   * here: the partner edits it in Partner Central, and the next activation or export
   * uses the change. Absent only when the partner has no profile.</p>
   */
  inline const PartnerProfileBranding& GetPartnerProfile() const { return m_partnerProfile; }
  inline bool PartnerProfileHasBeenSet() const { return m_partnerProfileHasBeenSet; }
  template <typename PartnerProfileT = PartnerProfileBranding>
  void SetPartnerProfile(PartnerProfileT&& value) {
    m_partnerProfileHasBeenSet = true;
    m_partnerProfile = std::forward<PartnerProfileT>(value);
  }
  template <typename PartnerProfileT = PartnerProfileBranding>
  Campaign& WithPartnerProfile(PartnerProfileT&& value) {
    SetPartnerProfile(std::forward<PartnerProfileT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The address the campaign's emails are sent from. Absent until one is set.</p>
   */
  inline const Aws::String& GetSenderEmail() const { return m_senderEmail; }
  inline bool SenderEmailHasBeenSet() const { return m_senderEmailHasBeenSet; }
  template <typename SenderEmailT = Aws::String>
  void SetSenderEmail(SenderEmailT&& value) {
    m_senderEmailHasBeenSet = true;
    m_senderEmail = std::forward<SenderEmailT>(value);
  }
  template <typename SenderEmailT = Aws::String>
  Campaign& WithSenderEmail(SenderEmailT&& value) {
    SetSenderEmail(std::forward<SenderEmailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the partner's privacy policy. Absent until one is set.</p>
   */
  inline const Aws::String& GetPrivacyPolicyUrl() const { return m_privacyPolicyUrl; }
  inline bool PrivacyPolicyUrlHasBeenSet() const { return m_privacyPolicyUrlHasBeenSet; }
  template <typename PrivacyPolicyUrlT = Aws::String>
  void SetPrivacyPolicyUrl(PrivacyPolicyUrlT&& value) {
    m_privacyPolicyUrlHasBeenSet = true;
    m_privacyPolicyUrl = std::forward<PrivacyPolicyUrlT>(value);
  }
  template <typename PrivacyPolicyUrlT = Aws::String>
  Campaign& WithPrivacyPolicyUrl(PrivacyPolicyUrlT&& value) {
    SetPrivacyPolicyUrl(std::forward<PrivacyPolicyUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The partner's postal address. Absent until one is set.</p>
   */
  inline const Aws::String& GetPartnerAddress() const { return m_partnerAddress; }
  inline bool PartnerAddressHasBeenSet() const { return m_partnerAddressHasBeenSet; }
  template <typename PartnerAddressT = Aws::String>
  void SetPartnerAddress(PartnerAddressT&& value) {
    m_partnerAddressHasBeenSet = true;
    m_partnerAddress = std::forward<PartnerAddressT>(value);
  }
  template <typename PartnerAddressT = Aws::String>
  Campaign& WithPartnerAddress(PartnerAddressT&& value) {
    SetPartnerAddress(std::forward<PartnerAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The partner's badge. Absent until one is set, and every badge slot shows the
   * Standalone AWS Partner badge while the partner's primary AWS Partner path is at
   * stage Validated or Differentiated. Below that, no badge is shown.</p>
   */
  inline const PartnerBadgeDetail& GetPartnerBadge() const { return m_partnerBadge; }
  inline bool PartnerBadgeHasBeenSet() const { return m_partnerBadgeHasBeenSet; }
  template <typename PartnerBadgeT = PartnerBadgeDetail>
  void SetPartnerBadge(PartnerBadgeT&& value) {
    m_partnerBadgeHasBeenSet = true;
    m_partnerBadge = std::forward<PartnerBadgeT>(value);
  }
  template <typename PartnerBadgeT = PartnerBadgeDetail>
  Campaign& WithPartnerBadge(PartnerBadgeT&& value) {
    SetPartnerBadge(std::forward<PartnerBadgeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The attached recipient list — metadata only. There is no read path for the
   * addresses.</p>
   */
  inline const EmailTargetDetail& GetEmailTarget() const { return m_emailTarget; }
  inline bool EmailTargetHasBeenSet() const { return m_emailTargetHasBeenSet; }
  template <typename EmailTargetT = EmailTargetDetail>
  void SetEmailTarget(EmailTargetT&& value) {
    m_emailTargetHasBeenSet = true;
    m_emailTarget = std::forward<EmailTargetT>(value);
  }
  template <typename EmailTargetT = EmailTargetDetail>
  Campaign& WithEmailTarget(EmailTargetT&& value) {
    SetEmailTarget(std::forward<EmailTargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The engagement groups set by <code>CreateCampaign</code> /
   * <code>UpdateCampaign</code>. Absent until set. Resolved to recipients at Start,
   * where the stage can.</p>
   */
  inline const Aws::Vector<Aws::String>& GetEmailTargetEngagementGroupIds() const { return m_emailTargetEngagementGroupIds; }
  inline bool EmailTargetEngagementGroupIdsHasBeenSet() const { return m_emailTargetEngagementGroupIdsHasBeenSet; }
  template <typename EmailTargetEngagementGroupIdsT = Aws::Vector<Aws::String>>
  void SetEmailTargetEngagementGroupIds(EmailTargetEngagementGroupIdsT&& value) {
    m_emailTargetEngagementGroupIdsHasBeenSet = true;
    m_emailTargetEngagementGroupIds = std::forward<EmailTargetEngagementGroupIdsT>(value);
  }
  template <typename EmailTargetEngagementGroupIdsT = Aws::Vector<Aws::String>>
  Campaign& WithEmailTargetEngagementGroupIds(EmailTargetEngagementGroupIdsT&& value) {
    SetEmailTargetEngagementGroupIds(std::forward<EmailTargetEngagementGroupIdsT>(value));
    return *this;
  }
  template <typename EmailTargetEngagementGroupIdsT = Aws::String>
  Campaign& AddEmailTargetEngagementGroupIds(EmailTargetEngagementGroupIdsT&& value) {
    m_emailTargetEngagementGroupIdsHasBeenSet = true;
    m_emailTargetEngagementGroupIds.emplace_back(std::forward<EmailTargetEngagementGroupIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The account the campaign's social posts publish from, per platform, as set by
   * <code>UpdateCampaign</code>. Absent until one is set.</p> <p>Needed only for a
   * platform where you hold two or more connections. With none set, a post uses your
   * one connection on its platform, and fails `SOCIAL_CONNECTION_NOT_CHOSEN` when
   * you hold several. A choice that no longer names a connection on its platform
   * fails `SOCIAL_CONNECTION_MISSING`. Join with `ListSocialConnections` for each
   * connection's status.
   */
  inline const Aws::Map<Platform, Aws::Vector<Aws::String>>& GetSocialConnections() const { return m_socialConnections; }
  inline bool SocialConnectionsHasBeenSet() const { return m_socialConnectionsHasBeenSet; }
  template <typename SocialConnectionsT = Aws::Map<Platform, Aws::Vector<Aws::String>>>
  void SetSocialConnections(SocialConnectionsT&& value) {
    m_socialConnectionsHasBeenSet = true;
    m_socialConnections = std::forward<SocialConnectionsT>(value);
  }
  template <typename SocialConnectionsT = Aws::Map<Platform, Aws::Vector<Aws::String>>>
  Campaign& WithSocialConnections(SocialConnectionsT&& value) {
    SetSocialConnections(std::forward<SocialConnectionsT>(value));
    return *this;
  }
  inline Campaign& AddSocialConnections(Platform key, Aws::Vector<Aws::String> value) {
    m_socialConnectionsHasBeenSet = true;
    m_socialConnections.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>What the partner expects the campaign to cost.</p>
   */
  inline const MonetaryValue& GetEstimatedBudget() const { return m_estimatedBudget; }
  inline bool EstimatedBudgetHasBeenSet() const { return m_estimatedBudgetHasBeenSet; }
  template <typename EstimatedBudgetT = MonetaryValue>
  void SetEstimatedBudget(EstimatedBudgetT&& value) {
    m_estimatedBudgetHasBeenSet = true;
    m_estimatedBudget = std::forward<EstimatedBudgetT>(value);
  }
  template <typename EstimatedBudgetT = MonetaryValue>
  Campaign& WithEstimatedBudget(EstimatedBudgetT&& value) {
    SetEstimatedBudget(std::forward<EstimatedBudgetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The campaign's total budget.</p>
   */
  inline const MonetaryValue& GetTotalBudget() const { return m_totalBudget; }
  inline bool TotalBudgetHasBeenSet() const { return m_totalBudgetHasBeenSet; }
  template <typename TotalBudgetT = MonetaryValue>
  void SetTotalBudget(TotalBudgetT&& value) {
    m_totalBudgetHasBeenSet = true;
    m_totalBudget = std::forward<TotalBudgetT>(value);
  }
  template <typename TotalBudgetT = MonetaryValue>
  Campaign& WithTotalBudget(TotalBudgetT&& value) {
    SetTotalBudget(std::forward<TotalBudgetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Target audience configuration.</p>
   */
  inline const TargetAudience& GetTargetAudience() const { return m_targetAudience; }
  inline bool TargetAudienceHasBeenSet() const { return m_targetAudienceHasBeenSet; }
  template <typename TargetAudienceT = TargetAudience>
  void SetTargetAudience(TargetAudienceT&& value) {
    m_targetAudienceHasBeenSet = true;
    m_targetAudience = std::forward<TargetAudienceT>(value);
  }
  template <typename TargetAudienceT = TargetAudience>
  Campaign& WithTargetAudience(TargetAudienceT&& value) {
    SetTargetAudience(std::forward<TargetAudienceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The first day of the campaign's run window.</p>
   */
  inline const Aws::String& GetStartOn() const { return m_startOn; }
  inline bool StartOnHasBeenSet() const { return m_startOnHasBeenSet; }
  template <typename StartOnT = Aws::String>
  void SetStartOn(StartOnT&& value) {
    m_startOnHasBeenSet = true;
    m_startOn = std::forward<StartOnT>(value);
  }
  template <typename StartOnT = Aws::String>
  Campaign& WithStartOn(StartOnT&& value) {
    SetStartOn(std::forward<StartOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The last day of the campaign's run window.</p>
   */
  inline const Aws::String& GetEndOn() const { return m_endOn; }
  inline bool EndOnHasBeenSet() const { return m_endOnHasBeenSet; }
  template <typename EndOnT = Aws::String>
  void SetEndOn(EndOnT&& value) {
    m_endOnHasBeenSet = true;
    m_endOn = std::forward<EndOnT>(value);
  }
  template <typename EndOnT = Aws::String>
  Campaign& WithEndOn(EndOnT&& value) {
    SetEndOn(std::forward<EndOnT>(value));
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
  Campaign& WithCreatedAt(CreatedAtT&& value) {
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
  Campaign& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Campaign settings that must be set before the assets listed in each issue can
   * be activated. Empty when nothing is missing.</p> <p>Each issue names the setting
   * in <code>CampaignSetting</code> — set it with <code>UpdateCampaign</code> — or
   * the profile value in <code>PartnerProfileField</code> — set it in Partner
   * Central — and the assets it blocks in <code>AffectedAssetIds</code>.
   * <code>StartCampaignAssetActivationTask</code> refuses with
   * <code>ValidationException</code> (<code>CAMPAIGN_INCOMPLETE</code>) while a
   * requested asset is affected.</p>
   */
  inline const Aws::Vector<ActivationIssue>& GetActivationIssues() const { return m_activationIssues; }
  inline bool ActivationIssuesHasBeenSet() const { return m_activationIssuesHasBeenSet; }
  template <typename ActivationIssuesT = Aws::Vector<ActivationIssue>>
  void SetActivationIssues(ActivationIssuesT&& value) {
    m_activationIssuesHasBeenSet = true;
    m_activationIssues = std::forward<ActivationIssuesT>(value);
  }
  template <typename ActivationIssuesT = Aws::Vector<ActivationIssue>>
  Campaign& WithActivationIssues(ActivationIssuesT&& value) {
    SetActivationIssues(std::forward<ActivationIssuesT>(value));
    return *this;
  }
  template <typename ActivationIssuesT = ActivationIssue>
  Campaign& AddActivationIssues(ActivationIssuesT&& value) {
    m_activationIssuesHasBeenSet = true;
    m_activationIssues.emplace_back(std::forward<ActivationIssuesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_campaignId;

  Aws::String m_arn;

  Aws::String m_name;

  CampaignState m_state{CampaignState::NOT_SET};

  Aws::String m_campaignTemplateId;

  AssetLanguage m_language{AssetLanguage::NOT_SET};

  PartnerProfileBranding m_partnerProfile;

  Aws::String m_senderEmail;

  Aws::String m_privacyPolicyUrl;

  Aws::String m_partnerAddress;

  PartnerBadgeDetail m_partnerBadge;

  EmailTargetDetail m_emailTarget;

  Aws::Vector<Aws::String> m_emailTargetEngagementGroupIds;

  Aws::Map<Platform, Aws::Vector<Aws::String>> m_socialConnections;

  MonetaryValue m_estimatedBudget;

  MonetaryValue m_totalBudget;

  TargetAudience m_targetAudience;

  Aws::String m_startOn;

  Aws::String m_endOn;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Vector<ActivationIssue> m_activationIssues;
  bool m_campaignIdHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_campaignTemplateIdHasBeenSet = false;
  bool m_languageHasBeenSet = false;
  bool m_partnerProfileHasBeenSet = false;
  bool m_senderEmailHasBeenSet = false;
  bool m_privacyPolicyUrlHasBeenSet = false;
  bool m_partnerAddressHasBeenSet = false;
  bool m_partnerBadgeHasBeenSet = false;
  bool m_emailTargetHasBeenSet = false;
  bool m_emailTargetEngagementGroupIdsHasBeenSet = false;
  bool m_socialConnectionsHasBeenSet = false;
  bool m_estimatedBudgetHasBeenSet = false;
  bool m_totalBudgetHasBeenSet = false;
  bool m_targetAudienceHasBeenSet = false;
  bool m_startOnHasBeenSet = false;
  bool m_endOnHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_activationIssuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
