/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/CampaignAssetActivationOutcome.h>
#include <aws/partnercentral-marketing/model/CampaignAssetActivationTaskStatus.h>

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
 * <p>Output for GetCampaignAssetActivationTask: the campaign's most recent
 * task.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/GetCampaignAssetActivationTaskResponse">AWS
 * API Reference</a></p>
 */
class GetCampaignAssetActivationTaskResult {
 public:
  AWS_PARTNERCENTRALMARKETING_API GetCampaignAssetActivationTaskResult() = default;
  AWS_PARTNERCENTRALMARKETING_API GetCampaignAssetActivationTaskResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_PARTNERCENTRALMARKETING_API GetCampaignAssetActivationTaskResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The campaign's id. Canonical: because <code>CampaignIdentifier</code> accepts
   * an id or an ARN, echoing this tells a caller who passed an ARN what the id is.
   * The task's own id is <code>TaskId</code>.</p>
   */
  inline const Aws::String& GetCampaignId() const { return m_campaignId; }
  template <typename CampaignIdT = Aws::String>
  void SetCampaignId(CampaignIdT&& value) {
    m_campaignIdHasBeenSet = true;
    m_campaignId = std::forward<CampaignIdT>(value);
  }
  template <typename CampaignIdT = Aws::String>
  GetCampaignAssetActivationTaskResult& WithCampaignId(CampaignIdT&& value) {
    SetCampaignId(std::forward<CampaignIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Opaque correlation value for the task. Echoed so a caller can tell the task
   * it started from a later one that superseded it. Never an input: the campaign is
   * what addresses a task, because a campaign has at most one.</p>
   */
  inline const Aws::String& GetTaskId() const { return m_taskId; }
  template <typename TaskIdT = Aws::String>
  void SetTaskId(TaskIdT&& value) {
    m_taskIdHasBeenSet = true;
    m_taskId = std::forward<TaskIdT>(value);
  }
  template <typename TaskIdT = Aws::String>
  GetCampaignAssetActivationTaskResult& WithTaskId(TaskIdT&& value) {
    SetTaskId(std::forward<TaskIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The task's status over every asset it names, refused ones included: one
   * refused and one succeeded is PARTIAL_FAILURE.</p>
   */
  inline CampaignAssetActivationTaskStatus GetTaskStatus() const { return m_taskStatus; }
  inline void SetTaskStatus(CampaignAssetActivationTaskStatus value) {
    m_taskStatusHasBeenSet = true;
    m_taskStatus = value;
  }
  inline GetCampaignAssetActivationTaskResult& WithTaskStatus(CampaignAssetActivationTaskStatus value) {
    SetTaskStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the task was created.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  GetCampaignAssetActivationTaskResult& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the task reached a terminal status. Absent while IN_PROGRESS.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  GetCampaignAssetActivationTaskResult& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One entry per asset the request named, in the order named. An asset refused
   * up front is FAILED from the first response, with its reason.</p>
   */
  inline const Aws::Vector<CampaignAssetActivationOutcome>& GetAssets() const { return m_assets; }
  template <typename AssetsT = Aws::Vector<CampaignAssetActivationOutcome>>
  void SetAssets(AssetsT&& value) {
    m_assetsHasBeenSet = true;
    m_assets = std::forward<AssetsT>(value);
  }
  template <typename AssetsT = Aws::Vector<CampaignAssetActivationOutcome>>
  GetCampaignAssetActivationTaskResult& WithAssets(AssetsT&& value) {
    SetAssets(std::forward<AssetsT>(value));
    return *this;
  }
  template <typename AssetsT = CampaignAssetActivationOutcome>
  GetCampaignAssetActivationTaskResult& AddAssets(AssetsT&& value) {
    m_assetsHasBeenSet = true;
    m_assets.emplace_back(std::forward<AssetsT>(value));
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
  GetCampaignAssetActivationTaskResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_campaignId;

  Aws::String m_taskId;

  CampaignAssetActivationTaskStatus m_taskStatus{CampaignAssetActivationTaskStatus::NOT_SET};

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_endedAt{};

  Aws::Vector<CampaignAssetActivationOutcome> m_assets;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_campaignIdHasBeenSet = false;
  bool m_taskIdHasBeenSet = false;
  bool m_taskStatusHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
  bool m_assetsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
