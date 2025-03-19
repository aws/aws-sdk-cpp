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
    AWS_SAGEMAKER_API DescribeOptimizationJobResult() = default;
    AWS_SAGEMAKER_API DescribeOptimizationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeOptimizationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the optimization job.</p>
     */
    inline const Aws::String& GetOptimizationJobArn() const { return m_optimizationJobArn; }
    template<typename OptimizationJobArnT = Aws::String>
    void SetOptimizationJobArn(OptimizationJobArnT&& value) { m_optimizationJobArnHasBeenSet = true; m_optimizationJobArn = std::forward<OptimizationJobArnT>(value); }
    template<typename OptimizationJobArnT = Aws::String>
    DescribeOptimizationJobResult& WithOptimizationJobArn(OptimizationJobArnT&& value) { SetOptimizationJobArn(std::forward<OptimizationJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the optimization job.</p>
     */
    inline OptimizationJobStatus GetOptimizationJobStatus() const { return m_optimizationJobStatus; }
    inline void SetOptimizationJobStatus(OptimizationJobStatus value) { m_optimizationJobStatusHasBeenSet = true; m_optimizationJobStatus = value; }
    inline DescribeOptimizationJobResult& WithOptimizationJobStatus(OptimizationJobStatus value) { SetOptimizationJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the optimization job started.</p>
     */
    inline const Aws::Utils::DateTime& GetOptimizationStartTime() const { return m_optimizationStartTime; }
    template<typename OptimizationStartTimeT = Aws::Utils::DateTime>
    void SetOptimizationStartTime(OptimizationStartTimeT&& value) { m_optimizationStartTimeHasBeenSet = true; m_optimizationStartTime = std::forward<OptimizationStartTimeT>(value); }
    template<typename OptimizationStartTimeT = Aws::Utils::DateTime>
    DescribeOptimizationJobResult& WithOptimizationStartTime(OptimizationStartTimeT&& value) { SetOptimizationStartTime(std::forward<OptimizationStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the optimization job finished processing.</p>
     */
    inline const Aws::Utils::DateTime& GetOptimizationEndTime() const { return m_optimizationEndTime; }
    template<typename OptimizationEndTimeT = Aws::Utils::DateTime>
    void SetOptimizationEndTime(OptimizationEndTimeT&& value) { m_optimizationEndTimeHasBeenSet = true; m_optimizationEndTime = std::forward<OptimizationEndTimeT>(value); }
    template<typename OptimizationEndTimeT = Aws::Utils::DateTime>
    DescribeOptimizationJobResult& WithOptimizationEndTime(OptimizationEndTimeT&& value) { SetOptimizationEndTime(std::forward<OptimizationEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when you created the optimization job.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeOptimizationJobResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the optimization job was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeOptimizationJobResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the optimization job status is <code>FAILED</code>, the reason for the
     * failure.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeOptimizationJobResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that you assigned to the optimization job.</p>
     */
    inline const Aws::String& GetOptimizationJobName() const { return m_optimizationJobName; }
    template<typename OptimizationJobNameT = Aws::String>
    void SetOptimizationJobName(OptimizationJobNameT&& value) { m_optimizationJobNameHasBeenSet = true; m_optimizationJobName = std::forward<OptimizationJobNameT>(value); }
    template<typename OptimizationJobNameT = Aws::String>
    DescribeOptimizationJobResult& WithOptimizationJobName(OptimizationJobNameT&& value) { SetOptimizationJobName(std::forward<OptimizationJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the source model to optimize with an optimization job.</p>
     */
    inline const OptimizationJobModelSource& GetModelSource() const { return m_modelSource; }
    template<typename ModelSourceT = OptimizationJobModelSource>
    void SetModelSource(ModelSourceT&& value) { m_modelSourceHasBeenSet = true; m_modelSource = std::forward<ModelSourceT>(value); }
    template<typename ModelSourceT = OptimizationJobModelSource>
    DescribeOptimizationJobResult& WithModelSource(ModelSourceT&& value) { SetModelSource(std::forward<ModelSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables to set in the model container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOptimizationEnvironment() const { return m_optimizationEnvironment; }
    template<typename OptimizationEnvironmentT = Aws::Map<Aws::String, Aws::String>>
    void SetOptimizationEnvironment(OptimizationEnvironmentT&& value) { m_optimizationEnvironmentHasBeenSet = true; m_optimizationEnvironment = std::forward<OptimizationEnvironmentT>(value); }
    template<typename OptimizationEnvironmentT = Aws::Map<Aws::String, Aws::String>>
    DescribeOptimizationJobResult& WithOptimizationEnvironment(OptimizationEnvironmentT&& value) { SetOptimizationEnvironment(std::forward<OptimizationEnvironmentT>(value)); return *this;}
    template<typename OptimizationEnvironmentKeyT = Aws::String, typename OptimizationEnvironmentValueT = Aws::String>
    DescribeOptimizationJobResult& AddOptimizationEnvironment(OptimizationEnvironmentKeyT&& key, OptimizationEnvironmentValueT&& value) {
      m_optimizationEnvironmentHasBeenSet = true; m_optimizationEnvironment.emplace(std::forward<OptimizationEnvironmentKeyT>(key), std::forward<OptimizationEnvironmentValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The type of instance that hosts the optimized model that you create with the
     * optimization job.</p>
     */
    inline OptimizationJobDeploymentInstanceType GetDeploymentInstanceType() const { return m_deploymentInstanceType; }
    inline void SetDeploymentInstanceType(OptimizationJobDeploymentInstanceType value) { m_deploymentInstanceTypeHasBeenSet = true; m_deploymentInstanceType = value; }
    inline DescribeOptimizationJobResult& WithDeploymentInstanceType(OptimizationJobDeploymentInstanceType value) { SetDeploymentInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for each of the optimization techniques that the job applies.</p>
     */
    inline const Aws::Vector<OptimizationConfig>& GetOptimizationConfigs() const { return m_optimizationConfigs; }
    template<typename OptimizationConfigsT = Aws::Vector<OptimizationConfig>>
    void SetOptimizationConfigs(OptimizationConfigsT&& value) { m_optimizationConfigsHasBeenSet = true; m_optimizationConfigs = std::forward<OptimizationConfigsT>(value); }
    template<typename OptimizationConfigsT = Aws::Vector<OptimizationConfig>>
    DescribeOptimizationJobResult& WithOptimizationConfigs(OptimizationConfigsT&& value) { SetOptimizationConfigs(std::forward<OptimizationConfigsT>(value)); return *this;}
    template<typename OptimizationConfigsT = OptimizationConfig>
    DescribeOptimizationJobResult& AddOptimizationConfigs(OptimizationConfigsT&& value) { m_optimizationConfigsHasBeenSet = true; m_optimizationConfigs.emplace_back(std::forward<OptimizationConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details for where to store the optimized model that you create with the
     * optimization job.</p>
     */
    inline const OptimizationJobOutputConfig& GetOutputConfig() const { return m_outputConfig; }
    template<typename OutputConfigT = OptimizationJobOutputConfig>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = OptimizationJobOutputConfig>
    DescribeOptimizationJobResult& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Output values produced by an optimization job.</p>
     */
    inline const OptimizationOutput& GetOptimizationOutput() const { return m_optimizationOutput; }
    template<typename OptimizationOutputT = OptimizationOutput>
    void SetOptimizationOutput(OptimizationOutputT&& value) { m_optimizationOutputHasBeenSet = true; m_optimizationOutput = std::forward<OptimizationOutputT>(value); }
    template<typename OptimizationOutputT = OptimizationOutput>
    DescribeOptimizationJobResult& WithOptimizationOutput(OptimizationOutputT&& value) { SetOptimizationOutput(std::forward<OptimizationOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that you assigned to the optimization job.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeOptimizationJobResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const StoppingCondition& GetStoppingCondition() const { return m_stoppingCondition; }
    template<typename StoppingConditionT = StoppingCondition>
    void SetStoppingCondition(StoppingConditionT&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::forward<StoppingConditionT>(value); }
    template<typename StoppingConditionT = StoppingCondition>
    DescribeOptimizationJobResult& WithStoppingCondition(StoppingConditionT&& value) { SetStoppingCondition(std::forward<StoppingConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A VPC in Amazon VPC that your optimized model has access to.</p>
     */
    inline const OptimizationVpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    template<typename VpcConfigT = OptimizationVpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = OptimizationVpcConfig>
    DescribeOptimizationJobResult& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeOptimizationJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_optimizationJobArn;
    bool m_optimizationJobArnHasBeenSet = false;

    OptimizationJobStatus m_optimizationJobStatus{OptimizationJobStatus::NOT_SET};
    bool m_optimizationJobStatusHasBeenSet = false;

    Aws::Utils::DateTime m_optimizationStartTime{};
    bool m_optimizationStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_optimizationEndTime{};
    bool m_optimizationEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_optimizationJobName;
    bool m_optimizationJobNameHasBeenSet = false;

    OptimizationJobModelSource m_modelSource;
    bool m_modelSourceHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_optimizationEnvironment;
    bool m_optimizationEnvironmentHasBeenSet = false;

    OptimizationJobDeploymentInstanceType m_deploymentInstanceType{OptimizationJobDeploymentInstanceType::NOT_SET};
    bool m_deploymentInstanceTypeHasBeenSet = false;

    Aws::Vector<OptimizationConfig> m_optimizationConfigs;
    bool m_optimizationConfigsHasBeenSet = false;

    OptimizationJobOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    OptimizationOutput m_optimizationOutput;
    bool m_optimizationOutputHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    StoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet = false;

    OptimizationVpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
