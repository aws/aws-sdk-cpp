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
    AWS_SAGEMAKER_API CreateAutoMLJobV2Request() = default;

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
    inline const Aws::String& GetAutoMLJobName() const { return m_autoMLJobName; }
    inline bool AutoMLJobNameHasBeenSet() const { return m_autoMLJobNameHasBeenSet; }
    template<typename AutoMLJobNameT = Aws::String>
    void SetAutoMLJobName(AutoMLJobNameT&& value) { m_autoMLJobNameHasBeenSet = true; m_autoMLJobName = std::forward<AutoMLJobNameT>(value); }
    template<typename AutoMLJobNameT = Aws::String>
    CreateAutoMLJobV2Request& WithAutoMLJobName(AutoMLJobNameT&& value) { SetAutoMLJobName(std::forward<AutoMLJobNameT>(value)); return *this;}
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
    inline const Aws::Vector<AutoMLJobChannel>& GetAutoMLJobInputDataConfig() const { return m_autoMLJobInputDataConfig; }
    inline bool AutoMLJobInputDataConfigHasBeenSet() const { return m_autoMLJobInputDataConfigHasBeenSet; }
    template<typename AutoMLJobInputDataConfigT = Aws::Vector<AutoMLJobChannel>>
    void SetAutoMLJobInputDataConfig(AutoMLJobInputDataConfigT&& value) { m_autoMLJobInputDataConfigHasBeenSet = true; m_autoMLJobInputDataConfig = std::forward<AutoMLJobInputDataConfigT>(value); }
    template<typename AutoMLJobInputDataConfigT = Aws::Vector<AutoMLJobChannel>>
    CreateAutoMLJobV2Request& WithAutoMLJobInputDataConfig(AutoMLJobInputDataConfigT&& value) { SetAutoMLJobInputDataConfig(std::forward<AutoMLJobInputDataConfigT>(value)); return *this;}
    template<typename AutoMLJobInputDataConfigT = AutoMLJobChannel>
    CreateAutoMLJobV2Request& AddAutoMLJobInputDataConfig(AutoMLJobInputDataConfigT&& value) { m_autoMLJobInputDataConfigHasBeenSet = true; m_autoMLJobInputDataConfig.emplace_back(std::forward<AutoMLJobInputDataConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides information about encryption and the Amazon S3 output path needed to
     * store artifacts from an AutoML job.</p>
     */
    inline const AutoMLOutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    template<typename OutputDataConfigT = AutoMLOutputDataConfig>
    void SetOutputDataConfig(OutputDataConfigT&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::forward<OutputDataConfigT>(value); }
    template<typename OutputDataConfigT = AutoMLOutputDataConfig>
    CreateAutoMLJobV2Request& WithOutputDataConfig(OutputDataConfigT&& value) { SetOutputDataConfig(std::forward<OutputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the configuration settings of one of the supported problem types.</p>
     */
    inline const AutoMLProblemTypeConfig& GetAutoMLProblemTypeConfig() const { return m_autoMLProblemTypeConfig; }
    inline bool AutoMLProblemTypeConfigHasBeenSet() const { return m_autoMLProblemTypeConfigHasBeenSet; }
    template<typename AutoMLProblemTypeConfigT = AutoMLProblemTypeConfig>
    void SetAutoMLProblemTypeConfig(AutoMLProblemTypeConfigT&& value) { m_autoMLProblemTypeConfigHasBeenSet = true; m_autoMLProblemTypeConfig = std::forward<AutoMLProblemTypeConfigT>(value); }
    template<typename AutoMLProblemTypeConfigT = AutoMLProblemTypeConfig>
    CreateAutoMLJobV2Request& WithAutoMLProblemTypeConfig(AutoMLProblemTypeConfigT&& value) { SetAutoMLProblemTypeConfig(std::forward<AutoMLProblemTypeConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role that is used to access the data.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateAutoMLJobV2Request& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, such as by purpose, owner, or environment.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web ServicesResources</a>. Tag keys must be unique per resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateAutoMLJobV2Request& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateAutoMLJobV2Request& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The security configuration for traffic encryption or Amazon VPC settings.</p>
     */
    inline const AutoMLSecurityConfig& GetSecurityConfig() const { return m_securityConfig; }
    inline bool SecurityConfigHasBeenSet() const { return m_securityConfigHasBeenSet; }
    template<typename SecurityConfigT = AutoMLSecurityConfig>
    void SetSecurityConfig(SecurityConfigT&& value) { m_securityConfigHasBeenSet = true; m_securityConfig = std::forward<SecurityConfigT>(value); }
    template<typename SecurityConfigT = AutoMLSecurityConfig>
    CreateAutoMLJobV2Request& WithSecurityConfig(SecurityConfigT&& value) { SetSecurityConfig(std::forward<SecurityConfigT>(value)); return *this;}
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
    inline const AutoMLJobObjective& GetAutoMLJobObjective() const { return m_autoMLJobObjective; }
    inline bool AutoMLJobObjectiveHasBeenSet() const { return m_autoMLJobObjectiveHasBeenSet; }
    template<typename AutoMLJobObjectiveT = AutoMLJobObjective>
    void SetAutoMLJobObjective(AutoMLJobObjectiveT&& value) { m_autoMLJobObjectiveHasBeenSet = true; m_autoMLJobObjective = std::forward<AutoMLJobObjectiveT>(value); }
    template<typename AutoMLJobObjectiveT = AutoMLJobObjective>
    CreateAutoMLJobV2Request& WithAutoMLJobObjective(AutoMLJobObjectiveT&& value) { SetAutoMLJobObjective(std::forward<AutoMLJobObjectiveT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how to generate the endpoint name for an automatic one-click
     * Autopilot model deployment.</p>
     */
    inline const ModelDeployConfig& GetModelDeployConfig() const { return m_modelDeployConfig; }
    inline bool ModelDeployConfigHasBeenSet() const { return m_modelDeployConfigHasBeenSet; }
    template<typename ModelDeployConfigT = ModelDeployConfig>
    void SetModelDeployConfig(ModelDeployConfigT&& value) { m_modelDeployConfigHasBeenSet = true; m_modelDeployConfig = std::forward<ModelDeployConfigT>(value); }
    template<typename ModelDeployConfigT = ModelDeployConfig>
    CreateAutoMLJobV2Request& WithModelDeployConfig(ModelDeployConfigT&& value) { SetModelDeployConfig(std::forward<ModelDeployConfigT>(value)); return *this;}
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
    inline const AutoMLDataSplitConfig& GetDataSplitConfig() const { return m_dataSplitConfig; }
    inline bool DataSplitConfigHasBeenSet() const { return m_dataSplitConfigHasBeenSet; }
    template<typename DataSplitConfigT = AutoMLDataSplitConfig>
    void SetDataSplitConfig(DataSplitConfigT&& value) { m_dataSplitConfigHasBeenSet = true; m_dataSplitConfig = std::forward<DataSplitConfigT>(value); }
    template<typename DataSplitConfigT = AutoMLDataSplitConfig>
    CreateAutoMLJobV2Request& WithDataSplitConfig(DataSplitConfigT&& value) { SetDataSplitConfig(std::forward<DataSplitConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the compute configuration for the AutoML job V2.</p>
     */
    inline const AutoMLComputeConfig& GetAutoMLComputeConfig() const { return m_autoMLComputeConfig; }
    inline bool AutoMLComputeConfigHasBeenSet() const { return m_autoMLComputeConfigHasBeenSet; }
    template<typename AutoMLComputeConfigT = AutoMLComputeConfig>
    void SetAutoMLComputeConfig(AutoMLComputeConfigT&& value) { m_autoMLComputeConfigHasBeenSet = true; m_autoMLComputeConfig = std::forward<AutoMLComputeConfigT>(value); }
    template<typename AutoMLComputeConfigT = AutoMLComputeConfig>
    CreateAutoMLJobV2Request& WithAutoMLComputeConfig(AutoMLComputeConfigT&& value) { SetAutoMLComputeConfig(std::forward<AutoMLComputeConfigT>(value)); return *this;}
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
