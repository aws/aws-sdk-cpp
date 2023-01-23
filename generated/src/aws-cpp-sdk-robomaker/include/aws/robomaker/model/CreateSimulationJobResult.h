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


    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline CreateSimulationJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline CreateSimulationJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline CreateSimulationJobResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The status of the simulation job.</p>
     */
    inline const SimulationJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the simulation job.</p>
     */
    inline void SetStatus(const SimulationJobStatus& value) { m_status = value; }

    /**
     * <p>The status of the simulation job.</p>
     */
    inline void SetStatus(SimulationJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the simulation job.</p>
     */
    inline CreateSimulationJobResult& WithStatus(const SimulationJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the simulation job.</p>
     */
    inline CreateSimulationJobResult& WithStatus(SimulationJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * started.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStartedAt() const{ return m_lastStartedAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * started.</p>
     */
    inline void SetLastStartedAt(const Aws::Utils::DateTime& value) { m_lastStartedAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * started.</p>
     */
    inline void SetLastStartedAt(Aws::Utils::DateTime&& value) { m_lastStartedAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * started.</p>
     */
    inline CreateSimulationJobResult& WithLastStartedAt(const Aws::Utils::DateTime& value) { SetLastStartedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * started.</p>
     */
    inline CreateSimulationJobResult& WithLastStartedAt(Aws::Utils::DateTime&& value) { SetLastStartedAt(std::move(value)); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * updated.</p>
     */
    inline CreateSimulationJobResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * updated.</p>
     */
    inline CreateSimulationJobResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>the failure behavior for the simulation job.</p>
     */
    inline const FailureBehavior& GetFailureBehavior() const{ return m_failureBehavior; }

    /**
     * <p>the failure behavior for the simulation job.</p>
     */
    inline void SetFailureBehavior(const FailureBehavior& value) { m_failureBehavior = value; }

    /**
     * <p>the failure behavior for the simulation job.</p>
     */
    inline void SetFailureBehavior(FailureBehavior&& value) { m_failureBehavior = std::move(value); }

    /**
     * <p>the failure behavior for the simulation job.</p>
     */
    inline CreateSimulationJobResult& WithFailureBehavior(const FailureBehavior& value) { SetFailureBehavior(value); return *this;}

    /**
     * <p>the failure behavior for the simulation job.</p>
     */
    inline CreateSimulationJobResult& WithFailureBehavior(FailureBehavior&& value) { SetFailureBehavior(std::move(value)); return *this;}


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
    inline void SetFailureCode(const SimulationJobErrorCode& value) { m_failureCode = value; }

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
    inline void SetFailureCode(SimulationJobErrorCode&& value) { m_failureCode = std::move(value); }

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
    inline CreateSimulationJobResult& WithFailureCode(const SimulationJobErrorCode& value) { SetFailureCode(value); return *this;}

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
    inline CreateSimulationJobResult& WithFailureCode(SimulationJobErrorCode&& value) { SetFailureCode(std::move(value)); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateSimulationJobResult& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateSimulationJobResult& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateSimulationJobResult& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>Simulation job output files location.</p>
     */
    inline const OutputLocation& GetOutputLocation() const{ return m_outputLocation; }

    /**
     * <p>Simulation job output files location.</p>
     */
    inline void SetOutputLocation(const OutputLocation& value) { m_outputLocation = value; }

    /**
     * <p>Simulation job output files location.</p>
     */
    inline void SetOutputLocation(OutputLocation&& value) { m_outputLocation = std::move(value); }

    /**
     * <p>Simulation job output files location.</p>
     */
    inline CreateSimulationJobResult& WithOutputLocation(const OutputLocation& value) { SetOutputLocation(value); return *this;}

    /**
     * <p>Simulation job output files location.</p>
     */
    inline CreateSimulationJobResult& WithOutputLocation(OutputLocation&& value) { SetOutputLocation(std::move(value)); return *this;}


    /**
     * <p>The logging configuration.</p>
     */
    inline const LoggingConfig& GetLoggingConfig() const{ return m_loggingConfig; }

    /**
     * <p>The logging configuration.</p>
     */
    inline void SetLoggingConfig(const LoggingConfig& value) { m_loggingConfig = value; }

    /**
     * <p>The logging configuration.</p>
     */
    inline void SetLoggingConfig(LoggingConfig&& value) { m_loggingConfig = std::move(value); }

    /**
     * <p>The logging configuration.</p>
     */
    inline CreateSimulationJobResult& WithLoggingConfig(const LoggingConfig& value) { SetLoggingConfig(value); return *this;}

    /**
     * <p>The logging configuration.</p>
     */
    inline CreateSimulationJobResult& WithLoggingConfig(LoggingConfig&& value) { SetLoggingConfig(std::move(value)); return *this;}


    /**
     * <p>The maximum simulation job duration in seconds. </p>
     */
    inline long long GetMaxJobDurationInSeconds() const{ return m_maxJobDurationInSeconds; }

    /**
     * <p>The maximum simulation job duration in seconds. </p>
     */
    inline void SetMaxJobDurationInSeconds(long long value) { m_maxJobDurationInSeconds = value; }

    /**
     * <p>The maximum simulation job duration in seconds. </p>
     */
    inline CreateSimulationJobResult& WithMaxJobDurationInSeconds(long long value) { SetMaxJobDurationInSeconds(value); return *this;}


    /**
     * <p>The simulation job execution duration in milliseconds.</p>
     */
    inline long long GetSimulationTimeMillis() const{ return m_simulationTimeMillis; }

    /**
     * <p>The simulation job execution duration in milliseconds.</p>
     */
    inline void SetSimulationTimeMillis(long long value) { m_simulationTimeMillis = value; }

    /**
     * <p>The simulation job execution duration in milliseconds.</p>
     */
    inline CreateSimulationJobResult& WithSimulationTimeMillis(long long value) { SetSimulationTimeMillis(value); return *this;}


    /**
     * <p>The IAM role that allows the simulation job to call the AWS APIs that are
     * specified in its associated policies on your behalf.</p>
     */
    inline const Aws::String& GetIamRole() const{ return m_iamRole; }

    /**
     * <p>The IAM role that allows the simulation job to call the AWS APIs that are
     * specified in its associated policies on your behalf.</p>
     */
    inline void SetIamRole(const Aws::String& value) { m_iamRole = value; }

    /**
     * <p>The IAM role that allows the simulation job to call the AWS APIs that are
     * specified in its associated policies on your behalf.</p>
     */
    inline void SetIamRole(Aws::String&& value) { m_iamRole = std::move(value); }

    /**
     * <p>The IAM role that allows the simulation job to call the AWS APIs that are
     * specified in its associated policies on your behalf.</p>
     */
    inline void SetIamRole(const char* value) { m_iamRole.assign(value); }

    /**
     * <p>The IAM role that allows the simulation job to call the AWS APIs that are
     * specified in its associated policies on your behalf.</p>
     */
    inline CreateSimulationJobResult& WithIamRole(const Aws::String& value) { SetIamRole(value); return *this;}

    /**
     * <p>The IAM role that allows the simulation job to call the AWS APIs that are
     * specified in its associated policies on your behalf.</p>
     */
    inline CreateSimulationJobResult& WithIamRole(Aws::String&& value) { SetIamRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role that allows the simulation job to call the AWS APIs that are
     * specified in its associated policies on your behalf.</p>
     */
    inline CreateSimulationJobResult& WithIamRole(const char* value) { SetIamRole(value); return *this;}


    /**
     * <p>The robot application used by the simulation job.</p>
     */
    inline const Aws::Vector<RobotApplicationConfig>& GetRobotApplications() const{ return m_robotApplications; }

    /**
     * <p>The robot application used by the simulation job.</p>
     */
    inline void SetRobotApplications(const Aws::Vector<RobotApplicationConfig>& value) { m_robotApplications = value; }

    /**
     * <p>The robot application used by the simulation job.</p>
     */
    inline void SetRobotApplications(Aws::Vector<RobotApplicationConfig>&& value) { m_robotApplications = std::move(value); }

    /**
     * <p>The robot application used by the simulation job.</p>
     */
    inline CreateSimulationJobResult& WithRobotApplications(const Aws::Vector<RobotApplicationConfig>& value) { SetRobotApplications(value); return *this;}

    /**
     * <p>The robot application used by the simulation job.</p>
     */
    inline CreateSimulationJobResult& WithRobotApplications(Aws::Vector<RobotApplicationConfig>&& value) { SetRobotApplications(std::move(value)); return *this;}

    /**
     * <p>The robot application used by the simulation job.</p>
     */
    inline CreateSimulationJobResult& AddRobotApplications(const RobotApplicationConfig& value) { m_robotApplications.push_back(value); return *this; }

    /**
     * <p>The robot application used by the simulation job.</p>
     */
    inline CreateSimulationJobResult& AddRobotApplications(RobotApplicationConfig&& value) { m_robotApplications.push_back(std::move(value)); return *this; }


    /**
     * <p>The simulation application used by the simulation job.</p>
     */
    inline const Aws::Vector<SimulationApplicationConfig>& GetSimulationApplications() const{ return m_simulationApplications; }

    /**
     * <p>The simulation application used by the simulation job.</p>
     */
    inline void SetSimulationApplications(const Aws::Vector<SimulationApplicationConfig>& value) { m_simulationApplications = value; }

    /**
     * <p>The simulation application used by the simulation job.</p>
     */
    inline void SetSimulationApplications(Aws::Vector<SimulationApplicationConfig>&& value) { m_simulationApplications = std::move(value); }

    /**
     * <p>The simulation application used by the simulation job.</p>
     */
    inline CreateSimulationJobResult& WithSimulationApplications(const Aws::Vector<SimulationApplicationConfig>& value) { SetSimulationApplications(value); return *this;}

    /**
     * <p>The simulation application used by the simulation job.</p>
     */
    inline CreateSimulationJobResult& WithSimulationApplications(Aws::Vector<SimulationApplicationConfig>&& value) { SetSimulationApplications(std::move(value)); return *this;}

    /**
     * <p>The simulation application used by the simulation job.</p>
     */
    inline CreateSimulationJobResult& AddSimulationApplications(const SimulationApplicationConfig& value) { m_simulationApplications.push_back(value); return *this; }

    /**
     * <p>The simulation application used by the simulation job.</p>
     */
    inline CreateSimulationJobResult& AddSimulationApplications(SimulationApplicationConfig&& value) { m_simulationApplications.push_back(std::move(value)); return *this; }


    /**
     * <p>The data sources for the simulation job.</p>
     */
    inline const Aws::Vector<DataSource>& GetDataSources() const{ return m_dataSources; }

    /**
     * <p>The data sources for the simulation job.</p>
     */
    inline void SetDataSources(const Aws::Vector<DataSource>& value) { m_dataSources = value; }

    /**
     * <p>The data sources for the simulation job.</p>
     */
    inline void SetDataSources(Aws::Vector<DataSource>&& value) { m_dataSources = std::move(value); }

    /**
     * <p>The data sources for the simulation job.</p>
     */
    inline CreateSimulationJobResult& WithDataSources(const Aws::Vector<DataSource>& value) { SetDataSources(value); return *this;}

    /**
     * <p>The data sources for the simulation job.</p>
     */
    inline CreateSimulationJobResult& WithDataSources(Aws::Vector<DataSource>&& value) { SetDataSources(std::move(value)); return *this;}

    /**
     * <p>The data sources for the simulation job.</p>
     */
    inline CreateSimulationJobResult& AddDataSources(const DataSource& value) { m_dataSources.push_back(value); return *this; }

    /**
     * <p>The data sources for the simulation job.</p>
     */
    inline CreateSimulationJobResult& AddDataSources(DataSource&& value) { m_dataSources.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of all tags added to the simulation job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of all tags added to the simulation job.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The list of all tags added to the simulation job.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The list of all tags added to the simulation job.</p>
     */
    inline CreateSimulationJobResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of all tags added to the simulation job.</p>
     */
    inline CreateSimulationJobResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of all tags added to the simulation job.</p>
     */
    inline CreateSimulationJobResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of all tags added to the simulation job.</p>
     */
    inline CreateSimulationJobResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of all tags added to the simulation job.</p>
     */
    inline CreateSimulationJobResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the simulation job.</p>
     */
    inline CreateSimulationJobResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the simulation job.</p>
     */
    inline CreateSimulationJobResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the simulation job.</p>
     */
    inline CreateSimulationJobResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of all tags added to the simulation job.</p>
     */
    inline CreateSimulationJobResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>Information about the vpc configuration.</p>
     */
    inline const VPCConfigResponse& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>Information about the vpc configuration.</p>
     */
    inline void SetVpcConfig(const VPCConfigResponse& value) { m_vpcConfig = value; }

    /**
     * <p>Information about the vpc configuration.</p>
     */
    inline void SetVpcConfig(VPCConfigResponse&& value) { m_vpcConfig = std::move(value); }

    /**
     * <p>Information about the vpc configuration.</p>
     */
    inline CreateSimulationJobResult& WithVpcConfig(const VPCConfigResponse& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>Information about the vpc configuration.</p>
     */
    inline CreateSimulationJobResult& WithVpcConfig(VPCConfigResponse&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>Compute information for the simulation job.</p>
     */
    inline const ComputeResponse& GetCompute() const{ return m_compute; }

    /**
     * <p>Compute information for the simulation job.</p>
     */
    inline void SetCompute(const ComputeResponse& value) { m_compute = value; }

    /**
     * <p>Compute information for the simulation job.</p>
     */
    inline void SetCompute(ComputeResponse&& value) { m_compute = std::move(value); }

    /**
     * <p>Compute information for the simulation job.</p>
     */
    inline CreateSimulationJobResult& WithCompute(const ComputeResponse& value) { SetCompute(value); return *this;}

    /**
     * <p>Compute information for the simulation job.</p>
     */
    inline CreateSimulationJobResult& WithCompute(ComputeResponse&& value) { SetCompute(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
