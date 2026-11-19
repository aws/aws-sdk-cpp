/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/AttemptStatus.h>
#include <aws/partnercentral-marketing/model/CampaignAssetState.h>
#include <aws/partnercentral-marketing/model/CampaignAssetStateReason.h>

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
 * <p>Output for DeactivateCampaignAsset.</p> <p>Synchronous, so the outcome of the
 * stop is this response — there is no <code>lastDeactivationStatus</code>, and its
 * absence is not an oversight. Activation is asynchronous and its outcome arrives
 * long after the response, which is why that one has to be persisted where a
 * partner can read it later.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/DeactivateCampaignAssetResponse">AWS
 * API Reference</a></p>
 */
class DeactivateCampaignAssetResult {
 public:
  AWS_PARTNERCENTRALMARKETING_API DeactivateCampaignAssetResult() = default;
  AWS_PARTNERCENTRALMARKETING_API DeactivateCampaignAssetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_PARTNERCENTRALMARKETING_API DeactivateCampaignAssetResult& operator=(
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
  DeactivateCampaignAssetResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The asset's lifecycle position — INACTIVE once the stop is confirmed.</p>
   */
  inline CampaignAssetState GetState() const { return m_state; }
  inline void SetState(CampaignAssetState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline DeactivateCampaignAssetResult& WithState(CampaignAssetState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How the most recent <em>activation</em> attempt ended, which a stop does not
   * change. Read with state, it is what separates a stopped asset (INACTIVE +
   * SUCCEEDED) from one never activated (INACTIVE, this member absent). Omitted
   * until a first activation has been attempted.</p>
   */
  inline AttemptStatus GetLastActivationStatus() const { return m_lastActivationStatus; }
  inline void SetLastActivationStatus(AttemptStatus value) {
    m_lastActivationStatusHasBeenSet = true;
    m_lastActivationStatus = value;
  }
  inline DeactivateCampaignAssetResult& WithLastActivationStatus(AttemptStatus value) {
    SetLastActivationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Why the asset sits where it does. Present when LastActivationStatus is
   * FAILED, or on a deliberate INACTIVE.</p>
   */
  inline CampaignAssetStateReason GetStateReason() const { return m_stateReason; }
  inline void SetStateReason(CampaignAssetStateReason value) {
    m_stateReasonHasBeenSet = true;
    m_stateReason = value;
  }
  inline DeactivateCampaignAssetResult& WithStateReason(CampaignAssetStateReason value) {
    SetStateReason(value);
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
  DeactivateCampaignAssetResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_id;

  CampaignAssetState m_state{CampaignAssetState::NOT_SET};

  AttemptStatus m_lastActivationStatus{AttemptStatus::NOT_SET};

  CampaignAssetStateReason m_stateReason{CampaignAssetStateReason::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_idHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_lastActivationStatusHasBeenSet = false;
  bool m_stateReasonHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
