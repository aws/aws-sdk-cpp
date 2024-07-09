/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/OptimizationJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/OptimizationJobModelSource.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/OptimizationJobDeploymentInstanceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/OptimizationJobOutputConfig.h>
#include <aws/sagemaker/model/OptimizationOutput.h>
#include <aws/sagemaker/model/StoppingCondition.h>
#include <aws/sagemaker/model/OptimizationVpcConfig.h>
#include <aws/sagemaker/model/OptimizationConfig.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class DescribeOptimizationJobResult
  {
  public:
    AWS_SAGEMAKER_API DescribeOptimizationJobResult();
    AWS_SAGEMAKER_API DescribeOptimizationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeOptimizationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the optimization job.</p>
     */
    inline const Aws::String& GetOptimizationJobArn() const{ return m_optimizationJobArn; }
    inline void SetOptimizationJobArn(const Aws::String& value) { m_optimizationJobArn = value; }
    inline void SetOptimizationJobArn(Aws::String&& value) { m_optimizationJobArn = std::move(value); }
    inline void SetOptimizationJobArn(const char* value) { m_optimizationJobArn.assign(value); }
    inline DescribeOptimizationJobResult& WithOptimizationJobArn(const Aws::String& value) { SetOptimizationJobArn(value); return *this;}
    inline DescribeOptimizationJobResult& WithOptimizationJobArn(Aws::String&& value) { SetOptimizationJobArn(std::move(value)); return *this;}
    inline DescribeOptimizationJobResult& WithOptimizationJobArn(const char* value) { SetOptimizationJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the optimization job.</p>
     */
    inline const OptimizationJobStatus& GetOptimizationJobStatus() const{ return m_optimizationJobStatus; }
    inline void SetOptimizationJobStatus(const OptimizationJobStatus& value) { m_optimizationJobStatus = value; }
    inline void SetOptimizationJobStatus(OptimizationJobStatus&& value) { m_optimizationJobStatus = std::move(value); }
    inline DescribeOptimizationJobResult& WithOptimizationJobStatus(const OptimizationJobStatus& value) { SetOptimizationJobStatus(value); return *this;}
    inline DescribeOptimizationJobResult& WithOptimizationJobStatus(OptimizationJobStatus&& value) { SetOptimizationJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the optimization job started.</p>
     */
    inline const Aws::Utils::DateTime& GetOptimizationStartTime() const{ return m_optimizationStartTime; }
    inline void SetOptimizationStartTime(const Aws::Utils::DateTime& value) { m_optimizationStartTime = value; }
    inline void SetOptimizationStartTime(Aws::Utils::DateTime&& value) { m_optimizationStartTime = std::move(value); }
    inline DescribeOptimizationJobResult& WithOptimizationStartTime(const Aws::Utils::DateTime& value) { SetOptimizationStartTime(value); return *this;}
    inline DescribeOptimizationJobResult& WithOptimizationStartTime(Aws::Utils::DateTime&& value) { SetOptimizationStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the optimization job finished processing.</p>
     */
    inline const Aws::Utils::DateTime& GetOptimizationEndTime() const{ return m_optimizationEndTime; }
    inline void SetOptimizationEndTime(const Aws::Utils::DateTime& value) { m_optimizationEndTime = value; }
    inline void SetOptimizationEndTime(Aws::Utils::DateTime&& value) { m_optimizationEndTime = std::move(value); }
    inline DescribeOptimizationJobResult& WithOptimizationEndTime(const Aws::Utils::DateTime& value) { SetOptimizationEndTime(value); return *this;}
    inline DescribeOptimizationJobResult& WithOptimizationEndTime(Aws::Utils::DateTime&& value) { SetOptimizationEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when you created the optimization job.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeOptimizationJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeOptimizationJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the optimization job was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeOptimizationJobResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeOptimizationJobResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the optimization job status is <code>FAILED</code>, the reason for the
     * failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline DescribeOptimizationJobResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline DescribeOptimizationJobResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline DescribeOptimizationJobResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that you assigned to the optimization job.</p>
     */
    inline const Aws::String& GetOptimizationJobName() const{ return m_optimizationJobName; }
    inline void SetOptimizationJobName(const Aws::String& value) { m_optimizationJobName = value; }
    inline void SetOptimizationJobName(Aws::String&& value) { m_optimizationJobName = std::move(value); }
    inline void SetOptimizationJobName(const char* value) { m_optimizationJobName.assign(value); }
    inline DescribeOptimizationJobResult& WithOptimizationJobName(const Aws::String& value) { SetOptimizationJobName(value); return *this;}
    inline DescribeOptimizationJobResult& WithOptimizationJobName(Aws::String&& value) { SetOptimizationJobName(std::move(value)); return *this;}
    inline DescribeOptimizationJobResult& WithOptimizationJobName(const char* value) { SetOptimizationJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the source model to optimize with an optimization job.</p>
     */
    inline const OptimizationJobModelSource& GetModelSource() const{ return m_modelSource; }
    inline void SetModelSource(const OptimizationJobModelSource& value) { m_modelSource = value; }
    inline void SetModelSource(OptimizationJobModelSource&& value) { m_modelSource = std::move(value); }
    inline DescribeOptimizationJobResult& WithModelSource(const OptimizationJobModelSource& value) { SetModelSource(value); return *this;}
    inline DescribeOptimizationJobResult& WithModelSource(OptimizationJobModelSource&& value) { SetModelSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables to set in the model container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOptimizationEnvironment() const{ return m_optimizationEnvironment; }
    inline void SetOptimizationEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_optimizationEnvironment = value; }
    inline void SetOptimizationEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_optimizationEnvironment = std::move(value); }
    inline DescribeOptimizationJobResult& WithOptimizationEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetOptimizationEnvironment(value); return *this;}
    inline DescribeOptimizationJobResult& WithOptimizationEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetOptimizationEnvironment(std::move(value)); return *this;}
    inline DescribeOptimizationJobResult& AddOptimizationEnvironment(const Aws::String& key, const Aws::String& value) { m_optimizationEnvironment.emplace(key, value); return *this; }
    inline DescribeOptimizationJobResult& AddOptimizationEnvironment(Aws::String&& key, const Aws::String& value) { m_optimizationEnvironment.emplace(std::move(key), value); return *this; }
    inline DescribeOptimizationJobResult& AddOptimizationEnvironment(const Aws::String& key, Aws::String&& value) { m_optimizationEnvironment.emplace(key, std::move(value)); return *this; }
    inline DescribeOptimizationJobResult& AddOptimizationEnvironment(Aws::String&& key, Aws::String&& value) { m_optimizationEnvironment.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeOptimizationJobResult& AddOptimizationEnvironment(const char* key, Aws::String&& value) { m_optimizationEnvironment.emplace(key, std::move(value)); return *this; }
    inline DescribeOptimizationJobResult& AddOptimizationEnvironment(Aws::String&& key, const char* value) { m_optimizationEnvironment.emplace(std::move(key), value); return *this; }
    inline DescribeOptimizationJobResult& AddOptimizationEnvironment(const char* key, const char* value) { m_optimizationEnvironment.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of instance that hosts the optimized model that you create with the
     * optimization job.</p>
     */
    inline const OptimizationJobDeploymentInstanceType& GetDeploymentInstanceType() const{ return m_deploymentInstanceType; }
    inline void SetDeploymentInstanceType(const OptimizationJobDeploymentInstanceType& value) { m_deploymentInstanceType = value; }
    inline void SetDeploymentInstanceType(OptimizationJobDeploymentInstanceType&& value) { m_deploymentInstanceType = std::move(value); }
    inline DescribeOptimizationJobResult& WithDeploymentInstanceType(const OptimizationJobDeploymentInstanceType& value) { SetDeploymentInstanceType(value); return *this;}
    inline DescribeOptimizationJobResult& WithDeploymentInstanceType(OptimizationJobDeploymentInstanceType&& value) { SetDeploymentInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for each of the optimization techniques that the job applies.</p>
     */
    inline const Aws::Vector<OptimizationConfig>& GetOptimizationConfigs() const{ return m_optimizationConfigs; }
    inline void SetOptimizationConfigs(const Aws::Vector<OptimizationConfig>& value) { m_optimizationConfigs = value; }
    inline void SetOptimizationConfigs(Aws::Vector<OptimizationConfig>&& value) { m_optimizationConfigs = std::move(value); }
    inline DescribeOptimizationJobResult& WithOptimizationConfigs(const Aws::Vector<OptimizationConfig>& value) { SetOptimizationConfigs(value); return *this;}
    inline DescribeOptimizationJobResult& WithOptimizationConfigs(Aws::Vector<OptimizationConfig>&& value) { SetOptimizationConfigs(std::move(value)); return *this;}
    inline DescribeOptimizationJobResult& AddOptimizationConfigs(const OptimizationConfig& value) { m_optimizationConfigs.push_back(value); return *this; }
    inline DescribeOptimizationJobResult& AddOptimizationConfigs(OptimizationConfig&& value) { m_optimizationConfigs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details for where to store the optimized model that you create with the
     * optimization job.</p>
     */
    inline const OptimizationJobOutputConfig& GetOutputConfig() const{ return m_outputConfig; }
    inline void SetOutputConfig(const OptimizationJobOutputConfig& value) { m_outputConfig = value; }
    inline void SetOutputConfig(OptimizationJobOutputConfig&& value) { m_outputConfig = std::move(value); }
    inline DescribeOptimizationJobResult& WithOutputConfig(const OptimizationJobOutputConfig& value) { SetOutputConfig(value); return *this;}
    inline DescribeOptimizationJobResult& WithOutputConfig(OptimizationJobOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Output values produced by an optimization job.</p>
     */
    inline const OptimizationOutput& GetOptimizationOutput() const{ return m_optimizationOutput; }
    inline void SetOptimizationOutput(const OptimizationOutput& value) { m_optimizationOutput = value; }
    inline void SetOptimizationOutput(OptimizationOutput&& value) { m_optimizationOutput = std::move(value); }
    inline DescribeOptimizationJobResult& WithOptimizationOutput(const OptimizationOutput& value) { SetOptimizationOutput(value); return *this;}
    inline DescribeOptimizationJobResult& WithOptimizationOutput(OptimizationOutput&& value) { SetOptimizationOutput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that you assigned to the optimization job.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeOptimizationJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeOptimizationJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeOptimizationJobResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    
    inline const StoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }
    inline void SetStoppingCondition(const StoppingCondition& value) { m_stoppingCondition = value; }
    inline void SetStoppingCondition(StoppingCondition&& value) { m_stoppingCondition = std::move(value); }
    inline DescribeOptimizationJobResult& WithStoppingCondition(const StoppingCondition& value) { SetStoppingCondition(value); return *this;}
    inline DescribeOptimizationJobResult& WithStoppingCondition(StoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A VPC in Amazon VPC that your optimized model has access to.</p>
     */
    inline const OptimizationVpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline void SetVpcConfig(const OptimizationVpcConfig& value) { m_vpcConfig = value; }
    inline void SetVpcConfig(OptimizationVpcConfig&& value) { m_vpcConfig = std::move(value); }
    inline DescribeOptimizationJobResult& WithVpcConfig(const OptimizationVpcConfig& value) { SetVpcConfig(value); return *this;}
    inline DescribeOptimizationJobResult& WithVpcConfig(OptimizationVpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeOptimizationJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeOptimizationJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeOptimizationJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_optimizationJobArn;

    OptimizationJobStatus m_optimizationJobStatus;

    Aws::Utils::DateTime m_optimizationStartTime;

    Aws::Utils::DateTime m_optimizationEndTime;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_failureReason;

    Aws::String m_optimizationJobName;

    OptimizationJobModelSource m_modelSource;

    Aws::Map<Aws::String, Aws::String> m_optimizationEnvironment;

    OptimizationJobDeploymentInstanceType m_deploymentInstanceType;

    Aws::Vector<OptimizationConfig> m_optimizationConfigs;

    OptimizationJobOutputConfig m_outputConfig;

    OptimizationOutput m_optimizationOutput;

    Aws::String m_roleArn;

    StoppingCondition m_stoppingCondition;

    OptimizationVpcConfig m_vpcConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
