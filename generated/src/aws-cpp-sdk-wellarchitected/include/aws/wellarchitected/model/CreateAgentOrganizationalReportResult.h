/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/OrganizationalReportState.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace WellArchitected {
namespace Model {
class CreateAgentOrganizationalReportResult {
 public:
  AWS_WELLARCHITECTED_API CreateAgentOrganizationalReportResult() = default;
  AWS_WELLARCHITECTED_API CreateAgentOrganizationalReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WELLARCHITECTED_API CreateAgentOrganizationalReportResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Unique identifier assigned to the newly-created report.</p>
   */
  inline const Aws::String& GetReportId() const { return m_reportId; }
  template <typename ReportIdT = Aws::String>
  void SetReportId(ReportIdT&& value) {
    m_reportIdHasBeenSet = true;
    m_reportId = std::forward<ReportIdT>(value);
  }
  template <typename ReportIdT = Aws::String>
  CreateAgentOrganizationalReportResult& WithReportId(ReportIdT&& value) {
    SetReportId(std::forward<ReportIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Lifecycle state of the report at the moment the create call returned. For a
   * freshly-created report this is typically DISCOVERING.</p>
   */
  inline OrganizationalReportState GetState() const { return m_state; }
  inline void SetState(OrganizationalReportState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline CreateAgentOrganizationalReportResult& WithState(OrganizationalReportState value) {
    SetState(value);
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
  CreateAgentOrganizationalReportResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_reportId;

  OrganizationalReportState m_state{OrganizationalReportState::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_reportIdHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
