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
#include <aws/sagemaker/model/AutoMLProblemTypeConfig.h>
#include <aws/sagemaker/model/AutoMLSecurityConfig.h>
#include <aws/sagemaker/model/AutoMLJobObjective.h>
#include <aws/sagemaker/model/ModelDeployConfig.h>
#include <aws/sagemaker/model/AutoMLDataSplitConfig.h>
#include <aws/sagemaker/model/AutoMLComputeConfig.h>
#include <aws/sagemaker/model/AutoMLJobChannel.h>
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
  class CreateAutoMLJobV2Request : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateAutoMLJobV2Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAutoMLJobV2"; }

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
    inline CreateAutoMLJobV2Request& WithAutoMLJobName(const Aws::String& value) { SetAutoMLJobName(value); return *this;}
    inline CreateAutoMLJobV2Request& WithAutoMLJobName(Aws::String&& value) { SetAutoMLJobName(std::move(value)); return *this;}
    inline CreateAutoMLJobV2Request& WithAutoMLJobName(const char* value) { SetAutoMLJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of channel objects describing the input data and their location.
     * Each channel is a named input source. Similar to the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateAutoMLJob.html#sagemaker-CreateAutoMLJob-request-InputDataConfig">InputDataConfig</a>
     * attribute in the <code>CreateAutoMLJob</code> input parameters. The supported
     * formats depend on the problem type:</p> <ul> <li> <p>For tabular problem types:
     * <code>S3Prefix</code>, <code>ManifestFile</code>.</p> </li> <li> <p>For image
     * classification: <code>S3Prefix</code>, <code>ManifestFile</code>,
     * <code>AugmentedManifestFile</code>.</p> </li> <li> <p>For text classification:
     * <code>S3Prefix</code>.</p> </li> <li> <p>For time-series forecasting:
     * <code>S3Prefix</code>.</p> </li> <li> <p>For text generation (LLMs fine-tuning):
     * <code>S3Prefix</code>.</p> </li> </ul>
     */
    inline const Aws::Vector<AutoMLJobChannel>& GetAutoMLJobInputDataConfig() const{ return m_autoMLJobInputDataConfig; }
    inline bool AutoMLJobInputDataConfigHasBeenSet() const { return m_autoMLJobInputDataConfigHasBeenSet; }
    inline void SetAutoMLJobInputDataConfig(const Aws::Vector<AutoMLJobChannel>& value) { m_autoMLJobInputDataConfigHasBeenSet = true; m_autoMLJobInputDataConfig = value; }
    inline void SetAutoMLJobInputDataConfig(Aws::Vector<AutoMLJobChannel>&& value) { m_autoMLJobInputDataConfigHasBeenSet = true; m_autoMLJobInputDataConfig = std::move(value); }
    inline CreateAutoMLJobV2Request& WithAutoMLJobInputDataConfig(const Aws::Vector<AutoMLJobChannel>& value) { SetAutoMLJobInputDataConfig(value); return *this;}
    inline CreateAutoMLJobV2Request& WithAutoMLJobInputDataConfig(Aws::Vector<AutoMLJobChannel>&& value) { SetAutoMLJobInputDataConfig(std::move(value)); return *this;}
    inline CreateAutoMLJobV2Request& AddAutoMLJobInputDataConfig(const AutoMLJobChannel& value) { m_autoMLJobInputDataConfigHasBeenSet = true; m_autoMLJobInputDataConfig.push_back(value); return *this; }
    inline CreateAutoMLJobV2Request& AddAutoMLJobInputDataConfig(AutoMLJobChannel&& value) { m_autoMLJobInputDataConfigHasBeenSet = true; m_autoMLJobInputDataConfig.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides information about encryption and the Amazon S3 output path needed to
     * store artifacts from an AutoML job.</p>
     */
    inline const AutoMLOutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    inline void SetOutputDataConfig(const AutoMLOutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }
    inline void SetOutputDataConfig(AutoMLOutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }
    inline CreateAutoMLJobV2Request& WithOutputDataConfig(const AutoMLOutputDataConfig& value) { SetOutputDataConfig(value); return *this;}
    inline CreateAutoMLJobV2Request& WithOutputDataConfig(AutoMLOutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the configuration settings of one of the supported problem types.</p>
     */
    inline const AutoMLProblemTypeConfig& GetAutoMLProblemTypeConfig() const{ return m_autoMLProblemTypeConfig; }
    inline bool AutoMLProblemTypeConfigHasBeenSet() const { return m_autoMLProblemTypeConfigHasBeenSet; }
    inline void SetAutoMLProblemTypeConfig(const AutoMLProblemTypeConfig& value) { m_autoMLProblemTypeConfigHasBeenSet = true; m_autoMLProblemTypeConfig = value; }
    inline void SetAutoMLProblemTypeConfig(AutoMLProblemTypeConfig&& value) { m_autoMLProblemTypeConfigHasBeenSet = true; m_autoMLProblemTypeConfig = std::move(value); }
    inline CreateAutoMLJobV2Request& WithAutoMLProblemTypeConfig(const AutoMLProblemTypeConfig& value) { SetAutoMLProblemTypeConfig(value); return *this;}
    inline CreateAutoMLJobV2Request& WithAutoMLProblemTypeConfig(AutoMLProblemTypeConfig&& value) { SetAutoMLProblemTypeConfig(std::move(value)); return *this;}
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
    inline CreateAutoMLJobV2Request& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateAutoMLJobV2Request& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateAutoMLJobV2Request& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, such as by purpose, owner, or environment.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web ServicesResources</a>. Tag keys must be unique per resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateAutoMLJobV2Request& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateAutoMLJobV2Request& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateAutoMLJobV2Request& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateAutoMLJobV2Request& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The security configuration for traffic encryption or Amazon VPC settings.</p>
     */
    inline const AutoMLSecurityConfig& GetSecurityConfig() const{ return m_securityConfig; }
    inline bool SecurityConfigHasBeenSet() const { return m_securityConfigHasBeenSet; }
    inline void SetSecurityConfig(const AutoMLSecurityConfig& value) { m_securityConfigHasBeenSet = true; m_securityConfig = value; }
    inline void SetSecurityConfig(AutoMLSecurityConfig&& value) { m_securityConfigHasBeenSet = true; m_securityConfig = std::move(value); }
    inline CreateAutoMLJobV2Request& WithSecurityConfig(const AutoMLSecurityConfig& value) { SetSecurityConfig(value); return *this;}
    inline CreateAutoMLJobV2Request& WithSecurityConfig(AutoMLSecurityConfig&& value) { SetSecurityConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a metric to minimize or maximize as the objective of a job. If not
     * specified, the default objective metric depends on the problem type. For the
     * list of default values per problem type, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLJobObjective.html">AutoMLJobObjective</a>.</p>
     *  <ul> <li> <p>For tabular problem types: You must either provide both the
     * <code>AutoMLJobObjective</code> and indicate the type of supervised learning
     * problem in <code>AutoMLProblemTypeConfig</code>
     * (<code>TabularJobConfig.ProblemType</code>), or none at all.</p> </li> <li>
     * <p>For text generation problem types (LLMs fine-tuning): Fine-tuning language
     * models in Autopilot does not require setting the <code>AutoMLJobObjective</code>
     * field. Autopilot fine-tunes LLMs without requiring multiple candidates to be
     * trained and evaluated. Instead, using your dataset, Autopilot directly
     * fine-tunes your target model to enhance a default objective metric, the
     * cross-entropy loss. After fine-tuning a language model, you can evaluate the
     * quality of its generated text using different metrics. For a list of the
     * available metrics, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-llms-finetuning-metrics.html">Metrics
     * for fine-tuning LLMs in Autopilot</a>.</p> </li> </ul> 
     */
    inline const AutoMLJobObjective& GetAutoMLJobObjective() const{ return m_autoMLJobObjective; }
    inline bool AutoMLJobObjectiveHasBeenSet() const { return m_autoMLJobObjectiveHasBeenSet; }
    inline void SetAutoMLJobObjective(const AutoMLJobObjective& value) { m_autoMLJobObjectiveHasBeenSet = true; m_autoMLJobObjective = value; }
    inline void SetAutoMLJobObjective(AutoMLJobObjective&& value) { m_autoMLJobObjectiveHasBeenSet = true; m_autoMLJobObjective = std::move(value); }
    inline CreateAutoMLJobV2Request& WithAutoMLJobObjective(const AutoMLJobObjective& value) { SetAutoMLJobObjective(value); return *this;}
    inline CreateAutoMLJobV2Request& WithAutoMLJobObjective(AutoMLJobObjective&& value) { SetAutoMLJobObjective(std::move(value)); return *this;}
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
    inline CreateAutoMLJobV2Request& WithModelDeployConfig(const ModelDeployConfig& value) { SetModelDeployConfig(value); return *this;}
    inline CreateAutoMLJobV2Request& WithModelDeployConfig(ModelDeployConfig&& value) { SetModelDeployConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure specifies how to split the data into train and validation
     * datasets.</p> <p>The validation and training datasets must contain the same
     * headers. For jobs created by calling <code>CreateAutoMLJob</code>, the
     * validation dataset must be less than 2 GB in size.</p>  <p>This attribute
     * must not be set for the time-series forecasting problem type, as Autopilot
     * automatically splits the input dataset into training and validation sets.</p>
     * 
     */
    inline const AutoMLDataSplitConfig& GetDataSplitConfig() const{ return m_dataSplitConfig; }
    inline bool DataSplitConfigHasBeenSet() const { return m_dataSplitConfigHasBeenSet; }
    inline void SetDataSplitConfig(const AutoMLDataSplitConfig& value) { m_dataSplitConfigHasBeenSet = true; m_dataSplitConfig = value; }
    inline void SetDataSplitConfig(AutoMLDataSplitConfig&& value) { m_dataSplitConfigHasBeenSet = true; m_dataSplitConfig = std::move(value); }
    inline CreateAutoMLJobV2Request& WithDataSplitConfig(const AutoMLDataSplitConfig& value) { SetDataSplitConfig(value); return *this;}
    inline CreateAutoMLJobV2Request& WithDataSplitConfig(AutoMLDataSplitConfig&& value) { SetDataSplitConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the compute configuration for the AutoML job V2.</p>
     */
    inline const AutoMLComputeConfig& GetAutoMLComputeConfig() const{ return m_autoMLComputeConfig; }
    inline bool AutoMLComputeConfigHasBeenSet() const { return m_autoMLComputeConfigHasBeenSet; }
    inline void SetAutoMLComputeConfig(const AutoMLComputeConfig& value) { m_autoMLComputeConfigHasBeenSet = true; m_autoMLComputeConfig = value; }
    inline void SetAutoMLComputeConfig(AutoMLComputeConfig&& value) { m_autoMLComputeConfigHasBeenSet = true; m_autoMLComputeConfig = std::move(value); }
    inline CreateAutoMLJobV2Request& WithAutoMLComputeConfig(const AutoMLComputeConfig& value) { SetAutoMLComputeConfig(value); return *this;}
    inline CreateAutoMLJobV2Request& WithAutoMLComputeConfig(AutoMLComputeConfig&& value) { SetAutoMLComputeConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_autoMLJobName;
    bool m_autoMLJobNameHasBeenSet = false;

    Aws::Vector<AutoMLJobChannel> m_autoMLJobInputDataConfig;
    bool m_autoMLJobInputDataConfigHasBeenSet = false;

    AutoMLOutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    AutoMLProblemTypeConfig m_autoMLProblemTypeConfig;
    bool m_autoMLProblemTypeConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    AutoMLSecurityConfig m_securityConfig;
    bool m_securityConfigHasBeenSet = false;

    AutoMLJobObjective m_autoMLJobObjective;
    bool m_autoMLJobObjectiveHasBeenSet = false;

    ModelDeployConfig m_modelDeployConfig;
    bool m_modelDeployConfigHasBeenSet = false;

    AutoMLDataSplitConfig m_dataSplitConfig;
    bool m_dataSplitConfigHasBeenSet = false;

    AutoMLComputeConfig m_autoMLComputeConfig;
    bool m_autoMLComputeConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
