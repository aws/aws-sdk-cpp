/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/RecommendationJobType.h>
#include <aws/sagemaker/model/RecommendationJobStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A structure that contains a list of recommendation jobs.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceRecommendationsJob">AWS
   * API Reference</a></p>
   */
  class InferenceRecommendationsJob
  {
  public:
    AWS_SAGEMAKER_API InferenceRecommendationsJob();
    AWS_SAGEMAKER_API InferenceRecommendationsJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceRecommendationsJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of the job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the job.</p>
     */
    inline InferenceRecommendationsJob& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the job.</p>
     */
    inline InferenceRecommendationsJob& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the job.</p>
     */
    inline InferenceRecommendationsJob& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The job description.</p>
     */
    inline const Aws::String& GetJobDescription() const{ return m_jobDescription; }

    /**
     * <p>The job description.</p>
     */
    inline bool JobDescriptionHasBeenSet() const { return m_jobDescriptionHasBeenSet; }

    /**
     * <p>The job description.</p>
     */
    inline void SetJobDescription(const Aws::String& value) { m_jobDescriptionHasBeenSet = true; m_jobDescription = value; }

    /**
     * <p>The job description.</p>
     */
    inline void SetJobDescription(Aws::String&& value) { m_jobDescriptionHasBeenSet = true; m_jobDescription = std::move(value); }

    /**
     * <p>The job description.</p>
     */
    inline void SetJobDescription(const char* value) { m_jobDescriptionHasBeenSet = true; m_jobDescription.assign(value); }

    /**
     * <p>The job description.</p>
     */
    inline InferenceRecommendationsJob& WithJobDescription(const Aws::String& value) { SetJobDescription(value); return *this;}

    /**
     * <p>The job description.</p>
     */
    inline InferenceRecommendationsJob& WithJobDescription(Aws::String&& value) { SetJobDescription(std::move(value)); return *this;}

    /**
     * <p>The job description.</p>
     */
    inline InferenceRecommendationsJob& WithJobDescription(const char* value) { SetJobDescription(value); return *this;}


    /**
     * <p>The recommendation job type.</p>
     */
    inline const RecommendationJobType& GetJobType() const{ return m_jobType; }

    /**
     * <p>The recommendation job type.</p>
     */
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }

    /**
     * <p>The recommendation job type.</p>
     */
    inline void SetJobType(const RecommendationJobType& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }

    /**
     * <p>The recommendation job type.</p>
     */
    inline void SetJobType(RecommendationJobType&& value) { m_jobTypeHasBeenSet = true; m_jobType = std::move(value); }

    /**
     * <p>The recommendation job type.</p>
     */
    inline InferenceRecommendationsJob& WithJobType(const RecommendationJobType& value) { SetJobType(value); return *this;}

    /**
     * <p>The recommendation job type.</p>
     */
    inline InferenceRecommendationsJob& WithJobType(RecommendationJobType&& value) { SetJobType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation job.</p>
     */
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation job.</p>
     */
    inline void SetJobArn(const Aws::String& value) { m_jobArnHasBeenSet = true; m_jobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation job.</p>
     */
    inline void SetJobArn(Aws::String&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation job.</p>
     */
    inline void SetJobArn(const char* value) { m_jobArnHasBeenSet = true; m_jobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation job.</p>
     */
    inline InferenceRecommendationsJob& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation job.</p>
     */
    inline InferenceRecommendationsJob& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation job.</p>
     */
    inline InferenceRecommendationsJob& WithJobArn(const char* value) { SetJobArn(value); return *this;}


    /**
     * <p>The status of the job.</p>
     */
    inline const RecommendationJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the job.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the job.</p>
     */
    inline void SetStatus(const RecommendationJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the job.</p>
     */
    inline void SetStatus(RecommendationJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the job.</p>
     */
    inline InferenceRecommendationsJob& WithStatus(const RecommendationJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the job.</p>
     */
    inline InferenceRecommendationsJob& WithStatus(RecommendationJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that shows when the job was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A timestamp that shows when the job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A timestamp that shows when the job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the job was created.</p>
     */
    inline InferenceRecommendationsJob& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the job was created.</p>
     */
    inline InferenceRecommendationsJob& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p>A timestamp that shows when the job completed.</p>
     */
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }

    /**
     * <p>A timestamp that shows when the job completed.</p>
     */
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p>A timestamp that shows when the job completed.</p>
     */
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the job completed.</p>
     */
    inline InferenceRecommendationsJob& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the job completed.</p>
     */
    inline InferenceRecommendationsJob& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf.</p>
     */
    inline InferenceRecommendationsJob& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf.</p>
     */
    inline InferenceRecommendationsJob& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf.</p>
     */
    inline InferenceRecommendationsJob& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>A timestamp that shows when the job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>A timestamp that shows when the job was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>A timestamp that shows when the job was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>A timestamp that shows when the job was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the job was last modified.</p>
     */
    inline InferenceRecommendationsJob& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the job was last modified.</p>
     */
    inline InferenceRecommendationsJob& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>If the job fails, provides information why the job failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the job fails, provides information why the job failed.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If the job fails, provides information why the job failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If the job fails, provides information why the job failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If the job fails, provides information why the job failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If the job fails, provides information why the job failed.</p>
     */
    inline InferenceRecommendationsJob& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the job fails, provides information why the job failed.</p>
     */
    inline InferenceRecommendationsJob& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the job fails, provides information why the job failed.</p>
     */
    inline InferenceRecommendationsJob& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_jobDescription;
    bool m_jobDescriptionHasBeenSet = false;

    RecommendationJobType m_jobType;
    bool m_jobTypeHasBeenSet = false;

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    RecommendationJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
