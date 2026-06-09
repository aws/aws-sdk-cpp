/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/CodeReview.h>

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
 * <p>Output for the BatchGetCodeReviews operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetCodeReviewsOutput">AWS
 * API Reference</a></p>
 */
class BatchGetCodeReviewsResult {
 public:
  AWS_SECURITYAGENT_API BatchGetCodeReviewsResult() = default;
  AWS_SECURITYAGENT_API BatchGetCodeReviewsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API BatchGetCodeReviewsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of code reviews that were found.</p>
   */
  inline const Aws::Vector<CodeReview>& GetCodeReviews() const { return m_codeReviews; }
  template <typename CodeReviewsT = Aws::Vector<CodeReview>>
  void SetCodeReviews(CodeReviewsT&& value) {
    m_codeReviewsHasBeenSet = true;
    m_codeReviews = std::forward<CodeReviewsT>(value);
  }
  template <typename CodeReviewsT = Aws::Vector<CodeReview>>
  BatchGetCodeReviewsResult& WithCodeReviews(CodeReviewsT&& value) {
    SetCodeReviews(std::forward<CodeReviewsT>(value));
    return *this;
  }
  template <typename CodeReviewsT = CodeReview>
  BatchGetCodeReviewsResult& AddCodeReviews(CodeReviewsT&& value) {
    m_codeReviewsHasBeenSet = true;
    m_codeReviews.emplace_back(std::forward<CodeReviewsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of code review identifiers that were not found.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNotFound() const { return m_notFound; }
  template <typename NotFoundT = Aws::Vector<Aws::String>>
  void SetNotFound(NotFoundT&& value) {
    m_notFoundHasBeenSet = true;
    m_notFound = std::forward<NotFoundT>(value);
  }
  template <typename NotFoundT = Aws::Vector<Aws::String>>
  BatchGetCodeReviewsResult& WithNotFound(NotFoundT&& value) {
    SetNotFound(std::forward<NotFoundT>(value));
    return *this;
  }
  template <typename NotFoundT = Aws::String>
  BatchGetCodeReviewsResult& AddNotFound(NotFoundT&& value) {
    m_notFoundHasBeenSet = true;
    m_notFound.emplace_back(std::forward<NotFoundT>(value));
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
  BatchGetCodeReviewsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<CodeReview> m_codeReviews;

  Aws::Vector<Aws::String> m_notFound;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_codeReviewsHasBeenSet = false;
  bool m_notFoundHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
