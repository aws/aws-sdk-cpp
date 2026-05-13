/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/CodeReviewJobTask.h>

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
 * <p>Output for the BatchGetCodeReviewJobTasks operation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetCodeReviewJobTasksOutput">AWS
 * API Reference</a></p>
 */
class BatchGetCodeReviewJobTasksResult {
 public:
  AWS_SECURITYAGENT_API BatchGetCodeReviewJobTasksResult() = default;
  AWS_SECURITYAGENT_API BatchGetCodeReviewJobTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API BatchGetCodeReviewJobTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of code review job tasks that were found.</p>
   */
  inline const Aws::Vector<CodeReviewJobTask>& GetCodeReviewJobTasks() const { return m_codeReviewJobTasks; }
  template <typename CodeReviewJobTasksT = Aws::Vector<CodeReviewJobTask>>
  void SetCodeReviewJobTasks(CodeReviewJobTasksT&& value) {
    m_codeReviewJobTasksHasBeenSet = true;
    m_codeReviewJobTasks = std::forward<CodeReviewJobTasksT>(value);
  }
  template <typename CodeReviewJobTasksT = Aws::Vector<CodeReviewJobTask>>
  BatchGetCodeReviewJobTasksResult& WithCodeReviewJobTasks(CodeReviewJobTasksT&& value) {
    SetCodeReviewJobTasks(std::forward<CodeReviewJobTasksT>(value));
    return *this;
  }
  template <typename CodeReviewJobTasksT = CodeReviewJobTask>
  BatchGetCodeReviewJobTasksResult& AddCodeReviewJobTasks(CodeReviewJobTasksT&& value) {
    m_codeReviewJobTasksHasBeenSet = true;
    m_codeReviewJobTasks.emplace_back(std::forward<CodeReviewJobTasksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of task identifiers that were not found.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNotFound() const { return m_notFound; }
  template <typename NotFoundT = Aws::Vector<Aws::String>>
  void SetNotFound(NotFoundT&& value) {
    m_notFoundHasBeenSet = true;
    m_notFound = std::forward<NotFoundT>(value);
  }
  template <typename NotFoundT = Aws::Vector<Aws::String>>
  BatchGetCodeReviewJobTasksResult& WithNotFound(NotFoundT&& value) {
    SetNotFound(std::forward<NotFoundT>(value));
    return *this;
  }
  template <typename NotFoundT = Aws::String>
  BatchGetCodeReviewJobTasksResult& AddNotFound(NotFoundT&& value) {
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
  BatchGetCodeReviewJobTasksResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<CodeReviewJobTask> m_codeReviewJobTasks;

  Aws::Vector<Aws::String> m_notFound;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_codeReviewJobTasksHasBeenSet = false;
  bool m_notFoundHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
