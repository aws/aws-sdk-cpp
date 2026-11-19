/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/AttemptStatus.h>
#include <aws/partnercentral-marketing/model/CampaignAssetCategory.h>
#include <aws/partnercentral-marketing/model/CampaignAssetState.h>
#include <aws/partnercentral-marketing/model/CampaignAssetStateReason.h>
#include <aws/partnercentral-marketing/model/DeliveryStatus.h>
#include <aws/partnercentral-marketing/model/FileFormat.h>
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
 * <p>Summary representation of an asset for list operations.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/CampaignAssetSummary">AWS
 * API Reference</a></p>
 */
class CampaignAssetSummary {
 public:
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetSummary() = default;
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetSummary& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
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
  CampaignAssetSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
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
  inline CampaignAssetSummary& WithCategory(CampaignAssetCategory value) {
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
  CampaignAssetSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>DOCUMENT only: the words a page uses for this document, such as
   * &quot;eBook&quot;. A client listing the candidates for an <code>AssetLink</code>
   * field reads it here, so a preview can update on pick without a fetch.</p>
   */
  inline const Aws::String& GetLinkLabel() const { return m_linkLabel; }
  inline bool LinkLabelHasBeenSet() const { return m_linkLabelHasBeenSet; }
  template <typename LinkLabelT = Aws::String>
  void SetLinkLabel(LinkLabelT&& value) {
    m_linkLabelHasBeenSet = true;
    m_linkLabel = std::forward<LinkLabelT>(value);
  }
  template <typename LinkLabelT = Aws::String>
  CampaignAssetSummary& WithLinkLabel(LinkLabelT&& value) {
    SetLinkLabel(std::forward<LinkLabelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Where the asset sits in its lifecycle.</p>
   */
  inline CampaignAssetState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(CampaignAssetState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline CampaignAssetSummary& WithState(CampaignAssetState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How the last hand-over to the delivery platform ended. Absent before the
   * first activation.</p>
   */
  inline AttemptStatus GetLastActivationStatus() const { return m_lastActivationStatus; }
  inline bool LastActivationStatusHasBeenSet() const { return m_lastActivationStatusHasBeenSet; }
  inline void SetLastActivationStatus(AttemptStatus value) {
    m_lastActivationStatusHasBeenSet = true;
    m_lastActivationStatus = value;
  }
  inline CampaignAssetSummary& WithLastActivationStatus(AttemptStatus value) {
    SetLastActivationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the platform has delivered the asset.</p>
   */
  inline DeliveryStatus GetDeliveryStatus() const { return m_deliveryStatus; }
  inline bool DeliveryStatusHasBeenSet() const { return m_deliveryStatusHasBeenSet; }
  inline void SetDeliveryStatus(DeliveryStatus value) {
    m_deliveryStatusHasBeenSet = true;
    m_deliveryStatus = value;
  }
  inline CampaignAssetSummary& WithDeliveryStatus(DeliveryStatus value) {
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
  inline CampaignAssetSummary& WithDeliveryStatusReason(CampaignAssetStateReason value) {
    SetDeliveryStatusReason(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The asset template this asset was created from. The same value
   * <code>CampaignAsset.SourceAssetTemplateId</code> reports, and absent when it
   * is.</p>
   */
  inline const Aws::String& GetSourceAssetTemplateId() const { return m_sourceAssetTemplateId; }
  inline bool SourceAssetTemplateIdHasBeenSet() const { return m_sourceAssetTemplateIdHasBeenSet; }
  template <typename SourceAssetTemplateIdT = Aws::String>
  void SetSourceAssetTemplateId(SourceAssetTemplateIdT&& value) {
    m_sourceAssetTemplateIdHasBeenSet = true;
    m_sourceAssetTemplateId = std::forward<SourceAssetTemplateIdT>(value);
  }
  template <typename SourceAssetTemplateIdT = Aws::String>
  CampaignAssetSummary& WithSourceAssetTemplateId(SourceAssetTemplateIdT&& value) {
    SetSourceAssetTemplateId(std::forward<SourceAssetTemplateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>SOCIAL_POST only: the platform the post goes to. Join it with
   * ListSocialConnections' status for that platform to show a post that cannot
   * activate (a connection missing, EXPIRED or PAGE_REQUIRED) before Start is
   * pressed.</p>
   */
  inline Platform GetSocialPlatform() const { return m_socialPlatform; }
  inline bool SocialPlatformHasBeenSet() const { return m_socialPlatformHasBeenSet; }
  inline void SetSocialPlatform(Platform value) {
    m_socialPlatformHasBeenSet = true;
    m_socialPlatform = value;
  }
  inline CampaignAssetSummary& WithSocialPlatform(Platform value) {
    SetSocialPlatform(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the asset first went live, set once. Absent if it never has.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  CampaignAssetSummary& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Concrete file format of the finished artifact.</p>
   */
  inline FileFormat GetFileFormat() const { return m_fileFormat; }
  inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }
  inline void SetFileFormat(FileFormat value) {
    m_fileFormatHasBeenSet = true;
    m_fileFormat = value;
  }
  inline CampaignAssetSummary& WithFileFormat(FileFormat value) {
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
  inline CampaignAssetSummary& WithSendMode(SendMode value) {
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
  CampaignAssetSummary& WithScheduledSendAt(ScheduledSendAtT&& value) {
    SetScheduledSendAt(std::forward<ScheduledSendAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  CampaignAssetCategory m_category{CampaignAssetCategory::NOT_SET};

  Aws::String m_name;

  Aws::String m_linkLabel;

  CampaignAssetState m_state{CampaignAssetState::NOT_SET};

  AttemptStatus m_lastActivationStatus{AttemptStatus::NOT_SET};

  DeliveryStatus m_deliveryStatus{DeliveryStatus::NOT_SET};

  CampaignAssetStateReason m_deliveryStatusReason{CampaignAssetStateReason::NOT_SET};

  Aws::String m_sourceAssetTemplateId;

  Platform m_socialPlatform{Platform::NOT_SET};

  Aws::Utils::DateTime m_startedAt{};

  FileFormat m_fileFormat{FileFormat::NOT_SET};

  SendMode m_sendMode{SendMode::NOT_SET};

  Aws::Utils::DateTime m_scheduledSendAt{};
  bool m_idHasBeenSet = false;
  bool m_categoryHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_linkLabelHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_lastActivationStatusHasBeenSet = false;
  bool m_deliveryStatusHasBeenSet = false;
  bool m_deliveryStatusReasonHasBeenSet = false;
  bool m_sourceAssetTemplateIdHasBeenSet = false;
  bool m_socialPlatformHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_fileFormatHasBeenSet = false;
  bool m_sendModeHasBeenSet = false;
  bool m_scheduledSendAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
