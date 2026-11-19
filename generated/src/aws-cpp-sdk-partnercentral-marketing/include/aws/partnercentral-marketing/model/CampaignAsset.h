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
#include <aws/partnercentral-marketing/model/ActivationIssue.h>
#include <aws/partnercentral-marketing/model/AttemptStatus.h>
#include <aws/partnercentral-marketing/model/CampaignAssetCategory.h>
#include <aws/partnercentral-marketing/model/CampaignAssetFieldValue.h>
#include <aws/partnercentral-marketing/model/CampaignAssetLayout.h>
#include <aws/partnercentral-marketing/model/CampaignAssetState.h>
#include <aws/partnercentral-marketing/model/CampaignAssetStateReason.h>
#include <aws/partnercentral-marketing/model/DeliveryStatus.h>
#include <aws/partnercentral-marketing/model/FileFormat.h>
#include <aws/partnercentral-marketing/model/LayoutPreview.h>
#include <aws/partnercentral-marketing/model/Platform.h>
#include <aws/partnercentral-marketing/model/SendMode.h>

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
 * <p>A marketing asset resource within a campaign.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/CampaignAsset">AWS
 * API Reference</a></p>
 */
class CampaignAsset {
 public:
  AWS_PARTNERCENTRALMARKETING_API CampaignAsset() = default;
  AWS_PARTNERCENTRALMARKETING_API CampaignAsset(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API CampaignAsset& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The asset identifier.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CampaignAsset& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

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
  CampaignAsset& WithCampaignId(CampaignIdT&& value) {
    SetCampaignId(std::forward<CampaignIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The asset category.</p>
   */
  inline CampaignAssetCategory GetCategory() const { return m_category; }
  inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
  inline void SetCategory(CampaignAssetCategory value) {
    m_categoryHasBeenSet = true;
    m_category = value;
  }
  inline CampaignAsset& WithCategory(CampaignAssetCategory value) {
    SetCategory(value);
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
  CampaignAsset& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>DOCUMENT only: the words a page uses for this document, such as
   * &quot;eBook&quot;. Fill an <code>AssetLink</code> field's
   * <code>LabelFieldId</code> with it when the partner picks this asset.</p>
   */
  inline const Aws::String& GetLinkLabel() const { return m_linkLabel; }
  inline bool LinkLabelHasBeenSet() const { return m_linkLabelHasBeenSet; }
  template <typename LinkLabelT = Aws::String>
  void SetLinkLabel(LinkLabelT&& value) {
    m_linkLabelHasBeenSet = true;
    m_linkLabel = std::forward<LinkLabelT>(value);
  }
  template <typename LinkLabelT = Aws::String>
  CampaignAsset& WithLinkLabel(LinkLabelT&& value) {
    SetLinkLabel(std::forward<LinkLabelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the asset is live.</p> <p>Reports current truth only, and nothing
   * else on this shape overrides it. During an <em>initial</em> publication it stays
   * INACTIVE until the delivery platform holds the object; during a
   * <em>re</em>-publication it stays ACTIVE, because the previously published
   * content is still serving.</p> <p>A stopped asset and one never started both read
   * INACTIVE; <code>LastActivationStatus</code> tells them apart, because a stop
   * does not change how the last activation went — stopped is INACTIVE with that
   * member <code>SUCCEEDED</code>, never started is INACTIVE with it absent.</p>
   * <p>An update never moves this member.</p>
   */
  inline CampaignAssetState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(CampaignAssetState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline CampaignAsset& WithState(CampaignAssetState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How the most recent hand-over to the delivery platform ended.</p> <p>The
   * hand-over, not the delivery: if DG got the artifact scheduled at the platform
   * this is SUCCEEDED, and whether the platform then delivered is
   * <code>DeliveryStatus</code>. Per category the hand-over point is — email: the
   * mailing armed; social: the create, which <em>is</em> the schedule; landing page:
   * create plus publish-personalisation; document: bytes written.</p> <p>Read with
   * <code>State</code> this is what separates a stopped asset (INACTIVE with
   * SUCCEEDED here) from one never activated (INACTIVE with this member absent) — a
   * stop does not change how the last <em>activation</em> went.</p> <p>There is no
   * public UNKNOWN. A hand-over whose outcome DG cannot yet determine reports
   * IN_PROGRESS, because a partner's action is identical either way and there is
   * nothing to do with &quot;unknown&quot;. Reporting it as FAILED would be the
   * harmful collapse: that reads as safe to retry, and a retry on an at-most-once
   * create publishes a second live object.</p> <p>Omitted before the first
   * activation attempt.</p>
   */
  inline AttemptStatus GetLastActivationStatus() const { return m_lastActivationStatus; }
  inline bool LastActivationStatusHasBeenSet() const { return m_lastActivationStatusHasBeenSet; }
  inline void SetLastActivationStatus(AttemptStatus value) {
    m_lastActivationStatusHasBeenSet = true;
    m_lastActivationStatus = value;
  }
  inline CampaignAsset& WithLastActivationStatus(AttemptStatus value) {
    SetLastActivationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>What the platform did with the artifact after accepting it.</p> <p>EMAIL and
   * SOCIAL_POST only — absent on every other category, which has no delivery event.
   * See the DeliveryStatus docs.</p>
   */
  inline DeliveryStatus GetDeliveryStatus() const { return m_deliveryStatus; }
  inline bool DeliveryStatusHasBeenSet() const { return m_deliveryStatusHasBeenSet; }
  inline void SetDeliveryStatus(DeliveryStatus value) {
    m_deliveryStatusHasBeenSet = true;
    m_deliveryStatus = value;
  }
  inline CampaignAsset& WithDeliveryStatus(DeliveryStatus value) {
    SetDeliveryStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Why delivery failed. Present only when DeliveryStatus is FAILED. For an email
   * the platform rejected: SENDER_EMAIL_INVALID, RECIPIENT_LIST_EMPTY,
   * MAILING_CREDITS_EXHAUSTED or RECIPIENT_LIMIT_EXCEEDED. Otherwise
   * DELIVERY_FAILED. A Facebook post refused because its connection has no Page is
   * FAILED with SOCIAL_CONNECTION_PAGE_REQUIRED, and withdrawn: reconnect Facebook
   * with a Page selected. A social post the platform stopped retrying, because it
   * could not publish within 12 hours of its scheduled time, is FAILED with
   * DELIVERY_FAILED. Any other social post that could not be published stays PENDING
   * while it is investigated, and is reported FAILED with DELIVERY_FAILED once it is
   * confirmed it will not go out. Deactivate and activate the asset again to
   * retry.</p>
   */
  inline CampaignAssetStateReason GetDeliveryStatusReason() const { return m_deliveryStatusReason; }
  inline bool DeliveryStatusReasonHasBeenSet() const { return m_deliveryStatusReasonHasBeenSet; }
  inline void SetDeliveryStatusReason(CampaignAssetStateReason value) {
    m_deliveryStatusReasonHasBeenSet = true;
    m_deliveryStatusReason = value;
  }
  inline CampaignAsset& WithDeliveryStatusReason(CampaignAssetStateReason value) {
    SetDeliveryStatusReason(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The asset template this asset was created from: the
   * <code>SourceAssetTemplateIdentifier</code> its
   * <code>BatchCreateCampaignAsset</code> entry named, one of
   * <code>GetCampaignTemplate</code>'s
   * <code>CampaignTemplate.AssetTemplates[].Id</code>. Set at create and never
   * writable. Absent on an asset created before DG recorded it, which can't be
   * activated either. A campaign holds at most one asset per asset template, so this
   * is how a client matches a campaign's assets to its template's asset templates,
   * for example to create the same assets in another campaign. Names don't identify
   * one: two asset templates can share a name.</p>
   */
  inline const Aws::String& GetSourceAssetTemplateId() const { return m_sourceAssetTemplateId; }
  inline bool SourceAssetTemplateIdHasBeenSet() const { return m_sourceAssetTemplateIdHasBeenSet; }
  template <typename SourceAssetTemplateIdT = Aws::String>
  void SetSourceAssetTemplateId(SourceAssetTemplateIdT&& value) {
    m_sourceAssetTemplateIdHasBeenSet = true;
    m_sourceAssetTemplateId = std::forward<SourceAssetTemplateIdT>(value);
  }
  template <typename SourceAssetTemplateIdT = Aws::String>
  CampaignAsset& WithSourceAssetTemplateId(SourceAssetTemplateIdT&& value) {
    SetSourceAssetTemplateId(std::forward<SourceAssetTemplateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>SOCIAL_POST only: the platform the post goes to, set from its template and
   * never writable. The same value <code>CampaignAssetSummary.SocialPlatform</code>
   * reports. Absent for every other category.</p>
   */
  inline Platform GetSocialPlatform() const { return m_socialPlatform; }
  inline bool SocialPlatformHasBeenSet() const { return m_socialPlatformHasBeenSet; }
  inline void SetSocialPlatform(Platform value) {
    m_socialPlatformHasBeenSet = true;
    m_socialPlatform = value;
  }
  inline CampaignAsset& WithSocialPlatform(Platform value) {
    SetSocialPlatform(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Concrete file format of the finished artifact. For <code>DOWNLOAD_ONLY</code>
   * this is the format of the object export copies through verbatim.</p>
   */
  inline FileFormat GetFileFormat() const { return m_fileFormat; }
  inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }
  inline void SetFileFormat(FileFormat value) {
    m_fileFormatHasBeenSet = true;
    m_fileFormat = value;
  }
  inline CampaignAsset& WithFileFormat(FileFormat value) {
    SetFileFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When this asset sends, as chosen with UpdateCampaignAsset. <code>EMAIL</code>
   * and <code>SOCIAL_POST</code> only — the two categories whose delivery platform
   * holds a schedule of its own. Absent until chosen, and then the asset reports
   * <code>SEND_MODE_MISSING</code>.</p>
   */
  inline SendMode GetSendMode() const { return m_sendMode; }
  inline bool SendModeHasBeenSet() const { return m_sendModeHasBeenSet; }
  inline void SetSendMode(SendMode value) {
    m_sendModeHasBeenSet = true;
    m_sendMode = value;
  }
  inline CampaignAsset& WithSendMode(SendMode value) {
    SetSendMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The send time, present only when <code>SendMode</code> is
   * <code>SCHEDULED</code>. It reaches the delivery platform at the asset's next
   * activation.</p> <p>Was <code>scheduleDate: UtcDate</code>; retyped with the
   * write member of the same name.</p>
   */
  inline const Aws::Utils::DateTime& GetScheduledSendAt() const { return m_scheduledSendAt; }
  inline bool ScheduledSendAtHasBeenSet() const { return m_scheduledSendAtHasBeenSet; }
  template <typename ScheduledSendAtT = Aws::Utils::DateTime>
  void SetScheduledSendAt(ScheduledSendAtT&& value) {
    m_scheduledSendAtHasBeenSet = true;
    m_scheduledSendAt = std::forward<ScheduledSendAtT>(value);
  }
  template <typename ScheduledSendAtT = Aws::Utils::DateTime>
  CampaignAsset& WithScheduledSendAt(ScheduledSendAtT&& value) {
    SetScheduledSendAt(std::forward<ScheduledSendAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The asset's pinned template fields — the field schema copied from the
   * blueprint at instantiation, each paired with the partner's current value.
   * Present on every asset instantiated from a blueprint that offers editable
   * fields, whatever its category (design section 3.1); absent on one whose
   * blueprint offers none.</p>
   */
  inline const Aws::Vector<CampaignAssetFieldValue>& GetFieldValues() const { return m_fieldValues; }
  inline bool FieldValuesHasBeenSet() const { return m_fieldValuesHasBeenSet; }
  template <typename FieldValuesT = Aws::Vector<CampaignAssetFieldValue>>
  void SetFieldValues(FieldValuesT&& value) {
    m_fieldValuesHasBeenSet = true;
    m_fieldValues = std::forward<FieldValuesT>(value);
  }
  template <typename FieldValuesT = Aws::Vector<CampaignAssetFieldValue>>
  CampaignAsset& WithFieldValues(FieldValuesT&& value) {
    SetFieldValues(std::forward<FieldValuesT>(value));
    return *this;
  }
  template <typename FieldValuesT = CampaignAssetFieldValue>
  CampaignAsset& AddFieldValues(FieldValuesT&& value) {
    m_fieldValuesHasBeenSet = true;
    m_fieldValues.emplace_back(std::forward<FieldValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The asset's AWS-authored layout, as stable public CDN URLs composed from the
   * fileKeys copied off the blueprint at instantiation. Together with FieldValues
   * this makes the asset self-describing: a client renders the edit form and shows
   * the real layout while editing, with no template lookup.</p> <p>The stored form
   * is a bare object key and the URL is composed on read. The key is
   * revision-addressed and prior revisions are retained, so the key IS the pin —
   * nothing is copied into the asset bucket, and there is no version parameter to
   * carry (DG-038).</p> <p>One entry for every category except LANDING_PAGE, which
   * has two and distinguishes them with PageType.</p> <p>On a multi-layout asset,
   * the SELECTED option's pages only (its first option when none is stored); each
   * option's own previews are on layout.options.</p>
   */
  inline const Aws::Vector<LayoutPreview>& GetLayoutPreviews() const { return m_layoutPreviews; }
  inline bool LayoutPreviewsHasBeenSet() const { return m_layoutPreviewsHasBeenSet; }
  template <typename LayoutPreviewsT = Aws::Vector<LayoutPreview>>
  void SetLayoutPreviews(LayoutPreviewsT&& value) {
    m_layoutPreviewsHasBeenSet = true;
    m_layoutPreviews = std::forward<LayoutPreviewsT>(value);
  }
  template <typename LayoutPreviewsT = Aws::Vector<LayoutPreview>>
  CampaignAsset& WithLayoutPreviews(LayoutPreviewsT&& value) {
    SetLayoutPreviews(std::forward<LayoutPreviewsT>(value));
    return *this;
  }
  template <typename LayoutPreviewsT = LayoutPreview>
  CampaignAsset& AddLayoutPreviews(LayoutPreviewsT&& value) {
    m_layoutPreviewsHasBeenSet = true;
    m_layoutPreviews.emplace_back(std::forward<LayoutPreviewsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A multi-layout asset's layout choice (DG-044): the selection once made, and
   * every option the asset was created with. Absent for a single-layout asset.</p>
   * <p>FieldValues is always the union of every option's fields, selected or not, so
   * a client can switch layouts without a round trip: each option lists its own
   * FieldIds. The selection drives layout.selected and the top-level LayoutPreviews
   * only.</p>
   */
  inline const CampaignAssetLayout& GetLayout() const { return m_layout; }
  inline bool LayoutHasBeenSet() const { return m_layoutHasBeenSet; }
  template <typename LayoutT = CampaignAssetLayout>
  void SetLayout(LayoutT&& value) {
    m_layoutHasBeenSet = true;
    m_layout = std::forward<LayoutT>(value);
  }
  template <typename LayoutT = CampaignAssetLayout>
  CampaignAsset& WithLayout(LayoutT&& value) {
    SetLayout(std::forward<LayoutT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>What must be fixed on this asset before it can be activated. Empty when the
   * asset is ready.</p> <p>Issues don't block saving: an asset can be saved
   * incomplete and fixed over several updates.
   * <code>StartCampaignAssetActivationTask</code> refuses an asset that still has
   * issues: an issue blocks activation when only an edit to the asset can change the
   * outcome. Most issues name the field to fix in <code>FieldId</code>. Fix it with
   * <code>UpdateCampaignAsset</code>, then read this list again.</p> <p>Besides the
   * issues computed from the asset's content, the list carries what the last
   * activation found: <code>CONTENT_REJECTED</code> and
   * <code>PARTNER_IMAGE_REJECTED</code> when moderation refused a field. Editing
   * that field removes its issue. A <code>CONTENT_REJECTED</code> without a
   * <code>FieldId</code> means the text was refused as a whole; editing any text
   * field removes it.</p> <p>Problems with the campaign's own settings, such as a
   * missing recipient list, and with the partner's profile, such as a missing logo,
   * are reported on <code>Campaign.ActivationIssues</code>, not here.</p>
   */
  inline const Aws::Vector<ActivationIssue>& GetActivationIssues() const { return m_activationIssues; }
  inline bool ActivationIssuesHasBeenSet() const { return m_activationIssuesHasBeenSet; }
  template <typename ActivationIssuesT = Aws::Vector<ActivationIssue>>
  void SetActivationIssues(ActivationIssuesT&& value) {
    m_activationIssuesHasBeenSet = true;
    m_activationIssues = std::forward<ActivationIssuesT>(value);
  }
  template <typename ActivationIssuesT = Aws::Vector<ActivationIssue>>
  CampaignAsset& WithActivationIssues(ActivationIssuesT&& value) {
    SetActivationIssues(std::forward<ActivationIssuesT>(value));
    return *this;
  }
  template <typename ActivationIssuesT = ActivationIssue>
  CampaignAsset& AddActivationIssues(ActivationIssuesT&& value) {
    m_activationIssuesHasBeenSet = true;
    m_activationIssues.emplace_back(std::forward<ActivationIssuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The live public address this asset's activation produced.</p> <p>A landing
   * page's page URL, read back from the delivery platform at activation and
   * preserved across every convergence; a document's public CDN URL, composed on
   * read from the key the publish wrote. Absent until the asset activates, and
   * absent for EMAIL and SOCIAL_POST, which produce no partner-addressable URL of
   * their own.</p> <p>For a landing page this is the entire deliverable — without it
   * a partner has no way to learn where their live page is. A WIDGET landing page
   * reports none: it is embedded rather than standalone, so absence there is
   * expected rather than a fault.</p>
   */
  inline const Aws::String& GetPublicUrl() const { return m_publicUrl; }
  inline bool PublicUrlHasBeenSet() const { return m_publicUrlHasBeenSet; }
  template <typename PublicUrlT = Aws::String>
  void SetPublicUrl(PublicUrlT&& value) {
    m_publicUrlHasBeenSet = true;
    m_publicUrl = std::forward<PublicUrlT>(value);
  }
  template <typename PublicUrlT = Aws::String>
  CampaignAsset& WithPublicUrl(PublicUrlT&& value) {
    SetPublicUrl(std::forward<PublicUrlT>(value));
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
  CampaignAsset& WithCreatedAt(CreatedAtT&& value) {
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
  CampaignAsset& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_campaignId;

  CampaignAssetCategory m_category{CampaignAssetCategory::NOT_SET};

  Aws::String m_name;

  Aws::String m_linkLabel;

  CampaignAssetState m_state{CampaignAssetState::NOT_SET};

  AttemptStatus m_lastActivationStatus{AttemptStatus::NOT_SET};

  DeliveryStatus m_deliveryStatus{DeliveryStatus::NOT_SET};

  CampaignAssetStateReason m_deliveryStatusReason{CampaignAssetStateReason::NOT_SET};

  Aws::String m_sourceAssetTemplateId;

  Platform m_socialPlatform{Platform::NOT_SET};

  FileFormat m_fileFormat{FileFormat::NOT_SET};

  SendMode m_sendMode{SendMode::NOT_SET};

  Aws::Utils::DateTime m_scheduledSendAt{};

  Aws::Vector<CampaignAssetFieldValue> m_fieldValues;

  Aws::Vector<LayoutPreview> m_layoutPreviews;

  CampaignAssetLayout m_layout;

  Aws::Vector<ActivationIssue> m_activationIssues;

  Aws::String m_publicUrl;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_idHasBeenSet = false;
  bool m_campaignIdHasBeenSet = false;
  bool m_categoryHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_linkLabelHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_lastActivationStatusHasBeenSet = false;
  bool m_deliveryStatusHasBeenSet = false;
  bool m_deliveryStatusReasonHasBeenSet = false;
  bool m_sourceAssetTemplateIdHasBeenSet = false;
  bool m_socialPlatformHasBeenSet = false;
  bool m_fileFormatHasBeenSet = false;
  bool m_sendModeHasBeenSet = false;
  bool m_scheduledSendAtHasBeenSet = false;
  bool m_fieldValuesHasBeenSet = false;
  bool m_layoutPreviewsHasBeenSet = false;
  bool m_layoutHasBeenSet = false;
  bool m_activationIssuesHasBeenSet = false;
  bool m_publicUrlHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
