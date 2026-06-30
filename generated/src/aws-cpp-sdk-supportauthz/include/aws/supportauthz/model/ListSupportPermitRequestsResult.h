/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/supportauthz/SupportAuthZ_EXPORTS.h>
#include <aws/supportauthz/model/SupportPermitRequest.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SupportAuthZ {
namespace Model {
class ListSupportPermitRequestsResult {
 public:
  AWS_SUPPORTAUTHZ_API ListSupportPermitRequestsResult() = default;
  AWS_SUPPORTAUTHZ_API ListSupportPermitRequestsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SUPPORTAUTHZ_API ListSupportPermitRequestsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of permit requests.</p>
   */
  inline const Aws::Vector<SupportPermitRequest>& GetSupportPermitRequests() const { return m_supportPermitRequests; }
  template <typename SupportPermitRequestsT = Aws::Vector<SupportPermitRequest>>
  void SetSupportPermitRequests(SupportPermitRequestsT&& value) {
    m_supportPermitRequestsHasBeenSet = true;
    m_supportPermitRequests = std::forward<SupportPermitRequestsT>(value);
  }
  template <typename SupportPermitRequestsT = Aws::Vector<SupportPermitRequest>>
  ListSupportPermitRequestsResult& WithSupportPermitRequests(SupportPermitRequestsT&& value) {
    SetSupportPermitRequests(std::forward<SupportPermitRequestsT>(value));
    return *this;
  }
  template <typename SupportPermitRequestsT = SupportPermitRequest>
  ListSupportPermitRequestsResult& AddSupportPermitRequests(SupportPermitRequestsT&& value) {
    m_supportPermitRequestsHasBeenSet = true;
    m_supportPermitRequests.emplace_back(std::forward<SupportPermitRequestsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next page of results, or null if there are no more
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListSupportPermitRequestsResult& WithNextToken(NextTokenT&& value) {
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
  ListSupportPermitRequestsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<SupportPermitRequest> m_supportPermitRequests;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_supportPermitRequestsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
