/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/RecommendationJobType.h>
#include <aws/sagemaker/model/RecommendationJobInputConfig.h>
#include <aws/sagemaker/model/RecommendationJobStoppingConditions.h>
#include <aws/sagemaker/model/RecommendationJobOutputConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateInferenceRecommendationsJobRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateInferenceRecommendationsJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInferenceRecommendationsJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A name for the recommendation job. The name must be unique within the Amazon
     * Web Services Region and within your Amazon Web Services account.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>A name for the recommendation job. The name must be unique within the Amazon
     * Web Services Region and within your Amazon Web Services account.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>A name for the recommendation job. The name must be unique within the Amazon
     * Web Services Region and within your Amazon Web Services account.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>A name for the recommendation job. The name must be unique within the Amazon
     * Web Services Region and within your Amazon Web Services account.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>A name for the recommendation job. The name must be unique within the Amazon
     * Web Services Region and within your Amazon Web Services account.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>A name for the recommendation job. The name must be unique within the Amazon
     * Web Services Region and within your Amazon Web Services account.</p>
     */
    inline CreateInferenceRecommendationsJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>A name for the recommendation job. The name must be unique within the Amazon
     * Web Services Region and within your Amazon Web Services account.</p>
     */
    inline CreateInferenceRecommendationsJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>A name for the recommendation job. The name must be unique within the Amazon
     * Web Services Region and within your Amazon Web Services account.</p>
     */
    inline CreateInferenceRecommendationsJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>Defines the type of recommendation job. Specify <code>Default</code> to
     * initiate an instance recommendation and <code>Advanced</code> to initiate a load
     * test. If left unspecified, Amazon SageMaker Inference Recommender will run an
     * instance recommendation (<code>DEFAULT</code>) job.</p>
     */
    inline const RecommendationJobType& GetJobType() const{ return m_jobType; }

    /**
     * <p>Defines the type of recommendation job. Specify <code>Default</code> to
     * initiate an instance recommendation and <code>Advanced</code> to initiate a load
     * test. If left unspecified, Amazon SageMaker Inference Recommender will run an
     * instance recommendation (<code>DEFAULT</code>) job.</p>
     */
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }

    /**
     * <p>Defines the type of recommendation job. Specify <code>Default</code> to
     * initiate an instance recommendation and <code>Advanced</code> to initiate a load
     * test. If left unspecified, Amazon SageMaker Inference Recommender will run an
     * instance recommendation (<code>DEFAULT</code>) job.</p>
     */
    inline void SetJobType(const RecommendationJobType& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }

    /**
     * <p>Defines the type of recommendation job. Specify <code>Default</code> to
     * initiate an instance recommendation and <code>Advanced</code> to initiate a load
     * test. If left unspecified, Amazon SageMaker Inference Recommender will run an
     * instance recommendation (<code>DEFAULT</code>) job.</p>
     */
    inline void SetJobType(RecommendationJobType&& value) { m_jobTypeHasBeenSet = true; m_jobType = std::move(value); }

    /**
     * <p>Defines the type of recommendation job. Specify <code>Default</code> to
     * initiate an instance recommendation and <code>Advanced</code> to initiate a load
     * test. If left unspecified, Amazon SageMaker Inference Recommender will run an
     * instance recommendation (<code>DEFAULT</code>) job.</p>
     */
    inline CreateInferenceRecommendationsJobRequest& WithJobType(const RecommendationJobType& value) { SetJobType(value); return *this;}

    /**
     * <p>Defines the type of recommendation job. Specify <code>Default</code> to
     * initiate an instance recommendation and <code>Advanced</code> to initiate a load
     * test. If left unspecified, Amazon SageMaker Inference Recommender will run an
     * instance recommendation (<code>DEFAULT</code>) job.</p>
     */
    inline CreateInferenceRecommendationsJobRequest& WithJobType(RecommendationJobType&& value) { SetJobType(std::move(value)); return *this;}


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
    inline CreateInferenceRecommendationsJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf.</p>
     */
    inline CreateInferenceRecommendationsJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf.</p>
     */
    inline CreateInferenceRecommendationsJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Provides information about the versioned model package Amazon Resource Name
     * (ARN), the traffic pattern, and endpoint configurations.</p>
     */
    inline const RecommendationJobInputConfig& GetInputConfig() const{ return m_inputConfig; }

    /**
     * <p>Provides information about the versioned model package Amazon Resource Name
     * (ARN), the traffic pattern, and endpoint configurations.</p>
     */
    inline bool InputConfigHasBeenSet() const { return m_inputConfigHasBeenSet; }

    /**
     * <p>Provides information about the versioned model package Amazon Resource Name
     * (ARN), the traffic pattern, and endpoint configurations.</p>
     */
    inline void SetInputConfig(const RecommendationJobInputConfig& value) { m_inputConfigHasBeenSet = true; m_inputConfig = value; }

    /**
     * <p>Provides information about the versioned model package Amazon Resource Name
     * (ARN), the traffic pattern, and endpoint configurations.</p>
     */
    inline void SetInputConfig(RecommendationJobInputConfig&& value) { m_inputConfigHasBeenSet = true; m_inputConfig = std::move(value); }

    /**
     * <p>Provides information about the versioned model package Amazon Resource Name
     * (ARN), the traffic pattern, and endpoint configurations.</p>
     */
    inline CreateInferenceRecommendationsJobRequest& WithInputConfig(const RecommendationJobInputConfig& value) { SetInputConfig(value); return *this;}

    /**
     * <p>Provides information about the versioned model package Amazon Resource Name
     * (ARN), the traffic pattern, and endpoint configurations.</p>
     */
    inline CreateInferenceRecommendationsJobRequest& WithInputConfig(RecommendationJobInputConfig&& value) { SetInputConfig(std::move(value)); return *this;}


    /**
     * <p>Description of the recommendation job.</p>
     */
    inline const Aws::String& GetJobDescription() const{ return m_jobDescription; }

    /**
     * <p>Description of the recommendation job.</p>
     */
    inline bool JobDescriptionHasBeenSet() const { return m_jobDescriptionHasBeenSet; }

    /**
     * <p>Description of the recommendation job.</p>
     */
    inline void SetJobDescription(const Aws::String& value) { m_jobDescriptionHasBeenSet = true; m_jobDescription = value; }

    /**
     * <p>Description of the recommendation job.</p>
     */
    inline void SetJobDescription(Aws::String&& value) { m_jobDescriptionHasBeenSet = true; m_jobDescription = std::move(value); }

    /**
     * <p>Description of the recommendation job.</p>
     */
    inline void SetJobDescription(const char* value) { m_jobDescriptionHasBeenSet = true; m_jobDescription.assign(value); }

    /**
     * <p>Description of the recommendation job.</p>
     */
    inline CreateInferenceRecommendationsJobRequest& WithJobDescription(const Aws::String& value) { SetJobDescription(value); return *this;}

    /**
     * <p>Description of the recommendation job.</p>
     */
    inline CreateInferenceRecommendationsJobRequest& WithJobDescription(Aws::String&& value) { SetJobDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the recommendation job.</p>
     */
    inline CreateInferenceRecommendationsJobRequest& WithJobDescription(const char* value) { SetJobDescription(value); return *this;}


    /**
     * <p>A set of conditions for stopping a recommendation job. If any of the
     * conditions are met, the job is automatically stopped.</p>
     */
    inline const RecommendationJobStoppingConditions& GetStoppingConditions() const{ return m_stoppingConditions; }

    /**
     * <p>A set of conditions for stopping a recommendation job. If any of the
     * conditions are met, the job is automatically stopped.</p>
     */
    inline bool StoppingConditionsHasBeenSet() const { return m_stoppingConditionsHasBeenSet; }

    /**
     * <p>A set of conditions for stopping a recommendation job. If any of the
     * conditions are met, the job is automatically stopped.</p>
     */
    inline void SetStoppingConditions(const RecommendationJobStoppingConditions& value) { m_stoppingConditionsHasBeenSet = true; m_stoppingConditions = value; }

    /**
     * <p>A set of conditions for stopping a recommendation job. If any of the
     * conditions are met, the job is automatically stopped.</p>
     */
    inline void SetStoppingConditions(RecommendationJobStoppingConditions&& value) { m_stoppingConditionsHasBeenSet = true; m_stoppingConditions = std::move(value); }

    /**
     * <p>A set of conditions for stopping a recommendation job. If any of the
     * conditions are met, the job is automatically stopped.</p>
     */
    inline CreateInferenceRecommendationsJobRequest& WithStoppingConditions(const RecommendationJobStoppingConditions& value) { SetStoppingConditions(value); return *this;}

    /**
     * <p>A set of conditions for stopping a recommendation job. If any of the
     * conditions are met, the job is automatically stopped.</p>
     */
    inline CreateInferenceRecommendationsJobRequest& WithStoppingConditions(RecommendationJobStoppingConditions&& value) { SetStoppingConditions(std::move(value)); return *this;}


    /**
     * <p>Provides information about the output artifacts and the KMS key to use for
     * Amazon S3 server-side encryption.</p>
     */
    inline const RecommendationJobOutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>Provides information about the output artifacts and the KMS key to use for
     * Amazon S3 server-side encryption.</p>
     */
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }

    /**
     * <p>Provides information about the output artifacts and the KMS key to use for
     * Amazon S3 server-side encryption.</p>
     */
    inline void SetOutputConfig(const RecommendationJobOutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }

    /**
     * <p>Provides information about the output artifacts and the KMS key to use for
     * Amazon S3 server-side encryption.</p>
     */
    inline void SetOutputConfig(RecommendationJobOutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }

    /**
     * <p>Provides information about the output artifacts and the KMS key to use for
     * Amazon S3 server-side encryption.</p>
     */
    inline CreateInferenceRecommendationsJobRequest& WithOutputConfig(const RecommendationJobOutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>Provides information about the output artifacts and the KMS key to use for
     * Amazon S3 server-side encryption.</p>
     */
    inline CreateInferenceRecommendationsJobRequest& WithOutputConfig(RecommendationJobOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}


    /**
     * <p>The metadata that you apply to Amazon Web Services resources to help you
     * categorize and organize them. Each tag consists of a key and a value, both of
     * which you define. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> in the Amazon Web Services General
     * Reference.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The metadata that you apply to Amazon Web Services resources to help you
     * categorize and organize them. Each tag consists of a key and a value, both of
     * which you define. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> in the Amazon Web Services General
     * Reference.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The metadata that you apply to Amazon Web Services resources to help you
     * categorize and organize them. Each tag consists of a key and a value, both of
     * which you define. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> in the Amazon Web Services General
     * Reference.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The metadata that you apply to Amazon Web Services resources to help you
     * categorize and organize them. Each tag consists of a key and a value, both of
     * which you define. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> in the Amazon Web Services General
     * Reference.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The metadata that you apply to Amazon Web Services resources to help you
     * categorize and organize them. Each tag consists of a key and a value, both of
     * which you define. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> in the Amazon Web Services General
     * Reference.</p>
     */
    inline CreateInferenceRecommendationsJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The metadata that you apply to Amazon Web Services resources to help you
     * categorize and organize them. Each tag consists of a key and a value, both of
     * which you define. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> in the Amazon Web Services General
     * Reference.</p>
     */
    inline CreateInferenceRecommendationsJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The metadata that you apply to Amazon Web Services resources to help you
     * categorize and organize them. Each tag consists of a key and a value, both of
     * which you define. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> in the Amazon Web Services General
     * Reference.</p>
     */
    inline CreateInferenceRecommendationsJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The metadata that you apply to Amazon Web Services resources to help you
     * categorize and organize them. Each tag consists of a key and a value, both of
     * which you define. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> in the Amazon Web Services General
     * Reference.</p>
     */
    inline CreateInferenceRecommendationsJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    RecommendationJobType m_jobType;
    bool m_jobTypeHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    RecommendationJobInputConfig m_inputConfig;
    bool m_inputConfigHasBeenSet = false;

    Aws::String m_jobDescription;
    bool m_jobDescriptionHasBeenSet = false;

    RecommendationJobStoppingConditions m_stoppingConditions;
    bool m_stoppingConditionsHasBeenSet = false;

    RecommendationJobOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
