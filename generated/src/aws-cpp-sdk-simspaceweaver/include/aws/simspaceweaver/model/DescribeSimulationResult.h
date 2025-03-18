/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/simspaceweaver/model/LiveSimulationState.h>
#include <aws/simspaceweaver/model/LoggingConfiguration.h>
#include <aws/simspaceweaver/model/S3Location.h>
#include <aws/simspaceweaver/model/SimulationStatus.h>
#include <aws/simspaceweaver/model/SimulationTargetStatus.h>
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
namespace SimSpaceWeaver
{
namespace Model
{
  class DescribeSimulationResult
  {
  public:
    AWS_SIMSPACEWEAVER_API DescribeSimulationResult() = default;
    AWS_SIMSPACEWEAVER_API DescribeSimulationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIMSPACEWEAVER_API DescribeSimulationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the simulation. For more information about
     * ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribeSimulationResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the simulation was created, expressed as the number of seconds
     * and milliseconds in UTC since the Unix epoch (0:0:0.000, January 1, 1970).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeSimulationResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the simulation.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeSimulationResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A universally unique identifier (UUID) for this simulation.</p>
     */
    inline const Aws::String& GetExecutionId() const { return m_executionId; }
    template<typename ExecutionIdT = Aws::String>
    void SetExecutionId(ExecutionIdT&& value) { m_executionIdHasBeenSet = true; m_executionId = std::forward<ExecutionIdT>(value); }
    template<typename ExecutionIdT = Aws::String>
    DescribeSimulationResult& WithExecutionId(ExecutionIdT&& value) { SetExecutionId(std::forward<ExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of additional state information, such as domain and clock
     * configuration.</p>
     */
    inline const LiveSimulationState& GetLiveSimulationState() const { return m_liveSimulationState; }
    template<typename LiveSimulationStateT = LiveSimulationState>
    void SetLiveSimulationState(LiveSimulationStateT&& value) { m_liveSimulationStateHasBeenSet = true; m_liveSimulationState = std::forward<LiveSimulationStateT>(value); }
    template<typename LiveSimulationStateT = LiveSimulationState>
    DescribeSimulationResult& WithLiveSimulationState(LiveSimulationStateT&& value) { SetLiveSimulationState(std::forward<LiveSimulationStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings that control how SimSpace Weaver handles your simulation log
     * data.</p>
     */
    inline const LoggingConfiguration& GetLoggingConfiguration() const { return m_loggingConfiguration; }
    template<typename LoggingConfigurationT = LoggingConfiguration>
    void SetLoggingConfiguration(LoggingConfigurationT&& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = std::forward<LoggingConfigurationT>(value); }
    template<typename LoggingConfigurationT = LoggingConfiguration>
    DescribeSimulationResult& WithLoggingConfiguration(LoggingConfigurationT&& value) { SetLoggingConfiguration(std::forward<LoggingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum running time of the simulation, specified as a number of minutes
     * (m or M), hours (h or H), or days (d or D). The simulation stops when it reaches
     * this limit. The maximum value is <code>14D</code>, or its equivalent in the
     * other units. The default value is <code>14D</code>. A value equivalent to
     * <code>0</code> makes the simulation immediately transition to
     * <code>Stopping</code> as soon as it reaches <code>Started</code>.</p>
     */
    inline const Aws::String& GetMaximumDuration() const { return m_maximumDuration; }
    template<typename MaximumDurationT = Aws::String>
    void SetMaximumDuration(MaximumDurationT&& value) { m_maximumDurationHasBeenSet = true; m_maximumDuration = std::forward<MaximumDurationT>(value); }
    template<typename MaximumDurationT = Aws::String>
    DescribeSimulationResult& WithMaximumDuration(MaximumDurationT&& value) { SetMaximumDuration(std::forward<MaximumDurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the simulation.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeSimulationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that the simulation assumes to perform actions. For more information about
     * ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General Reference</i>.
     * For more information about IAM roles, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * roles</a> in the <i>Identity and Access Management User Guide</i>.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeSimulationResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the simulation schema in Amazon Simple Storage Service
     * (Amazon S3). For more information about Amazon S3, see the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/Welcome.html">
     * <i>Amazon Simple Storage Service User Guide</i> </a>.</p>
     */
    inline const S3Location& GetSchemaS3Location() const { return m_schemaS3Location; }
    template<typename SchemaS3LocationT = S3Location>
    void SetSchemaS3Location(SchemaS3LocationT&& value) { m_schemaS3LocationHasBeenSet = true; m_schemaS3Location = std::forward<SchemaS3LocationT>(value); }
    template<typename SchemaS3LocationT = S3Location>
    DescribeSimulationResult& WithSchemaS3Location(SchemaS3LocationT&& value) { SetSchemaS3Location(std::forward<SchemaS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3Location& GetSnapshotS3Location() const { return m_snapshotS3Location; }
    template<typename SnapshotS3LocationT = S3Location>
    void SetSnapshotS3Location(SnapshotS3LocationT&& value) { m_snapshotS3LocationHasBeenSet = true; m_snapshotS3Location = std::forward<SnapshotS3LocationT>(value); }
    template<typename SnapshotS3LocationT = S3Location>
    DescribeSimulationResult& WithSnapshotS3Location(SnapshotS3LocationT&& value) { SetSnapshotS3Location(std::forward<SnapshotS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message that SimSpace Weaver returns only if a problem occurs when
     * the simulation is in the <code>STARTING</code> state.</p>
     */
    inline const Aws::String& GetStartError() const { return m_startError; }
    template<typename StartErrorT = Aws::String>
    void SetStartError(StartErrorT&& value) { m_startErrorHasBeenSet = true; m_startError = std::forward<StartErrorT>(value); }
    template<typename StartErrorT = Aws::String>
    DescribeSimulationResult& WithStartError(StartErrorT&& value) { SetStartError(std::forward<StartErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current lifecycle state of the simulation.</p>
     */
    inline SimulationStatus GetStatus() const { return m_status; }
    inline void SetStatus(SimulationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeSimulationResult& WithStatus(SimulationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired lifecycle state of the simulation.</p>
     */
    inline SimulationTargetStatus GetTargetStatus() const { return m_targetStatus; }
    inline void SetTargetStatus(SimulationTargetStatus value) { m_targetStatusHasBeenSet = true; m_targetStatus = value; }
    inline DescribeSimulationResult& WithTargetStatus(SimulationTargetStatus value) { SetTargetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSimulationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    LiveSimulationState m_liveSimulationState;
    bool m_liveSimulationStateHasBeenSet = false;

    LoggingConfiguration m_loggingConfiguration;
    bool m_loggingConfigurationHasBeenSet = false;

    Aws::String m_maximumDuration;
    bool m_maximumDurationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    S3Location m_schemaS3Location;
    bool m_schemaS3LocationHasBeenSet = false;

    S3Location m_snapshotS3Location;
    bool m_snapshotS3LocationHasBeenSet = false;

    Aws::String m_startError;
    bool m_startErrorHasBeenSet = false;

    SimulationStatus m_status{SimulationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    SimulationTargetStatus m_targetStatus{SimulationTargetStatus::NOT_SET};
    bool m_targetStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
