/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/CodeReviewJob.h>

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
 * <p>Output for the BatchGetCodeReviewJobs operation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetCodeReviewJobsOutput">AWS
 * API Reference</a></p>
 */
class BatchGetCodeReviewJobsResult {
 public:
  AWS_SECURITYAGENT_API BatchGetCodeReviewJobsResult() = default;
  AWS_SECURITYAGENT_API BatchGetCodeReviewJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API BatchGetCodeReviewJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of code review jobs that were found.</p>
   */
  inline const Aws::Vector<CodeReviewJob>& GetCodeReviewJobs() const { return m_codeReviewJobs; }
  template <typename CodeReviewJobsT = Aws::Vector<CodeReviewJob>>
  void SetCodeReviewJobs(CodeReviewJobsT&& value) {
    m_codeReviewJobsHasBeenSet = true;
    m_codeReviewJobs = std::forward<CodeReviewJobsT>(value);
  }
  template <typename CodeReviewJobsT = Aws::Vector<CodeReviewJob>>
  BatchGetCodeReviewJobsResult& WithCodeReviewJobs(CodeReviewJobsT&& value) {
    SetCodeReviewJobs(std::forward<CodeReviewJobsT>(value));
    return *this;
  }
  template <typename CodeReviewJobsT = CodeReviewJob>
  BatchGetCodeReviewJobsResult& AddCodeReviewJobs(CodeReviewJobsT&& value) {
    m_codeReviewJobsHasBeenSet = true;
    m_codeReviewJobs.emplace_back(std::forward<CodeReviewJobsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of code review job identifiers that were not found.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNotFound() const { return m_notFound; }
  template <typename NotFoundT = Aws::Vector<Aws::String>>
  void SetNotFound(NotFoundT&& value) {
    m_notFoundHasBeenSet = true;
    m_notFound = std::forward<NotFoundT>(value);
  }
  template <typename NotFoundT = Aws::Vector<Aws::String>>
  BatchGetCodeReviewJobsResult& WithNotFound(NotFoundT&& value) {
    SetNotFound(std::forward<NotFoundT>(value));
    return *this;
  }
  template <typename NotFoundT = Aws::String>
  BatchGetCodeReviewJobsResult& AddNotFound(NotFoundT&& value) {
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
  BatchGetCodeReviewJobsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<CodeReviewJob> m_codeReviewJobs;

  Aws::Vector<Aws::String> m_notFound;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_codeReviewJobsHasBeenSet = false;
  bool m_notFoundHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
