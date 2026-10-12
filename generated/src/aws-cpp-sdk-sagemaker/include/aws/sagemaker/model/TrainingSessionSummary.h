/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TrainingSessionStatus.h>

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
 * <p>Contains summary information about a training session.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrainingSessionSummary">AWS
 * API Reference</a></p>
 */
class TrainingSessionSummary {
 public:
  AWS_SAGEMAKER_API TrainingSessionSummary() = default;
  AWS_SAGEMAKER_API TrainingSessionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API TrainingSessionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the training session.</p>
   */
  inline const Aws::String& GetTrainingSessionArn() const { return m_trainingSessionArn; }
  inline bool TrainingSessionArnHasBeenSet() const { return m_trainingSessionArnHasBeenSet; }
  template <typename TrainingSessionArnT = Aws::String>
  void SetTrainingSessionArn(TrainingSessionArnT&& value) {
    m_trainingSessionArnHasBeenSet = true;
    m_trainingSessionArn = std::forward<TrainingSessionArnT>(value);
  }
  template <typename TrainingSessionArnT = Aws::String>
  TrainingSessionSummary& WithTrainingSessionArn(TrainingSessionArnT&& value) {
    SetTrainingSessionArn(std::forward<TrainingSessionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the training session.</p>
   */
  inline TrainingSessionStatus GetTrainingSessionStatus() const { return m_trainingSessionStatus; }
  inline bool TrainingSessionStatusHasBeenSet() const { return m_trainingSessionStatusHasBeenSet; }
  inline void SetTrainingSessionStatus(TrainingSessionStatus value) {
    m_trainingSessionStatusHasBeenSet = true;
    m_trainingSessionStatus = value;
  }
  inline TrainingSessionSummary& WithTrainingSessionStatus(TrainingSessionStatus value) {
    SetTrainingSessionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the training session was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  TrainingSessionSummary& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the training session was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  TrainingSessionSummary& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_trainingSessionArn;

  TrainingSessionStatus m_trainingSessionStatus{TrainingSessionStatus::NOT_SET};

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_lastModifiedTime{};
  bool m_trainingSessionArnHasBeenSet = false;
  bool m_trainingSessionStatusHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
