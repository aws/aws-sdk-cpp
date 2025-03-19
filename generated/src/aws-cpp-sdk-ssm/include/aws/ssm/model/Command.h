/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/CommandStatus.h>
#include <aws/ssm/model/NotificationConfig.h>
#include <aws/ssm/model/CloudWatchOutputConfig.h>
#include <aws/ssm/model/AlarmConfiguration.h>
#include <aws/ssm/model/Target.h>
#include <aws/ssm/model/AlarmStateInformation.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Describes a command request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/Command">AWS API
   * Reference</a></p>
   */
  class Command
  {
  public:
    AWS_SSM_API Command() = default;
    AWS_SSM_API Command(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Command& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for this command.</p>
     */
    inline const Aws::String& GetCommandId() const { return m_commandId; }
    inline bool CommandIdHasBeenSet() const { return m_commandIdHasBeenSet; }
    template<typename CommandIdT = Aws::String>
    void SetCommandId(CommandIdT&& value) { m_commandIdHasBeenSet = true; m_commandId = std::forward<CommandIdT>(value); }
    template<typename CommandIdT = Aws::String>
    Command& WithCommandId(CommandIdT&& value) { SetCommandId(std::forward<CommandIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the document requested for execution.</p>
     */
    inline const Aws::String& GetDocumentName() const { return m_documentName; }
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }
    template<typename DocumentNameT = Aws::String>
    void SetDocumentName(DocumentNameT&& value) { m_documentNameHasBeenSet = true; m_documentName = std::forward<DocumentNameT>(value); }
    template<typename DocumentNameT = Aws::String>
    Command& WithDocumentName(DocumentNameT&& value) { SetDocumentName(std::forward<DocumentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Systems Manager document (SSM document) version.</p>
     */
    inline const Aws::String& GetDocumentVersion() const { return m_documentVersion; }
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }
    template<typename DocumentVersionT = Aws::String>
    void SetDocumentVersion(DocumentVersionT&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::forward<DocumentVersionT>(value); }
    template<typename DocumentVersionT = Aws::String>
    Command& WithDocumentVersion(DocumentVersionT&& value) { SetDocumentVersion(std::forward<DocumentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    Command& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a command expires, it changes status to <code>DeliveryTimedOut</code> for
     * all invocations that have the status <code>InProgress</code>,
     * <code>Pending</code>, or <code>Delayed</code>. <code>ExpiresAfter</code> is
     * calculated based on the total timeout for the overall command. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-commands.html?icmpid=docs_ec2_console#monitor-about-status-timeouts">Understanding
     * command timeout values</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAfter() const { return m_expiresAfter; }
    inline bool ExpiresAfterHasBeenSet() const { return m_expiresAfterHasBeenSet; }
    template<typename ExpiresAfterT = Aws::Utils::DateTime>
    void SetExpiresAfter(ExpiresAfterT&& value) { m_expiresAfterHasBeenSet = true; m_expiresAfter = std::forward<ExpiresAfterT>(value); }
    template<typename ExpiresAfterT = Aws::Utils::DateTime>
    Command& WithExpiresAfter(ExpiresAfterT&& value) { SetExpiresAfter(std::forward<ExpiresAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter values to be inserted in the document when running the
     * command.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    Command& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::Vector<Aws::String>>
    Command& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The managed node IDs against which this command was requested.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const { return m_instanceIds; }
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
    template<typename InstanceIdsT = Aws::Vector<Aws::String>>
    void SetInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::forward<InstanceIdsT>(value); }
    template<typename InstanceIdsT = Aws::Vector<Aws::String>>
    Command& WithInstanceIds(InstanceIdsT&& value) { SetInstanceIds(std::forward<InstanceIdsT>(value)); return *this;}
    template<typename InstanceIdsT = Aws::String>
    Command& AddInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.emplace_back(std::forward<InstanceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of search criteria that targets managed nodes using a Key,Value
     * combination that you specify. Targets is required if you don't provide one or
     * more managed node IDs in the call.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Vector<Target>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Vector<Target>>
    Command& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsT = Target>
    Command& AddTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets.emplace_back(std::forward<TargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time the command was requested.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestedDateTime() const { return m_requestedDateTime; }
    inline bool RequestedDateTimeHasBeenSet() const { return m_requestedDateTimeHasBeenSet; }
    template<typename RequestedDateTimeT = Aws::Utils::DateTime>
    void SetRequestedDateTime(RequestedDateTimeT&& value) { m_requestedDateTimeHasBeenSet = true; m_requestedDateTime = std::forward<RequestedDateTimeT>(value); }
    template<typename RequestedDateTimeT = Aws::Utils::DateTime>
    Command& WithRequestedDateTime(RequestedDateTimeT&& value) { SetRequestedDateTime(std::forward<RequestedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the command.</p>
     */
    inline CommandStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CommandStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Command& WithStatus(CommandStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed status of the command execution. <code>StatusDetails</code>
     * includes more information than <code>Status</code> because it includes states
     * resulting from error and concurrency control parameters.
     * <code>StatusDetails</code> can show different results than Status. For more
     * information about these statuses, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-commands.html">Understanding
     * command statuses</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>. StatusDetails can be one of the following values:</p> <ul> <li>
     * <p>Pending: The command hasn't been sent to any managed nodes.</p> </li> <li>
     * <p>In Progress: The command has been sent to at least one managed node but
     * hasn't reached a final state on all managed nodes.</p> </li> <li> <p>Success:
     * The command successfully ran on all invocations. This is a terminal state.</p>
     * </li> <li> <p>Delivery Timed Out: The value of MaxErrors or more command
     * invocations shows a status of Delivery Timed Out. This is a terminal state.</p>
     * </li> <li> <p>Execution Timed Out: The value of MaxErrors or more command
     * invocations shows a status of Execution Timed Out. This is a terminal state.</p>
     * </li> <li> <p>Failed: The value of MaxErrors or more command invocations shows a
     * status of Failed. This is a terminal state.</p> </li> <li> <p>Incomplete: The
     * command was attempted on all managed nodes and one or more invocations doesn't
     * have a value of Success but not enough invocations failed for the status to be
     * Failed. This is a terminal state.</p> </li> <li> <p>Cancelled: The command was
     * terminated before it was completed. This is a terminal state.</p> </li> <li>
     * <p>Rate Exceeded: The number of managed nodes targeted by the command exceeded
     * the account limit for pending invocations. The system has canceled the command
     * before running it on any managed node. This is a terminal state.</p> </li> <li>
     * <p>Delayed: The system attempted to send the command to the managed node but
     * wasn't successful. The system retries again.</p> </li> </ul>
     */
    inline const Aws::String& GetStatusDetails() const { return m_statusDetails; }
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }
    template<typename StatusDetailsT = Aws::String>
    void SetStatusDetails(StatusDetailsT&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::forward<StatusDetailsT>(value); }
    template<typename StatusDetailsT = Aws::String>
    Command& WithStatusDetails(StatusDetailsT&& value) { SetStatusDetails(std::forward<StatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Deprecated) You can no longer specify this parameter. The system ignores it.
     * Instead, Systems Manager automatically determines the Amazon Web Services Region
     * of the S3 bucket.</p>
     */
    inline const Aws::String& GetOutputS3Region() const { return m_outputS3Region; }
    inline bool OutputS3RegionHasBeenSet() const { return m_outputS3RegionHasBeenSet; }
    template<typename OutputS3RegionT = Aws::String>
    void SetOutputS3Region(OutputS3RegionT&& value) { m_outputS3RegionHasBeenSet = true; m_outputS3Region = std::forward<OutputS3RegionT>(value); }
    template<typename OutputS3RegionT = Aws::String>
    Command& WithOutputS3Region(OutputS3RegionT&& value) { SetOutputS3Region(std::forward<OutputS3RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.</p>
     */
    inline const Aws::String& GetOutputS3BucketName() const { return m_outputS3BucketName; }
    inline bool OutputS3BucketNameHasBeenSet() const { return m_outputS3BucketNameHasBeenSet; }
    template<typename OutputS3BucketNameT = Aws::String>
    void SetOutputS3BucketName(OutputS3BucketNameT&& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = std::forward<OutputS3BucketNameT>(value); }
    template<typename OutputS3BucketNameT = Aws::String>
    Command& WithOutputS3BucketName(OutputS3BucketNameT&& value) { SetOutputS3BucketName(std::forward<OutputS3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.</p>
     */
    inline const Aws::String& GetOutputS3KeyPrefix() const { return m_outputS3KeyPrefix; }
    inline bool OutputS3KeyPrefixHasBeenSet() const { return m_outputS3KeyPrefixHasBeenSet; }
    template<typename OutputS3KeyPrefixT = Aws::String>
    void SetOutputS3KeyPrefix(OutputS3KeyPrefixT&& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = std::forward<OutputS3KeyPrefixT>(value); }
    template<typename OutputS3KeyPrefixT = Aws::String>
    Command& WithOutputS3KeyPrefix(OutputS3KeyPrefixT&& value) { SetOutputS3KeyPrefix(std::forward<OutputS3KeyPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of managed nodes that are allowed to run the command at
     * the same time. You can specify a number of managed nodes, such as 10, or a
     * percentage of nodes, such as 10%. The default value is 50. For more information
     * about how to use <code>MaxConcurrency</code>, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/run-command.html">Amazon
     * Web Services Systems Manager Run Command</a> in the <i>Amazon Web Services
     * Systems Manager User Guide</i>.</p>
     */
    inline const Aws::String& GetMaxConcurrency() const { return m_maxConcurrency; }
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }
    template<typename MaxConcurrencyT = Aws::String>
    void SetMaxConcurrency(MaxConcurrencyT&& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = std::forward<MaxConcurrencyT>(value); }
    template<typename MaxConcurrencyT = Aws::String>
    Command& WithMaxConcurrency(MaxConcurrencyT&& value) { SetMaxConcurrency(std::forward<MaxConcurrencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of errors allowed before the system stops sending the
     * command to additional targets. You can specify a number of errors, such as 10,
     * or a percentage or errors, such as 10%. The default value is <code>0</code>. For
     * more information about how to use <code>MaxErrors</code>, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/run-command.html">Amazon
     * Web Services Systems Manager Run Command</a> in the <i>Amazon Web Services
     * Systems Manager User Guide</i>.</p>
     */
    inline const Aws::String& GetMaxErrors() const { return m_maxErrors; }
    inline bool MaxErrorsHasBeenSet() const { return m_maxErrorsHasBeenSet; }
    template<typename MaxErrorsT = Aws::String>
    void SetMaxErrors(MaxErrorsT&& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = std::forward<MaxErrorsT>(value); }
    template<typename MaxErrorsT = Aws::String>
    Command& WithMaxErrors(MaxErrorsT&& value) { SetMaxErrors(std::forward<MaxErrorsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of targets for the command.</p>
     */
    inline int GetTargetCount() const { return m_targetCount; }
    inline bool TargetCountHasBeenSet() const { return m_targetCountHasBeenSet; }
    inline void SetTargetCount(int value) { m_targetCountHasBeenSet = true; m_targetCount = value; }
    inline Command& WithTargetCount(int value) { SetTargetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of targets for which the command invocation reached a terminal
     * state. Terminal states include the following: Success, Failed, Execution Timed
     * Out, Delivery Timed Out, Cancelled, Terminated, or Undeliverable.</p>
     */
    inline int GetCompletedCount() const { return m_completedCount; }
    inline bool CompletedCountHasBeenSet() const { return m_completedCountHasBeenSet; }
    inline void SetCompletedCount(int value) { m_completedCountHasBeenSet = true; m_completedCount = value; }
    inline Command& WithCompletedCount(int value) { SetCompletedCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of targets for which the status is Failed or Execution Timed
     * Out.</p>
     */
    inline int GetErrorCount() const { return m_errorCount; }
    inline bool ErrorCountHasBeenSet() const { return m_errorCountHasBeenSet; }
    inline void SetErrorCount(int value) { m_errorCountHasBeenSet = true; m_errorCount = value; }
    inline Command& WithErrorCount(int value) { SetErrorCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of targets for which the status is Delivery Timed Out.</p>
     */
    inline int GetDeliveryTimedOutCount() const { return m_deliveryTimedOutCount; }
    inline bool DeliveryTimedOutCountHasBeenSet() const { return m_deliveryTimedOutCountHasBeenSet; }
    inline void SetDeliveryTimedOutCount(int value) { m_deliveryTimedOutCountHasBeenSet = true; m_deliveryTimedOutCount = value; }
    inline Command& WithDeliveryTimedOutCount(int value) { SetDeliveryTimedOutCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Identity and Access Management (IAM) service role that Run Command, a
     * tool in Amazon Web Services Systems Manager, uses to act on your behalf when
     * sending notifications about command status changes. </p>
     */
    inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    template<typename ServiceRoleT = Aws::String>
    void SetServiceRole(ServiceRoleT&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::forward<ServiceRoleT>(value); }
    template<typename ServiceRoleT = Aws::String>
    Command& WithServiceRole(ServiceRoleT&& value) { SetServiceRole(std::forward<ServiceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configurations for sending notifications about command status changes. </p>
     */
    inline const NotificationConfig& GetNotificationConfig() const { return m_notificationConfig; }
    inline bool NotificationConfigHasBeenSet() const { return m_notificationConfigHasBeenSet; }
    template<typename NotificationConfigT = NotificationConfig>
    void SetNotificationConfig(NotificationConfigT&& value) { m_notificationConfigHasBeenSet = true; m_notificationConfig = std::forward<NotificationConfigT>(value); }
    template<typename NotificationConfigT = NotificationConfig>
    Command& WithNotificationConfig(NotificationConfigT&& value) { SetNotificationConfig(std::forward<NotificationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon CloudWatch Logs information where you want Amazon Web Services Systems
     * Manager to send the command output.</p>
     */
    inline const CloudWatchOutputConfig& GetCloudWatchOutputConfig() const { return m_cloudWatchOutputConfig; }
    inline bool CloudWatchOutputConfigHasBeenSet() const { return m_cloudWatchOutputConfigHasBeenSet; }
    template<typename CloudWatchOutputConfigT = CloudWatchOutputConfig>
    void SetCloudWatchOutputConfig(CloudWatchOutputConfigT&& value) { m_cloudWatchOutputConfigHasBeenSet = true; m_cloudWatchOutputConfig = std::forward<CloudWatchOutputConfigT>(value); }
    template<typename CloudWatchOutputConfigT = CloudWatchOutputConfig>
    Command& WithCloudWatchOutputConfig(CloudWatchOutputConfigT&& value) { SetCloudWatchOutputConfig(std::forward<CloudWatchOutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>TimeoutSeconds</code> value specified for a command.</p>
     */
    inline int GetTimeoutSeconds() const { return m_timeoutSeconds; }
    inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }
    inline void SetTimeoutSeconds(int value) { m_timeoutSecondsHasBeenSet = true; m_timeoutSeconds = value; }
    inline Command& WithTimeoutSeconds(int value) { SetTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for the CloudWatch alarm applied to your command.</p>
     */
    inline const AlarmConfiguration& GetAlarmConfiguration() const { return m_alarmConfiguration; }
    inline bool AlarmConfigurationHasBeenSet() const { return m_alarmConfigurationHasBeenSet; }
    template<typename AlarmConfigurationT = AlarmConfiguration>
    void SetAlarmConfiguration(AlarmConfigurationT&& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = std::forward<AlarmConfigurationT>(value); }
    template<typename AlarmConfigurationT = AlarmConfiguration>
    Command& WithAlarmConfiguration(AlarmConfigurationT&& value) { SetAlarmConfiguration(std::forward<AlarmConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch alarm that was invoked by the command.</p>
     */
    inline const Aws::Vector<AlarmStateInformation>& GetTriggeredAlarms() const { return m_triggeredAlarms; }
    inline bool TriggeredAlarmsHasBeenSet() const { return m_triggeredAlarmsHasBeenSet; }
    template<typename TriggeredAlarmsT = Aws::Vector<AlarmStateInformation>>
    void SetTriggeredAlarms(TriggeredAlarmsT&& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms = std::forward<TriggeredAlarmsT>(value); }
    template<typename TriggeredAlarmsT = Aws::Vector<AlarmStateInformation>>
    Command& WithTriggeredAlarms(TriggeredAlarmsT&& value) { SetTriggeredAlarms(std::forward<TriggeredAlarmsT>(value)); return *this;}
    template<typename TriggeredAlarmsT = AlarmStateInformation>
    Command& AddTriggeredAlarms(TriggeredAlarmsT&& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms.emplace_back(std::forward<TriggeredAlarmsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_commandId;
    bool m_commandIdHasBeenSet = false;

    Aws::String m_documentName;
    bool m_documentNameHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::Utils::DateTime m_expiresAfter{};
    bool m_expiresAfterHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::Utils::DateTime m_requestedDateTime{};
    bool m_requestedDateTimeHasBeenSet = false;

    CommandStatus m_status{CommandStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    Aws::String m_outputS3Region;
    bool m_outputS3RegionHasBeenSet = false;

    Aws::String m_outputS3BucketName;
    bool m_outputS3BucketNameHasBeenSet = false;

    Aws::String m_outputS3KeyPrefix;
    bool m_outputS3KeyPrefixHasBeenSet = false;

    Aws::String m_maxConcurrency;
    bool m_maxConcurrencyHasBeenSet = false;

    Aws::String m_maxErrors;
    bool m_maxErrorsHasBeenSet = false;

    int m_targetCount{0};
    bool m_targetCountHasBeenSet = false;

    int m_completedCount{0};
    bool m_completedCountHasBeenSet = false;

    int m_errorCount{0};
    bool m_errorCountHasBeenSet = false;

    int m_deliveryTimedOutCount{0};
    bool m_deliveryTimedOutCountHasBeenSet = false;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    NotificationConfig m_notificationConfig;
    bool m_notificationConfigHasBeenSet = false;

    CloudWatchOutputConfig m_cloudWatchOutputConfig;
    bool m_cloudWatchOutputConfigHasBeenSet = false;

    int m_timeoutSeconds{0};
    bool m_timeoutSecondsHasBeenSet = false;

    AlarmConfiguration m_alarmConfiguration;
    bool m_alarmConfigurationHasBeenSet = false;

    Aws::Vector<AlarmStateInformation> m_triggeredAlarms;
    bool m_triggeredAlarmsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
