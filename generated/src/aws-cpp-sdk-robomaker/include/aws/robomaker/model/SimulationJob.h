/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/SimulationJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/robomaker/model/FailureBehavior.h>
#include <aws/robomaker/model/SimulationJobErrorCode.h>
#include <aws/robomaker/model/OutputLocation.h>
#include <aws/robomaker/model/LoggingConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/robomaker/model/VPCConfigResponse.h>
#include <aws/robomaker/model/NetworkInterface.h>
#include <aws/robomaker/model/ComputeResponse.h>
#include <aws/robomaker/model/RobotApplicationConfig.h>
#include <aws/robomaker/model/SimulationApplicationConfig.h>
#include <aws/robomaker/model/DataSource.h>
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
   * <p>Information about a simulation job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/SimulationJob">AWS
   * API Reference</a></p>
   */
  class SimulationJob
  {
  public:
    AWS_ROBOMAKER_API SimulationJob() = default;
    AWS_ROBOMAKER_API SimulationJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API SimulationJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    SimulationJob& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the simulation job.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SimulationJob& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the simulation job.</p>
     */
    inline SimulationJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SimulationJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SimulationJob& WithStatus(SimulationJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * started.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStartedAt() const { return m_lastStartedAt; }
    inline bool LastStartedAtHasBeenSet() const { return m_lastStartedAtHasBeenSet; }
    template<typename LastStartedAtT = Aws::Utils::DateTime>
    void SetLastStartedAt(LastStartedAtT&& value) { m_lastStartedAtHasBeenSet = true; m_lastStartedAt = std::forward<LastStartedAtT>(value); }
    template<typename LastStartedAtT = Aws::Utils::DateTime>
    SimulationJob& WithLastStartedAt(LastStartedAtT&& value) { SetLastStartedAt(std::forward<LastStartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    SimulationJob& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
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
    inline SimulationJob& WithFailureBehavior(FailureBehavior value) { SetFailureBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure code of the simulation job if it failed.</p>
     */
    inline SimulationJobErrorCode GetFailureCode() const { return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    inline void SetFailureCode(SimulationJobErrorCode value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline SimulationJob& WithFailureCode(SimulationJobErrorCode value) { SetFailureCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why the simulation job failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    SimulationJob& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for this <code>SimulationJob</code> request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    SimulationJob& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Location for output files generated by the simulation job.</p>
     */
    inline const OutputLocation& GetOutputLocation() const { return m_outputLocation; }
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }
    template<typename OutputLocationT = OutputLocation>
    void SetOutputLocation(OutputLocationT&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::forward<OutputLocationT>(value); }
    template<typename OutputLocationT = OutputLocation>
    SimulationJob& WithOutputLocation(OutputLocationT&& value) { SetOutputLocation(std::forward<OutputLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logging configuration.</p>
     */
    inline const LoggingConfig& GetLoggingConfig() const { return m_loggingConfig; }
    inline bool LoggingConfigHasBeenSet() const { return m_loggingConfigHasBeenSet; }
    template<typename LoggingConfigT = LoggingConfig>
    void SetLoggingConfig(LoggingConfigT&& value) { m_loggingConfigHasBeenSet = true; m_loggingConfig = std::forward<LoggingConfigT>(value); }
    template<typename LoggingConfigT = LoggingConfig>
    SimulationJob& WithLoggingConfig(LoggingConfigT&& value) { SetLoggingConfig(std::forward<LoggingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum simulation job duration in seconds. The value must be 8 days
     * (691,200 seconds) or less.</p>
     */
    inline long long GetMaxJobDurationInSeconds() const { return m_maxJobDurationInSeconds; }
    inline bool MaxJobDurationInSecondsHasBeenSet() const { return m_maxJobDurationInSecondsHasBeenSet; }
    inline void SetMaxJobDurationInSeconds(long long value) { m_maxJobDurationInSecondsHasBeenSet = true; m_maxJobDurationInSeconds = value; }
    inline SimulationJob& WithMaxJobDurationInSeconds(long long value) { SetMaxJobDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The simulation job execution duration in milliseconds.</p>
     */
    inline long long GetSimulationTimeMillis() const { return m_simulationTimeMillis; }
    inline bool SimulationTimeMillisHasBeenSet() const { return m_simulationTimeMillisHasBeenSet; }
    inline void SetSimulationTimeMillis(long long value) { m_simulationTimeMillisHasBeenSet = true; m_simulationTimeMillis = value; }
    inline SimulationJob& WithSimulationTimeMillis(long long value) { SetSimulationTimeMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that allows the simulation instance to call the AWS APIs that
     * are specified in its associated policies on your behalf. This is how credentials
     * are passed in to your simulation job. </p>
     */
    inline const Aws::String& GetIamRole() const { return m_iamRole; }
    inline bool IamRoleHasBeenSet() const { return m_iamRoleHasBeenSet; }
    template<typename IamRoleT = Aws::String>
    void SetIamRole(IamRoleT&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::forward<IamRoleT>(value); }
    template<typename IamRoleT = Aws::String>
    SimulationJob& WithIamRole(IamRoleT&& value) { SetIamRole(std::forward<IamRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of robot applications.</p>
     */
    inline const Aws::Vector<RobotApplicationConfig>& GetRobotApplications() const { return m_robotApplications; }
    inline bool RobotApplicationsHasBeenSet() const { return m_robotApplicationsHasBeenSet; }
    template<typename RobotApplicationsT = Aws::Vector<RobotApplicationConfig>>
    void SetRobotApplications(RobotApplicationsT&& value) { m_robotApplicationsHasBeenSet = true; m_robotApplications = std::forward<RobotApplicationsT>(value); }
    template<typename RobotApplicationsT = Aws::Vector<RobotApplicationConfig>>
    SimulationJob& WithRobotApplications(RobotApplicationsT&& value) { SetRobotApplications(std::forward<RobotApplicationsT>(value)); return *this;}
    template<typename RobotApplicationsT = RobotApplicationConfig>
    SimulationJob& AddRobotApplications(RobotApplicationsT&& value) { m_robotApplicationsHasBeenSet = true; m_robotApplications.emplace_back(std::forward<RobotApplicationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of simulation applications.</p>
     */
    inline const Aws::Vector<SimulationApplicationConfig>& GetSimulationApplications() const { return m_simulationApplications; }
    inline bool SimulationApplicationsHasBeenSet() const { return m_simulationApplicationsHasBeenSet; }
    template<typename SimulationApplicationsT = Aws::Vector<SimulationApplicationConfig>>
    void SetSimulationApplications(SimulationApplicationsT&& value) { m_simulationApplicationsHasBeenSet = true; m_simulationApplications = std::forward<SimulationApplicationsT>(value); }
    template<typename SimulationApplicationsT = Aws::Vector<SimulationApplicationConfig>>
    SimulationJob& WithSimulationApplications(SimulationApplicationsT&& value) { SetSimulationApplications(std::forward<SimulationApplicationsT>(value)); return *this;}
    template<typename SimulationApplicationsT = SimulationApplicationConfig>
    SimulationJob& AddSimulationApplications(SimulationApplicationsT&& value) { m_simulationApplicationsHasBeenSet = true; m_simulationApplications.emplace_back(std::forward<SimulationApplicationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data sources for the simulation job.</p>
     */
    inline const Aws::Vector<DataSource>& GetDataSources() const { return m_dataSources; }
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }
    template<typename DataSourcesT = Aws::Vector<DataSource>>
    void SetDataSources(DataSourcesT&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::forward<DataSourcesT>(value); }
    template<typename DataSourcesT = Aws::Vector<DataSource>>
    SimulationJob& WithDataSources(DataSourcesT&& value) { SetDataSources(std::forward<DataSourcesT>(value)); return *this;}
    template<typename DataSourcesT = DataSource>
    SimulationJob& AddDataSources(DataSourcesT&& value) { m_dataSourcesHasBeenSet = true; m_dataSources.emplace_back(std::forward<DataSourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    SimulationJob& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    SimulationJob& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>VPC configuration information.</p>
     */
    inline const VPCConfigResponse& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VPCConfigResponse>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VPCConfigResponse>
    SimulationJob& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a network interface.</p>
     */
    inline const NetworkInterface& GetNetworkInterface() const { return m_networkInterface; }
    inline bool NetworkInterfaceHasBeenSet() const { return m_networkInterfaceHasBeenSet; }
    template<typename NetworkInterfaceT = NetworkInterface>
    void SetNetworkInterface(NetworkInterfaceT&& value) { m_networkInterfaceHasBeenSet = true; m_networkInterface = std::forward<NetworkInterfaceT>(value); }
    template<typename NetworkInterfaceT = NetworkInterface>
    SimulationJob& WithNetworkInterface(NetworkInterfaceT&& value) { SetNetworkInterface(std::forward<NetworkInterfaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Compute information for the simulation job</p>
     */
    inline const ComputeResponse& GetCompute() const { return m_compute; }
    inline bool ComputeHasBeenSet() const { return m_computeHasBeenSet; }
    template<typename ComputeT = ComputeResponse>
    void SetCompute(ComputeT&& value) { m_computeHasBeenSet = true; m_compute = std::forward<ComputeT>(value); }
    template<typename ComputeT = ComputeResponse>
    SimulationJob& WithCompute(ComputeT&& value) { SetCompute(std::forward<ComputeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SimulationJobStatus m_status{SimulationJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastStartedAt{};
    bool m_lastStartedAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    FailureBehavior m_failureBehavior{FailureBehavior::NOT_SET};
    bool m_failureBehaviorHasBeenSet = false;

    SimulationJobErrorCode m_failureCode{SimulationJobErrorCode::NOT_SET};
    bool m_failureCodeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    OutputLocation m_outputLocation;
    bool m_outputLocationHasBeenSet = false;

    LoggingConfig m_loggingConfig;
    bool m_loggingConfigHasBeenSet = false;

    long long m_maxJobDurationInSeconds{0};
    bool m_maxJobDurationInSecondsHasBeenSet = false;

    long long m_simulationTimeMillis{0};
    bool m_simulationTimeMillisHasBeenSet = false;

    Aws::String m_iamRole;
    bool m_iamRoleHasBeenSet = false;

    Aws::Vector<RobotApplicationConfig> m_robotApplications;
    bool m_robotApplicationsHasBeenSet = false;

    Aws::Vector<SimulationApplicationConfig> m_simulationApplications;
    bool m_simulationApplicationsHasBeenSet = false;

    Aws::Vector<DataSource> m_dataSources;
    bool m_dataSourcesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    VPCConfigResponse m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    NetworkInterface m_networkInterface;
    bool m_networkInterfaceHasBeenSet = false;

    ComputeResponse m_compute;
    bool m_computeHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
