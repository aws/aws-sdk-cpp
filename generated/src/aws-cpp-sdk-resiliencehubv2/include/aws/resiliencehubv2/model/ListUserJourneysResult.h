/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/UserJourneySummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {
class ListUserJourneysResult {
 public:
  AWS_RESILIENCEHUBV2_API ListUserJourneysResult() = default;
  AWS_RESILIENCEHUBV2_API ListUserJourneysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESILIENCEHUBV2_API ListUserJourneysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of user journey summaries.</p>
   */
  inline const Aws::Vector<UserJourneySummary>& GetUserJourneySummaries() const { return m_userJourneySummaries; }
  template <typename UserJourneySummariesT = Aws::Vector<UserJourneySummary>>
  void SetUserJourneySummaries(UserJourneySummariesT&& value) {
    m_userJourneySummariesHasBeenSet = true;
    m_userJourneySummaries = std::forward<UserJourneySummariesT>(value);
  }
  template <typename UserJourneySummariesT = Aws::Vector<UserJourneySummary>>
  ListUserJourneysResult& WithUserJourneySummaries(UserJourneySummariesT&& value) {
    SetUserJourneySummaries(std::forward<UserJourneySummariesT>(value));
    return *this;
  }
  template <typename UserJourneySummariesT = UserJourneySummary>
  ListUserJourneysResult& AddUserJourneySummaries(UserJourneySummariesT&& value) {
    m_userJourneySummariesHasBeenSet = true;
    m_userJourneySummaries.emplace_back(std::forward<UserJourneySummariesT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListUserJourneysResult& WithNextToken(NextTokenT&& value) {
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
  ListUserJourneysResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<UserJourneySummary> m_userJourneySummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_userJourneySummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
