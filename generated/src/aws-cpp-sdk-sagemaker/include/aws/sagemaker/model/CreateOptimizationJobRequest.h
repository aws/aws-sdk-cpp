/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/OptimizationJobModelSource.h>
#include <aws/sagemaker/model/OptimizationJobDeploymentInstanceType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/OptimizationJobOutputConfig.h>
#include <aws/sagemaker/model/StoppingCondition.h>
#include <aws/sagemaker/model/OptimizationVpcConfig.h>
#include <aws/sagemaker/model/OptimizationConfig.h>
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
  class CreateOptimizationJobRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateOptimizationJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOptimizationJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A custom name for the new optimization job.</p>
     */
    inline const Aws::String& GetOptimizationJobName() const { return m_optimizationJobName; }
    inline bool OptimizationJobNameHasBeenSet() const { return m_optimizationJobNameHasBeenSet; }
    template<typename OptimizationJobNameT = Aws::String>
    void SetOptimizationJobName(OptimizationJobNameT&& value) { m_optimizationJobNameHasBeenSet = true; m_optimizationJobName = std::forward<OptimizationJobNameT>(value); }
    template<typename OptimizationJobNameT = Aws::String>
    CreateOptimizationJobRequest& WithOptimizationJobName(OptimizationJobNameT&& value) { SetOptimizationJobName(std::forward<OptimizationJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * AI to perform tasks on your behalf. </p> <p>During model optimization, Amazon
     * SageMaker AI needs your permission to:</p> <ul> <li> <p>Read input data from an
     * S3 bucket</p> </li> <li> <p>Write model artifacts to an S3 bucket</p> </li> <li>
     * <p>Write logs to Amazon CloudWatch Logs</p> </li> <li> <p>Publish metrics to
     * Amazon CloudWatch</p> </li> </ul> <p>You grant permissions for all of these
     * tasks to an IAM role. To pass this role to Amazon SageMaker AI, the caller of
     * this API must have the <code>iam:PassRole</code> permission. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker AI Roles.</a> </p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateOptimizationJobRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the source model to optimize with an optimization job.</p>
     */
    inline const OptimizationJobModelSource& GetModelSource() const { return m_modelSource; }
    inline bool ModelSourceHasBeenSet() const { return m_modelSourceHasBeenSet; }
    template<typename ModelSourceT = OptimizationJobModelSource>
    void SetModelSource(ModelSourceT&& value) { m_modelSourceHasBeenSet = true; m_modelSource = std::forward<ModelSourceT>(value); }
    template<typename ModelSourceT = OptimizationJobModelSource>
    CreateOptimizationJobRequest& WithModelSource(ModelSourceT&& value) { SetModelSource(std::forward<ModelSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance that hosts the optimized model that you create with the
     * optimization job.</p>
     */
    inline OptimizationJobDeploymentInstanceType GetDeploymentInstanceType() const { return m_deploymentInstanceType; }
    inline bool DeploymentInstanceTypeHasBeenSet() const { return m_deploymentInstanceTypeHasBeenSet; }
    inline void SetDeploymentInstanceType(OptimizationJobDeploymentInstanceType value) { m_deploymentInstanceTypeHasBeenSet = true; m_deploymentInstanceType = value; }
    inline CreateOptimizationJobRequest& WithDeploymentInstanceType(OptimizationJobDeploymentInstanceType value) { SetDeploymentInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables to set in the model container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOptimizationEnvironment() const { return m_optimizationEnvironment; }
    inline bool OptimizationEnvironmentHasBeenSet() const { return m_optimizationEnvironmentHasBeenSet; }
    template<typename OptimizationEnvironmentT = Aws::Map<Aws::String, Aws::String>>
    void SetOptimizationEnvironment(OptimizationEnvironmentT&& value) { m_optimizationEnvironmentHasBeenSet = true; m_optimizationEnvironment = std::forward<OptimizationEnvironmentT>(value); }
    template<typename OptimizationEnvironmentT = Aws::Map<Aws::String, Aws::String>>
    CreateOptimizationJobRequest& WithOptimizationEnvironment(OptimizationEnvironmentT&& value) { SetOptimizationEnvironment(std::forward<OptimizationEnvironmentT>(value)); return *this;}
    template<typename OptimizationEnvironmentKeyT = Aws::String, typename OptimizationEnvironmentValueT = Aws::String>
    CreateOptimizationJobRequest& AddOptimizationEnvironment(OptimizationEnvironmentKeyT&& key, OptimizationEnvironmentValueT&& value) {
      m_optimizationEnvironmentHasBeenSet = true; m_optimizationEnvironment.emplace(std::forward<OptimizationEnvironmentKeyT>(key), std::forward<OptimizationEnvironmentValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Settings for each of the optimization techniques that the job applies.</p>
     */
    inline const Aws::Vector<OptimizationConfig>& GetOptimizationConfigs() const { return m_optimizationConfigs; }
    inline bool OptimizationConfigsHasBeenSet() const { return m_optimizationConfigsHasBeenSet; }
    template<typename OptimizationConfigsT = Aws::Vector<OptimizationConfig>>
    void SetOptimizationConfigs(OptimizationConfigsT&& value) { m_optimizationConfigsHasBeenSet = true; m_optimizationConfigs = std::forward<OptimizationConfigsT>(value); }
    template<typename OptimizationConfigsT = Aws::Vector<OptimizationConfig>>
    CreateOptimizationJobRequest& WithOptimizationConfigs(OptimizationConfigsT&& value) { SetOptimizationConfigs(std::forward<OptimizationConfigsT>(value)); return *this;}
    template<typename OptimizationConfigsT = OptimizationConfig>
    CreateOptimizationJobRequest& AddOptimizationConfigs(OptimizationConfigsT&& value) { m_optimizationConfigsHasBeenSet = true; m_optimizationConfigs.emplace_back(std::forward<OptimizationConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details for where to store the optimized model that you create with the
     * optimization job.</p>
     */
    inline const OptimizationJobOutputConfig& GetOutputConfig() const { return m_outputConfig; }
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
    template<typename OutputConfigT = OptimizationJobOutputConfig>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = OptimizationJobOutputConfig>
    CreateOptimizationJobRequest& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const StoppingCondition& GetStoppingCondition() const { return m_stoppingCondition; }
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }
    template<typename StoppingConditionT = StoppingCondition>
    void SetStoppingCondition(StoppingConditionT&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::forward<StoppingConditionT>(value); }
    template<typename StoppingConditionT = StoppingCondition>
    CreateOptimizationJobRequest& WithStoppingCondition(StoppingConditionT&& value) { SetStoppingCondition(std::forward<StoppingConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs associated with the optimization job. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateOptimizationJobRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateOptimizationJobRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A VPC in Amazon VPC that your optimized model has access to.</p>
     */
    inline const OptimizationVpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = OptimizationVpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = OptimizationVpcConfig>
    CreateOptimizationJobRequest& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_optimizationJobName;
    bool m_optimizationJobNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    OptimizationJobModelSource m_modelSource;
    bool m_modelSourceHasBeenSet = false;

    OptimizationJobDeploymentInstanceType m_deploymentInstanceType{OptimizationJobDeploymentInstanceType::NOT_SET};
    bool m_deploymentInstanceTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_optimizationEnvironment;
    bool m_optimizationEnvironmentHasBeenSet = false;

    Aws::Vector<OptimizationConfig> m_optimizationConfigs;
    bool m_optimizationConfigsHasBeenSet = false;

    OptimizationJobOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    StoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    OptimizationVpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
