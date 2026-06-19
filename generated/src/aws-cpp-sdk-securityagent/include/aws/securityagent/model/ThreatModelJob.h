/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/DocumentInfo.h>
#include <aws/securityagent/model/ErrorInformation.h>
#include <aws/securityagent/model/IntegratedRepository.h>
#include <aws/securityagent/model/JobStatus.h>
#include <aws/securityagent/model/SourceCodeRepository.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>Represents a threat model job, which is an execution instance of a threat
 * model.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ThreatModelJob">AWS
 * API Reference</a></p>
 */
class ThreatModelJob {
 public:
  AWS_SECURITYAGENT_API ThreatModelJob() = default;
  AWS_SECURITYAGENT_API ThreatModelJob(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API ThreatModelJob& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the threat model job.</p>
   */
  inline const Aws::String& GetThreatModelJobId() const { return m_threatModelJobId; }
  inline bool ThreatModelJobIdHasBeenSet() const { return m_threatModelJobIdHasBeenSet; }
  template <typename ThreatModelJobIdT = Aws::String>
  void SetThreatModelJobId(ThreatModelJobIdT&& value) {
    m_threatModelJobIdHasBeenSet = true;
    m_threatModelJobId = std::forward<ThreatModelJobIdT>(value);
  }
  template <typename ThreatModelJobIdT = Aws::String>
  ThreatModelJob& WithThreatModelJobId(ThreatModelJobIdT&& value) {
    SetThreatModelJobId(std::forward<ThreatModelJobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the threat model associated with the job.</p>
   */
  inline const Aws::String& GetThreatModelId() const { return m_threatModelId; }
  inline bool ThreatModelIdHasBeenSet() const { return m_threatModelIdHasBeenSet; }
  template <typename ThreatModelIdT = Aws::String>
  void SetThreatModelId(ThreatModelIdT&& value) {
    m_threatModelIdHasBeenSet = true;
    m_threatModelId = std::forward<ThreatModelIdT>(value);
  }
  template <typename ThreatModelIdT = Aws::String>
  ThreatModelJob& WithThreatModelId(ThreatModelIdT&& value) {
    SetThreatModelId(std::forward<ThreatModelIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the agent space.</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  ThreatModelJob& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title of the threat model job.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  ThreatModelJob& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the threat model job.</p>
   */
  inline JobStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(JobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ThreatModelJob& WithStatus(JobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the threat model job was created, in UTC format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ThreatModelJob& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the threat model job was last updated, in UTC format.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ThreatModelJob& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the threat model job execution started, in UTC format.</p>
   */
  inline const Aws::Utils::DateTime& GetExecutionStartTime() const { return m_executionStartTime; }
  inline bool ExecutionStartTimeHasBeenSet() const { return m_executionStartTimeHasBeenSet; }
  template <typename ExecutionStartTimeT = Aws::Utils::DateTime>
  void SetExecutionStartTime(ExecutionStartTimeT&& value) {
    m_executionStartTimeHasBeenSet = true;
    m_executionStartTime = std::forward<ExecutionStartTimeT>(value);
  }
  template <typename ExecutionStartTimeT = Aws::Utils::DateTime>
  ThreatModelJob& WithExecutionStartTime(ExecutionStartTimeT&& value) {
    SetExecutionStartTime(std::forward<ExecutionStartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the threat model job execution ended, in UTC format.</p>
   */
  inline const Aws::Utils::DateTime& GetExecutionEndTime() const { return m_executionEndTime; }
  inline bool ExecutionEndTimeHasBeenSet() const { return m_executionEndTimeHasBeenSet; }
  template <typename ExecutionEndTimeT = Aws::Utils::DateTime>
  void SetExecutionEndTime(ExecutionEndTimeT&& value) {
    m_executionEndTimeHasBeenSet = true;
    m_executionEndTime = std::forward<ExecutionEndTimeT>(value);
  }
  template <typename ExecutionEndTimeT = Aws::Utils::DateTime>
  ThreatModelJob& WithExecutionEndTime(ExecutionEndTimeT&& value) {
    SetExecutionEndTime(std::forward<ExecutionEndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of source code repositories used for threat modeling.</p>
   */
  inline const Aws::Vector<SourceCodeRepository>& GetSourceCode() const { return m_sourceCode; }
  inline bool SourceCodeHasBeenSet() const { return m_sourceCodeHasBeenSet; }
  template <typename SourceCodeT = Aws::Vector<SourceCodeRepository>>
  void SetSourceCode(SourceCodeT&& value) {
    m_sourceCodeHasBeenSet = true;
    m_sourceCode = std::forward<SourceCodeT>(value);
  }
  template <typename SourceCodeT = Aws::Vector<SourceCodeRepository>>
  ThreatModelJob& WithSourceCode(SourceCodeT&& value) {
    SetSourceCode(std::forward<SourceCodeT>(value));
    return *this;
  }
  template <typename SourceCodeT = SourceCodeRepository>
  ThreatModelJob& AddSourceCode(SourceCodeT&& value) {
    m_sourceCodeHasBeenSet = true;
    m_sourceCode.emplace_back(std::forward<SourceCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of integrated repositories used for threat modeling.</p>
   */
  inline const Aws::Vector<IntegratedRepository>& GetIntegratedRepositories() const { return m_integratedRepositories; }
  inline bool IntegratedRepositoriesHasBeenSet() const { return m_integratedRepositoriesHasBeenSet; }
  template <typename IntegratedRepositoriesT = Aws::Vector<IntegratedRepository>>
  void SetIntegratedRepositories(IntegratedRepositoriesT&& value) {
    m_integratedRepositoriesHasBeenSet = true;
    m_integratedRepositories = std::forward<IntegratedRepositoriesT>(value);
  }
  template <typename IntegratedRepositoriesT = Aws::Vector<IntegratedRepository>>
  ThreatModelJob& WithIntegratedRepositories(IntegratedRepositoriesT&& value) {
    SetIntegratedRepositories(std::forward<IntegratedRepositoriesT>(value));
    return *this;
  }
  template <typename IntegratedRepositoriesT = IntegratedRepository>
  ThreatModelJob& AddIntegratedRepositories(IntegratedRepositoriesT&& value) {
    m_integratedRepositoriesHasBeenSet = true;
    m_integratedRepositories.emplace_back(std::forward<IntegratedRepositoriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of documents used for threat modeling.</p>
   */
  inline const Aws::Vector<DocumentInfo>& GetDocuments() const { return m_documents; }
  inline bool DocumentsHasBeenSet() const { return m_documentsHasBeenSet; }
  template <typename DocumentsT = Aws::Vector<DocumentInfo>>
  void SetDocuments(DocumentsT&& value) {
    m_documentsHasBeenSet = true;
    m_documents = std::forward<DocumentsT>(value);
  }
  template <typename DocumentsT = Aws::Vector<DocumentInfo>>
  ThreatModelJob& WithDocuments(DocumentsT&& value) {
    SetDocuments(std::forward<DocumentsT>(value));
    return *this;
  }
  template <typename DocumentsT = DocumentInfo>
  ThreatModelJob& AddDocuments(DocumentsT&& value) {
    m_documentsHasBeenSet = true;
    m_documents.emplace_back(std::forward<DocumentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scoped documents for the agent to focus on during threat modeling.</p>
   */
  inline const Aws::Vector<DocumentInfo>& GetScopeDocs() const { return m_scopeDocs; }
  inline bool ScopeDocsHasBeenSet() const { return m_scopeDocsHasBeenSet; }
  template <typename ScopeDocsT = Aws::Vector<DocumentInfo>>
  void SetScopeDocs(ScopeDocsT&& value) {
    m_scopeDocsHasBeenSet = true;
    m_scopeDocs = std::forward<ScopeDocsT>(value);
  }
  template <typename ScopeDocsT = Aws::Vector<DocumentInfo>>
  ThreatModelJob& WithScopeDocs(ScopeDocsT&& value) {
    SetScopeDocs(std::forward<ScopeDocsT>(value));
    return *this;
  }
  template <typename ScopeDocsT = DocumentInfo>
  ThreatModelJob& AddScopeDocs(ScopeDocsT&& value) {
    m_scopeDocsHasBeenSet = true;
    m_scopeDocs.emplace_back(std::forward<ScopeDocsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error information if the threat model job encountered an error.</p>
   */
  inline const ErrorInformation& GetErrorInformation() const { return m_errorInformation; }
  inline bool ErrorInformationHasBeenSet() const { return m_errorInformationHasBeenSet; }
  template <typename ErrorInformationT = ErrorInformation>
  void SetErrorInformation(ErrorInformationT&& value) {
    m_errorInformationHasBeenSet = true;
    m_errorInformation = std::forward<ErrorInformationT>(value);
  }
  template <typename ErrorInformationT = ErrorInformation>
  ThreatModelJob& WithErrorInformation(ErrorInformationT&& value) {
    SetErrorInformation(std::forward<ErrorInformationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The system overview generated during threat modeling.</p>
   */
  inline const Aws::String& GetSystemOverview() const { return m_systemOverview; }
  inline bool SystemOverviewHasBeenSet() const { return m_systemOverviewHasBeenSet; }
  template <typename SystemOverviewT = Aws::String>
  void SetSystemOverview(SystemOverviewT&& value) {
    m_systemOverviewHasBeenSet = true;
    m_systemOverview = std::forward<SystemOverviewT>(value);
  }
  template <typename SystemOverviewT = Aws::String>
  ThreatModelJob& WithSystemOverview(SystemOverviewT&& value) {
    SetSystemOverview(std::forward<SystemOverviewT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_threatModelJobId;

  Aws::String m_threatModelId;

  Aws::String m_agentSpaceId;

  Aws::String m_title;

  JobStatus m_status{JobStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Utils::DateTime m_executionStartTime{};

  Aws::Utils::DateTime m_executionEndTime{};

  Aws::Vector<SourceCodeRepository> m_sourceCode;

  Aws::Vector<IntegratedRepository> m_integratedRepositories;

  Aws::Vector<DocumentInfo> m_documents;

  Aws::Vector<DocumentInfo> m_scopeDocs;

  ErrorInformation m_errorInformation;

  Aws::String m_systemOverview;
  bool m_threatModelJobIdHasBeenSet = false;
  bool m_threatModelIdHasBeenSet = false;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_executionStartTimeHasBeenSet = false;
  bool m_executionEndTimeHasBeenSet = false;
  bool m_sourceCodeHasBeenSet = false;
  bool m_integratedRepositoriesHasBeenSet = false;
  bool m_documentsHasBeenSet = false;
  bool m_scopeDocsHasBeenSet = false;
  bool m_errorInformationHasBeenSet = false;
  bool m_systemOverviewHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
