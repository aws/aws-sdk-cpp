/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/CloudWatchLog.h>
#include <aws/securityagent/model/CodeRemediationStrategy.h>
#include <aws/securityagent/model/DocumentInfo.h>
#include <aws/securityagent/model/ErrorInformation.h>
#include <aws/securityagent/model/ExecutionContext.h>
#include <aws/securityagent/model/IntegratedRepository.h>
#include <aws/securityagent/model/JobStatus.h>
#include <aws/securityagent/model/SourceCodeRepository.h>
#include <aws/securityagent/model/Step.h>

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
 * <p>Represents a code review job, which is an execution instance of a code
 * review. A code review job progresses through preflight, static analysis, and
 * finalizing steps.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CodeReviewJob">AWS
 * API Reference</a></p>
 */
class CodeReviewJob {
 public:
  AWS_SECURITYAGENT_API CodeReviewJob() = default;
  AWS_SECURITYAGENT_API CodeReviewJob(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API CodeReviewJob& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the code review job.</p>
   */
  inline const Aws::String& GetCodeReviewJobId() const { return m_codeReviewJobId; }
  inline bool CodeReviewJobIdHasBeenSet() const { return m_codeReviewJobIdHasBeenSet; }
  template <typename CodeReviewJobIdT = Aws::String>
  void SetCodeReviewJobId(CodeReviewJobIdT&& value) {
    m_codeReviewJobIdHasBeenSet = true;
    m_codeReviewJobId = std::forward<CodeReviewJobIdT>(value);
  }
  template <typename CodeReviewJobIdT = Aws::String>
  CodeReviewJob& WithCodeReviewJobId(CodeReviewJobIdT&& value) {
    SetCodeReviewJobId(std::forward<CodeReviewJobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the code review associated with the job.</p>
   */
  inline const Aws::String& GetCodeReviewId() const { return m_codeReviewId; }
  inline bool CodeReviewIdHasBeenSet() const { return m_codeReviewIdHasBeenSet; }
  template <typename CodeReviewIdT = Aws::String>
  void SetCodeReviewId(CodeReviewIdT&& value) {
    m_codeReviewIdHasBeenSet = true;
    m_codeReviewId = std::forward<CodeReviewIdT>(value);
  }
  template <typename CodeReviewIdT = Aws::String>
  CodeReviewJob& WithCodeReviewId(CodeReviewIdT&& value) {
    SetCodeReviewId(std::forward<CodeReviewIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title of the code review job.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  CodeReviewJob& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An overview of the code review job results.</p>
   */
  inline const Aws::String& GetOverview() const { return m_overview; }
  inline bool OverviewHasBeenSet() const { return m_overviewHasBeenSet; }
  template <typename OverviewT = Aws::String>
  void SetOverview(OverviewT&& value) {
    m_overviewHasBeenSet = true;
    m_overview = std::forward<OverviewT>(value);
  }
  template <typename OverviewT = Aws::String>
  CodeReviewJob& WithOverview(OverviewT&& value) {
    SetOverview(std::forward<OverviewT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the code review job.</p>
   */
  inline JobStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(JobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CodeReviewJob& WithStatus(JobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of documents providing context for the code review job.</p>
   */
  inline const Aws::Vector<DocumentInfo>& GetDocuments() const { return m_documents; }
  inline bool DocumentsHasBeenSet() const { return m_documentsHasBeenSet; }
  template <typename DocumentsT = Aws::Vector<DocumentInfo>>
  void SetDocuments(DocumentsT&& value) {
    m_documentsHasBeenSet = true;
    m_documents = std::forward<DocumentsT>(value);
  }
  template <typename DocumentsT = Aws::Vector<DocumentInfo>>
  CodeReviewJob& WithDocuments(DocumentsT&& value) {
    SetDocuments(std::forward<DocumentsT>(value));
    return *this;
  }
  template <typename DocumentsT = DocumentInfo>
  CodeReviewJob& AddDocuments(DocumentsT&& value) {
    m_documentsHasBeenSet = true;
    m_documents.emplace_back(std::forward<DocumentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of source code repositories analyzed during the code review job.</p>
   */
  inline const Aws::Vector<SourceCodeRepository>& GetSourceCode() const { return m_sourceCode; }
  inline bool SourceCodeHasBeenSet() const { return m_sourceCodeHasBeenSet; }
  template <typename SourceCodeT = Aws::Vector<SourceCodeRepository>>
  void SetSourceCode(SourceCodeT&& value) {
    m_sourceCodeHasBeenSet = true;
    m_sourceCode = std::forward<SourceCodeT>(value);
  }
  template <typename SourceCodeT = Aws::Vector<SourceCodeRepository>>
  CodeReviewJob& WithSourceCode(SourceCodeT&& value) {
    SetSourceCode(std::forward<SourceCodeT>(value));
    return *this;
  }
  template <typename SourceCodeT = SourceCodeRepository>
  CodeReviewJob& AddSourceCode(SourceCodeT&& value) {
    m_sourceCodeHasBeenSet = true;
    m_sourceCode.emplace_back(std::forward<SourceCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of steps in the code review job execution.</p>
   */
  inline const Aws::Vector<Step>& GetSteps() const { return m_steps; }
  inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }
  template <typename StepsT = Aws::Vector<Step>>
  void SetSteps(StepsT&& value) {
    m_stepsHasBeenSet = true;
    m_steps = std::forward<StepsT>(value);
  }
  template <typename StepsT = Aws::Vector<Step>>
  CodeReviewJob& WithSteps(StepsT&& value) {
    SetSteps(std::forward<StepsT>(value));
    return *this;
  }
  template <typename StepsT = Step>
  CodeReviewJob& AddSteps(StepsT&& value) {
    m_stepsHasBeenSet = true;
    m_steps.emplace_back(std::forward<StepsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The execution context messages for the code review job.</p>
   */
  inline const Aws::Vector<ExecutionContext>& GetExecutionContext() const { return m_executionContext; }
  inline bool ExecutionContextHasBeenSet() const { return m_executionContextHasBeenSet; }
  template <typename ExecutionContextT = Aws::Vector<ExecutionContext>>
  void SetExecutionContext(ExecutionContextT&& value) {
    m_executionContextHasBeenSet = true;
    m_executionContext = std::forward<ExecutionContextT>(value);
  }
  template <typename ExecutionContextT = Aws::Vector<ExecutionContext>>
  CodeReviewJob& WithExecutionContext(ExecutionContextT&& value) {
    SetExecutionContext(std::forward<ExecutionContextT>(value));
    return *this;
  }
  template <typename ExecutionContextT = ExecutionContext>
  CodeReviewJob& AddExecutionContext(ExecutionContextT&& value) {
    m_executionContextHasBeenSet = true;
    m_executionContext.emplace_back(std::forward<ExecutionContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM service role used for the code review job.</p>
   */
  inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
  inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
  template <typename ServiceRoleT = Aws::String>
  void SetServiceRole(ServiceRoleT&& value) {
    m_serviceRoleHasBeenSet = true;
    m_serviceRole = std::forward<ServiceRoleT>(value);
  }
  template <typename ServiceRoleT = Aws::String>
  CodeReviewJob& WithServiceRole(ServiceRoleT&& value) {
    SetServiceRole(std::forward<ServiceRoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CloudWatch Logs configuration for the code review job.</p>
   */
  inline const CloudWatchLog& GetLogConfig() const { return m_logConfig; }
  inline bool LogConfigHasBeenSet() const { return m_logConfigHasBeenSet; }
  template <typename LogConfigT = CloudWatchLog>
  void SetLogConfig(LogConfigT&& value) {
    m_logConfigHasBeenSet = true;
    m_logConfig = std::forward<LogConfigT>(value);
  }
  template <typename LogConfigT = CloudWatchLog>
  CodeReviewJob& WithLogConfig(LogConfigT&& value) {
    SetLogConfig(std::forward<LogConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error information if the code review job encountered an error.</p>
   */
  inline const ErrorInformation& GetErrorInformation() const { return m_errorInformation; }
  inline bool ErrorInformationHasBeenSet() const { return m_errorInformationHasBeenSet; }
  template <typename ErrorInformationT = ErrorInformation>
  void SetErrorInformation(ErrorInformationT&& value) {
    m_errorInformationHasBeenSet = true;
    m_errorInformation = std::forward<ErrorInformationT>(value);
  }
  template <typename ErrorInformationT = ErrorInformation>
  CodeReviewJob& WithErrorInformation(ErrorInformationT&& value) {
    SetErrorInformation(std::forward<ErrorInformationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of integrated repositories associated with the code review job.</p>
   */
  inline const Aws::Vector<IntegratedRepository>& GetIntegratedRepositories() const { return m_integratedRepositories; }
  inline bool IntegratedRepositoriesHasBeenSet() const { return m_integratedRepositoriesHasBeenSet; }
  template <typename IntegratedRepositoriesT = Aws::Vector<IntegratedRepository>>
  void SetIntegratedRepositories(IntegratedRepositoriesT&& value) {
    m_integratedRepositoriesHasBeenSet = true;
    m_integratedRepositories = std::forward<IntegratedRepositoriesT>(value);
  }
  template <typename IntegratedRepositoriesT = Aws::Vector<IntegratedRepository>>
  CodeReviewJob& WithIntegratedRepositories(IntegratedRepositoriesT&& value) {
    SetIntegratedRepositories(std::forward<IntegratedRepositoriesT>(value));
    return *this;
  }
  template <typename IntegratedRepositoriesT = IntegratedRepository>
  CodeReviewJob& AddIntegratedRepositories(IntegratedRepositoriesT&& value) {
    m_integratedRepositoriesHasBeenSet = true;
    m_integratedRepositories.emplace_back(std::forward<IntegratedRepositoriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The code remediation strategy for the code review job.</p>
   */
  inline CodeRemediationStrategy GetCodeRemediationStrategy() const { return m_codeRemediationStrategy; }
  inline bool CodeRemediationStrategyHasBeenSet() const { return m_codeRemediationStrategyHasBeenSet; }
  inline void SetCodeRemediationStrategy(CodeRemediationStrategy value) {
    m_codeRemediationStrategyHasBeenSet = true;
    m_codeRemediationStrategy = value;
  }
  inline CodeReviewJob& WithCodeRemediationStrategy(CodeRemediationStrategy value) {
    SetCodeRemediationStrategy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the code review job was created, in UTC format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CodeReviewJob& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the code review job was last updated, in UTC format.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  CodeReviewJob& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_codeReviewJobId;

  Aws::String m_codeReviewId;

  Aws::String m_title;

  Aws::String m_overview;

  JobStatus m_status{JobStatus::NOT_SET};

  Aws::Vector<DocumentInfo> m_documents;

  Aws::Vector<SourceCodeRepository> m_sourceCode;

  Aws::Vector<Step> m_steps;

  Aws::Vector<ExecutionContext> m_executionContext;

  Aws::String m_serviceRole;

  CloudWatchLog m_logConfig;

  ErrorInformation m_errorInformation;

  Aws::Vector<IntegratedRepository> m_integratedRepositories;

  CodeRemediationStrategy m_codeRemediationStrategy{CodeRemediationStrategy::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_codeReviewJobIdHasBeenSet = false;
  bool m_codeReviewIdHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_overviewHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_documentsHasBeenSet = false;
  bool m_sourceCodeHasBeenSet = false;
  bool m_stepsHasBeenSet = false;
  bool m_executionContextHasBeenSet = false;
  bool m_serviceRoleHasBeenSet = false;
  bool m_logConfigHasBeenSet = false;
  bool m_errorInformationHasBeenSet = false;
  bool m_integratedRepositoriesHasBeenSet = false;
  bool m_codeRemediationStrategyHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
