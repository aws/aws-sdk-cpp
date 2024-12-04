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
    AWS_SAGEMAKER_API TrainingJobSummary();
    AWS_SAGEMAKER_API TrainingJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrainingJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the training job that you want a summary for.</p>
     */
    inline const Aws::String& GetTrainingJobName() const{ return m_trainingJobName; }
    inline bool TrainingJobNameHasBeenSet() const { return m_trainingJobNameHasBeenSet; }
    inline void SetTrainingJobName(const Aws::String& value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName = value; }
    inline void SetTrainingJobName(Aws::String&& value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName = std::move(value); }
    inline void SetTrainingJobName(const char* value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName.assign(value); }
    inline TrainingJobSummary& WithTrainingJobName(const Aws::String& value) { SetTrainingJobName(value); return *this;}
    inline TrainingJobSummary& WithTrainingJobName(Aws::String&& value) { SetTrainingJobName(std::move(value)); return *this;}
    inline TrainingJobSummary& WithTrainingJobName(const char* value) { SetTrainingJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline const Aws::String& GetTrainingJobArn() const{ return m_trainingJobArn; }
    inline bool TrainingJobArnHasBeenSet() const { return m_trainingJobArnHasBeenSet; }
    inline void SetTrainingJobArn(const Aws::String& value) { m_trainingJobArnHasBeenSet = true; m_trainingJobArn = value; }
    inline void SetTrainingJobArn(Aws::String&& value) { m_trainingJobArnHasBeenSet = true; m_trainingJobArn = std::move(value); }
    inline void SetTrainingJobArn(const char* value) { m_trainingJobArnHasBeenSet = true; m_trainingJobArn.assign(value); }
    inline TrainingJobSummary& WithTrainingJobArn(const Aws::String& value) { SetTrainingJobArn(value); return *this;}
    inline TrainingJobSummary& WithTrainingJobArn(Aws::String&& value) { SetTrainingJobArn(std::move(value)); return *this;}
    inline TrainingJobSummary& WithTrainingJobArn(const char* value) { SetTrainingJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the training job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline TrainingJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline TrainingJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the training job ended. This field is set only if
     * the training job has one of the terminal statuses (<code>Completed</code>,
     * <code>Failed</code>, or <code>Stopped</code>). </p>
     */
    inline const Aws::Utils::DateTime& GetTrainingEndTime() const{ return m_trainingEndTime; }
    inline bool TrainingEndTimeHasBeenSet() const { return m_trainingEndTimeHasBeenSet; }
    inline void SetTrainingEndTime(const Aws::Utils::DateTime& value) { m_trainingEndTimeHasBeenSet = true; m_trainingEndTime = value; }
    inline void SetTrainingEndTime(Aws::Utils::DateTime&& value) { m_trainingEndTimeHasBeenSet = true; m_trainingEndTime = std::move(value); }
    inline TrainingJobSummary& WithTrainingEndTime(const Aws::Utils::DateTime& value) { SetTrainingEndTime(value); return *this;}
    inline TrainingJobSummary& WithTrainingEndTime(Aws::Utils::DateTime&& value) { SetTrainingEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Timestamp when the training job was last modified. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline TrainingJobSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline TrainingJobSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the training job.</p>
     */
    inline const TrainingJobStatus& GetTrainingJobStatus() const{ return m_trainingJobStatus; }
    inline bool TrainingJobStatusHasBeenSet() const { return m_trainingJobStatusHasBeenSet; }
    inline void SetTrainingJobStatus(const TrainingJobStatus& value) { m_trainingJobStatusHasBeenSet = true; m_trainingJobStatus = value; }
    inline void SetTrainingJobStatus(TrainingJobStatus&& value) { m_trainingJobStatusHasBeenSet = true; m_trainingJobStatus = std::move(value); }
    inline TrainingJobSummary& WithTrainingJobStatus(const TrainingJobStatus& value) { SetTrainingJobStatus(value); return *this;}
    inline TrainingJobSummary& WithTrainingJobStatus(TrainingJobStatus&& value) { SetTrainingJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secondary status of the training job.</p>
     */
    inline const SecondaryStatus& GetSecondaryStatus() const{ return m_secondaryStatus; }
    inline bool SecondaryStatusHasBeenSet() const { return m_secondaryStatusHasBeenSet; }
    inline void SetSecondaryStatus(const SecondaryStatus& value) { m_secondaryStatusHasBeenSet = true; m_secondaryStatus = value; }
    inline void SetSecondaryStatus(SecondaryStatus&& value) { m_secondaryStatusHasBeenSet = true; m_secondaryStatus = std::move(value); }
    inline TrainingJobSummary& WithSecondaryStatus(const SecondaryStatus& value) { SetSecondaryStatus(value); return *this;}
    inline TrainingJobSummary& WithSecondaryStatus(SecondaryStatus&& value) { SetSecondaryStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the warm pool associated with the training job.</p>
     */
    inline const WarmPoolStatus& GetWarmPoolStatus() const{ return m_warmPoolStatus; }
    inline bool WarmPoolStatusHasBeenSet() const { return m_warmPoolStatusHasBeenSet; }
    inline void SetWarmPoolStatus(const WarmPoolStatus& value) { m_warmPoolStatusHasBeenSet = true; m_warmPoolStatus = value; }
    inline void SetWarmPoolStatus(WarmPoolStatus&& value) { m_warmPoolStatusHasBeenSet = true; m_warmPoolStatus = std::move(value); }
    inline TrainingJobSummary& WithWarmPoolStatus(const WarmPoolStatus& value) { SetWarmPoolStatus(value); return *this;}
    inline TrainingJobSummary& WithWarmPoolStatus(WarmPoolStatus&& value) { SetWarmPoolStatus(std::move(value)); return *this;}
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
    inline const Aws::String& GetTrainingPlanArn() const{ return m_trainingPlanArn; }
    inline bool TrainingPlanArnHasBeenSet() const { return m_trainingPlanArnHasBeenSet; }
    inline void SetTrainingPlanArn(const Aws::String& value) { m_trainingPlanArnHasBeenSet = true; m_trainingPlanArn = value; }
    inline void SetTrainingPlanArn(Aws::String&& value) { m_trainingPlanArnHasBeenSet = true; m_trainingPlanArn = std::move(value); }
    inline void SetTrainingPlanArn(const char* value) { m_trainingPlanArnHasBeenSet = true; m_trainingPlanArn.assign(value); }
    inline TrainingJobSummary& WithTrainingPlanArn(const Aws::String& value) { SetTrainingPlanArn(value); return *this;}
    inline TrainingJobSummary& WithTrainingPlanArn(Aws::String&& value) { SetTrainingPlanArn(std::move(value)); return *this;}
    inline TrainingJobSummary& WithTrainingPlanArn(const char* value) { SetTrainingPlanArn(value); return *this;}
    ///@}
  private:

    Aws::String m_trainingJobName;
    bool m_trainingJobNameHasBeenSet = false;

    Aws::String m_trainingJobArn;
    bool m_trainingJobArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_trainingEndTime;
    bool m_trainingEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    TrainingJobStatus m_trainingJobStatus;
    bool m_trainingJobStatusHasBeenSet = false;

    SecondaryStatus m_secondaryStatus;
    bool m_secondaryStatusHasBeenSet = false;

    WarmPoolStatus m_warmPoolStatus;
    bool m_warmPoolStatusHasBeenSet = false;

    Aws::String m_trainingPlanArn;
    bool m_trainingPlanArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
