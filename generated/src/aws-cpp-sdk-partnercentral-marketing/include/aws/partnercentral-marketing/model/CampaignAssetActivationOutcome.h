/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/CampaignAssetActivationStatus.h>
#include <aws/partnercentral-marketing/model/CampaignAssetStateReason.h>

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
 * <p>How one asset named in a task is going.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/CampaignAssetActivationOutcome">AWS
 * API Reference</a></p>
 */
class CampaignAssetActivationOutcome {
 public:
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetActivationOutcome() = default;
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetActivationOutcome(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetActivationOutcome& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The asset this outcome belongs to.</p>
   */
  inline const Aws::String& GetCampaignAssetId() const { return m_campaignAssetId; }
  inline bool CampaignAssetIdHasBeenSet() const { return m_campaignAssetIdHasBeenSet; }
  template <typename CampaignAssetIdT = Aws::String>
  void SetCampaignAssetId(CampaignAssetIdT&& value) {
    m_campaignAssetIdHasBeenSet = true;
    m_campaignAssetId = std::forward<CampaignAssetIdT>(value);
  }
  template <typename CampaignAssetIdT = Aws::String>
  CampaignAssetActivationOutcome& WithCampaignAssetId(CampaignAssetIdT&& value) {
    SetCampaignAssetId(std::forward<CampaignAssetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This asset's contribution to the task's status.</p>
   */
  inline CampaignAssetActivationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(CampaignAssetActivationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CampaignAssetActivationOutcome& WithStatus(CampaignAssetActivationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Why the activation did not succeed. Present when status is FAILED.</p>
   */
  inline CampaignAssetStateReason GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  inline void SetReason(CampaignAssetStateReason value) {
    m_reasonHasBeenSet = true;
    m_reason = value;
  }
  inline CampaignAssetActivationOutcome& WithReason(CampaignAssetStateReason value) {
    SetReason(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of <code>Reason</code> for display. Don't parse it. For a
   * mailing-credit shortfall it states the credits needed and remaining.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  CampaignAssetActivationOutcome& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_campaignAssetId;

  CampaignAssetActivationStatus m_status{CampaignAssetActivationStatus::NOT_SET};

  CampaignAssetStateReason m_reason{CampaignAssetStateReason::NOT_SET};

  Aws::String m_message;
  bool m_campaignAssetIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
