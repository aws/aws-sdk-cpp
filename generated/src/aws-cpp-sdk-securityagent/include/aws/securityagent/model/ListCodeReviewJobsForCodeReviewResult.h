/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/CodeReviewJobSummary.h>

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
 * <p>Output for the ListCodeReviewJobsForCodeReview operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListCodeReviewJobsForCodeReviewOutput">AWS
 * API Reference</a></p>
 */
class ListCodeReviewJobsForCodeReviewResult {
 public:
  AWS_SECURITYAGENT_API ListCodeReviewJobsForCodeReviewResult() = default;
  AWS_SECURITYAGENT_API ListCodeReviewJobsForCodeReviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API ListCodeReviewJobsForCodeReviewResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of code review job summaries.</p>
   */
  inline const Aws::Vector<CodeReviewJobSummary>& GetCodeReviewJobSummaries() const { return m_codeReviewJobSummaries; }
  template <typename CodeReviewJobSummariesT = Aws::Vector<CodeReviewJobSummary>>
  void SetCodeReviewJobSummaries(CodeReviewJobSummariesT&& value) {
    m_codeReviewJobSummariesHasBeenSet = true;
    m_codeReviewJobSummaries = std::forward<CodeReviewJobSummariesT>(value);
  }
  template <typename CodeReviewJobSummariesT = Aws::Vector<CodeReviewJobSummary>>
  ListCodeReviewJobsForCodeReviewResult& WithCodeReviewJobSummaries(CodeReviewJobSummariesT&& value) {
    SetCodeReviewJobSummaries(std::forward<CodeReviewJobSummariesT>(value));
    return *this;
  }
  template <typename CodeReviewJobSummariesT = CodeReviewJobSummary>
  ListCodeReviewJobsForCodeReviewResult& AddCodeReviewJobSummaries(CodeReviewJobSummariesT&& value) {
    m_codeReviewJobSummariesHasBeenSet = true;
    m_codeReviewJobSummaries.emplace_back(std::forward<CodeReviewJobSummariesT>(value));
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
  ListCodeReviewJobsForCodeReviewResult& WithNextToken(NextTokenT&& value) {
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
  ListCodeReviewJobsForCodeReviewResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<CodeReviewJobSummary> m_codeReviewJobSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_codeReviewJobSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
