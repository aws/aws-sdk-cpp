/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/ErrorDetails.h>
#include <aws/wellarchitected/model/GenerationStatus.h>
#include <aws/wellarchitected/model/GenerationType.h>
#include <aws/wellarchitected/model/RecommendationType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WellArchitected {
namespace Model {

/**
 * <p>Summary of a recommendation generation process initiated through the agent
 * API.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/AgentRecommendationGenerationSummary">AWS
 * API Reference</a></p>
 */
class AgentRecommendationGenerationSummary {
 public:
  AWS_WELLARCHITECTED_API AgentRecommendationGenerationSummary() = default;
  AWS_WELLARCHITECTED_API AgentRecommendationGenerationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API AgentRecommendationGenerationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the recommendation generation.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  AgentRecommendationGenerationSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the profile used for this generation.</p>
   */
  inline const Aws::String& GetProfileArn() const { return m_profileArn; }
  inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }
  template <typename ProfileArnT = Aws::String>
  void SetProfileArn(ProfileArnT&& value) {
    m_profileArnHasBeenSet = true;
    m_profileArn = std::forward<ProfileArnT>(value);
  }
  template <typename ProfileArnT = Aws::String>
  AgentRecommendationGenerationSummary& WithProfileArn(ProfileArnT&& value) {
    SetProfileArn(std::forward<ProfileArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the recommendation generation.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  AgentRecommendationGenerationSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the recommendation generation.</p>
   */
  inline GenerationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(GenerationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AgentRecommendationGenerationSummary& WithStatus(GenerationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The estimated time for the generation to complete.</p>
   */
  inline const Aws::Utils::DateTime& GetEstimatedCompletionTime() const { return m_estimatedCompletionTime; }
  inline bool EstimatedCompletionTimeHasBeenSet() const { return m_estimatedCompletionTimeHasBeenSet; }
  template <typename EstimatedCompletionTimeT = Aws::Utils::DateTime>
  void SetEstimatedCompletionTime(EstimatedCompletionTimeT&& value) {
    m_estimatedCompletionTimeHasBeenSet = true;
    m_estimatedCompletionTime = std::forward<EstimatedCompletionTimeT>(value);
  }
  template <typename EstimatedCompletionTimeT = Aws::Utils::DateTime>
  AgentRecommendationGenerationSummary& WithEstimatedCompletionTime(EstimatedCompletionTimeT&& value) {
    SetEstimatedCompletionTime(std::forward<EstimatedCompletionTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user or system that started this generation.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  AgentRecommendationGenerationSummary& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the generation was started.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  AgentRecommendationGenerationSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user or system that last modified this generation.</p>
   */
  inline const Aws::String& GetLastModifiedBy() const { return m_lastModifiedBy; }
  inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
  template <typename LastModifiedByT = Aws::String>
  void SetLastModifiedBy(LastModifiedByT&& value) {
    m_lastModifiedByHasBeenSet = true;
    m_lastModifiedBy = std::forward<LastModifiedByT>(value);
  }
  template <typename LastModifiedByT = Aws::String>
  AgentRecommendationGenerationSummary& WithLastModifiedBy(LastModifiedByT&& value) {
    SetLastModifiedBy(std::forward<LastModifiedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the generation was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedAt() const { return m_lastModifiedAt; }
  inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }
  template <typename LastModifiedAtT = Aws::Utils::DateTime>
  void SetLastModifiedAt(LastModifiedAtT&& value) {
    m_lastModifiedAtHasBeenSet = true;
    m_lastModifiedAt = std::forward<LastModifiedAtT>(value);
  }
  template <typename LastModifiedAtT = Aws::Utils::DateTime>
  AgentRecommendationGenerationSummary& WithLastModifiedAt(LastModifiedAtT&& value) {
    SetLastModifiedAt(std::forward<LastModifiedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How the generation was started.</p>
   */
  inline GenerationType GetGenerationType() const { return m_generationType; }
  inline bool GenerationTypeHasBeenSet() const { return m_generationTypeHasBeenSet; }
  inline void SetGenerationType(GenerationType value) {
    m_generationTypeHasBeenSet = true;
    m_generationType = value;
  }
  inline AgentRecommendationGenerationSummary& WithGenerationType(GenerationType value) {
    SetGenerationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommendation types the generation covers.</p>
   */
  inline const Aws::Vector<RecommendationType>& GetGenerationRecommendationTypes() const { return m_generationRecommendationTypes; }
  inline bool GenerationRecommendationTypesHasBeenSet() const { return m_generationRecommendationTypesHasBeenSet; }
  template <typename GenerationRecommendationTypesT = Aws::Vector<RecommendationType>>
  void SetGenerationRecommendationTypes(GenerationRecommendationTypesT&& value) {
    m_generationRecommendationTypesHasBeenSet = true;
    m_generationRecommendationTypes = std::forward<GenerationRecommendationTypesT>(value);
  }
  template <typename GenerationRecommendationTypesT = Aws::Vector<RecommendationType>>
  AgentRecommendationGenerationSummary& WithGenerationRecommendationTypes(GenerationRecommendationTypesT&& value) {
    SetGenerationRecommendationTypes(std::forward<GenerationRecommendationTypesT>(value));
    return *this;
  }
  inline AgentRecommendationGenerationSummary& AddGenerationRecommendationTypes(RecommendationType value) {
    m_generationRecommendationTypesHasBeenSet = true;
    m_generationRecommendationTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the recommendation generation process started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  AgentRecommendationGenerationSummary& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the recommendation generation process completed.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  AgentRecommendationGenerationSummary& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about the error if the generation status is ERROR.</p>
   */
  inline const ErrorDetails& GetErrorDetails() const { return m_errorDetails; }
  inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
  template <typename ErrorDetailsT = ErrorDetails>
  void SetErrorDetails(ErrorDetailsT&& value) {
    m_errorDetailsHasBeenSet = true;
    m_errorDetails = std::forward<ErrorDetailsT>(value);
  }
  template <typename ErrorDetailsT = ErrorDetails>
  AgentRecommendationGenerationSummary& WithErrorDetails(ErrorDetailsT&& value) {
    SetErrorDetails(std::forward<ErrorDetailsT>(value));
    return *this;
  }
  ///@}
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

  GenerationType m_generationType{GenerationType::NOT_SET};

  Aws::Vector<RecommendationType> m_generationRecommendationTypes;

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_endedAt{};

  ErrorDetails m_errorDetails;
  bool m_idHasBeenSet = false;
  bool m_profileArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_estimatedCompletionTimeHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_lastModifiedByHasBeenSet = false;
  bool m_lastModifiedAtHasBeenSet = false;
  bool m_generationTypeHasBeenSet = false;
  bool m_generationRecommendationTypesHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
  bool m_errorDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
