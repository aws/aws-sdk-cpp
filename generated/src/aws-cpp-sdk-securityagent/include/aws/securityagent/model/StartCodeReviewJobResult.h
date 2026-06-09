/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/JobStatus.h>

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
 * <p>Output for the StartCodeReviewJob operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/StartCodeReviewJobOutput">AWS
 * API Reference</a></p>
 */
class StartCodeReviewJobResult {
 public:
  AWS_SECURITYAGENT_API StartCodeReviewJobResult() = default;
  AWS_SECURITYAGENT_API StartCodeReviewJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API StartCodeReviewJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The title of the code review job.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  StartCodeReviewJobResult& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the code review job.</p>
   */
  inline JobStatus GetStatus() const { return m_status; }
  inline void SetStatus(JobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StartCodeReviewJobResult& WithStatus(JobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the code review job was created, in UTC format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  StartCodeReviewJobResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the code review job was last updated, in UTC format.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  StartCodeReviewJobResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the code review.</p>
   */
  inline const Aws::String& GetCodeReviewId() const { return m_codeReviewId; }
  template <typename CodeReviewIdT = Aws::String>
  void SetCodeReviewId(CodeReviewIdT&& value) {
    m_codeReviewIdHasBeenSet = true;
    m_codeReviewId = std::forward<CodeReviewIdT>(value);
  }
  template <typename CodeReviewIdT = Aws::String>
  StartCodeReviewJobResult& WithCodeReviewId(CodeReviewIdT&& value) {
    SetCodeReviewId(std::forward<CodeReviewIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the started code review job.</p>
   */
  inline const Aws::String& GetCodeReviewJobId() const { return m_codeReviewJobId; }
  template <typename CodeReviewJobIdT = Aws::String>
  void SetCodeReviewJobId(CodeReviewJobIdT&& value) {
    m_codeReviewJobIdHasBeenSet = true;
    m_codeReviewJobId = std::forward<CodeReviewJobIdT>(value);
  }
  template <typename CodeReviewJobIdT = Aws::String>
  StartCodeReviewJobResult& WithCodeReviewJobId(CodeReviewJobIdT&& value) {
    SetCodeReviewJobId(std::forward<CodeReviewJobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the agent space.</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  StartCodeReviewJobResult& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
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
  StartCodeReviewJobResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_title;

  JobStatus m_status{JobStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_codeReviewId;

  Aws::String m_codeReviewJobId;

  Aws::String m_agentSpaceId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_titleHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_codeReviewIdHasBeenSet = false;
  bool m_codeReviewJobIdHasBeenSet = false;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
