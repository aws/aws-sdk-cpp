/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/Span.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {
class ListSpansResult {
 public:
  AWS_QCONNECT_API ListSpansResult() = default;
  AWS_QCONNECT_API ListSpansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QCONNECT_API ListSpansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Array of span objects for the session</p>
   */
  inline const Aws::Vector<Span>& GetSpans() const { return m_spans; }
  template <typename SpansT = Aws::Vector<Span>>
  void SetSpans(SpansT&& value) {
    m_spansHasBeenSet = true;
    m_spans = std::forward<SpansT>(value);
  }
  template <typename SpansT = Aws::Vector<Span>>
  ListSpansResult& WithSpans(SpansT&& value) {
    SetSpans(std::forward<SpansT>(value));
    return *this;
  }
  template <typename SpansT = Span>
  ListSpansResult& AddSpans(SpansT&& value) {
    m_spansHasBeenSet = true;
    m_spans.emplace_back(std::forward<SpansT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token for retrieving additional results</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListSpansResult& WithNextToken(NextTokenT&& value) {
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
  ListSpansResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Span> m_spans;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_spansHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
