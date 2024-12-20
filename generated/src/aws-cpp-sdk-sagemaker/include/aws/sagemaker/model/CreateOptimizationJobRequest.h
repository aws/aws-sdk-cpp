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
    AWS_SAGEMAKER_API CreateOptimizationJobRequest();

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
    inline const Aws::String& GetOptimizationJobName() const{ return m_optimizationJobName; }
    inline bool OptimizationJobNameHasBeenSet() const { return m_optimizationJobNameHasBeenSet; }
    inline void SetOptimizationJobName(const Aws::String& value) { m_optimizationJobNameHasBeenSet = true; m_optimizationJobName = value; }
    inline void SetOptimizationJobName(Aws::String&& value) { m_optimizationJobNameHasBeenSet = true; m_optimizationJobName = std::move(value); }
    inline void SetOptimizationJobName(const char* value) { m_optimizationJobNameHasBeenSet = true; m_optimizationJobName.assign(value); }
    inline CreateOptimizationJobRequest& WithOptimizationJobName(const Aws::String& value) { SetOptimizationJobName(value); return *this;}
    inline CreateOptimizationJobRequest& WithOptimizationJobName(Aws::String&& value) { SetOptimizationJobName(std::move(value)); return *this;}
    inline CreateOptimizationJobRequest& WithOptimizationJobName(const char* value) { SetOptimizationJobName(value); return *this;}
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
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreateOptimizationJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateOptimizationJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateOptimizationJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the source model to optimize with an optimization job.</p>
     */
    inline const OptimizationJobModelSource& GetModelSource() const{ return m_modelSource; }
    inline bool ModelSourceHasBeenSet() const { return m_modelSourceHasBeenSet; }
    inline void SetModelSource(const OptimizationJobModelSource& value) { m_modelSourceHasBeenSet = true; m_modelSource = value; }
    inline void SetModelSource(OptimizationJobModelSource&& value) { m_modelSourceHasBeenSet = true; m_modelSource = std::move(value); }
    inline CreateOptimizationJobRequest& WithModelSource(const OptimizationJobModelSource& value) { SetModelSource(value); return *this;}
    inline CreateOptimizationJobRequest& WithModelSource(OptimizationJobModelSource&& value) { SetModelSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance that hosts the optimized model that you create with the
     * optimization job.</p>
     */
    inline const OptimizationJobDeploymentInstanceType& GetDeploymentInstanceType() const{ return m_deploymentInstanceType; }
    inline bool DeploymentInstanceTypeHasBeenSet() const { return m_deploymentInstanceTypeHasBeenSet; }
    inline void SetDeploymentInstanceType(const OptimizationJobDeploymentInstanceType& value) { m_deploymentInstanceTypeHasBeenSet = true; m_deploymentInstanceType = value; }
    inline void SetDeploymentInstanceType(OptimizationJobDeploymentInstanceType&& value) { m_deploymentInstanceTypeHasBeenSet = true; m_deploymentInstanceType = std::move(value); }
    inline CreateOptimizationJobRequest& WithDeploymentInstanceType(const OptimizationJobDeploymentInstanceType& value) { SetDeploymentInstanceType(value); return *this;}
    inline CreateOptimizationJobRequest& WithDeploymentInstanceType(OptimizationJobDeploymentInstanceType&& value) { SetDeploymentInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables to set in the model container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOptimizationEnvironment() const{ return m_optimizationEnvironment; }
    inline bool OptimizationEnvironmentHasBeenSet() const { return m_optimizationEnvironmentHasBeenSet; }
    inline void SetOptimizationEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_optimizationEnvironmentHasBeenSet = true; m_optimizationEnvironment = value; }
    inline void SetOptimizationEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_optimizationEnvironmentHasBeenSet = true; m_optimizationEnvironment = std::move(value); }
    inline CreateOptimizationJobRequest& WithOptimizationEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetOptimizationEnvironment(value); return *this;}
    inline CreateOptimizationJobRequest& WithOptimizationEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetOptimizationEnvironment(std::move(value)); return *this;}
    inline CreateOptimizationJobRequest& AddOptimizationEnvironment(const Aws::String& key, const Aws::String& value) { m_optimizationEnvironmentHasBeenSet = true; m_optimizationEnvironment.emplace(key, value); return *this; }
    inline CreateOptimizationJobRequest& AddOptimizationEnvironment(Aws::String&& key, const Aws::String& value) { m_optimizationEnvironmentHasBeenSet = true; m_optimizationEnvironment.emplace(std::move(key), value); return *this; }
    inline CreateOptimizationJobRequest& AddOptimizationEnvironment(const Aws::String& key, Aws::String&& value) { m_optimizationEnvironmentHasBeenSet = true; m_optimizationEnvironment.emplace(key, std::move(value)); return *this; }
    inline CreateOptimizationJobRequest& AddOptimizationEnvironment(Aws::String&& key, Aws::String&& value) { m_optimizationEnvironmentHasBeenSet = true; m_optimizationEnvironment.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateOptimizationJobRequest& AddOptimizationEnvironment(const char* key, Aws::String&& value) { m_optimizationEnvironmentHasBeenSet = true; m_optimizationEnvironment.emplace(key, std::move(value)); return *this; }
    inline CreateOptimizationJobRequest& AddOptimizationEnvironment(Aws::String&& key, const char* value) { m_optimizationEnvironmentHasBeenSet = true; m_optimizationEnvironment.emplace(std::move(key), value); return *this; }
    inline CreateOptimizationJobRequest& AddOptimizationEnvironment(const char* key, const char* value) { m_optimizationEnvironmentHasBeenSet = true; m_optimizationEnvironment.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Settings for each of the optimization techniques that the job applies.</p>
     */
    inline const Aws::Vector<OptimizationConfig>& GetOptimizationConfigs() const{ return m_optimizationConfigs; }
    inline bool OptimizationConfigsHasBeenSet() const { return m_optimizationConfigsHasBeenSet; }
    inline void SetOptimizationConfigs(const Aws::Vector<OptimizationConfig>& value) { m_optimizationConfigsHasBeenSet = true; m_optimizationConfigs = value; }
    inline void SetOptimizationConfigs(Aws::Vector<OptimizationConfig>&& value) { m_optimizationConfigsHasBeenSet = true; m_optimizationConfigs = std::move(value); }
    inline CreateOptimizationJobRequest& WithOptimizationConfigs(const Aws::Vector<OptimizationConfig>& value) { SetOptimizationConfigs(value); return *this;}
    inline CreateOptimizationJobRequest& WithOptimizationConfigs(Aws::Vector<OptimizationConfig>&& value) { SetOptimizationConfigs(std::move(value)); return *this;}
    inline CreateOptimizationJobRequest& AddOptimizationConfigs(const OptimizationConfig& value) { m_optimizationConfigsHasBeenSet = true; m_optimizationConfigs.push_back(value); return *this; }
    inline CreateOptimizationJobRequest& AddOptimizationConfigs(OptimizationConfig&& value) { m_optimizationConfigsHasBeenSet = true; m_optimizationConfigs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details for where to store the optimized model that you create with the
     * optimization job.</p>
     */
    inline const OptimizationJobOutputConfig& GetOutputConfig() const{ return m_outputConfig; }
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
    inline void SetOutputConfig(const OptimizationJobOutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }
    inline void SetOutputConfig(OptimizationJobOutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }
    inline CreateOptimizationJobRequest& WithOutputConfig(const OptimizationJobOutputConfig& value) { SetOutputConfig(value); return *this;}
    inline CreateOptimizationJobRequest& WithOutputConfig(OptimizationJobOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const StoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }
    inline void SetStoppingCondition(const StoppingCondition& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = value; }
    inline void SetStoppingCondition(StoppingCondition&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::move(value); }
    inline CreateOptimizationJobRequest& WithStoppingCondition(const StoppingCondition& value) { SetStoppingCondition(value); return *this;}
    inline CreateOptimizationJobRequest& WithStoppingCondition(StoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs associated with the optimization job. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateOptimizationJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateOptimizationJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateOptimizationJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateOptimizationJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A VPC in Amazon VPC that your optimized model has access to.</p>
     */
    inline const OptimizationVpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    inline void SetVpcConfig(const OptimizationVpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }
    inline void SetVpcConfig(OptimizationVpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }
    inline CreateOptimizationJobRequest& WithVpcConfig(const OptimizationVpcConfig& value) { SetVpcConfig(value); return *this;}
    inline CreateOptimizationJobRequest& WithVpcConfig(OptimizationVpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_optimizationJobName;
    bool m_optimizationJobNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    OptimizationJobModelSource m_modelSource;
    bool m_modelSourceHasBeenSet = false;

    OptimizationJobDeploymentInstanceType m_deploymentInstanceType;
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
