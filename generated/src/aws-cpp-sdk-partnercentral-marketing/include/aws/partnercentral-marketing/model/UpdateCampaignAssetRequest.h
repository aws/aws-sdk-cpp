/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketingRequest.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/Catalog.h>
#include <aws/partnercentral-marketing/model/FieldValueInput.h>
#include <aws/partnercentral-marketing/model/SendMode.h>

#include <utility>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {

/**
 * <p>Input for UpdateCampaignAsset operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/UpdateCampaignAssetRequest">AWS
 * API Reference</a></p>
 */
class UpdateCampaignAssetRequest : public PartnerCentralMarketingRequest {
 public:
  AWS_PARTNERCENTRALMARKETING_API UpdateCampaignAssetRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateCampaignAsset"; }

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
  inline UpdateCampaignAssetRequest& WithCatalog(Catalog value) {
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
  UpdateCampaignAssetRequest& WithCampaignIdentifier(CampaignIdentifierT&& value) {
    SetCampaignIdentifier(std::forward<CampaignIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The asset identifier.</p>
   */
  inline const Aws::String& GetCampaignAssetIdentifier() const { return m_campaignAssetIdentifier; }
  inline bool CampaignAssetIdentifierHasBeenSet() const { return m_campaignAssetIdentifierHasBeenSet; }
  template <typename CampaignAssetIdentifierT = Aws::String>
  void SetCampaignAssetIdentifier(CampaignAssetIdentifierT&& value) {
    m_campaignAssetIdentifierHasBeenSet = true;
    m_campaignAssetIdentifier = std::forward<CampaignAssetIdentifierT>(value);
  }
  template <typename CampaignAssetIdentifierT = Aws::String>
  UpdateCampaignAssetRequest& WithCampaignAssetIdentifier(CampaignAssetIdentifierT&& value) {
    SetCampaignAssetIdentifier(std::forward<CampaignAssetIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Value-only updates to the asset's pinned template fields, keyed by FieldId.
   * The field schema (labels, descriptions, constraints, placeholders, image
   * defaults) is service-owned and pinned at instantiation, so clients send only the
   * values they are changing. Fields omitted keep their stored values; send the
   * entry with <code>Value</code> omitted to clear one.</p> <p>Named
   * <code>FieldValues</code> to match the member it edits on
   * <code>CampaignAsset</code>, which is the same concept read back. It was
   * <code>templateFieldUpdates</code>; the two names for one concept were the
   * defect, not the length.</p>
   */
  inline const Aws::Vector<FieldValueInput>& GetFieldValues() const { return m_fieldValues; }
  inline bool FieldValuesHasBeenSet() const { return m_fieldValuesHasBeenSet; }
  template <typename FieldValuesT = Aws::Vector<FieldValueInput>>
  void SetFieldValues(FieldValuesT&& value) {
    m_fieldValuesHasBeenSet = true;
    m_fieldValues = std::forward<FieldValuesT>(value);
  }
  template <typename FieldValuesT = Aws::Vector<FieldValueInput>>
  UpdateCampaignAssetRequest& WithFieldValues(FieldValuesT&& value) {
    SetFieldValues(std::forward<FieldValuesT>(value));
    return *this;
  }
  template <typename FieldValuesT = FieldValueInput>
  UpdateCampaignAssetRequest& AddFieldValues(FieldValuesT&& value) {
    m_fieldValuesHasBeenSet = true;
    m_fieldValues.emplace_back(std::forward<FieldValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Selects a multi-layout asset's layout: one of the values in
   * <code>CampaignAsset.layout.options</code>.</p> <p>PATCH: omitted leaves the
   * selection unchanged, and there is no way to clear it. A value that is not one of
   * the asset's options — or any value on a single-layout asset — is a plain
   * <code>ValidationException</code>, and nothing in the call is applied. Every
   * pinned field stays writable whichever layout is selected.</p>
   */
  inline const Aws::String& GetLayout() const { return m_layout; }
  inline bool LayoutHasBeenSet() const { return m_layoutHasBeenSet; }
  template <typename LayoutT = Aws::String>
  void SetLayout(LayoutT&& value) {
    m_layoutHasBeenSet = true;
    m_layout = std::forward<LayoutT>(value);
  }
  template <typename LayoutT = Aws::String>
  UpdateCampaignAssetRequest& WithLayout(LayoutT&& value) {
    SetLayout(std::forward<LayoutT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When a <strong>sendable</strong> asset (<code>EMAIL</code>,
   * <code>SOCIAL_POST</code>) sends: on activation, or at
   * <code>ScheduledSendAt</code>.</p> <p>A mode beside a value rather than a union,
   * on purpose: <code>ScheduledSendAt</code> stays a plain <code>Timestamp</code>,
   * and the precedent is EventBridge Scheduler's <code>FlexibleTimeWindow { Mode,
   * MaximumWindowInMinutes }</code>. The pair is checked as one, and a request where
   * they disagree is refused with <code>ValidationException</code>
   * (<code>INVALID_VALUE</code>, naming the member) and applies nothing:</p> <ul>
   * <li><code>SCHEDULED</code> requires <code>ScheduledSendAt</code>; a reschedule
   * resends <code>SCHEDULED</code> with the new time;</li>
   * <li><code>ON_ACTIVATION</code> forbids <code>ScheduledSendAt</code>, and drops
   * any time already stored;</li> <li><code>ScheduledSendAt</code> without
   * <code>SendMode</code> is refused.</li> </ul> <p>PATCH: omitted leaves both
   * unchanged. Until a mode is chosen the asset reports
   * <code>SEND_MODE_MISSING</code> and does not activate: no default, because an
   * unchosen send mails the real audience. Rejected with
   * <code>ValidationException</code> (<code>NOT_SUPPORTED_FOR_CATEGORY</code>) for a
   * category that has no send (<code>LANDING_PAGE</code>, <code>DOCUMENT</code>,
   * <code>BANNER_AD</code>). Like every other edit, it reaches the delivery platform
   * at the asset's next activation, and a live email or social post refuses it
   * (<code>ASSET_ALREADY_ACTIVE</code>): deactivate first.</p>
   */
  inline SendMode GetSendMode() const { return m_sendMode; }
  inline bool SendModeHasBeenSet() const { return m_sendModeHasBeenSet; }
  inline void SetSendMode(SendMode value) {
    m_sendModeHasBeenSet = true;
    m_sendMode = value;
  }
  inline UpdateCampaignAssetRequest& WithSendMode(SendMode value) {
    SetSendMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The send time, with <code>SendMode: SCHEDULED</code> and only then. See
   * <code>SendMode</code>.</p> <p>Must be at least an hour out
   * (<code>SEND_WINDOW_TOO_SOON</code>), unless it is the time already stored:
   * resending the stored mode and time changes nothing and is accepted, so a form
   * that always resubmits does not trip the window.</p> <p>Must also fall on or
   * before the campaign's <code>EndOn</code> (by the end of that UTC day): refused
   * with <code>ValidationException</code> (<code>INVALID_VALUE</code>) otherwise, so
   * nothing is scheduled to send after the campaign completes.</p> <p>Was
   * <code>scheduleDate</code>, a <code>YYYY-MM-DD</code> string. Retyped because a
   * date alone cannot express a send <em>time</em>, which is the whole point of a
   * schedule — and because the resource already spelled the same concept
   * <code>ScheduledSendAt</code> on the activation responses. Two spellings of one
   * concept on one resource was the defect.</p>
   */
  inline const Aws::Utils::DateTime& GetScheduledSendAt() const { return m_scheduledSendAt; }
  inline bool ScheduledSendAtHasBeenSet() const { return m_scheduledSendAtHasBeenSet; }
  template <typename ScheduledSendAtT = Aws::Utils::DateTime>
  void SetScheduledSendAt(ScheduledSendAtT&& value) {
    m_scheduledSendAtHasBeenSet = true;
    m_scheduledSendAt = std::forward<ScheduledSendAtT>(value);
  }
  template <typename ScheduledSendAtT = Aws::Utils::DateTime>
  UpdateCampaignAssetRequest& WithScheduledSendAt(ScheduledSendAtT&& value) {
    SetScheduledSendAt(std::forward<ScheduledSendAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Idempotency token. Retry-safety only — this is <strong>not</strong> a
   * concurrency token, and sequential edits to one field are last-writer-wins.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateCampaignAssetRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Catalog m_catalog{Catalog::NOT_SET};

  Aws::String m_campaignIdentifier;

  Aws::String m_campaignAssetIdentifier;

  Aws::Vector<FieldValueInput> m_fieldValues;

  Aws::String m_layout;

  SendMode m_sendMode{SendMode::NOT_SET};

  Aws::Utils::DateTime m_scheduledSendAt{};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_catalogHasBeenSet = false;
  bool m_campaignIdentifierHasBeenSet = false;
  bool m_campaignAssetIdentifierHasBeenSet = false;
  bool m_fieldValuesHasBeenSet = false;
  bool m_layoutHasBeenSet = false;
  bool m_sendModeHasBeenSet = false;
  bool m_scheduledSendAtHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
