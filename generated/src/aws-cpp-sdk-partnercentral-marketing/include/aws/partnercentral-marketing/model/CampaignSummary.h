/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/AssetLanguage.h>
#include <aws/partnercentral-marketing/model/CampaignState.h>

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
 * <p>Summary representation of a campaign for list operations.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/CampaignSummary">AWS
 * API Reference</a></p>
 */
class CampaignSummary {
 public:
  AWS_PARTNERCENTRALMARKETING_API CampaignSummary() = default;
  AWS_PARTNERCENTRALMARKETING_API CampaignSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API CampaignSummary& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
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
  CampaignSummary& WithCampaignId(CampaignIdT&& value) {
    SetCampaignId(std::forward<CampaignIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The campaign ARN. Present on the summary so a caller can tag a campaign
   * straight from a list result without a GetCampaign per row — the same reason the
   * audit timestamps are here.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CampaignSummary& WithArn(ArnT&& value) {
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
  CampaignSummary& WithName(NameT&& value) {
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
  inline CampaignSummary& WithState(CampaignState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The language the campaign's assets are written and typeset in. See
   * <code>Campaign$Language</code>.</p>
   */
  inline AssetLanguage GetLanguage() const { return m_language; }
  inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
  inline void SetLanguage(AssetLanguage value) {
    m_languageHasBeenSet = true;
    m_language = value;
  }
  inline CampaignSummary& WithLanguage(AssetLanguage value) {
    SetLanguage(value);
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
  CampaignSummary& WithStartOn(StartOnT&& value) {
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
  CampaignSummary& WithEndOn(EndOnT&& value) {
    SetEndOn(std::forward<EndOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Creation timestamp. Present on the summary so a caller can order a list by
   * recency without reading each campaign in full.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CampaignSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Last update timestamp. Present on the summary for the same reason as
   * CreatedAt.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  CampaignSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_campaignId;

  Aws::String m_arn;

  Aws::String m_name;

  CampaignState m_state{CampaignState::NOT_SET};

  AssetLanguage m_language{AssetLanguage::NOT_SET};

  Aws::String m_startOn;

  Aws::String m_endOn;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_campaignIdHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_languageHasBeenSet = false;
  bool m_startOnHasBeenSet = false;
  bool m_endOnHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
