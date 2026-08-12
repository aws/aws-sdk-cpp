/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/GenerationStatus.h>

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
class StartAgentRecommendationGenerationResult {
 public:
  AWS_WELLARCHITECTED_API StartAgentRecommendationGenerationResult() = default;
  AWS_WELLARCHITECTED_API StartAgentRecommendationGenerationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WELLARCHITECTED_API StartAgentRecommendationGenerationResult& operator=(
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
  StartAgentRecommendationGenerationResult& WithId(IdT&& value) {
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
  StartAgentRecommendationGenerationResult& WithProfileArn(ProfileArnT&& value) {
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
  StartAgentRecommendationGenerationResult& WithName(NameT&& value) {
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
  inline StartAgentRecommendationGenerationResult& WithStatus(GenerationStatus value) {
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
  StartAgentRecommendationGenerationResult& WithEstimatedCompletionTime(EstimatedCompletionTimeT&& value) {
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
  StartAgentRecommendationGenerationResult& WithCreatedBy(CreatedByT&& value) {
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
  StartAgentRecommendationGenerationResult& WithCreatedAt(CreatedAtT&& value) {
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
  StartAgentRecommendationGenerationResult& WithLastModifiedBy(LastModifiedByT&& value) {
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
  StartAgentRecommendationGenerationResult& WithLastModifiedAt(LastModifiedAtT&& value) {
    SetLastModifiedAt(std::forward<LastModifiedAtT>(value));
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
  StartAgentRecommendationGenerationResult& WithRequestId(RequestIdT&& value) {
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
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
