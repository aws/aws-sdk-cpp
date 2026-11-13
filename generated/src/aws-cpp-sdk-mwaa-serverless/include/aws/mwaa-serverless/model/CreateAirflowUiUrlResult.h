/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace MWAAServerless {
namespace Model {
class CreateAirflowUiUrlResult {
 public:
  AWS_MWAASERVERLESS_API CreateAirflowUiUrlResult() = default;
  AWS_MWAASERVERLESS_API CreateAirflowUiUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MWAASERVERLESS_API CreateAirflowUiUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The launch URL that opens the Airflow UI. Open it in a browser before
   * <code>UrlExpiresAt</code>. The UI session uses the permissions of the identity
   * that called this operation.</p>
   */
  inline const Aws::String& GetAuthorizedUrl() const { return m_authorizedUrl; }
  template <typename AuthorizedUrlT = Aws::String>
  void SetAuthorizedUrl(AuthorizedUrlT&& value) {
    m_authorizedUrlHasBeenSet = true;
    m_authorizedUrl = std::forward<AuthorizedUrlT>(value);
  }
  template <typename AuthorizedUrlT = Aws::String>
  CreateAirflowUiUrlResult& WithAuthorizedUrl(AuthorizedUrlT&& value) {
    SetAuthorizedUrl(std::forward<AuthorizedUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL starts a UI session that has this identifier.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  CreateAirflowUiUrlResult& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The launch URL stops being valid at this time. The value is in ISO 8601
   * date-time format.</p>
   */
  inline const Aws::Utils::DateTime& GetUrlExpiresAt() const { return m_urlExpiresAt; }
  template <typename UrlExpiresAtT = Aws::Utils::DateTime>
  void SetUrlExpiresAt(UrlExpiresAtT&& value) {
    m_urlExpiresAtHasBeenSet = true;
    m_urlExpiresAt = std::forward<UrlExpiresAtT>(value);
  }
  template <typename UrlExpiresAtT = Aws::Utils::DateTime>
  CreateAirflowUiUrlResult& WithUrlExpiresAt(UrlExpiresAtT&& value) {
    SetUrlExpiresAt(std::forward<UrlExpiresAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The UI session ends at this time. The value is in ISO 8601 date-time format.
   * After this time, create a new URL to open the UI again.</p>
   */
  inline const Aws::Utils::DateTime& GetSessionExpiresAt() const { return m_sessionExpiresAt; }
  template <typename SessionExpiresAtT = Aws::Utils::DateTime>
  void SetSessionExpiresAt(SessionExpiresAtT&& value) {
    m_sessionExpiresAtHasBeenSet = true;
    m_sessionExpiresAt = std::forward<SessionExpiresAtT>(value);
  }
  template <typename SessionExpiresAtT = Aws::Utils::DateTime>
  CreateAirflowUiUrlResult& WithSessionExpiresAt(SessionExpiresAtT&& value) {
    SetSessionExpiresAt(std::forward<SessionExpiresAtT>(value));
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
  CreateAirflowUiUrlResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_authorizedUrl;

  Aws::String m_sessionId;

  Aws::Utils::DateTime m_urlExpiresAt{};

  Aws::Utils::DateTime m_sessionExpiresAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_authorizedUrlHasBeenSet = false;
  bool m_sessionIdHasBeenSet = false;
  bool m_urlExpiresAtHasBeenSet = false;
  bool m_sessionExpiresAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
