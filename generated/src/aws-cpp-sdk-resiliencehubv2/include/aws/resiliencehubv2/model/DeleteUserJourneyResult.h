/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

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
class DeleteUserJourneyResult {
 public:
  AWS_RESILIENCEHUBV2_API DeleteUserJourneyResult() = default;
  AWS_RESILIENCEHUBV2_API DeleteUserJourneyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESILIENCEHUBV2_API DeleteUserJourneyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the deleted user journey.</p>
   */
  inline const Aws::String& GetUserJourneyId() const { return m_userJourneyId; }
  template <typename UserJourneyIdT = Aws::String>
  void SetUserJourneyId(UserJourneyIdT&& value) {
    m_userJourneyIdHasBeenSet = true;
    m_userJourneyId = std::forward<UserJourneyIdT>(value);
  }
  template <typename UserJourneyIdT = Aws::String>
  DeleteUserJourneyResult& WithUserJourneyId(UserJourneyIdT&& value) {
    SetUserJourneyId(std::forward<UserJourneyIdT>(value));
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
  DeleteUserJourneyResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_userJourneyId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_userJourneyIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
