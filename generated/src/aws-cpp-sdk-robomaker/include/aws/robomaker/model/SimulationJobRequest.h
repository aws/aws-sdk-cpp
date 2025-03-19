/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/model/OutputLocation.h>
#include <aws/robomaker/model/LoggingConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/FailureBehavior.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/VPCConfig.h>
#include <aws/robomaker/model/Compute.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/robomaker/model/RobotApplicationConfig.h>
#include <aws/robomaker/model/SimulationApplicationConfig.h>
#include <aws/robomaker/model/DataSourceConfig.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about a simulation job request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/SimulationJobRequest">AWS
   * API Reference</a></p>
   */
  class SimulationJobRequest
  {
  public:
    AWS_ROBOMAKER_API SimulationJobRequest() = default;
    AWS_ROBOMAKER_API SimulationJobRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API SimulationJobRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const OutputLocation& GetOutputLocation() const { return m_outputLocation; }
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }
    template<typename OutputLocationT = OutputLocation>
    void SetOutputLocation(OutputLocationT&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::forward<OutputLocationT>(value); }
    template<typename OutputLocationT = OutputLocation>
    SimulationJobRequest& WithOutputLocation(OutputLocationT&& value) { SetOutputLocation(std::forward<OutputLocationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LoggingConfig& GetLoggingConfig() const { return m_loggingConfig; }
    inline bool LoggingConfigHasBeenSet() const { return m_loggingConfigHasBeenSet; }
    template<typename LoggingConfigT = LoggingConfig>
    void SetLoggingConfig(LoggingConfigT&& value) { m_loggingConfigHasBeenSet = true; m_loggingConfig = std::forward<LoggingConfigT>(value); }
    template<typename LoggingConfigT = LoggingConfig>
    SimulationJobRequest& WithLoggingConfig(LoggingConfigT&& value) { SetLoggingConfig(std::forward<LoggingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum simulation job duration in seconds. The value must be 8 days
     * (691,200 seconds) or less.</p>
     */
    inline long long GetMaxJobDurationInSeconds() const { return m_maxJobDurationInSeconds; }
    inline bool MaxJobDurationInSecondsHasBeenSet() const { return m_maxJobDurationInSecondsHasBeenSet; }
    inline void SetMaxJobDurationInSeconds(long long value) { m_maxJobDurationInSecondsHasBeenSet = true; m_maxJobDurationInSeconds = value; }
    inline SimulationJobRequest& WithMaxJobDurationInSeconds(long long value) { SetMaxJobDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role name that allows the simulation instance to call the AWS APIs
     * that are specified in its associated policies on your behalf. This is how
     * credentials are passed in to your simulation job. </p>
     */
    inline const Aws::String& GetIamRole() const { return m_iamRole; }
    inline bool IamRoleHasBeenSet() const { return m_iamRoleHasBeenSet; }
    template<typename IamRoleT = Aws::String>
    void SetIamRole(IamRoleT&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::forward<IamRoleT>(value); }
    template<typename IamRoleT = Aws::String>
    SimulationJobRequest& WithIamRole(IamRoleT&& value) { SetIamRole(std::forward<IamRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure behavior the simulation job.</p> <dl> <dt>Continue</dt> <dd>
     * <p>Leaves the host running for its maximum timeout duration after a
     * <code>4XX</code> error code.</p> </dd> <dt>Fail</dt> <dd> <p>Stop the simulation
     * job and terminate the instance.</p> </dd> </dl>
     */
    inline FailureBehavior GetFailureBehavior() const { return m_failureBehavior; }
    inline bool FailureBehaviorHasBeenSet() const { return m_failureBehaviorHasBeenSet; }
    inline void SetFailureBehavior(FailureBehavior value) { m_failureBehaviorHasBeenSet = true; m_failureBehavior = value; }
    inline SimulationJobRequest& WithFailureBehavior(FailureBehavior value) { SetFailureBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean indicating whether to use default applications in the simulation
     * job. Default applications include Gazebo, rqt, rviz and terminal access. </p>
     */
    inline bool GetUseDefaultApplications() const { return m_useDefaultApplications; }
    inline bool UseDefaultApplicationsHasBeenSet() const { return m_useDefaultApplicationsHasBeenSet; }
    inline void SetUseDefaultApplications(bool value) { m_useDefaultApplicationsHasBeenSet = true; m_useDefaultApplications = value; }
    inline SimulationJobRequest& WithUseDefaultApplications(bool value) { SetUseDefaultApplications(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The robot applications to use in the simulation job.</p>
     */
    inline const Aws::Vector<RobotApplicationConfig>& GetRobotApplications() const { return m_robotApplications; }
    inline bool RobotApplicationsHasBeenSet() const { return m_robotApplicationsHasBeenSet; }
    template<typename RobotApplicationsT = Aws::Vector<RobotApplicationConfig>>
    void SetRobotApplications(RobotApplicationsT&& value) { m_robotApplicationsHasBeenSet = true; m_robotApplications = std::forward<RobotApplicationsT>(value); }
    template<typename RobotApplicationsT = Aws::Vector<RobotApplicationConfig>>
    SimulationJobRequest& WithRobotApplications(RobotApplicationsT&& value) { SetRobotApplications(std::forward<RobotApplicationsT>(value)); return *this;}
    template<typename RobotApplicationsT = RobotApplicationConfig>
    SimulationJobRequest& AddRobotApplications(RobotApplicationsT&& value) { m_robotApplicationsHasBeenSet = true; m_robotApplications.emplace_back(std::forward<RobotApplicationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The simulation applications to use in the simulation job.</p>
     */
    inline const Aws::Vector<SimulationApplicationConfig>& GetSimulationApplications() const { return m_simulationApplications; }
    inline bool SimulationApplicationsHasBeenSet() const { return m_simulationApplicationsHasBeenSet; }
    template<typename SimulationApplicationsT = Aws::Vector<SimulationApplicationConfig>>
    void SetSimulationApplications(SimulationApplicationsT&& value) { m_simulationApplicationsHasBeenSet = true; m_simulationApplications = std::forward<SimulationApplicationsT>(value); }
    template<typename SimulationApplicationsT = Aws::Vector<SimulationApplicationConfig>>
    SimulationJobRequest& WithSimulationApplications(SimulationApplicationsT&& value) { SetSimulationApplications(std::forward<SimulationApplicationsT>(value)); return *this;}
    template<typename SimulationApplicationsT = SimulationApplicationConfig>
    SimulationJobRequest& AddSimulationApplications(SimulationApplicationsT&& value) { m_simulationApplicationsHasBeenSet = true; m_simulationApplications.emplace_back(std::forward<SimulationApplicationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify data sources to mount read-only files from S3 into your simulation.
     * These files are available under
     * <code>/opt/robomaker/datasources/data_source_name</code>. </p>  <p>There
     * is a limit of 100 files and a combined size of 25GB for all
     * <code>DataSourceConfig</code> objects. </p> 
     */
    inline const Aws::Vector<DataSourceConfig>& GetDataSources() const { return m_dataSources; }
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }
    template<typename DataSourcesT = Aws::Vector<DataSourceConfig>>
    void SetDataSources(DataSourcesT&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::forward<DataSourcesT>(value); }
    template<typename DataSourcesT = Aws::Vector<DataSourceConfig>>
    SimulationJobRequest& WithDataSources(DataSourcesT&& value) { SetDataSources(std::forward<DataSourcesT>(value)); return *this;}
    template<typename DataSourcesT = DataSourceConfig>
    SimulationJobRequest& AddDataSources(DataSourcesT&& value) { m_dataSourcesHasBeenSet = true; m_dataSources.emplace_back(std::forward<DataSourcesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const VPCConfig& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VPCConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VPCConfig>
    SimulationJobRequest& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Compute information for the simulation job</p>
     */
    inline const Compute& GetCompute() const { return m_compute; }
    inline bool ComputeHasBeenSet() const { return m_computeHasBeenSet; }
    template<typename ComputeT = Compute>
    void SetCompute(ComputeT&& value) { m_computeHasBeenSet = true; m_compute = std::forward<ComputeT>(value); }
    template<typename ComputeT = Compute>
    SimulationJobRequest& WithCompute(ComputeT&& value) { SetCompute(std::forward<ComputeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    SimulationJobRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    SimulationJobRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    OutputLocation m_outputLocation;
    bool m_outputLocationHasBeenSet = false;

    LoggingConfig m_loggingConfig;
    bool m_loggingConfigHasBeenSet = false;

    long long m_maxJobDurationInSeconds{0};
    bool m_maxJobDurationInSecondsHasBeenSet = false;

    Aws::String m_iamRole;
    bool m_iamRoleHasBeenSet = false;

    FailureBehavior m_failureBehavior{FailureBehavior::NOT_SET};
    bool m_failureBehaviorHasBeenSet = false;

    bool m_useDefaultApplications{false};
    bool m_useDefaultApplicationsHasBeenSet = false;

    Aws::Vector<RobotApplicationConfig> m_robotApplications;
    bool m_robotApplicationsHasBeenSet = false;

    Aws::Vector<SimulationApplicationConfig> m_simulationApplications;
    bool m_simulationApplicationsHasBeenSet = false;

    Aws::Vector<DataSourceConfig> m_dataSources;
    bool m_dataSourcesHasBeenSet = false;

    VPCConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Compute m_compute;
    bool m_computeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
