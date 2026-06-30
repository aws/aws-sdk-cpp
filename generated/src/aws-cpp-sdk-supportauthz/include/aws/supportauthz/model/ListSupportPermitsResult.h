/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/supportauthz/SupportAuthZ_EXPORTS.h>
#include <aws/supportauthz/model/SupportPermitSummary.h>

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
class ListSupportPermitsResult {
 public:
  AWS_SUPPORTAUTHZ_API ListSupportPermitsResult() = default;
  AWS_SUPPORTAUTHZ_API ListSupportPermitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SUPPORTAUTHZ_API ListSupportPermitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of support permits.</p>
   */
  inline const Aws::Vector<SupportPermitSummary>& GetSupportPermits() const { return m_supportPermits; }
  template <typename SupportPermitsT = Aws::Vector<SupportPermitSummary>>
  void SetSupportPermits(SupportPermitsT&& value) {
    m_supportPermitsHasBeenSet = true;
    m_supportPermits = std::forward<SupportPermitsT>(value);
  }
  template <typename SupportPermitsT = Aws::Vector<SupportPermitSummary>>
  ListSupportPermitsResult& WithSupportPermits(SupportPermitsT&& value) {
    SetSupportPermits(std::forward<SupportPermitsT>(value));
    return *this;
  }
  template <typename SupportPermitsT = SupportPermitSummary>
  ListSupportPermitsResult& AddSupportPermits(SupportPermitsT&& value) {
    m_supportPermitsHasBeenSet = true;
    m_supportPermits.emplace_back(std::forward<SupportPermitsT>(value));
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
  ListSupportPermitsResult& WithNextToken(NextTokenT&& value) {
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
  ListSupportPermitsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<SupportPermitSummary> m_supportPermits;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_supportPermitsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
