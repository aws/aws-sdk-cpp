/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/ThreatModelJobTask.h>

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
 * <p>Output for the BatchGetThreatModelJobTasks operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetThreatModelJobTasksOutput">AWS
 * API Reference</a></p>
 */
class BatchGetThreatModelJobTasksResult {
 public:
  AWS_SECURITYAGENT_API BatchGetThreatModelJobTasksResult() = default;
  AWS_SECURITYAGENT_API BatchGetThreatModelJobTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API BatchGetThreatModelJobTasksResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of threat model job tasks that were found.</p>
   */
  inline const Aws::Vector<ThreatModelJobTask>& GetThreatModelJobTasks() const { return m_threatModelJobTasks; }
  template <typename ThreatModelJobTasksT = Aws::Vector<ThreatModelJobTask>>
  void SetThreatModelJobTasks(ThreatModelJobTasksT&& value) {
    m_threatModelJobTasksHasBeenSet = true;
    m_threatModelJobTasks = std::forward<ThreatModelJobTasksT>(value);
  }
  template <typename ThreatModelJobTasksT = Aws::Vector<ThreatModelJobTask>>
  BatchGetThreatModelJobTasksResult& WithThreatModelJobTasks(ThreatModelJobTasksT&& value) {
    SetThreatModelJobTasks(std::forward<ThreatModelJobTasksT>(value));
    return *this;
  }
  template <typename ThreatModelJobTasksT = ThreatModelJobTask>
  BatchGetThreatModelJobTasksResult& AddThreatModelJobTasks(ThreatModelJobTasksT&& value) {
    m_threatModelJobTasksHasBeenSet = true;
    m_threatModelJobTasks.emplace_back(std::forward<ThreatModelJobTasksT>(value));
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
  BatchGetThreatModelJobTasksResult& WithNotFound(NotFoundT&& value) {
    SetNotFound(std::forward<NotFoundT>(value));
    return *this;
  }
  template <typename NotFoundT = Aws::String>
  BatchGetThreatModelJobTasksResult& AddNotFound(NotFoundT&& value) {
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
  BatchGetThreatModelJobTasksResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ThreatModelJobTask> m_threatModelJobTasks;

  Aws::Vector<Aws::String> m_notFound;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_threatModelJobTasksHasBeenSet = false;
  bool m_notFoundHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
