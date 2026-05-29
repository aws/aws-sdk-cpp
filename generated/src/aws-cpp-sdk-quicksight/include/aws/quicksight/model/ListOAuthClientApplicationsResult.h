/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/OAuthClientApplicationSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {
class ListOAuthClientApplicationsResult {
 public:
  AWS_QUICKSIGHT_API ListOAuthClientApplicationsResult() = default;
  AWS_QUICKSIGHT_API ListOAuthClientApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API ListOAuthClientApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of OAuthClientApplication summaries.</p>
   */
  inline const Aws::Vector<OAuthClientApplicationSummary>& GetOAuthClientApplications() const { return m_oAuthClientApplications; }
  template <typename OAuthClientApplicationsT = Aws::Vector<OAuthClientApplicationSummary>>
  void SetOAuthClientApplications(OAuthClientApplicationsT&& value) {
    m_oAuthClientApplicationsHasBeenSet = true;
    m_oAuthClientApplications = std::forward<OAuthClientApplicationsT>(value);
  }
  template <typename OAuthClientApplicationsT = Aws::Vector<OAuthClientApplicationSummary>>
  ListOAuthClientApplicationsResult& WithOAuthClientApplications(OAuthClientApplicationsT&& value) {
    SetOAuthClientApplications(std::forward<OAuthClientApplicationsT>(value));
    return *this;
  }
  template <typename OAuthClientApplicationsT = OAuthClientApplicationSummary>
  ListOAuthClientApplicationsResult& AddOAuthClientApplications(OAuthClientApplicationsT&& value) {
    m_oAuthClientApplicationsHasBeenSet = true;
    m_oAuthClientApplications.emplace_back(std::forward<OAuthClientApplicationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token that can be used in a subsequent request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListOAuthClientApplicationsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListOAuthClientApplicationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP status of the request.</p>
   */
  inline int GetStatus() const { return m_status; }
  inline void SetStatus(int value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListOAuthClientApplicationsResult& WithStatus(int value) {
    SetStatus(value);
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<OAuthClientApplicationSummary> m_oAuthClientApplications;

  Aws::String m_nextToken;

  Aws::String m_requestId;

  int m_status{0};
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_oAuthClientApplicationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
