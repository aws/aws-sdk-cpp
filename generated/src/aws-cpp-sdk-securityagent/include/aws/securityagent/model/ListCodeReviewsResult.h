/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/CodeReviewSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {
/**
 * <p>Output for the ListCodeReviews operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListCodeReviewsOutput">AWS
 * API Reference</a></p>
 */
class ListCodeReviewsResult {
 public:
  AWS_SECURITYAGENT_API ListCodeReviewsResult() = default;
  AWS_SECURITYAGENT_API ListCodeReviewsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API ListCodeReviewsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of code review summaries.</p>
   */
  inline const Aws::Vector<CodeReviewSummary>& GetCodeReviewSummaries() const { return m_codeReviewSummaries; }
  template <typename CodeReviewSummariesT = Aws::Vector<CodeReviewSummary>>
  void SetCodeReviewSummaries(CodeReviewSummariesT&& value) {
    m_codeReviewSummariesHasBeenSet = true;
    m_codeReviewSummaries = std::forward<CodeReviewSummariesT>(value);
  }
  template <typename CodeReviewSummariesT = Aws::Vector<CodeReviewSummary>>
  ListCodeReviewsResult& WithCodeReviewSummaries(CodeReviewSummariesT&& value) {
    SetCodeReviewSummaries(std::forward<CodeReviewSummariesT>(value));
    return *this;
  }
  template <typename CodeReviewSummariesT = CodeReviewSummary>
  ListCodeReviewsResult& AddCodeReviewSummaries(CodeReviewSummariesT&& value) {
    m_codeReviewSummariesHasBeenSet = true;
    m_codeReviewSummaries.emplace_back(std::forward<CodeReviewSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to use for paginating results that are returned in the response. Set
   * the value of this parameter to null for the first request. For subsequent calls,
   * use the nextToken value returned from the previous request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListCodeReviewsResult& WithNextToken(NextTokenT&& value) {
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
  ListCodeReviewsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<CodeReviewSummary> m_codeReviewSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_codeReviewSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
