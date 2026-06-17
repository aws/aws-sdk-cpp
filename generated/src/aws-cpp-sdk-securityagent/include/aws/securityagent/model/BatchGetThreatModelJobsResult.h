/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/ThreatModelJob.h>

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
 * <p>Output for the BatchGetThreatModelJobs operation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetThreatModelJobsOutput">AWS
 * API Reference</a></p>
 */
class BatchGetThreatModelJobsResult {
 public:
  AWS_SECURITYAGENT_API BatchGetThreatModelJobsResult() = default;
  AWS_SECURITYAGENT_API BatchGetThreatModelJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API BatchGetThreatModelJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of threat model jobs that were found.</p>
   */
  inline const Aws::Vector<ThreatModelJob>& GetThreatModelJobs() const { return m_threatModelJobs; }
  template <typename ThreatModelJobsT = Aws::Vector<ThreatModelJob>>
  void SetThreatModelJobs(ThreatModelJobsT&& value) {
    m_threatModelJobsHasBeenSet = true;
    m_threatModelJobs = std::forward<ThreatModelJobsT>(value);
  }
  template <typename ThreatModelJobsT = Aws::Vector<ThreatModelJob>>
  BatchGetThreatModelJobsResult& WithThreatModelJobs(ThreatModelJobsT&& value) {
    SetThreatModelJobs(std::forward<ThreatModelJobsT>(value));
    return *this;
  }
  template <typename ThreatModelJobsT = ThreatModelJob>
  BatchGetThreatModelJobsResult& AddThreatModelJobs(ThreatModelJobsT&& value) {
    m_threatModelJobsHasBeenSet = true;
    m_threatModelJobs.emplace_back(std::forward<ThreatModelJobsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of threat model job identifiers that were not found.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNotFound() const { return m_notFound; }
  template <typename NotFoundT = Aws::Vector<Aws::String>>
  void SetNotFound(NotFoundT&& value) {
    m_notFoundHasBeenSet = true;
    m_notFound = std::forward<NotFoundT>(value);
  }
  template <typename NotFoundT = Aws::Vector<Aws::String>>
  BatchGetThreatModelJobsResult& WithNotFound(NotFoundT&& value) {
    SetNotFound(std::forward<NotFoundT>(value));
    return *this;
  }
  template <typename NotFoundT = Aws::String>
  BatchGetThreatModelJobsResult& AddNotFound(NotFoundT&& value) {
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
  BatchGetThreatModelJobsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ThreatModelJob> m_threatModelJobs;

  Aws::Vector<Aws::String> m_notFound;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_threatModelJobsHasBeenSet = false;
  bool m_notFoundHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
