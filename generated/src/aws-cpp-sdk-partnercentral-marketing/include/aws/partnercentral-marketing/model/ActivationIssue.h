/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/CampaignAssetStateReason.h>
#include <aws/partnercentral-marketing/model/CampaignSetting.h>
#include <aws/partnercentral-marketing/model/PartnerProfileField.h>

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
 * <p>One thing that must be fixed before activation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/ActivationIssue">AWS
 * API Reference</a></p>
 */
class ActivationIssue {
 public:
  AWS_PARTNERCENTRALMARKETING_API ActivationIssue() = default;
  AWS_PARTNERCENTRALMARKETING_API ActivationIssue(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API ActivationIssue& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>What is wrong. Branch on this, not on <code>Message</code>.</p>
   */
  inline CampaignAssetStateReason GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(CampaignAssetStateReason value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline ActivationIssue& WithCode(CampaignAssetStateReason value) {
    SetCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The asset field to fix. Present for asset-level issues, except
   * <code>SEND_MODE_MISSING</code> and a <code>CONTENT_REJECTED</code> that refused
   * the asset's text as a whole rather than one field.</p>
   */
  inline const Aws::String& GetFieldId() const { return m_fieldId; }
  inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
  template <typename FieldIdT = Aws::String>
  void SetFieldId(FieldIdT&& value) {
    m_fieldIdHasBeenSet = true;
    m_fieldId = std::forward<FieldIdT>(value);
  }
  template <typename FieldIdT = Aws::String>
  ActivationIssue& WithFieldId(FieldIdT&& value) {
    SetFieldId(std::forward<FieldIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>UpdateCampaign</code> member to set. Present for campaign-level
   * issues.</p>
   */
  inline CampaignSetting GetCampaignSetting() const { return m_campaignSetting; }
  inline bool CampaignSettingHasBeenSet() const { return m_campaignSettingHasBeenSet; }
  inline void SetCampaignSetting(CampaignSetting value) {
    m_campaignSettingHasBeenSet = true;
    m_campaignSetting = value;
  }
  inline ActivationIssue& WithCampaignSetting(CampaignSetting value) {
    SetCampaignSetting(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The partner-profile value to set or shorten, in AWS Partner Central, or the
   * derived value whose input it is. Present on
   * <code>PARTNER_PROFILE_FIELD_MISSING</code> and
   * <code>PARTNER_PROFILE_FIELD_DOES_NOT_FIT</code>.</p>
   */
  inline PartnerProfileField GetPartnerProfileField() const { return m_partnerProfileField; }
  inline bool PartnerProfileFieldHasBeenSet() const { return m_partnerProfileFieldHasBeenSet; }
  inline void SetPartnerProfileField(PartnerProfileField value) {
    m_partnerProfileFieldHasBeenSet = true;
    m_partnerProfileField = value;
  }
  inline ActivationIssue& WithPartnerProfileField(PartnerProfileField value) {
    SetPartnerProfileField(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The assets this campaign-level issue blocks.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAffectedAssetIds() const { return m_affectedAssetIds; }
  inline bool AffectedAssetIdsHasBeenSet() const { return m_affectedAssetIdsHasBeenSet; }
  template <typename AffectedAssetIdsT = Aws::Vector<Aws::String>>
  void SetAffectedAssetIds(AffectedAssetIdsT&& value) {
    m_affectedAssetIdsHasBeenSet = true;
    m_affectedAssetIds = std::forward<AffectedAssetIdsT>(value);
  }
  template <typename AffectedAssetIdsT = Aws::Vector<Aws::String>>
  ActivationIssue& WithAffectedAssetIds(AffectedAssetIdsT&& value) {
    SetAffectedAssetIds(std::forward<AffectedAssetIdsT>(value));
    return *this;
  }
  template <typename AffectedAssetIdsT = Aws::String>
  ActivationIssue& AddAffectedAssetIds(AffectedAssetIdsT&& value) {
    m_affectedAssetIdsHasBeenSet = true;
    m_affectedAssetIds.emplace_back(std::forward<AffectedAssetIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description for display. Don't parse it.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ActivationIssue& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  CampaignAssetStateReason m_code{CampaignAssetStateReason::NOT_SET};

  Aws::String m_fieldId;

  CampaignSetting m_campaignSetting{CampaignSetting::NOT_SET};

  PartnerProfileField m_partnerProfileField{PartnerProfileField::NOT_SET};

  Aws::Vector<Aws::String> m_affectedAssetIds;

  Aws::String m_message;
  bool m_codeHasBeenSet = false;
  bool m_fieldIdHasBeenSet = false;
  bool m_campaignSettingHasBeenSet = false;
  bool m_partnerProfileFieldHasBeenSet = false;
  bool m_affectedAssetIdsHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
