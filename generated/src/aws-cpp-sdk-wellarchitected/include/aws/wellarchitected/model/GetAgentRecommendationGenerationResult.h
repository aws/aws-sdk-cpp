/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/ErrorDetails.h>
#include <aws/wellarchitected/model/GenerationStatus.h>
#include <aws/wellarchitected/model/Progress.h>
#include <aws/wellarchitected/model/Scope.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace WellArchitected {
namespace Model {
class GetAgentRecommendationGenerationResult {
 public:
  AWS_WELLARCHITECTED_API GetAgentRecommendationGenerationResult() = default;
  AWS_WELLARCHITECTED_API GetAgentRecommendationGenerationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WELLARCHITECTED_API GetAgentRecommendationGenerationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the recommendation generation.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  GetAgentRecommendationGenerationResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the profile used for this generation.</p>
   */
  inline const Aws::String& GetProfileArn() const { return m_profileArn; }
  template <typename ProfileArnT = Aws::String>
  void SetProfileArn(ProfileArnT&& value) {
    m_profileArnHasBeenSet = true;
    m_profileArn = std::forward<ProfileArnT>(value);
  }
  template <typename ProfileArnT = Aws::String>
  GetAgentRecommendationGenerationResult& WithProfileArn(ProfileArnT&& value) {
    SetProfileArn(std::forward<ProfileArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the recommendation generation.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetAgentRecommendationGenerationResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the recommendation generation.</p>
   */
  inline GenerationStatus GetStatus() const { return m_status; }
  inline void SetStatus(GenerationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetAgentRecommendationGenerationResult& WithStatus(GenerationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The estimated time for the generation to complete.</p>
   */
  inline const Aws::Utils::DateTime& GetEstimatedCompletionTime() const { return m_estimatedCompletionTime; }
  template <typename EstimatedCompletionTimeT = Aws::Utils::DateTime>
  void SetEstimatedCompletionTime(EstimatedCompletionTimeT&& value) {
    m_estimatedCompletionTimeHasBeenSet = true;
    m_estimatedCompletionTime = std::forward<EstimatedCompletionTimeT>(value);
  }
  template <typename EstimatedCompletionTimeT = Aws::Utils::DateTime>
  GetAgentRecommendationGenerationResult& WithEstimatedCompletionTime(EstimatedCompletionTimeT&& value) {
    SetEstimatedCompletionTime(std::forward<EstimatedCompletionTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user or system that started this generation.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  GetAgentRecommendationGenerationResult& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the generation was started.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetAgentRecommendationGenerationResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user or system that last modified this generation.</p>
   */
  inline const Aws::String& GetLastModifiedBy() const { return m_lastModifiedBy; }
  template <typename LastModifiedByT = Aws::String>
  void SetLastModifiedBy(LastModifiedByT&& value) {
    m_lastModifiedByHasBeenSet = true;
    m_lastModifiedBy = std::forward<LastModifiedByT>(value);
  }
  template <typename LastModifiedByT = Aws::String>
  GetAgentRecommendationGenerationResult& WithLastModifiedBy(LastModifiedByT&& value) {
    SetLastModifiedBy(std::forward<LastModifiedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the generation was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedAt() const { return m_lastModifiedAt; }
  template <typename LastModifiedAtT = Aws::Utils::DateTime>
  void SetLastModifiedAt(LastModifiedAtT&& value) {
    m_lastModifiedAtHasBeenSet = true;
    m_lastModifiedAt = std::forward<LastModifiedAtT>(value);
  }
  template <typename LastModifiedAtT = Aws::Utils::DateTime>
  GetAgentRecommendationGenerationResult& WithLastModifiedAt(LastModifiedAtT&& value) {
    SetLastModifiedAt(std::forward<LastModifiedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional context information provided to guide the recommendation
   * generation process.</p>
   */
  inline Aws::Utils::DocumentView GetAdditionalContext() const { return m_additionalContext; }
  template <typename AdditionalContextT = Aws::Utils::Document>
  void SetAdditionalContext(AdditionalContextT&& value) {
    m_additionalContextHasBeenSet = true;
    m_additionalContext = std::forward<AdditionalContextT>(value);
  }
  template <typename AdditionalContextT = Aws::Utils::Document>
  GetAgentRecommendationGenerationResult& WithAdditionalContext(AdditionalContextT&& value) {
    SetAdditionalContext(std::forward<AdditionalContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scope configuration that defines which pillars and goals to focus on
   * during generation.</p>
   */
  inline const Scope& GetScope() const { return m_scope; }
  template <typename ScopeT = Scope>
  void SetScope(ScopeT&& value) {
    m_scopeHasBeenSet = true;
    m_scope = std::forward<ScopeT>(value);
  }
  template <typename ScopeT = Scope>
  GetAgentRecommendationGenerationResult& WithScope(ScopeT&& value) {
    SetScope(std::forward<ScopeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the recommendation generation process started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  GetAgentRecommendationGenerationResult& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the recommendation generation process completed.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  GetAgentRecommendationGenerationResult& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current progress information including steps completed and completion
   * percentage.</p>
   */
  inline const Progress& GetProgress() const { return m_progress; }
  template <typename ProgressT = Progress>
  void SetProgress(ProgressT&& value) {
    m_progressHasBeenSet = true;
    m_progress = std::forward<ProgressT>(value);
  }
  template <typename ProgressT = Progress>
  GetAgentRecommendationGenerationResult& WithProgress(ProgressT&& value) {
    SetProgress(std::forward<ProgressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about the error if the generation status is ERROR.</p>
   */
  inline const ErrorDetails& GetErrorDetails() const { return m_errorDetails; }
  template <typename ErrorDetailsT = ErrorDetails>
  void SetErrorDetails(ErrorDetailsT&& value) {
    m_errorDetailsHasBeenSet = true;
    m_errorDetails = std::forward<ErrorDetailsT>(value);
  }
  template <typename ErrorDetailsT = ErrorDetails>
  GetAgentRecommendationGenerationResult& WithErrorDetails(ErrorDetailsT&& value) {
    SetErrorDetails(std::forward<ErrorDetailsT>(value));
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
  GetAgentRecommendationGenerationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_id;

  Aws::String m_profileArn;

  Aws::String m_name;

  GenerationStatus m_status{GenerationStatus::NOT_SET};

  Aws::Utils::DateTime m_estimatedCompletionTime{};

  Aws::String m_createdBy;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_lastModifiedBy;

  Aws::Utils::DateTime m_lastModifiedAt{};

  Aws::Utils::Document m_additionalContext;

  Scope m_scope;

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_endedAt{};

  Progress m_progress;

  ErrorDetails m_errorDetails;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_idHasBeenSet = false;
  bool m_profileArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_estimatedCompletionTimeHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_lastModifiedByHasBeenSet = false;
  bool m_lastModifiedAtHasBeenSet = false;
  bool m_additionalContextHasBeenSet = false;
  bool m_scopeHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
  bool m_progressHasBeenSet = false;
  bool m_errorDetailsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
