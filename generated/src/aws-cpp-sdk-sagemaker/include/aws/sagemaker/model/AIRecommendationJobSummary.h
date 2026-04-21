/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AIRecommendationJobStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>Summary information about an AI recommendation job.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AIRecommendationJobSummary">AWS
 * API Reference</a></p>
 */
class AIRecommendationJobSummary {
 public:
  AWS_SAGEMAKER_API AIRecommendationJobSummary() = default;
  AWS_SAGEMAKER_API AIRecommendationJobSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AIRecommendationJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the recommendation job.</p>
   */
  inline const Aws::String& GetAIRecommendationJobName() const { return m_aIRecommendationJobName; }
  inline bool AIRecommendationJobNameHasBeenSet() const { return m_aIRecommendationJobNameHasBeenSet; }
  template <typename AIRecommendationJobNameT = Aws::String>
  void SetAIRecommendationJobName(AIRecommendationJobNameT&& value) {
    m_aIRecommendationJobNameHasBeenSet = true;
    m_aIRecommendationJobName = std::forward<AIRecommendationJobNameT>(value);
  }
  template <typename AIRecommendationJobNameT = Aws::String>
  AIRecommendationJobSummary& WithAIRecommendationJobName(AIRecommendationJobNameT&& value) {
    SetAIRecommendationJobName(std::forward<AIRecommendationJobNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the recommendation job.</p>
   */
  inline const Aws::String& GetAIRecommendationJobArn() const { return m_aIRecommendationJobArn; }
  inline bool AIRecommendationJobArnHasBeenSet() const { return m_aIRecommendationJobArnHasBeenSet; }
  template <typename AIRecommendationJobArnT = Aws::String>
  void SetAIRecommendationJobArn(AIRecommendationJobArnT&& value) {
    m_aIRecommendationJobArnHasBeenSet = true;
    m_aIRecommendationJobArn = std::forward<AIRecommendationJobArnT>(value);
  }
  template <typename AIRecommendationJobArnT = Aws::String>
  AIRecommendationJobSummary& WithAIRecommendationJobArn(AIRecommendationJobArnT&& value) {
    SetAIRecommendationJobArn(std::forward<AIRecommendationJobArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the recommendation job.</p>
   */
  inline AIRecommendationJobStatus GetAIRecommendationJobStatus() const { return m_aIRecommendationJobStatus; }
  inline bool AIRecommendationJobStatusHasBeenSet() const { return m_aIRecommendationJobStatusHasBeenSet; }
  inline void SetAIRecommendationJobStatus(AIRecommendationJobStatus value) {
    m_aIRecommendationJobStatusHasBeenSet = true;
    m_aIRecommendationJobStatus = value;
  }
  inline AIRecommendationJobSummary& WithAIRecommendationJobStatus(AIRecommendationJobStatus value) {
    SetAIRecommendationJobStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A timestamp that indicates when the recommendation job was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  AIRecommendationJobSummary& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A timestamp that indicates when the recommendation job completed.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  AIRecommendationJobSummary& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_aIRecommendationJobName;

  Aws::String m_aIRecommendationJobArn;

  AIRecommendationJobStatus m_aIRecommendationJobStatus{AIRecommendationJobStatus::NOT_SET};

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_endTime{};
  bool m_aIRecommendationJobNameHasBeenSet = false;
  bool m_aIRecommendationJobArnHasBeenSet = false;
  bool m_aIRecommendationJobStatusHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
