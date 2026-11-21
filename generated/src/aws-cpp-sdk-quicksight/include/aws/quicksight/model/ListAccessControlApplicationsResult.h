/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AccessControlApplicationSummary.h>

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
class ListAccessControlApplicationsResult {
 public:
  AWS_QUICKSIGHT_API ListAccessControlApplicationsResult() = default;
  AWS_QUICKSIGHT_API ListAccessControlApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API ListAccessControlApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The HTTP status of the request.</p>
   */
  inline int GetStatus() const { return m_status; }
  inline void SetStatus(int value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListAccessControlApplicationsResult& WithStatus(int value) {
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
  ListAccessControlApplicationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of access control application summaries.</p>
   */
  inline const Aws::Vector<AccessControlApplicationSummary>& GetAccessControlApplications() const { return m_accessControlApplications; }
  template <typename AccessControlApplicationsT = Aws::Vector<AccessControlApplicationSummary>>
  void SetAccessControlApplications(AccessControlApplicationsT&& value) {
    m_accessControlApplicationsHasBeenSet = true;
    m_accessControlApplications = std::forward<AccessControlApplicationsT>(value);
  }
  template <typename AccessControlApplicationsT = Aws::Vector<AccessControlApplicationSummary>>
  ListAccessControlApplicationsResult& WithAccessControlApplications(AccessControlApplicationsT&& value) {
    SetAccessControlApplications(std::forward<AccessControlApplicationsT>(value));
    return *this;
  }
  template <typename AccessControlApplicationsT = AccessControlApplicationSummary>
  ListAccessControlApplicationsResult& AddAccessControlApplications(AccessControlApplicationsT&& value) {
    m_accessControlApplicationsHasBeenSet = true;
    m_accessControlApplications.emplace_back(std::forward<AccessControlApplicationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results, or null if there are no more
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAccessControlApplicationsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  int m_status{0};

  Aws::String m_requestId;

  Aws::Vector<AccessControlApplicationSummary> m_accessControlApplications;

  Aws::String m_nextToken;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_accessControlApplicationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
