/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketingRequest.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/Catalog.h>
#include <aws/partnercentral-marketing/model/FileRef.h>
#include <aws/partnercentral-marketing/model/MonetaryValue.h>
#include <aws/partnercentral-marketing/model/Tag.h>
#include <aws/partnercentral-marketing/model/TargetAudience.h>

#include <utility>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {

/**
 * <p>Input for CreateCampaign operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/CreateCampaignRequest">AWS
 * API Reference</a></p>
 */
class CreateCampaignRequest : public PartnerCentralMarketingRequest {
 public:
  AWS_PARTNERCENTRALMARKETING_API CreateCampaignRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateCampaign"; }

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
  inline CreateCampaignRequest& WithCatalog(Catalog value) {
    SetCatalog(value);
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
  CreateCampaignRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The campaign template this campaign draws its assets from.</p> <p>Binds the
   * campaign to a single source template: every asset must come from this template's
   * asset templates, and one from another template is refused at
   * `BatchCreateCampaignAsset`. Immutable once set. Every campaign has one: a
   * campaign's language and its assets' blueprints both come from its template.
   * <p>Templates are AWS-authored and read-only — they are discovered through
   * `SearchCampaignTemplates` and `GetCampaignTemplate`, and there is no create,
   * update or delete operation for one. <p>The template's id only: a campaign
   * template has no ARN (DG-084). The member keeps the `<Resource>Id` name, which is
   * the convention for referencing another resource from a body.
   */
  inline const Aws::String& GetCampaignTemplateId() const { return m_campaignTemplateId; }
  inline bool CampaignTemplateIdHasBeenSet() const { return m_campaignTemplateIdHasBeenSet; }
  template <typename CampaignTemplateIdT = Aws::String>
  void SetCampaignTemplateId(CampaignTemplateIdT&& value) {
    m_campaignTemplateIdHasBeenSet = true;
    m_campaignTemplateId = std::forward<CampaignTemplateIdT>(value);
  }
  template <typename CampaignTemplateIdT = Aws::String>
  CreateCampaignRequest& WithCampaignTemplateId(CampaignTemplateIdT&& value) {
    SetCampaignTemplateId(std::forward<CampaignTemplateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The address every email of this campaign is sent from.</p> <p>Printable ASCII
   * only, with no spaces or line breaks, or field code `PATTERN_MISMATCH`. Then
   * three rules, all checked when the sender is set. Its domain must exactly match,
   * ignoring case, the domain of the partner's alliance lead email in AWS Partner
   * Central (a subdomain does not), or field code `SENDER_DOMAIN_NOT_ALLIANCE_LEAD`.
   * Then, for a sender at example.com, DNS must hold the CNAME
   * `dkim._domainkey.example.com` → `dkim._domainkey.md02.com` (field code
   * `SENDER_DOMAIN_DKIM_MISSING`) and a DMARC record, one TXT `_dmarc.example.com`
   * starting `v=DMARC1` with a `p` of `none`, `quarantine` or `reject` (field code
   * `SENDER_DOMAIN_DMARC_MISSING`). Both DNS codes are reported together when both
   * records are missing. <p>A partner who can't satisfy them can't set a sender, so
   * can't run email campaigns. A shared mail provider's domain, such as gmail.com,
   * can't carry the records. Optional here: a campaign with no sender can be created
   * and edited, but its email assets cannot be activated until one is set.
   */
  inline const Aws::String& GetSenderEmail() const { return m_senderEmail; }
  inline bool SenderEmailHasBeenSet() const { return m_senderEmailHasBeenSet; }
  template <typename SenderEmailT = Aws::String>
  void SetSenderEmail(SenderEmailT&& value) {
    m_senderEmailHasBeenSet = true;
    m_senderEmail = std::forward<SenderEmailT>(value);
  }
  template <typename SenderEmailT = Aws::String>
  CreateCampaignRequest& WithSenderEmail(SenderEmailT&& value) {
    SetSenderEmail(std::forward<SenderEmailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the partner's privacy policy, linked from every email and landing
   * page footer. Optional here: a campaign whose emails or landing pages show it
   * cannot activate them until one is set.</p>
   */
  inline const Aws::String& GetPrivacyPolicyUrl() const { return m_privacyPolicyUrl; }
  inline bool PrivacyPolicyUrlHasBeenSet() const { return m_privacyPolicyUrlHasBeenSet; }
  template <typename PrivacyPolicyUrlT = Aws::String>
  void SetPrivacyPolicyUrl(PrivacyPolicyUrlT&& value) {
    m_privacyPolicyUrlHasBeenSet = true;
    m_privacyPolicyUrl = std::forward<PrivacyPolicyUrlT>(value);
  }
  template <typename PrivacyPolicyUrlT = Aws::String>
  CreateCampaignRequest& WithPrivacyPolicyUrl(PrivacyPolicyUrlT&& value) {
    SetPrivacyPolicyUrl(std::forward<PrivacyPolicyUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The partner's physical postal address, shown in every email footer and as a
   * landing page's contact line. Optional here: an email that shows it cannot
   * activate until one is set. A landing page that shows it publishes it empty when
   * it is unset, and a document's footer then prints the partner's name alone.</p>
   */
  inline const Aws::String& GetPartnerAddress() const { return m_partnerAddress; }
  inline bool PartnerAddressHasBeenSet() const { return m_partnerAddressHasBeenSet; }
  template <typename PartnerAddressT = Aws::String>
  void SetPartnerAddress(PartnerAddressT&& value) {
    m_partnerAddressHasBeenSet = true;
    m_partnerAddress = std::forward<PartnerAddressT>(value);
  }
  template <typename PartnerAddressT = Aws::String>
  CreateCampaignRequest& WithPartnerAddress(PartnerAddressT&& value) {
    SetPartnerAddress(std::forward<PartnerAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The partner's badge — a tier or designation badge from AWS Partner Badge
   * Manager — shown in every badge slot of the campaign's emails, landing pages and
   * documents. Optional: until one is set, every badge slot shows the Standalone AWS
   * Partner badge.</p> <p>A PNG or JPEG of at most 2 MB, staged like an asset image
   * and checked the same way: it must have passed the staging scan (`SCAN_REJECTED`,
   * or `SCAN_IN_PROGRESS` while it is pending), and its bytes must be the format its
   * name says (`IMAGE_FORMAT_NOT_SUPPORTED`). Any shape is accepted: a badge is
   * drawn whole, never cropped. Content moderation judges it when an asset that
   * shows it is activated.
   */
  inline const FileRef& GetPartnerBadge() const { return m_partnerBadge; }
  inline bool PartnerBadgeHasBeenSet() const { return m_partnerBadgeHasBeenSet; }
  template <typename PartnerBadgeT = FileRef>
  void SetPartnerBadge(PartnerBadgeT&& value) {
    m_partnerBadgeHasBeenSet = true;
    m_partnerBadge = std::forward<PartnerBadgeT>(value);
  }
  template <typename PartnerBadgeT = FileRef>
  CreateCampaignRequest& WithPartnerBadge(PartnerBadgeT&& value) {
    SetPartnerBadge(std::forward<PartnerBadgeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The campaign's send audience — a CSV of recipient email addresses.</p> <p>The
   * campaign's *target*: who the campaign is sent to, as distinct from a
   * `CampaignAsset`, which is the content that is sent. It sits on the campaign and
   * not on the activation call because a partner assembles it in the same wizard
   * flow that sets the name and the dates — and because attaching it here means it
   * is validated, staged and resolved to a count before anything is activated,
   * rather than at the last click. <p>Required format: a header row naming the email
   * column `Email`, `E-mail`, `Email Address` or `E-mail Address` — compared without
   * case, spaces or punctuation. Other columns are permitted and ignored, and with
   * two email columns the first is used. A file without such a header is refused
   * with field code `EMAIL_COLUMN_MISSING`: the address column is never guessed. The
   * rows reach the delivery platform's importer as the partner wrote them — a
   * partner's audience is never rewritten. <p>At most 5 MB, checked against the
   * object's size before anything is copied, and at most 10,000 distinct addresses,
   * refused with `RECIPIENT_LIST_TOO_LARGE`. A file with no valid address at all is
   * refused with `RECIPIENT_LIST_EMPTY`; otherwise rows without a usable address are
   * not a refusal: they are skipped and counted, and `GetCampaign` reports the
   * counts. Optional here, because a campaign is a container and holds no state to
   * be incomplete in — but an email asset cannot be activated without it, so the
   * requirement moved to the point of activation. <p>Editable at any time, and an
   * edit reaches the delivery platform only when an asset is activated after it.
   * Each email activation loads the audience into a contact list of its own, so an
   * address taken off the file is not sent to by the next activation. <p>The bytes
   * are write-only. No response returns a URL or an `S3Uri` for this file;
   * `GetCampaign` returns the scan verdict, when the list was attached and how its
   * rows resolved, and nothing more.
   */
  inline const FileRef& GetEmailTarget() const { return m_emailTarget; }
  inline bool EmailTargetHasBeenSet() const { return m_emailTargetHasBeenSet; }
  template <typename EmailTargetT = FileRef>
  void SetEmailTarget(EmailTargetT&& value) {
    m_emailTargetHasBeenSet = true;
    m_emailTarget = std::forward<EmailTargetT>(value);
  }
  template <typename EmailTargetT = FileRef>
  CreateCampaignRequest& WithEmailTarget(EmailTargetT&& value) {
    SetEmailTarget(std::forward<EmailTargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Engagement groups whose contacts the campaign's emails will also go to: the
   * <code>Id</code>s <code>ListEngagementGroups</code> returns (AWS Partner Central
   * Selling). 1–10, each named once.</p> <p>Each group is named once: a repeated id
   * is refused with field code `INVALID_VALUE`. Not checked against your groups when
   * saved. StartCampaignAssetActivationTask resolves them to recipients. On a stage
   * that can't resolve groups yet, Start refuses an email while groups are set
   * (`ENGAGEMENT_GROUPS_UNAVAILABLE`), rather than send to `EmailTarget` alone.
   */
  inline const Aws::Vector<Aws::String>& GetEmailTargetEngagementGroupIds() const { return m_emailTargetEngagementGroupIds; }
  inline bool EmailTargetEngagementGroupIdsHasBeenSet() const { return m_emailTargetEngagementGroupIdsHasBeenSet; }
  template <typename EmailTargetEngagementGroupIdsT = Aws::Vector<Aws::String>>
  void SetEmailTargetEngagementGroupIds(EmailTargetEngagementGroupIdsT&& value) {
    m_emailTargetEngagementGroupIdsHasBeenSet = true;
    m_emailTargetEngagementGroupIds = std::forward<EmailTargetEngagementGroupIdsT>(value);
  }
  template <typename EmailTargetEngagementGroupIdsT = Aws::Vector<Aws::String>>
  CreateCampaignRequest& WithEmailTargetEngagementGroupIds(EmailTargetEngagementGroupIdsT&& value) {
    SetEmailTargetEngagementGroupIds(std::forward<EmailTargetEngagementGroupIdsT>(value));
    return *this;
  }
  template <typename EmailTargetEngagementGroupIdsT = Aws::String>
  CreateCampaignRequest& AddEmailTargetEngagementGroupIds(EmailTargetEngagementGroupIdsT&& value) {
    m_emailTargetEngagementGroupIdsHasBeenSet = true;
    m_emailTargetEngagementGroupIds.emplace_back(std::forward<EmailTargetEngagementGroupIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Advisory targeting metadata. Refined later, and not validated here.</p>
   */
  inline const TargetAudience& GetTargetAudience() const { return m_targetAudience; }
  inline bool TargetAudienceHasBeenSet() const { return m_targetAudienceHasBeenSet; }
  template <typename TargetAudienceT = TargetAudience>
  void SetTargetAudience(TargetAudienceT&& value) {
    m_targetAudienceHasBeenSet = true;
    m_targetAudience = std::forward<TargetAudienceT>(value);
  }
  template <typename TargetAudienceT = TargetAudience>
  CreateCampaignRequest& WithTargetAudience(TargetAudienceT&& value) {
    SetTargetAudience(std::forward<TargetAudienceT>(value));
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
  CreateCampaignRequest& WithEstimatedBudget(EstimatedBudgetT&& value) {
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
  CreateCampaignRequest& WithTotalBudget(TotalBudgetT&& value) {
    SetTotalBudget(std::forward<TotalBudgetT>(value));
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
  CreateCampaignRequest& WithStartOn(StartOnT&& value) {
    SetStartOn(std::forward<StartOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The last day of the campaign's run window, inclusive and in UTC. Not in the
   * past: the campaign completes at the UTC midnight after it (see
   * <code>CampaignState</code>). A scheduled send must fall on or before it.</p>
   * <p>Optional here, but required before any asset activates: until it is set,
   * GetCampaign's <code>ActivationIssues</code> reports <code>END_ON_MISSING</code>
   * and StartCampaignAssetActivationTask refuses (<code>CAMPAIGN_INCOMPLETE</code>).
   * Set it with UpdateCampaign.</p>
   */
  inline const Aws::String& GetEndOn() const { return m_endOn; }
  inline bool EndOnHasBeenSet() const { return m_endOnHasBeenSet; }
  template <typename EndOnT = Aws::String>
  void SetEndOn(EndOnT&& value) {
    m_endOnHasBeenSet = true;
    m_endOn = std::forward<EndOnT>(value);
  }
  template <typename EndOnT = Aws::String>
  CreateCampaignRequest& WithEndOn(EndOnT&& value) {
    SetEndOn(std::forward<EndOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Idempotency token. Same token within 24h returns existing resource.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateCampaignRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags to apply at creation.</p> <p>Tag-on-create rather than create-then-tag
   * is a Tagris requirement, not a convenience: it is what lets a tag-based access
   * control policy govern the creation itself. A campaign created untagged and
   * tagged a moment later is briefly outside any such policy.</p> <p>A key beginning
   * `aws:` (any case) is reserved for AWS-applied system tags and is refused with
   * `ValidationException`, as is a key repeated in the list; nothing is created. The
   * tags are recorded before the campaign is written, so a create that cannot record
   * them fails and creates nothing. A retry with the same `ClientToken` returns the
   * campaign the first attempt created and does not re-apply tags — use
   * `TagResource` to change them afterwards. `ListTagsForResource` returns them.
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateCampaignRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateCampaignRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Catalog m_catalog{Catalog::NOT_SET};

  Aws::String m_name;

  Aws::String m_campaignTemplateId;

  Aws::String m_senderEmail;

  Aws::String m_privacyPolicyUrl;

  Aws::String m_partnerAddress;

  FileRef m_partnerBadge;

  FileRef m_emailTarget;

  Aws::Vector<Aws::String> m_emailTargetEngagementGroupIds;

  TargetAudience m_targetAudience;

  MonetaryValue m_estimatedBudget;

  MonetaryValue m_totalBudget;

  Aws::String m_startOn;

  Aws::String m_endOn;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::Vector<Tag> m_tags;
  bool m_catalogHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_campaignTemplateIdHasBeenSet = false;
  bool m_senderEmailHasBeenSet = false;
  bool m_privacyPolicyUrlHasBeenSet = false;
  bool m_partnerAddressHasBeenSet = false;
  bool m_partnerBadgeHasBeenSet = false;
  bool m_emailTargetHasBeenSet = false;
  bool m_emailTargetEngagementGroupIdsHasBeenSet = false;
  bool m_targetAudienceHasBeenSet = false;
  bool m_estimatedBudgetHasBeenSet = false;
  bool m_totalBudgetHasBeenSet = false;
  bool m_startOnHasBeenSet = false;
  bool m_endOnHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
