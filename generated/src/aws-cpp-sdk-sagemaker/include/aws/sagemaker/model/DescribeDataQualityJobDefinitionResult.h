/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/DataQualityBaselineConfig.h>
#include <aws/sagemaker/model/DataQualityAppSpecification.h>
#include <aws/sagemaker/model/DataQualityJobInput.h>
#include <aws/sagemaker/model/MonitoringOutputConfig.h>
#include <aws/sagemaker/model/MonitoringResources.h>
#include <aws/sagemaker/model/MonitoringNetworkConfig.h>
#include <aws/sagemaker/model/MonitoringStoppingCondition.h>
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
  class DescribeDataQualityJobDefinitionResult
  {
  public:
    AWS_SAGEMAKER_API DescribeDataQualityJobDefinitionResult() = default;
    AWS_SAGEMAKER_API DescribeDataQualityJobDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeDataQualityJobDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the data quality monitoring job
     * definition.</p>
     */
    inline const Aws::String& GetJobDefinitionArn() const { return m_jobDefinitionArn; }
    template<typename JobDefinitionArnT = Aws::String>
    void SetJobDefinitionArn(JobDefinitionArnT&& value) { m_jobDefinitionArnHasBeenSet = true; m_jobDefinitionArn = std::forward<JobDefinitionArnT>(value); }
    template<typename JobDefinitionArnT = Aws::String>
    DescribeDataQualityJobDefinitionResult& WithJobDefinitionArn(JobDefinitionArnT&& value) { SetJobDefinitionArn(std::forward<JobDefinitionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data quality monitoring job definition.</p>
     */
    inline const Aws::String& GetJobDefinitionName() const { return m_jobDefinitionName; }
    template<typename JobDefinitionNameT = Aws::String>
    void SetJobDefinitionName(JobDefinitionNameT&& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = std::forward<JobDefinitionNameT>(value); }
    template<typename JobDefinitionNameT = Aws::String>
    DescribeDataQualityJobDefinitionResult& WithJobDefinitionName(JobDefinitionNameT&& value) { SetJobDefinitionName(std::forward<JobDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the data quality monitoring job definition was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeDataQualityJobDefinitionResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The constraints and baselines for the data quality monitoring job
     * definition.</p>
     */
    inline const DataQualityBaselineConfig& GetDataQualityBaselineConfig() const { return m_dataQualityBaselineConfig; }
    template<typename DataQualityBaselineConfigT = DataQualityBaselineConfig>
    void SetDataQualityBaselineConfig(DataQualityBaselineConfigT&& value) { m_dataQualityBaselineConfigHasBeenSet = true; m_dataQualityBaselineConfig = std::forward<DataQualityBaselineConfigT>(value); }
    template<typename DataQualityBaselineConfigT = DataQualityBaselineConfig>
    DescribeDataQualityJobDefinitionResult& WithDataQualityBaselineConfig(DataQualityBaselineConfigT&& value) { SetDataQualityBaselineConfig(std::forward<DataQualityBaselineConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the container that runs the data quality monitoring
     * job.</p>
     */
    inline const DataQualityAppSpecification& GetDataQualityAppSpecification() const { return m_dataQualityAppSpecification; }
    template<typename DataQualityAppSpecificationT = DataQualityAppSpecification>
    void SetDataQualityAppSpecification(DataQualityAppSpecificationT&& value) { m_dataQualityAppSpecificationHasBeenSet = true; m_dataQualityAppSpecification = std::forward<DataQualityAppSpecificationT>(value); }
    template<typename DataQualityAppSpecificationT = DataQualityAppSpecification>
    DescribeDataQualityJobDefinitionResult& WithDataQualityAppSpecification(DataQualityAppSpecificationT&& value) { SetDataQualityAppSpecification(std::forward<DataQualityAppSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of inputs for the data quality monitoring job. Currently endpoints
     * are supported.</p>
     */
    inline const DataQualityJobInput& GetDataQualityJobInput() const { return m_dataQualityJobInput; }
    template<typename DataQualityJobInputT = DataQualityJobInput>
    void SetDataQualityJobInput(DataQualityJobInputT&& value) { m_dataQualityJobInputHasBeenSet = true; m_dataQualityJobInput = std::forward<DataQualityJobInputT>(value); }
    template<typename DataQualityJobInputT = DataQualityJobInput>
    DescribeDataQualityJobDefinitionResult& WithDataQualityJobInput(DataQualityJobInputT&& value) { SetDataQualityJobInput(std::forward<DataQualityJobInputT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringOutputConfig& GetDataQualityJobOutputConfig() const { return m_dataQualityJobOutputConfig; }
    template<typename DataQualityJobOutputConfigT = MonitoringOutputConfig>
    void SetDataQualityJobOutputConfig(DataQualityJobOutputConfigT&& value) { m_dataQualityJobOutputConfigHasBeenSet = true; m_dataQualityJobOutputConfig = std::forward<DataQualityJobOutputConfigT>(value); }
    template<typename DataQualityJobOutputConfigT = MonitoringOutputConfig>
    DescribeDataQualityJobDefinitionResult& WithDataQualityJobOutputConfig(DataQualityJobOutputConfigT&& value) { SetDataQualityJobOutputConfig(std::forward<DataQualityJobOutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringResources& GetJobResources() const { return m_jobResources; }
    template<typename JobResourcesT = MonitoringResources>
    void SetJobResources(JobResourcesT&& value) { m_jobResourcesHasBeenSet = true; m_jobResources = std::forward<JobResourcesT>(value); }
    template<typename JobResourcesT = MonitoringResources>
    DescribeDataQualityJobDefinitionResult& WithJobResources(JobResourcesT&& value) { SetJobResources(std::forward<JobResourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The networking configuration for the data quality monitoring job.</p>
     */
    inline const MonitoringNetworkConfig& GetNetworkConfig() const { return m_networkConfig; }
    template<typename NetworkConfigT = MonitoringNetworkConfig>
    void SetNetworkConfig(NetworkConfigT&& value) { m_networkConfigHasBeenSet = true; m_networkConfig = std::forward<NetworkConfigT>(value); }
    template<typename NetworkConfigT = MonitoringNetworkConfig>
    DescribeDataQualityJobDefinitionResult& WithNetworkConfig(NetworkConfigT&& value) { SetNetworkConfig(std::forward<NetworkConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker AI can
     * assume to perform tasks on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeDataQualityJobDefinitionResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringStoppingCondition& GetStoppingCondition() const { return m_stoppingCondition; }
    template<typename StoppingConditionT = MonitoringStoppingCondition>
    void SetStoppingCondition(StoppingConditionT&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::forward<StoppingConditionT>(value); }
    template<typename StoppingConditionT = MonitoringStoppingCondition>
    DescribeDataQualityJobDefinitionResult& WithStoppingCondition(StoppingConditionT&& value) { SetStoppingCondition(std::forward<StoppingConditionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDataQualityJobDefinitionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobDefinitionArn;
    bool m_jobDefinitionArnHasBeenSet = false;

    Aws::String m_jobDefinitionName;
    bool m_jobDefinitionNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    DataQualityBaselineConfig m_dataQualityBaselineConfig;
    bool m_dataQualityBaselineConfigHasBeenSet = false;

    DataQualityAppSpecification m_dataQualityAppSpecification;
    bool m_dataQualityAppSpecificationHasBeenSet = false;

    DataQualityJobInput m_dataQualityJobInput;
    bool m_dataQualityJobInputHasBeenSet = false;

    MonitoringOutputConfig m_dataQualityJobOutputConfig;
    bool m_dataQualityJobOutputConfigHasBeenSet = false;

    MonitoringResources m_jobResources;
    bool m_jobResourcesHasBeenSet = false;

    MonitoringNetworkConfig m_networkConfig;
    bool m_networkConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    MonitoringStoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
