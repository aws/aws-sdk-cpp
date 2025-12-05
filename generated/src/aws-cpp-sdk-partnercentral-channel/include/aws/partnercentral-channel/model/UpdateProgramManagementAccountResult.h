/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/UpdateProgramManagementAccountDetail.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralChannel {
namespace Model {
class UpdateProgramManagementAccountResult {
 public:
  AWS_PARTNERCENTRALCHANNEL_API UpdateProgramManagementAccountResult() = default;
  AWS_PARTNERCENTRALCHANNEL_API UpdateProgramManagementAccountResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALCHANNEL_API UpdateProgramManagementAccountResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Details of the updated program management account.</p>
   */
  inline const UpdateProgramManagementAccountDetail& GetProgramManagementAccountDetail() const { return m_programManagementAccountDetail; }
  template <typename ProgramManagementAccountDetailT = UpdateProgramManagementAccountDetail>
  void SetProgramManagementAccountDetail(ProgramManagementAccountDetailT&& value) {
    m_programManagementAccountDetailHasBeenSet = true;
    m_programManagementAccountDetail = std::forward<ProgramManagementAccountDetailT>(value);
  }
  template <typename ProgramManagementAccountDetailT = UpdateProgramManagementAccountDetail>
  UpdateProgramManagementAccountResult& WithProgramManagementAccountDetail(ProgramManagementAccountDetailT&& value) {
    SetProgramManagementAccountDetail(std::forward<ProgramManagementAccountDetailT>(value));
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
  UpdateProgramManagementAccountResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  UpdateProgramManagementAccountDetail m_programManagementAccountDetail;

  Aws::String m_requestId;
  bool m_programManagementAccountDetailHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
