/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/CampaignAssetExportTaskStatus.h>

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
 * <p>Output for StartCampaignAssetExportTask.</p> <p>Returns the newly created
 * task id and its status, which is always IN_PROGRESS on this synchronous return.
 * Poll GetCampaignAssetExportTask for the outcome.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/StartCampaignAssetExportTaskResponse">AWS
 * API Reference</a></p>
 */
class StartCampaignAssetExportTaskResult {
 public:
  AWS_PARTNERCENTRALMARKETING_API StartCampaignAssetExportTaskResult() = default;
  AWS_PARTNERCENTRALMARKETING_API StartCampaignAssetExportTaskResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_PARTNERCENTRALMARKETING_API StartCampaignAssetExportTaskResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The export task identifier.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  StartCampaignAssetExportTaskResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The task's state, always IN_PROGRESS at creation.</p>
   */
  inline CampaignAssetExportTaskStatus GetStatus() const { return m_status; }
  inline void SetStatus(CampaignAssetExportTaskStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StartCampaignAssetExportTaskResult& WithStatus(CampaignAssetExportTaskStatus value) {
    SetStatus(value);
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
  StartCampaignAssetExportTaskResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_id;

  CampaignAssetExportTaskStatus m_status{CampaignAssetExportTaskStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_idHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
