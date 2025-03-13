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
    AWS_SAGEMAKER_API CreateInferenceRecommendationsJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInferenceRecommendationsJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A name for the recommendation job. The name must be unique within the Amazon
     * Web Services Region and within your Amazon Web Services account. The job name is
     * passed down to the resources created by the recommendation job. The names of
     * resources (such as the model, endpoint configuration, endpoint, and compilation)
     * that are prefixed with the job name are truncated at 40 characters.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    CreateInferenceRecommendationsJobRequest& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the type of recommendation job. Specify <code>Default</code> to
     * initiate an instance recommendation and <code>Advanced</code> to initiate a load
     * test. If left unspecified, Amazon SageMaker Inference Recommender will run an
     * instance recommendation (<code>DEFAULT</code>) job.</p>
     */
    inline RecommendationJobType GetJobType() const { return m_jobType; }
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
    inline void SetJobType(RecommendationJobType value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline CreateInferenceRecommendationsJobRequest& WithJobType(RecommendationJobType value) { SetJobType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateInferenceRecommendationsJobRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the versioned model package Amazon Resource Name
     * (ARN), the traffic pattern, and endpoint configurations.</p>
     */
    inline const RecommendationJobInputConfig& GetInputConfig() const { return m_inputConfig; }
    inline bool InputConfigHasBeenSet() const { return m_inputConfigHasBeenSet; }
    template<typename InputConfigT = RecommendationJobInputConfig>
    void SetInputConfig(InputConfigT&& value) { m_inputConfigHasBeenSet = true; m_inputConfig = std::forward<InputConfigT>(value); }
    template<typename InputConfigT = RecommendationJobInputConfig>
    CreateInferenceRecommendationsJobRequest& WithInputConfig(InputConfigT&& value) { SetInputConfig(std::forward<InputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the recommendation job.</p>
     */
    inline const Aws::String& GetJobDescription() const { return m_jobDescription; }
    inline bool JobDescriptionHasBeenSet() const { return m_jobDescriptionHasBeenSet; }
    template<typename JobDescriptionT = Aws::String>
    void SetJobDescription(JobDescriptionT&& value) { m_jobDescriptionHasBeenSet = true; m_jobDescription = std::forward<JobDescriptionT>(value); }
    template<typename JobDescriptionT = Aws::String>
    CreateInferenceRecommendationsJobRequest& WithJobDescription(JobDescriptionT&& value) { SetJobDescription(std::forward<JobDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of conditions for stopping a recommendation job. If any of the
     * conditions are met, the job is automatically stopped.</p>
     */
    inline const RecommendationJobStoppingConditions& GetStoppingConditions() const { return m_stoppingConditions; }
    inline bool StoppingConditionsHasBeenSet() const { return m_stoppingConditionsHasBeenSet; }
    template<typename StoppingConditionsT = RecommendationJobStoppingConditions>
    void SetStoppingConditions(StoppingConditionsT&& value) { m_stoppingConditionsHasBeenSet = true; m_stoppingConditions = std::forward<StoppingConditionsT>(value); }
    template<typename StoppingConditionsT = RecommendationJobStoppingConditions>
    CreateInferenceRecommendationsJobRequest& WithStoppingConditions(StoppingConditionsT&& value) { SetStoppingConditions(std::forward<StoppingConditionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the output artifacts and the KMS key to use for
     * Amazon S3 server-side encryption.</p>
     */
    inline const RecommendationJobOutputConfig& GetOutputConfig() const { return m_outputConfig; }
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
    template<typename OutputConfigT = RecommendationJobOutputConfig>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = RecommendationJobOutputConfig>
    CreateInferenceRecommendationsJobRequest& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata that you apply to Amazon Web Services resources to help you
     * categorize and organize them. Each tag consists of a key and a value, both of
     * which you define. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> in the Amazon Web Services General
     * Reference.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateInferenceRecommendationsJobRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateInferenceRecommendationsJobRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    RecommendationJobType m_jobType{RecommendationJobType::NOT_SET};
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
