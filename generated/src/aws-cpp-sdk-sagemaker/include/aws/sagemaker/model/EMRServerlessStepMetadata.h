/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
 * <p>The configurations and outcomes of an Amazon EMR Serverless step
 * execution.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EMRServerlessStepMetadata">AWS
 * API Reference</a></p>
 */
class EMRServerlessStepMetadata {
 public:
  AWS_SAGEMAKER_API EMRServerlessStepMetadata() = default;
  AWS_SAGEMAKER_API EMRServerlessStepMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API EMRServerlessStepMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the Amazon EMR Serverless application.</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  EMRServerlessStepMetadata& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the Amazon EMR Serverless job run.</p>
   */
  inline const Aws::String& GetJobRunId() const { return m_jobRunId; }
  inline bool JobRunIdHasBeenSet() const { return m_jobRunIdHasBeenSet; }
  template <typename JobRunIdT = Aws::String>
  void SetJobRunId(JobRunIdT&& value) {
    m_jobRunIdHasBeenSet = true;
    m_jobRunId = std::forward<JobRunIdT>(value);
  }
  template <typename JobRunIdT = Aws::String>
  EMRServerlessStepMetadata& WithJobRunId(JobRunIdT&& value) {
    SetJobRunId(std::forward<JobRunIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Amazon EMR Serverless job run.</p>
   */
  inline const Aws::String& GetJobRunName() const { return m_jobRunName; }
  inline bool JobRunNameHasBeenSet() const { return m_jobRunNameHasBeenSet; }
  template <typename JobRunNameT = Aws::String>
  void SetJobRunName(JobRunNameT&& value) {
    m_jobRunNameHasBeenSet = true;
    m_jobRunName = std::forward<JobRunNameT>(value);
  }
  template <typename JobRunNameT = Aws::String>
  EMRServerlessStepMetadata& WithJobRunName(JobRunNameT&& value) {
    SetJobRunName(std::forward<JobRunNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path to the log file for the Amazon EMR Serverless job run.</p>
   */
  inline const Aws::String& GetLogFilePath() const { return m_logFilePath; }
  inline bool LogFilePathHasBeenSet() const { return m_logFilePathHasBeenSet; }
  template <typename LogFilePathT = Aws::String>
  void SetLogFilePath(LogFilePathT&& value) {
    m_logFilePathHasBeenSet = true;
    m_logFilePath = std::forward<LogFilePathT>(value);
  }
  template <typename LogFilePathT = Aws::String>
  EMRServerlessStepMetadata& WithLogFilePath(LogFilePathT&& value) {
    SetLogFilePath(std::forward<LogFilePathT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationId;

  Aws::String m_jobRunId;

  Aws::String m_jobRunName;

  Aws::String m_logFilePath;
  bool m_applicationIdHasBeenSet = false;
  bool m_jobRunIdHasBeenSet = false;
  bool m_jobRunNameHasBeenSet = false;
  bool m_logFilePathHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
