/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/ActivationIssue.h>
#include <aws/partnercentral-marketing/model/CampaignAssetState.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace PartnerCentralMarketing {
namespace Model {
/**
 * <p>Output for UpdateCampaignAsset.</p> <p>A minimal acknowledgment, not an echo.
 * Read GetCampaignAsset for the applied values
 * (<code>FieldValues</code>).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/UpdateCampaignAssetResponse">AWS
 * API Reference</a></p>
 */
class UpdateCampaignAssetResult {
 public:
  AWS_PARTNERCENTRALMARKETING_API UpdateCampaignAssetResult() = default;
  AWS_PARTNERCENTRALMARKETING_API UpdateCampaignAssetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_PARTNERCENTRALMARKETING_API UpdateCampaignAssetResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The asset identifier.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  UpdateCampaignAssetResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The asset's state, <strong>unchanged</strong>.</p> <p>An update never moves
   * it, so a live asset stays ACTIVE while its edited values take effect for the
   * next activation. There is no edit-outcome member: a 200 means every submitted
   * value applied, and every failure is a refusal on the call itself (DG-040
   * Decision 11).</p>
   */
  inline CampaignAssetState GetState() const { return m_state; }
  inline void SetState(CampaignAssetState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline UpdateCampaignAssetResult& WithState(CampaignAssetState value) {
    SetState(value);
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
  template <typename ActivationIssuesT = Aws::Vector<ActivationIssue>>
  void SetActivationIssues(ActivationIssuesT&& value) {
    m_activationIssuesHasBeenSet = true;
    m_activationIssues = std::forward<ActivationIssuesT>(value);
  }
  template <typename ActivationIssuesT = Aws::Vector<ActivationIssue>>
  UpdateCampaignAssetResult& WithActivationIssues(ActivationIssuesT&& value) {
    SetActivationIssues(std::forward<ActivationIssuesT>(value));
    return *this;
  }
  template <typename ActivationIssuesT = ActivationIssue>
  UpdateCampaignAssetResult& AddActivationIssues(ActivationIssuesT&& value) {
    m_activationIssuesHasBeenSet = true;
    m_activationIssues.emplace_back(std::forward<ActivationIssuesT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  UpdateCampaignAssetResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_id;

  CampaignAssetState m_state{CampaignAssetState::NOT_SET};

  Aws::Vector<ActivationIssue> m_activationIssues;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_idHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_activationIssuesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
