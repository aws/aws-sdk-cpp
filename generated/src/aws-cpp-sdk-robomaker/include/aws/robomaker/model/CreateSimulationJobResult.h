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
  class CreateSimulationJobResult
  {
  public:
    AWS_ROBOMAKER_API CreateSimulationJobResult();
    AWS_ROBOMAKER_API CreateSimulationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API CreateSimulationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateSimulationJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateSimulationJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateSimulationJobResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the simulation job.</p>
     */
    inline const SimulationJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const SimulationJobStatus& value) { m_status = value; }
    inline void SetStatus(SimulationJobStatus&& value) { m_status = std::move(value); }
    inline CreateSimulationJobResult& WithStatus(const SimulationJobStatus& value) { SetStatus(value); return *this;}
    inline CreateSimulationJobResult& WithStatus(SimulationJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * started.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStartedAt() const{ return m_lastStartedAt; }
    inline void SetLastStartedAt(const Aws::Utils::DateTime& value) { m_lastStartedAt = value; }
    inline void SetLastStartedAt(Aws::Utils::DateTime&& value) { m_lastStartedAt = std::move(value); }
    inline CreateSimulationJobResult& WithLastStartedAt(const Aws::Utils::DateTime& value) { SetLastStartedAt(value); return *this;}
    inline CreateSimulationJobResult& WithLastStartedAt(Aws::Utils::DateTime&& value) { SetLastStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline CreateSimulationJobResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline CreateSimulationJobResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>the failure behavior for the simulation job.</p>
     */
    inline const FailureBehavior& GetFailureBehavior() const{ return m_failureBehavior; }
    inline void SetFailureBehavior(const FailureBehavior& value) { m_failureBehavior = value; }
    inline void SetFailureBehavior(FailureBehavior&& value) { m_failureBehavior = std::move(value); }
    inline CreateSimulationJobResult& WithFailureBehavior(const FailureBehavior& value) { SetFailureBehavior(value); return *this;}
    inline CreateSimulationJobResult& WithFailureBehavior(FailureBehavior&& value) { SetFailureBehavior(std::move(value)); return *this;}
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
    inline const SimulationJobErrorCode& GetFailureCode() const{ return m_failureCode; }
    inline void SetFailureCode(const SimulationJobErrorCode& value) { m_failureCode = value; }
    inline void SetFailureCode(SimulationJobErrorCode&& value) { m_failureCode = std::move(value); }
    inline CreateSimulationJobResult& WithFailureCode(const SimulationJobErrorCode& value) { SetFailureCode(value); return *this;}
    inline CreateSimulationJobResult& WithFailureCode(SimulationJobErrorCode&& value) { SetFailureCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestToken.assign(value); }
    inline CreateSimulationJobResult& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateSimulationJobResult& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateSimulationJobResult& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Simulation job output files location.</p>
     */
    inline const OutputLocation& GetOutputLocation() const{ return m_outputLocation; }
    inline void SetOutputLocation(const OutputLocation& value) { m_outputLocation = value; }
    inline void SetOutputLocation(OutputLocation&& value) { m_outputLocation = std::move(value); }
    inline CreateSimulationJobResult& WithOutputLocation(const OutputLocation& value) { SetOutputLocation(value); return *this;}
    inline CreateSimulationJobResult& WithOutputLocation(OutputLocation&& value) { SetOutputLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logging configuration.</p>
     */
    inline const LoggingConfig& GetLoggingConfig() const{ return m_loggingConfig; }
    inline void SetLoggingConfig(const LoggingConfig& value) { m_loggingConfig = value; }
    inline void SetLoggingConfig(LoggingConfig&& value) { m_loggingConfig = std::move(value); }
    inline CreateSimulationJobResult& WithLoggingConfig(const LoggingConfig& value) { SetLoggingConfig(value); return *this;}
    inline CreateSimulationJobResult& WithLoggingConfig(LoggingConfig&& value) { SetLoggingConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum simulation job duration in seconds. </p>
     */
    inline long long GetMaxJobDurationInSeconds() const{ return m_maxJobDurationInSeconds; }
    inline void SetMaxJobDurationInSeconds(long long value) { m_maxJobDurationInSeconds = value; }
    inline CreateSimulationJobResult& WithMaxJobDurationInSeconds(long long value) { SetMaxJobDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The simulation job execution duration in milliseconds.</p>
     */
    inline long long GetSimulationTimeMillis() const{ return m_simulationTimeMillis; }
    inline void SetSimulationTimeMillis(long long value) { m_simulationTimeMillis = value; }
    inline CreateSimulationJobResult& WithSimulationTimeMillis(long long value) { SetSimulationTimeMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that allows the simulation job to call the AWS APIs that are
     * specified in its associated policies on your behalf.</p>
     */
    inline const Aws::String& GetIamRole() const{ return m_iamRole; }
    inline void SetIamRole(const Aws::String& value) { m_iamRole = value; }
    inline void SetIamRole(Aws::String&& value) { m_iamRole = std::move(value); }
    inline void SetIamRole(const char* value) { m_iamRole.assign(value); }
    inline CreateSimulationJobResult& WithIamRole(const Aws::String& value) { SetIamRole(value); return *this;}
    inline CreateSimulationJobResult& WithIamRole(Aws::String&& value) { SetIamRole(std::move(value)); return *this;}
    inline CreateSimulationJobResult& WithIamRole(const char* value) { SetIamRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The robot application used by the simulation job.</p>
     */
    inline const Aws::Vector<RobotApplicationConfig>& GetRobotApplications() const{ return m_robotApplications; }
    inline void SetRobotApplications(const Aws::Vector<RobotApplicationConfig>& value) { m_robotApplications = value; }
    inline void SetRobotApplications(Aws::Vector<RobotApplicationConfig>&& value) { m_robotApplications = std::move(value); }
    inline CreateSimulationJobResult& WithRobotApplications(const Aws::Vector<RobotApplicationConfig>& value) { SetRobotApplications(value); return *this;}
    inline CreateSimulationJobResult& WithRobotApplications(Aws::Vector<RobotApplicationConfig>&& value) { SetRobotApplications(std::move(value)); return *this;}
    inline CreateSimulationJobResult& AddRobotApplications(const RobotApplicationConfig& value) { m_robotApplications.push_back(value); return *this; }
    inline CreateSimulationJobResult& AddRobotApplications(RobotApplicationConfig&& value) { m_robotApplications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The simulation application used by the simulation job.</p>
     */
    inline const Aws::Vector<SimulationApplicationConfig>& GetSimulationApplications() const{ return m_simulationApplications; }
    inline void SetSimulationApplications(const Aws::Vector<SimulationApplicationConfig>& value) { m_simulationApplications = value; }
    inline void SetSimulationApplications(Aws::Vector<SimulationApplicationConfig>&& value) { m_simulationApplications = std::move(value); }
    inline CreateSimulationJobResult& WithSimulationApplications(const Aws::Vector<SimulationApplicationConfig>& value) { SetSimulationApplications(value); return *this;}
    inline CreateSimulationJobResult& WithSimulationApplications(Aws::Vector<SimulationApplicationConfig>&& value) { SetSimulationApplications(std::move(value)); return *this;}
    inline CreateSimulationJobResult& AddSimulationApplications(const SimulationApplicationConfig& value) { m_simulationApplications.push_back(value); return *this; }
    inline CreateSimulationJobResult& AddSimulationApplications(SimulationApplicationConfig&& value) { m_simulationApplications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data sources for the simulation job.</p>
     */
    inline const Aws::Vector<DataSource>& GetDataSources() const{ return m_dataSources; }
    inline void SetDataSources(const Aws::Vector<DataSource>& value) { m_dataSources = value; }
    inline void SetDataSources(Aws::Vector<DataSource>&& value) { m_dataSources = std::move(value); }
    inline CreateSimulationJobResult& WithDataSources(const Aws::Vector<DataSource>& value) { SetDataSources(value); return *this;}
    inline CreateSimulationJobResult& WithDataSources(Aws::Vector<DataSource>&& value) { SetDataSources(std::move(value)); return *this;}
    inline CreateSimulationJobResult& AddDataSources(const DataSource& value) { m_dataSources.push_back(value); return *this; }
    inline CreateSimulationJobResult& AddDataSources(DataSource&& value) { m_dataSources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of all tags added to the simulation job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline CreateSimulationJobResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateSimulationJobResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateSimulationJobResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline CreateSimulationJobResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateSimulationJobResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateSimulationJobResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateSimulationJobResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateSimulationJobResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateSimulationJobResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the vpc configuration.</p>
     */
    inline const VPCConfigResponse& GetVpcConfig() const{ return m_vpcConfig; }
    inline void SetVpcConfig(const VPCConfigResponse& value) { m_vpcConfig = value; }
    inline void SetVpcConfig(VPCConfigResponse&& value) { m_vpcConfig = std::move(value); }
    inline CreateSimulationJobResult& WithVpcConfig(const VPCConfigResponse& value) { SetVpcConfig(value); return *this;}
    inline CreateSimulationJobResult& WithVpcConfig(VPCConfigResponse&& value) { SetVpcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Compute information for the simulation job.</p>
     */
    inline const ComputeResponse& GetCompute() const{ return m_compute; }
    inline void SetCompute(const ComputeResponse& value) { m_compute = value; }
    inline void SetCompute(ComputeResponse&& value) { m_compute = std::move(value); }
    inline CreateSimulationJobResult& WithCompute(const ComputeResponse& value) { SetCompute(value); return *this;}
    inline CreateSimulationJobResult& WithCompute(ComputeResponse&& value) { SetCompute(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateSimulationJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateSimulationJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateSimulationJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    SimulationJobStatus m_status;

    Aws::Utils::DateTime m_lastStartedAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    FailureBehavior m_failureBehavior;

    SimulationJobErrorCode m_failureCode;

    Aws::String m_clientRequestToken;

    OutputLocation m_outputLocation;

    LoggingConfig m_loggingConfig;

    long long m_maxJobDurationInSeconds;

    long long m_simulationTimeMillis;

    Aws::String m_iamRole;

    Aws::Vector<RobotApplicationConfig> m_robotApplications;

    Aws::Vector<SimulationApplicationConfig> m_simulationApplications;

    Aws::Vector<DataSource> m_dataSources;

    Aws::Map<Aws::String, Aws::String> m_tags;

    VPCConfigResponse m_vpcConfig;

    ComputeResponse m_compute;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
