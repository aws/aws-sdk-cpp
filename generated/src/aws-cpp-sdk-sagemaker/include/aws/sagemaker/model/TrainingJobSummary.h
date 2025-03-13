/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/TrainingJobStatus.h>
#include <aws/sagemaker/model/SecondaryStatus.h>
#include <aws/sagemaker/model/WarmPoolStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Provides summary information about a training job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrainingJobSummary">AWS
   * API Reference</a></p>
   */
  class TrainingJobSummary
  {
  public:
    AWS_SAGEMAKER_API TrainingJobSummary() = default;
    AWS_SAGEMAKER_API TrainingJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrainingJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the training job that you want a summary for.</p>
     */
    inline const Aws::String& GetTrainingJobName() const { return m_trainingJobName; }
    inline bool TrainingJobNameHasBeenSet() const { return m_trainingJobNameHasBeenSet; }
    template<typename TrainingJobNameT = Aws::String>
    void SetTrainingJobName(TrainingJobNameT&& value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName = std::forward<TrainingJobNameT>(value); }
    template<typename TrainingJobNameT = Aws::String>
    TrainingJobSummary& WithTrainingJobName(TrainingJobNameT&& value) { SetTrainingJobName(std::forward<TrainingJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline const Aws::String& GetTrainingJobArn() const { return m_trainingJobArn; }
    inline bool TrainingJobArnHasBeenSet() const { return m_trainingJobArnHasBeenSet; }
    template<typename TrainingJobArnT = Aws::String>
    void SetTrainingJobArn(TrainingJobArnT&& value) { m_trainingJobArnHasBeenSet = true; m_trainingJobArn = std::forward<TrainingJobArnT>(value); }
    template<typename TrainingJobArnT = Aws::String>
    TrainingJobSummary& WithTrainingJobArn(TrainingJobArnT&& value) { SetTrainingJobArn(std::forward<TrainingJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the training job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    TrainingJobSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the training job ended. This field is set only if
     * the training job has one of the terminal statuses (<code>Completed</code>,
     * <code>Failed</code>, or <code>Stopped</code>). </p>
     */
    inline const Aws::Utils::DateTime& GetTrainingEndTime() const { return m_trainingEndTime; }
    inline bool TrainingEndTimeHasBeenSet() const { return m_trainingEndTimeHasBeenSet; }
    template<typename TrainingEndTimeT = Aws::Utils::DateTime>
    void SetTrainingEndTime(TrainingEndTimeT&& value) { m_trainingEndTimeHasBeenSet = true; m_trainingEndTime = std::forward<TrainingEndTimeT>(value); }
    template<typename TrainingEndTimeT = Aws::Utils::DateTime>
    TrainingJobSummary& WithTrainingEndTime(TrainingEndTimeT&& value) { SetTrainingEndTime(std::forward<TrainingEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Timestamp when the training job was last modified. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    TrainingJobSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the training job.</p>
     */
    inline TrainingJobStatus GetTrainingJobStatus() const { return m_trainingJobStatus; }
    inline bool TrainingJobStatusHasBeenSet() const { return m_trainingJobStatusHasBeenSet; }
    inline void SetTrainingJobStatus(TrainingJobStatus value) { m_trainingJobStatusHasBeenSet = true; m_trainingJobStatus = value; }
    inline TrainingJobSummary& WithTrainingJobStatus(TrainingJobStatus value) { SetTrainingJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secondary status of the training job.</p>
     */
    inline SecondaryStatus GetSecondaryStatus() const { return m_secondaryStatus; }
    inline bool SecondaryStatusHasBeenSet() const { return m_secondaryStatusHasBeenSet; }
    inline void SetSecondaryStatus(SecondaryStatus value) { m_secondaryStatusHasBeenSet = true; m_secondaryStatus = value; }
    inline TrainingJobSummary& WithSecondaryStatus(SecondaryStatus value) { SetSecondaryStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the warm pool associated with the training job.</p>
     */
    inline const WarmPoolStatus& GetWarmPoolStatus() const { return m_warmPoolStatus; }
    inline bool WarmPoolStatusHasBeenSet() const { return m_warmPoolStatusHasBeenSet; }
    template<typename WarmPoolStatusT = WarmPoolStatus>
    void SetWarmPoolStatus(WarmPoolStatusT&& value) { m_warmPoolStatusHasBeenSet = true; m_warmPoolStatus = std::forward<WarmPoolStatusT>(value); }
    template<typename WarmPoolStatusT = WarmPoolStatus>
    TrainingJobSummary& WithWarmPoolStatus(WarmPoolStatusT&& value) { SetWarmPoolStatus(std::forward<WarmPoolStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN); of the training plan associated with this
     * training job.</p> <p>For more information about how to reserve GPU capacity for
     * your SageMaker HyperPod clusters using Amazon SageMaker Training Plan, see
     * <code> <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateTrainingPlan.html">CreateTrainingPlan</a>
     * </code>.</p>
     */
    inline const Aws::String& GetTrainingPlanArn() const { return m_trainingPlanArn; }
    inline bool TrainingPlanArnHasBeenSet() const { return m_trainingPlanArnHasBeenSet; }
    template<typename TrainingPlanArnT = Aws::String>
    void SetTrainingPlanArn(TrainingPlanArnT&& value) { m_trainingPlanArnHasBeenSet = true; m_trainingPlanArn = std::forward<TrainingPlanArnT>(value); }
    template<typename TrainingPlanArnT = Aws::String>
    TrainingJobSummary& WithTrainingPlanArn(TrainingPlanArnT&& value) { SetTrainingPlanArn(std::forward<TrainingPlanArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trainingJobName;
    bool m_trainingJobNameHasBeenSet = false;

    Aws::String m_trainingJobArn;
    bool m_trainingJobArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_trainingEndTime{};
    bool m_trainingEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    TrainingJobStatus m_trainingJobStatus{TrainingJobStatus::NOT_SET};
    bool m_trainingJobStatusHasBeenSet = false;

    SecondaryStatus m_secondaryStatus{SecondaryStatus::NOT_SET};
    bool m_secondaryStatusHasBeenSet = false;

    WarmPoolStatus m_warmPoolStatus;
    bool m_warmPoolStatusHasBeenSet = false;

    Aws::String m_trainingPlanArn;
    bool m_trainingPlanArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
