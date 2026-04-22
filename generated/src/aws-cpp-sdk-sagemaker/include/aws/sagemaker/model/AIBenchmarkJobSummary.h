/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AIBenchmarkJobStatus.h>

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
 * <p>Summary information about an AI benchmark job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AIBenchmarkJobSummary">AWS
 * API Reference</a></p>
 */
class AIBenchmarkJobSummary {
 public:
  AWS_SAGEMAKER_API AIBenchmarkJobSummary() = default;
  AWS_SAGEMAKER_API AIBenchmarkJobSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AIBenchmarkJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the benchmark job.</p>
   */
  inline const Aws::String& GetAIBenchmarkJobName() const { return m_aIBenchmarkJobName; }
  inline bool AIBenchmarkJobNameHasBeenSet() const { return m_aIBenchmarkJobNameHasBeenSet; }
  template <typename AIBenchmarkJobNameT = Aws::String>
  void SetAIBenchmarkJobName(AIBenchmarkJobNameT&& value) {
    m_aIBenchmarkJobNameHasBeenSet = true;
    m_aIBenchmarkJobName = std::forward<AIBenchmarkJobNameT>(value);
  }
  template <typename AIBenchmarkJobNameT = Aws::String>
  AIBenchmarkJobSummary& WithAIBenchmarkJobName(AIBenchmarkJobNameT&& value) {
    SetAIBenchmarkJobName(std::forward<AIBenchmarkJobNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the benchmark job.</p>
   */
  inline const Aws::String& GetAIBenchmarkJobArn() const { return m_aIBenchmarkJobArn; }
  inline bool AIBenchmarkJobArnHasBeenSet() const { return m_aIBenchmarkJobArnHasBeenSet; }
  template <typename AIBenchmarkJobArnT = Aws::String>
  void SetAIBenchmarkJobArn(AIBenchmarkJobArnT&& value) {
    m_aIBenchmarkJobArnHasBeenSet = true;
    m_aIBenchmarkJobArn = std::forward<AIBenchmarkJobArnT>(value);
  }
  template <typename AIBenchmarkJobArnT = Aws::String>
  AIBenchmarkJobSummary& WithAIBenchmarkJobArn(AIBenchmarkJobArnT&& value) {
    SetAIBenchmarkJobArn(std::forward<AIBenchmarkJobArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the benchmark job.</p>
   */
  inline AIBenchmarkJobStatus GetAIBenchmarkJobStatus() const { return m_aIBenchmarkJobStatus; }
  inline bool AIBenchmarkJobStatusHasBeenSet() const { return m_aIBenchmarkJobStatusHasBeenSet; }
  inline void SetAIBenchmarkJobStatus(AIBenchmarkJobStatus value) {
    m_aIBenchmarkJobStatusHasBeenSet = true;
    m_aIBenchmarkJobStatus = value;
  }
  inline AIBenchmarkJobSummary& WithAIBenchmarkJobStatus(AIBenchmarkJobStatus value) {
    SetAIBenchmarkJobStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A timestamp that indicates when the benchmark job was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  AIBenchmarkJobSummary& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A timestamp that indicates when the benchmark job completed.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  AIBenchmarkJobSummary& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the AI workload configuration used by the benchmark job.</p>
   */
  inline const Aws::String& GetAIWorkloadConfigName() const { return m_aIWorkloadConfigName; }
  inline bool AIWorkloadConfigNameHasBeenSet() const { return m_aIWorkloadConfigNameHasBeenSet; }
  template <typename AIWorkloadConfigNameT = Aws::String>
  void SetAIWorkloadConfigName(AIWorkloadConfigNameT&& value) {
    m_aIWorkloadConfigNameHasBeenSet = true;
    m_aIWorkloadConfigName = std::forward<AIWorkloadConfigNameT>(value);
  }
  template <typename AIWorkloadConfigNameT = Aws::String>
  AIBenchmarkJobSummary& WithAIWorkloadConfigName(AIWorkloadConfigNameT&& value) {
    SetAIWorkloadConfigName(std::forward<AIWorkloadConfigNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_aIBenchmarkJobName;

  Aws::String m_aIBenchmarkJobArn;

  AIBenchmarkJobStatus m_aIBenchmarkJobStatus{AIBenchmarkJobStatus::NOT_SET};

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_endTime{};

  Aws::String m_aIWorkloadConfigName;
  bool m_aIBenchmarkJobNameHasBeenSet = false;
  bool m_aIBenchmarkJobArnHasBeenSet = false;
  bool m_aIBenchmarkJobStatusHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_aIWorkloadConfigNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
