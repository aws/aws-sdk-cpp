/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/QuoteSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Outposts {
namespace Model {
class ListQuotesResult {
 public:
  AWS_OUTPOSTS_API ListQuotesResult() = default;
  AWS_OUTPOSTS_API ListQuotesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OUTPOSTS_API ListQuotesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Information about the quotes.</p>
   */
  inline const Aws::Vector<QuoteSummary>& GetQuotes() const { return m_quotes; }
  template <typename QuotesT = Aws::Vector<QuoteSummary>>
  void SetQuotes(QuotesT&& value) {
    m_quotesHasBeenSet = true;
    m_quotes = std::forward<QuotesT>(value);
  }
  template <typename QuotesT = Aws::Vector<QuoteSummary>>
  ListQuotesResult& WithQuotes(QuotesT&& value) {
    SetQuotes(std::forward<QuotesT>(value));
    return *this;
  }
  template <typename QuotesT = QuoteSummary>
  ListQuotesResult& AddQuotes(QuotesT&& value) {
    m_quotesHasBeenSet = true;
    m_quotes.emplace_back(std::forward<QuotesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListQuotesResult& WithNextToken(NextTokenT&& value) {
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
  ListQuotesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<QuoteSummary> m_quotes;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_quotesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
