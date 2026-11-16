/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

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
class GetAgentOrganizationalReportDataResult {
 public:
  AWS_WELLARCHITECTED_API GetAgentOrganizationalReportDataResult() = default;
  AWS_WELLARCHITECTED_API GetAgentOrganizationalReportDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WELLARCHITECTED_API GetAgentOrganizationalReportDataResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Presigned URL that can be used to download the artifact.</p>
   */
  inline const Aws::String& GetDownloadUrl() const { return m_downloadUrl; }
  template <typename DownloadUrlT = Aws::String>
  void SetDownloadUrl(DownloadUrlT&& value) {
    m_downloadUrlHasBeenSet = true;
    m_downloadUrl = std::forward<DownloadUrlT>(value);
  }
  template <typename DownloadUrlT = Aws::String>
  GetAgentOrganizationalReportDataResult& WithDownloadUrl(DownloadUrlT&& value) {
    SetDownloadUrl(std::forward<DownloadUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Expiration time of downloadUrl.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  GetAgentOrganizationalReportDataResult& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
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
  GetAgentOrganizationalReportDataResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_downloadUrl;

  Aws::Utils::DateTime m_expiresAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_downloadUrlHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
