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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace RoboMaker
{
namespace Model
{
  class DescribeSimulationJobResult
  {
  public:
    AWS_ROBOMAKER_API DescribeSimulationJobResult() = default;
    AWS_ROBOMAKER_API DescribeSimulationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API DescribeSimulationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribeSimulationJobResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the simulation job.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeSimulationJobResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the simulation job.</p>
     */
    inline SimulationJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(SimulationJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeSimulationJobResult& WithStatus(SimulationJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * started.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStartedAt() const { return m_lastStartedAt; }
    template<typename LastStartedAtT = Aws::Utils::DateTime>
    void SetLastStartedAt(LastStartedAtT&& value) { m_lastStartedAtHasBeenSet = true; m_lastStartedAt = std::forward<LastStartedAtT>(value); }
    template<typename LastStartedAtT = Aws::Utils::DateTime>
    DescribeSimulationJobResult& WithLastStartedAt(LastStartedAtT&& value) { SetLastStartedAt(std::forward<LastStartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    DescribeSimulationJobResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure behavior for the simulation job.</p>
     */
    inline FailureBehavior GetFailureBehavior() const { return m_failureBehavior; }
    inline void SetFailureBehavior(FailureBehavior value) { m_failureBehaviorHasBeenSet = true; m_failureBehavior = value; }
    inline DescribeSimulationJobResult& WithFailureBehavior(FailureBehavior value) { SetFailureBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure code of the simulation job if it failed:</p> <dl>
     * <dt>InternalServiceError</dt> <dd> <p>Internal service error.</p> </dd>
     * <dt>RobotApplicationCrash</dt> <dd> <p>Robot application exited abnormally.</p>
     * </dd> <dt>SimulationApplicationCrash</dt> <dd> <p> Simulation application exited
     * abnormally.</p> </dd> <dt>BadPermissionsRobotApplication</dt> <dd> <p>Robot
     * application bundle could not be downloaded.</p> </dd>
     * <dt>BadPermissionsSimulationApplication</dt> <dd> <p>Simulation application
     * bundle could not be downloaded.</p> </dd> <dt>BadPermissionsS3Output</dt> <dd>
     * <p>Unable to publish outputs to customer-provided S3 bucket.</p> </dd>
     * <dt>BadPermissionsCloudwatchLogs</dt> <dd> <p>Unable to publish logs to
     * customer-provided CloudWatch Logs resource.</p> </dd>
     * <dt>SubnetIpLimitExceeded</dt> <dd> <p>Subnet IP limit exceeded.</p> </dd>
     * <dt>ENILimitExceeded</dt> <dd> <p>ENI limit exceeded.</p> </dd>
     * <dt>BadPermissionsUserCredentials</dt> <dd> <p>Unable to use the Role
     * provided.</p> </dd> <dt>InvalidBundleRobotApplication</dt> <dd> <p>Robot bundle
     * cannot be extracted (invalid format, bundling error, or other issue).</p> </dd>
     * <dt>InvalidBundleSimulationApplication</dt> <dd> <p>Simulation bundle cannot be
     * extracted (invalid format, bundling error, or other issue).</p> </dd>
     * <dt>RobotApplicationVersionMismatchedEtag</dt> <dd> <p>Etag for RobotApplication
     * does not match value during version creation.</p> </dd>
     * <dt>SimulationApplicationVersionMismatchedEtag</dt> <dd> <p>Etag for
     * SimulationApplication does not match value during version creation.</p> </dd>
     * </dl>
     */
    inline SimulationJobErrorCode GetFailureCode() const { return m_failureCode; }
    inline void SetFailureCode(SimulationJobErrorCode value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline DescribeSimulationJobResult& WithFailureCode(SimulationJobErrorCode value) { SetFailureCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about why the simulation job failed. For more information about
     * troubleshooting, see <a
     * href="https://docs.aws.amazon.com/robomaker/latest/dg/troubleshooting.html">Troubleshooting</a>.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeSimulationJobResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    DescribeSimulationJobResult& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Location for output files generated by the simulation job.</p>
     */
    inline const OutputLocation& GetOutputLocation() const { return m_outputLocation; }
    template<typename OutputLocationT = OutputLocation>
    void SetOutputLocation(OutputLocationT&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::forward<OutputLocationT>(value); }
    template<typename OutputLocationT = OutputLocation>
    DescribeSimulationJobResult& WithOutputLocation(OutputLocationT&& value) { SetOutputLocation(std::forward<OutputLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logging configuration.</p>
     */
    inline const LoggingConfig& GetLoggingConfig() const { return m_loggingConfig; }
    template<typename LoggingConfigT = LoggingConfig>
    void SetLoggingConfig(LoggingConfigT&& value) { m_loggingConfigHasBeenSet = true; m_loggingConfig = std::forward<LoggingConfigT>(value); }
    template<typename LoggingConfigT = LoggingConfig>
    DescribeSimulationJobResult& WithLoggingConfig(LoggingConfigT&& value) { SetLoggingConfig(std::forward<LoggingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum job duration in seconds. The value must be 8 days (691,200
     * seconds) or less.</p>
     */
    inline long long GetMaxJobDurationInSeconds() const { return m_maxJobDurationInSeconds; }
    inline void SetMaxJobDurationInSeconds(long long value) { m_maxJobDurationInSecondsHasBeenSet = true; m_maxJobDurationInSeconds = value; }
    inline DescribeSimulationJobResult& WithMaxJobDurationInSeconds(long long value) { SetMaxJobDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The simulation job execution duration in milliseconds.</p>
     */
    inline long long GetSimulationTimeMillis() const { return m_simulationTimeMillis; }
    inline void SetSimulationTimeMillis(long long value) { m_simulationTimeMillisHasBeenSet = true; m_simulationTimeMillis = value; }
    inline DescribeSimulationJobResult& WithSimulationTimeMillis(long long value) { SetSimulationTimeMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that allows the simulation instance to call the AWS APIs that
     * are specified in its associated policies on your behalf.</p>
     */
    inline const Aws::String& GetIamRole() const { return m_iamRole; }
    template<typename IamRoleT = Aws::String>
    void SetIamRole(IamRoleT&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::forward<IamRoleT>(value); }
    template<typename IamRoleT = Aws::String>
    DescribeSimulationJobResult& WithIamRole(IamRoleT&& value) { SetIamRole(std::forward<IamRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of robot applications.</p>
     */
    inline const Aws::Vector<RobotApplicationConfig>& GetRobotApplications() const { return m_robotApplications; }
    template<typename RobotApplicationsT = Aws::Vector<RobotApplicationConfig>>
    void SetRobotApplications(RobotApplicationsT&& value) { m_robotApplicationsHasBeenSet = true; m_robotApplications = std::forward<RobotApplicationsT>(value); }
    template<typename RobotApplicationsT = Aws::Vector<RobotApplicationConfig>>
    DescribeSimulationJobResult& WithRobotApplications(RobotApplicationsT&& value) { SetRobotApplications(std::forward<RobotApplicationsT>(value)); return *this;}
    template<typename RobotApplicationsT = RobotApplicationConfig>
    DescribeSimulationJobResult& AddRobotApplications(RobotApplicationsT&& value) { m_robotApplicationsHasBeenSet = true; m_robotApplications.emplace_back(std::forward<RobotApplicationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of simulation applications.</p>
     */
    inline const Aws::Vector<SimulationApplicationConfig>& GetSimulationApplications() const { return m_simulationApplications; }
    template<typename SimulationApplicationsT = Aws::Vector<SimulationApplicationConfig>>
    void SetSimulationApplications(SimulationApplicationsT&& value) { m_simulationApplicationsHasBeenSet = true; m_simulationApplications = std::forward<SimulationApplicationsT>(value); }
    template<typename SimulationApplicationsT = Aws::Vector<SimulationApplicationConfig>>
    DescribeSimulationJobResult& WithSimulationApplications(SimulationApplicationsT&& value) { SetSimulationApplications(std::forward<SimulationApplicationsT>(value)); return *this;}
    template<typename SimulationApplicationsT = SimulationApplicationConfig>
    DescribeSimulationJobResult& AddSimulationApplications(SimulationApplicationsT&& value) { m_simulationApplicationsHasBeenSet = true; m_simulationApplications.emplace_back(std::forward<SimulationApplicationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data sources for the simulation job.</p>
     */
    inline const Aws::Vector<DataSource>& GetDataSources() const { return m_dataSources; }
    template<typename DataSourcesT = Aws::Vector<DataSource>>
    void SetDataSources(DataSourcesT&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::forward<DataSourcesT>(value); }
    template<typename DataSourcesT = Aws::Vector<DataSource>>
    DescribeSimulationJobResult& WithDataSources(DataSourcesT&& value) { SetDataSources(std::forward<DataSourcesT>(value)); return *this;}
    template<typename DataSourcesT = DataSource>
    DescribeSimulationJobResult& AddDataSources(DataSourcesT&& value) { m_dataSourcesHasBeenSet = true; m_dataSources.emplace_back(std::forward<DataSourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of all tags added to the specified simulation job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DescribeSimulationJobResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DescribeSimulationJobResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The VPC configuration.</p>
     */
    inline const VPCConfigResponse& GetVpcConfig() const { return m_vpcConfig; }
    template<typename VpcConfigT = VPCConfigResponse>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VPCConfigResponse>
    DescribeSimulationJobResult& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interface information for the simulation job.</p>
     */
    inline const NetworkInterface& GetNetworkInterface() const { return m_networkInterface; }
    template<typename NetworkInterfaceT = NetworkInterface>
    void SetNetworkInterface(NetworkInterfaceT&& value) { m_networkInterfaceHasBeenSet = true; m_networkInterface = std::forward<NetworkInterfaceT>(value); }
    template<typename NetworkInterfaceT = NetworkInterface>
    DescribeSimulationJobResult& WithNetworkInterface(NetworkInterfaceT&& value) { SetNetworkInterface(std::forward<NetworkInterfaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Compute information for the simulation job.</p>
     */
    inline const ComputeResponse& GetCompute() const { return m_compute; }
    template<typename ComputeT = ComputeResponse>
    void SetCompute(ComputeT&& value) { m_computeHasBeenSet = true; m_compute = std::forward<ComputeT>(value); }
    template<typename ComputeT = ComputeResponse>
    DescribeSimulationJobResult& WithCompute(ComputeT&& value) { SetCompute(std::forward<ComputeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSimulationJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
