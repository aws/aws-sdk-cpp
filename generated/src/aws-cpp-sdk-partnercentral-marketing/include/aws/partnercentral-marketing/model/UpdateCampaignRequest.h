/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketingRequest.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/Catalog.h>
#include <aws/partnercentral-marketing/model/FileRef.h>
#include <aws/partnercentral-marketing/model/MonetaryValue.h>
#include <aws/partnercentral-marketing/model/Platform.h>
#include <aws/partnercentral-marketing/model/TargetAudience.h>

#include <utility>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {

/**
 * <p>Input for UpdateCampaign operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/UpdateCampaignRequest">AWS
 * API Reference</a></p>
 */
class UpdateCampaignRequest : public PartnerCentralMarketingRequest {
 public:
  AWS_PARTNERCENTRALMARKETING_API UpdateCampaignRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateCampaign"; }

  AWS_PARTNERCENTRALMARKETING_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALMARKETING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog (AWS or Sandbox).</p>
   */
  inline Catalog GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  inline void SetCatalog(Catalog value) {
    m_catalogHasBeenSet = true;
    m_catalog = value;
  }
  inline UpdateCampaignRequest& WithCatalog(Catalog value) {
    SetCatalog(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The campaign identifier.</p>
   */
  inline const Aws::String& GetCampaignIdentifier() const { return m_campaignIdentifier; }
  inline bool CampaignIdentifierHasBeenSet() const { return m_campaignIdentifierHasBeenSet; }
  template <typename CampaignIdentifierT = Aws::String>
  void SetCampaignIdentifier(CampaignIdentifierT&& value) {
    m_campaignIdentifierHasBeenSet = true;
    m_campaignIdentifier = std::forward<CampaignIdentifierT>(value);
  }
  template <typename CampaignIdentifierT = Aws::String>
  UpdateCampaignRequest& WithCampaignIdentifier(CampaignIdentifierT&& value) {
    SetCampaignIdentifier(std::forward<CampaignIdentifierT>(value));
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
  UpdateCampaignRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Sets or replaces the address the campaign's emails are sent from. Checked by
   * the same three rules as on <code>CreateCampaign</code>, with the same codes, but
   * only when it differs, ignoring case, from the stored sender: re-sending the
   * stored one is not checked, and <code>StartCampaignAssetActivationTask</code>
   * re-checks it before an email activates.</p> <p>Replaces, never clears: like
   * every member of this operation, an omitted value leaves the sender as it was,
   * and there is no way to remove one once set.
   */
  inline const Aws::String& GetSenderEmail() const { return m_senderEmail; }
  inline bool SenderEmailHasBeenSet() const { return m_senderEmailHasBeenSet; }
  template <typename SenderEmailT = Aws::String>
  void SetSenderEmail(SenderEmailT&& value) {
    m_senderEmailHasBeenSet = true;
    m_senderEmail = std::forward<SenderEmailT>(value);
  }
  template <typename SenderEmailT = Aws::String>
  UpdateCampaignRequest& WithSenderEmail(SenderEmailT&& value) {
    SetSenderEmail(std::forward<SenderEmailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Sets or replaces the URL of the partner's privacy policy. Replaces, never
   * clears.</p>
   */
  inline const Aws::String& GetPrivacyPolicyUrl() const { return m_privacyPolicyUrl; }
  inline bool PrivacyPolicyUrlHasBeenSet() const { return m_privacyPolicyUrlHasBeenSet; }
  template <typename PrivacyPolicyUrlT = Aws::String>
  void SetPrivacyPolicyUrl(PrivacyPolicyUrlT&& value) {
    m_privacyPolicyUrlHasBeenSet = true;
    m_privacyPolicyUrl = std::forward<PrivacyPolicyUrlT>(value);
  }
  template <typename PrivacyPolicyUrlT = Aws::String>
  UpdateCampaignRequest& WithPrivacyPolicyUrl(PrivacyPolicyUrlT&& value) {
    SetPrivacyPolicyUrl(std::forward<PrivacyPolicyUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Sets or replaces the partner's postal address. Replaces, never clears.</p>
   */
  inline const Aws::String& GetPartnerAddress() const { return m_partnerAddress; }
  inline bool PartnerAddressHasBeenSet() const { return m_partnerAddressHasBeenSet; }
  template <typename PartnerAddressT = Aws::String>
  void SetPartnerAddress(PartnerAddressT&& value) {
    m_partnerAddressHasBeenSet = true;
    m_partnerAddress = std::forward<PartnerAddressT>(value);
  }
  template <typename PartnerAddressT = Aws::String>
  UpdateCampaignRequest& WithPartnerAddress(PartnerAddressT&& value) {
    SetPartnerAddress(std::forward<PartnerAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Sets or replaces the partner's badge, checked exactly as on
   * <code>CreateCampaign</code>. Replaces, never clears: upload the Standalone AWS
   * Partner badge to show it again. The badge an asset already published keeps
   * showing on it until that asset is activated again.</p>
   */
  inline const FileRef& GetPartnerBadge() const { return m_partnerBadge; }
  inline bool PartnerBadgeHasBeenSet() const { return m_partnerBadgeHasBeenSet; }
  template <typename PartnerBadgeT = FileRef>
  void SetPartnerBadge(PartnerBadgeT&& value) {
    m_partnerBadgeHasBeenSet = true;
    m_partnerBadge = std::forward<PartnerBadgeT>(value);
  }
  template <typename PartnerBadgeT = FileRef>
  UpdateCampaignRequest& WithPartnerBadge(PartnerBadgeT&& value) {
    SetPartnerBadge(std::forward<PartnerBadgeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Replaces the campaign's attached recipient list.</p> <p>The referenced object
   * is copied and pinned again on every call that supplies it, so the pinned copy
   * always reflects the *last* `UpdateCampaign` that named one. Editing the source
   * object in your own bucket without calling this operation again has no effect.
   * <p>Replaces, never detaches: a partner can swap the list but cannot remove it.
   */
  inline const FileRef& GetEmailTarget() const { return m_emailTarget; }
  inline bool EmailTargetHasBeenSet() const { return m_emailTargetHasBeenSet; }
  template <typename EmailTargetT = FileRef>
  void SetEmailTarget(EmailTargetT&& value) {
    m_emailTargetHasBeenSet = true;
    m_emailTarget = std::forward<EmailTargetT>(value);
  }
  template <typename EmailTargetT = FileRef>
  UpdateCampaignRequest& WithEmailTarget(EmailTargetT&& value) {
    SetEmailTarget(std::forward<EmailTargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Engagement groups whose contacts the campaign's emails will also go to (see
   * <code>CreateCampaign</code>). Replaces the stored list; never clears it.</p>
   * <p>As on `CreateCampaign`: each group once (`INVALID_VALUE` otherwise), not
   * checked against your groups when saved, and resolved at Start where the stage
   * can (`ENGAGEMENT_GROUPS_UNAVAILABLE` where it can't).
   */
  inline const Aws::Vector<Aws::String>& GetEmailTargetEngagementGroupIds() const { return m_emailTargetEngagementGroupIds; }
  inline bool EmailTargetEngagementGroupIdsHasBeenSet() const { return m_emailTargetEngagementGroupIdsHasBeenSet; }
  template <typename EmailTargetEngagementGroupIdsT = Aws::Vector<Aws::String>>
  void SetEmailTargetEngagementGroupIds(EmailTargetEngagementGroupIdsT&& value) {
    m_emailTargetEngagementGroupIdsHasBeenSet = true;
    m_emailTargetEngagementGroupIds = std::forward<EmailTargetEngagementGroupIdsT>(value);
  }
  template <typename EmailTargetEngagementGroupIdsT = Aws::Vector<Aws::String>>
  UpdateCampaignRequest& WithEmailTargetEngagementGroupIds(EmailTargetEngagementGroupIdsT&& value) {
    SetEmailTargetEngagementGroupIds(std::forward<EmailTargetEngagementGroupIdsT>(value));
    return *this;
  }
  template <typename EmailTargetEngagementGroupIdsT = Aws::String>
  UpdateCampaignRequest& AddEmailTargetEngagementGroupIds(EmailTargetEngagementGroupIdsT&& value) {
    m_emailTargetEngagementGroupIdsHasBeenSet = true;
    m_emailTargetEngagementGroupIds.emplace_back(std::forward<EmailTargetEngagementGroupIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Sets the account the campaign's social posts publish from, per platform. Each
   * platform named replaces that platform's choice; a platform not named keeps its
   * own. Replaces, never clears.</p> <p>Not checked against your connections here: a
   * connection can be deleted at any time, so the activation checks the choice. See
   * `Campaign$SocialConnections`.
   */
  inline const Aws::Map<Platform, Aws::Vector<Aws::String>>& GetSocialConnections() const { return m_socialConnections; }
  inline bool SocialConnectionsHasBeenSet() const { return m_socialConnectionsHasBeenSet; }
  template <typename SocialConnectionsT = Aws::Map<Platform, Aws::Vector<Aws::String>>>
  void SetSocialConnections(SocialConnectionsT&& value) {
    m_socialConnectionsHasBeenSet = true;
    m_socialConnections = std::forward<SocialConnectionsT>(value);
  }
  template <typename SocialConnectionsT = Aws::Map<Platform, Aws::Vector<Aws::String>>>
  UpdateCampaignRequest& WithSocialConnections(SocialConnectionsT&& value) {
    SetSocialConnections(std::forward<SocialConnectionsT>(value));
    return *this;
  }
  inline UpdateCampaignRequest& AddSocialConnections(Platform key, Aws::Vector<Aws::String> value) {
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
  UpdateCampaignRequest& WithEstimatedBudget(EstimatedBudgetT&& value) {
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
  UpdateCampaignRequest& WithTotalBudget(TotalBudgetT&& value) {
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
  UpdateCampaignRequest& WithTargetAudience(TargetAudienceT&& value) {
    SetTargetAudience(std::forward<TargetAudienceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Idempotency token. Accepted and not stored: this is a change-only partial
   * update with last-writer-wins, so re-applying the same call produces the same
   * result and the same response. There is nothing a replay cache would protect.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateCampaignRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The first day of the campaign's run window. Not after <code>EndOn</code>
   * (<code>ValidationException</code>, <code>INVALID_VALUE</code>).</p>
   */
  inline const Aws::String& GetStartOn() const { return m_startOn; }
  inline bool StartOnHasBeenSet() const { return m_startOnHasBeenSet; }
  template <typename StartOnT = Aws::String>
  void SetStartOn(StartOnT&& value) {
    m_startOnHasBeenSet = true;
    m_startOn = std::forward<StartOnT>(value);
  }
  template <typename StartOnT = Aws::String>
  UpdateCampaignRequest& WithStartOn(StartOnT&& value) {
    SetStartOn(std::forward<StartOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The last day of the campaign's run window, inclusive and in UTC.</p>
   * <p>Editable only while the campaign is open, like everything else here: once the
   * stored <code>EndOn</code> has passed the campaign is completed and this update
   * is refused (<code>CAMPAIGN_COMPLETED</code>). Refused with
   * <code>ValidationException</code> (<code>INVALID_VALUE</code>) when it is in the
   * past, or earlier than the day of a scheduled send on one of the campaign's
   * assets: move or cancel that send first. Setting it to today ends the campaign at
   * the next UTC midnight.</p>
   */
  inline const Aws::String& GetEndOn() const { return m_endOn; }
  inline bool EndOnHasBeenSet() const { return m_endOnHasBeenSet; }
  template <typename EndOnT = Aws::String>
  void SetEndOn(EndOnT&& value) {
    m_endOnHasBeenSet = true;
    m_endOn = std::forward<EndOnT>(value);
  }
  template <typename EndOnT = Aws::String>
  UpdateCampaignRequest& WithEndOn(EndOnT&& value) {
    SetEndOn(std::forward<EndOnT>(value));
    return *this;
  }
  ///@}
 private:
  Catalog m_catalog{Catalog::NOT_SET};

  Aws::String m_campaignIdentifier;

  Aws::String m_name;

  Aws::String m_senderEmail;

  Aws::String m_privacyPolicyUrl;

  Aws::String m_partnerAddress;

  FileRef m_partnerBadge;

  FileRef m_emailTarget;

  Aws::Vector<Aws::String> m_emailTargetEngagementGroupIds;

  Aws::Map<Platform, Aws::Vector<Aws::String>> m_socialConnections;

  MonetaryValue m_estimatedBudget;

  MonetaryValue m_totalBudget;

  TargetAudience m_targetAudience;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_startOn;

  Aws::String m_endOn;
  bool m_catalogHasBeenSet = false;
  bool m_campaignIdentifierHasBeenSet = false;
  bool m_nameHasBeenSet = false;
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
  bool m_clientTokenHasBeenSet = true;
  bool m_startOnHasBeenSet = false;
  bool m_endOnHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
