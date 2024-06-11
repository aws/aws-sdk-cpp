/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/AutoMLOutputDataConfig.h>
#include <aws/sagemaker/model/ProblemType.h>
#include <aws/sagemaker/model/AutoMLJobObjective.h>
#include <aws/sagemaker/model/AutoMLJobConfig.h>
#include <aws/sagemaker/model/ModelDeployConfig.h>
#include <aws/sagemaker/model/AutoMLChannel.h>
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
  class CreateAutoMLJobRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateAutoMLJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAutoMLJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Identifies an Autopilot job. The name must be unique to your account and is
     * case insensitive.</p>
     */
    inline const Aws::String& GetAutoMLJobName() const{ return m_autoMLJobName; }
    inline bool AutoMLJobNameHasBeenSet() const { return m_autoMLJobNameHasBeenSet; }
    inline void SetAutoMLJobName(const Aws::String& value) { m_autoMLJobNameHasBeenSet = true; m_autoMLJobName = value; }
    inline void SetAutoMLJobName(Aws::String&& value) { m_autoMLJobNameHasBeenSet = true; m_autoMLJobName = std::move(value); }
    inline void SetAutoMLJobName(const char* value) { m_autoMLJobNameHasBeenSet = true; m_autoMLJobName.assign(value); }
    inline CreateAutoMLJobRequest& WithAutoMLJobName(const Aws::String& value) { SetAutoMLJobName(value); return *this;}
    inline CreateAutoMLJobRequest& WithAutoMLJobName(Aws::String&& value) { SetAutoMLJobName(std::move(value)); return *this;}
    inline CreateAutoMLJobRequest& WithAutoMLJobName(const char* value) { SetAutoMLJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of channel objects that describes the input data and its location.
     * Each channel is a named input source. Similar to <code>InputDataConfig</code>
     * supported by <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTrainingJobDefinition.html">HyperParameterTrainingJobDefinition</a>.
     * Format(s) supported: CSV, Parquet. A minimum of 500 rows is required for the
     * training dataset. There is not a minimum number of rows required for the
     * validation dataset.</p>
     */
    inline const Aws::Vector<AutoMLChannel>& GetInputDataConfig() const{ return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    inline void SetInputDataConfig(const Aws::Vector<AutoMLChannel>& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }
    inline void SetInputDataConfig(Aws::Vector<AutoMLChannel>&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }
    inline CreateAutoMLJobRequest& WithInputDataConfig(const Aws::Vector<AutoMLChannel>& value) { SetInputDataConfig(value); return *this;}
    inline CreateAutoMLJobRequest& WithInputDataConfig(Aws::Vector<AutoMLChannel>&& value) { SetInputDataConfig(std::move(value)); return *this;}
    inline CreateAutoMLJobRequest& AddInputDataConfig(const AutoMLChannel& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig.push_back(value); return *this; }
    inline CreateAutoMLJobRequest& AddInputDataConfig(AutoMLChannel&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides information about encryption and the Amazon S3 output path needed to
     * store artifacts from an AutoML job. Format(s) supported: CSV.</p>
     */
    inline const AutoMLOutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    inline void SetOutputDataConfig(const AutoMLOutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }
    inline void SetOutputDataConfig(AutoMLOutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }
    inline CreateAutoMLJobRequest& WithOutputDataConfig(const AutoMLOutputDataConfig& value) { SetOutputDataConfig(value); return *this;}
    inline CreateAutoMLJobRequest& WithOutputDataConfig(AutoMLOutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the type of supervised learning problem available for the candidates.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-datasets-problem-types.html#autopilot-problem-types">
     * SageMaker Autopilot problem types</a>.</p>
     */
    inline const ProblemType& GetProblemType() const{ return m_problemType; }
    inline bool ProblemTypeHasBeenSet() const { return m_problemTypeHasBeenSet; }
    inline void SetProblemType(const ProblemType& value) { m_problemTypeHasBeenSet = true; m_problemType = value; }
    inline void SetProblemType(ProblemType&& value) { m_problemTypeHasBeenSet = true; m_problemType = std::move(value); }
    inline CreateAutoMLJobRequest& WithProblemType(const ProblemType& value) { SetProblemType(value); return *this;}
    inline CreateAutoMLJobRequest& WithProblemType(ProblemType&& value) { SetProblemType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a metric to minimize or maximize as the objective of a job. If not
     * specified, the default objective metric depends on the problem type. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLJobObjective.html">AutoMLJobObjective</a>
     * for the default values.</p>
     */
    inline const AutoMLJobObjective& GetAutoMLJobObjective() const{ return m_autoMLJobObjective; }
    inline bool AutoMLJobObjectiveHasBeenSet() const { return m_autoMLJobObjectiveHasBeenSet; }
    inline void SetAutoMLJobObjective(const AutoMLJobObjective& value) { m_autoMLJobObjectiveHasBeenSet = true; m_autoMLJobObjective = value; }
    inline void SetAutoMLJobObjective(AutoMLJobObjective&& value) { m_autoMLJobObjectiveHasBeenSet = true; m_autoMLJobObjective = std::move(value); }
    inline CreateAutoMLJobRequest& WithAutoMLJobObjective(const AutoMLJobObjective& value) { SetAutoMLJobObjective(value); return *this;}
    inline CreateAutoMLJobRequest& WithAutoMLJobObjective(AutoMLJobObjective&& value) { SetAutoMLJobObjective(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of settings used to configure an AutoML job.</p>
     */
    inline const AutoMLJobConfig& GetAutoMLJobConfig() const{ return m_autoMLJobConfig; }
    inline bool AutoMLJobConfigHasBeenSet() const { return m_autoMLJobConfigHasBeenSet; }
    inline void SetAutoMLJobConfig(const AutoMLJobConfig& value) { m_autoMLJobConfigHasBeenSet = true; m_autoMLJobConfig = value; }
    inline void SetAutoMLJobConfig(AutoMLJobConfig&& value) { m_autoMLJobConfigHasBeenSet = true; m_autoMLJobConfig = std::move(value); }
    inline CreateAutoMLJobRequest& WithAutoMLJobConfig(const AutoMLJobConfig& value) { SetAutoMLJobConfig(value); return *this;}
    inline CreateAutoMLJobRequest& WithAutoMLJobConfig(AutoMLJobConfig&& value) { SetAutoMLJobConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role that is used to access the data.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreateAutoMLJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateAutoMLJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateAutoMLJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Generates possible candidates without training the models. A candidate is a
     * combination of data preprocessors, algorithms, and algorithm parameter
     * settings.</p>
     */
    inline bool GetGenerateCandidateDefinitionsOnly() const{ return m_generateCandidateDefinitionsOnly; }
    inline bool GenerateCandidateDefinitionsOnlyHasBeenSet() const { return m_generateCandidateDefinitionsOnlyHasBeenSet; }
    inline void SetGenerateCandidateDefinitionsOnly(bool value) { m_generateCandidateDefinitionsOnlyHasBeenSet = true; m_generateCandidateDefinitionsOnly = value; }
    inline CreateAutoMLJobRequest& WithGenerateCandidateDefinitionsOnly(bool value) { SetGenerateCandidateDefinitionsOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web ServicesResources</a>. Tag keys must be unique per resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateAutoMLJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateAutoMLJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateAutoMLJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateAutoMLJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies how to generate the endpoint name for an automatic one-click
     * Autopilot model deployment.</p>
     */
    inline const ModelDeployConfig& GetModelDeployConfig() const{ return m_modelDeployConfig; }
    inline bool ModelDeployConfigHasBeenSet() const { return m_modelDeployConfigHasBeenSet; }
    inline void SetModelDeployConfig(const ModelDeployConfig& value) { m_modelDeployConfigHasBeenSet = true; m_modelDeployConfig = value; }
    inline void SetModelDeployConfig(ModelDeployConfig&& value) { m_modelDeployConfigHasBeenSet = true; m_modelDeployConfig = std::move(value); }
    inline CreateAutoMLJobRequest& WithModelDeployConfig(const ModelDeployConfig& value) { SetModelDeployConfig(value); return *this;}
    inline CreateAutoMLJobRequest& WithModelDeployConfig(ModelDeployConfig&& value) { SetModelDeployConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_autoMLJobName;
    bool m_autoMLJobNameHasBeenSet = false;

    Aws::Vector<AutoMLChannel> m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    AutoMLOutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    ProblemType m_problemType;
    bool m_problemTypeHasBeenSet = false;

    AutoMLJobObjective m_autoMLJobObjective;
    bool m_autoMLJobObjectiveHasBeenSet = false;

    AutoMLJobConfig m_autoMLJobConfig;
    bool m_autoMLJobConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    bool m_generateCandidateDefinitionsOnly;
    bool m_generateCandidateDefinitionsOnlyHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ModelDeployConfig m_modelDeployConfig;
    bool m_modelDeployConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
