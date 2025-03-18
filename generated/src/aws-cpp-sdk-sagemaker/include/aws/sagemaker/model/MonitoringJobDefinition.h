/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/MonitoringBaselineConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/MonitoringOutputConfig.h>
#include <aws/sagemaker/model/MonitoringResources.h>
#include <aws/sagemaker/model/MonitoringAppSpecification.h>
#include <aws/sagemaker/model/MonitoringStoppingCondition.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/NetworkConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/MonitoringInput.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Defines the monitoring job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringJobDefinition">AWS
   * API Reference</a></p>
   */
  class MonitoringJobDefinition
  {
  public:
    AWS_SAGEMAKER_API MonitoringJobDefinition() = default;
    AWS_SAGEMAKER_API MonitoringJobDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringJobDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Baseline configuration used to validate that the data conforms to the
     * specified constraints and statistics</p>
     */
    inline const MonitoringBaselineConfig& GetBaselineConfig() const { return m_baselineConfig; }
    inline bool BaselineConfigHasBeenSet() const { return m_baselineConfigHasBeenSet; }
    template<typename BaselineConfigT = MonitoringBaselineConfig>
    void SetBaselineConfig(BaselineConfigT&& value) { m_baselineConfigHasBeenSet = true; m_baselineConfig = std::forward<BaselineConfigT>(value); }
    template<typename BaselineConfigT = MonitoringBaselineConfig>
    MonitoringJobDefinition& WithBaselineConfig(BaselineConfigT&& value) { SetBaselineConfig(std::forward<BaselineConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array of inputs for the monitoring job. Currently we support monitoring
     * an Amazon SageMaker AI Endpoint.</p>
     */
    inline const Aws::Vector<MonitoringInput>& GetMonitoringInputs() const { return m_monitoringInputs; }
    inline bool MonitoringInputsHasBeenSet() const { return m_monitoringInputsHasBeenSet; }
    template<typename MonitoringInputsT = Aws::Vector<MonitoringInput>>
    void SetMonitoringInputs(MonitoringInputsT&& value) { m_monitoringInputsHasBeenSet = true; m_monitoringInputs = std::forward<MonitoringInputsT>(value); }
    template<typename MonitoringInputsT = Aws::Vector<MonitoringInput>>
    MonitoringJobDefinition& WithMonitoringInputs(MonitoringInputsT&& value) { SetMonitoringInputs(std::forward<MonitoringInputsT>(value)); return *this;}
    template<typename MonitoringInputsT = MonitoringInput>
    MonitoringJobDefinition& AddMonitoringInputs(MonitoringInputsT&& value) { m_monitoringInputsHasBeenSet = true; m_monitoringInputs.emplace_back(std::forward<MonitoringInputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The array of outputs from the monitoring job to be uploaded to Amazon S3.</p>
     */
    inline const MonitoringOutputConfig& GetMonitoringOutputConfig() const { return m_monitoringOutputConfig; }
    inline bool MonitoringOutputConfigHasBeenSet() const { return m_monitoringOutputConfigHasBeenSet; }
    template<typename MonitoringOutputConfigT = MonitoringOutputConfig>
    void SetMonitoringOutputConfig(MonitoringOutputConfigT&& value) { m_monitoringOutputConfigHasBeenSet = true; m_monitoringOutputConfig = std::forward<MonitoringOutputConfigT>(value); }
    template<typename MonitoringOutputConfigT = MonitoringOutputConfig>
    MonitoringJobDefinition& WithMonitoringOutputConfig(MonitoringOutputConfigT&& value) { SetMonitoringOutputConfig(std::forward<MonitoringOutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the resources, ML compute instances, and ML storage volumes to
     * deploy for a monitoring job. In distributed processing, you specify more than
     * one instance.</p>
     */
    inline const MonitoringResources& GetMonitoringResources() const { return m_monitoringResources; }
    inline bool MonitoringResourcesHasBeenSet() const { return m_monitoringResourcesHasBeenSet; }
    template<typename MonitoringResourcesT = MonitoringResources>
    void SetMonitoringResources(MonitoringResourcesT&& value) { m_monitoringResourcesHasBeenSet = true; m_monitoringResources = std::forward<MonitoringResourcesT>(value); }
    template<typename MonitoringResourcesT = MonitoringResources>
    MonitoringJobDefinition& WithMonitoringResources(MonitoringResourcesT&& value) { SetMonitoringResources(std::forward<MonitoringResourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the monitoring job to run a specified Docker container image.</p>
     */
    inline const MonitoringAppSpecification& GetMonitoringAppSpecification() const { return m_monitoringAppSpecification; }
    inline bool MonitoringAppSpecificationHasBeenSet() const { return m_monitoringAppSpecificationHasBeenSet; }
    template<typename MonitoringAppSpecificationT = MonitoringAppSpecification>
    void SetMonitoringAppSpecification(MonitoringAppSpecificationT&& value) { m_monitoringAppSpecificationHasBeenSet = true; m_monitoringAppSpecification = std::forward<MonitoringAppSpecificationT>(value); }
    template<typename MonitoringAppSpecificationT = MonitoringAppSpecification>
    MonitoringJobDefinition& WithMonitoringAppSpecification(MonitoringAppSpecificationT&& value) { SetMonitoringAppSpecification(std::forward<MonitoringAppSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a time limit for how long the monitoring job is allowed to run.</p>
     */
    inline const MonitoringStoppingCondition& GetStoppingCondition() const { return m_stoppingCondition; }
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }
    template<typename StoppingConditionT = MonitoringStoppingCondition>
    void SetStoppingCondition(StoppingConditionT&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::forward<StoppingConditionT>(value); }
    template<typename StoppingConditionT = MonitoringStoppingCondition>
    MonitoringJobDefinition& WithStoppingCondition(StoppingConditionT&& value) { SetStoppingCondition(std::forward<StoppingConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    MonitoringJobDefinition& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentKeyT = Aws::String, typename EnvironmentValueT = Aws::String>
    MonitoringJobDefinition& AddEnvironment(EnvironmentKeyT&& key, EnvironmentValueT&& value) {
      m_environmentHasBeenSet = true; m_environment.emplace(std::forward<EnvironmentKeyT>(key), std::forward<EnvironmentValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies networking options for an monitoring job.</p>
     */
    inline const NetworkConfig& GetNetworkConfig() const { return m_networkConfig; }
    inline bool NetworkConfigHasBeenSet() const { return m_networkConfigHasBeenSet; }
    template<typename NetworkConfigT = NetworkConfig>
    void SetNetworkConfig(NetworkConfigT&& value) { m_networkConfigHasBeenSet = true; m_networkConfig = std::forward<NetworkConfigT>(value); }
    template<typename NetworkConfigT = NetworkConfig>
    MonitoringJobDefinition& WithNetworkConfig(NetworkConfigT&& value) { SetNetworkConfig(std::forward<NetworkConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker AI can
     * assume to perform tasks on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    MonitoringJobDefinition& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    MonitoringBaselineConfig m_baselineConfig;
    bool m_baselineConfigHasBeenSet = false;

    Aws::Vector<MonitoringInput> m_monitoringInputs;
    bool m_monitoringInputsHasBeenSet = false;

    MonitoringOutputConfig m_monitoringOutputConfig;
    bool m_monitoringOutputConfigHasBeenSet = false;

    MonitoringResources m_monitoringResources;
    bool m_monitoringResourcesHasBeenSet = false;

    MonitoringAppSpecification m_monitoringAppSpecification;
    bool m_monitoringAppSpecificationHasBeenSet = false;

    MonitoringStoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;

    NetworkConfig m_networkConfig;
    bool m_networkConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
