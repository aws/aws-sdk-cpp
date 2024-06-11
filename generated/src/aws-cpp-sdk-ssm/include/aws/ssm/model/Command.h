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
    AWS_SSM_API Command();
    AWS_SSM_API Command(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Command& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for this command.</p>
     */
    inline const Aws::String& GetCommandId() const{ return m_commandId; }
    inline bool CommandIdHasBeenSet() const { return m_commandIdHasBeenSet; }
    inline void SetCommandId(const Aws::String& value) { m_commandIdHasBeenSet = true; m_commandId = value; }
    inline void SetCommandId(Aws::String&& value) { m_commandIdHasBeenSet = true; m_commandId = std::move(value); }
    inline void SetCommandId(const char* value) { m_commandIdHasBeenSet = true; m_commandId.assign(value); }
    inline Command& WithCommandId(const Aws::String& value) { SetCommandId(value); return *this;}
    inline Command& WithCommandId(Aws::String&& value) { SetCommandId(std::move(value)); return *this;}
    inline Command& WithCommandId(const char* value) { SetCommandId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the document requested for execution.</p>
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }
    inline void SetDocumentName(const Aws::String& value) { m_documentNameHasBeenSet = true; m_documentName = value; }
    inline void SetDocumentName(Aws::String&& value) { m_documentNameHasBeenSet = true; m_documentName = std::move(value); }
    inline void SetDocumentName(const char* value) { m_documentNameHasBeenSet = true; m_documentName.assign(value); }
    inline Command& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}
    inline Command& WithDocumentName(Aws::String&& value) { SetDocumentName(std::move(value)); return *this;}
    inline Command& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Systems Manager document (SSM document) version.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }
    inline Command& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}
    inline Command& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}
    inline Command& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>User-specified information about the command, such as a brief description of
     * what the command should do.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }
    inline Command& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline Command& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline Command& WithComment(const char* value) { SetComment(value); return *this;}
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
    inline const Aws::Utils::DateTime& GetExpiresAfter() const{ return m_expiresAfter; }
    inline bool ExpiresAfterHasBeenSet() const { return m_expiresAfterHasBeenSet; }
    inline void SetExpiresAfter(const Aws::Utils::DateTime& value) { m_expiresAfterHasBeenSet = true; m_expiresAfter = value; }
    inline void SetExpiresAfter(Aws::Utils::DateTime&& value) { m_expiresAfterHasBeenSet = true; m_expiresAfter = std::move(value); }
    inline Command& WithExpiresAfter(const Aws::Utils::DateTime& value) { SetExpiresAfter(value); return *this;}
    inline Command& WithExpiresAfter(Aws::Utils::DateTime&& value) { SetExpiresAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter values to be inserted in the document when running the
     * command.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline Command& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}
    inline Command& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(std::move(value)); return *this;}
    inline Command& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline Command& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline Command& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline Command& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline Command& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline Command& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The managed node IDs against which this command was requested.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::move(value); }
    inline Command& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}
    inline Command& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(std::move(value)); return *this;}
    inline Command& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }
    inline Command& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(std::move(value)); return *this; }
    inline Command& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of search criteria that targets managed nodes using a Key,Value
     * combination that you specify. Targets is required if you don't provide one or
     * more managed node IDs in the call.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline Command& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}
    inline Command& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}
    inline Command& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }
    inline Command& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time the command was requested.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestedDateTime() const{ return m_requestedDateTime; }
    inline bool RequestedDateTimeHasBeenSet() const { return m_requestedDateTimeHasBeenSet; }
    inline void SetRequestedDateTime(const Aws::Utils::DateTime& value) { m_requestedDateTimeHasBeenSet = true; m_requestedDateTime = value; }
    inline void SetRequestedDateTime(Aws::Utils::DateTime&& value) { m_requestedDateTimeHasBeenSet = true; m_requestedDateTime = std::move(value); }
    inline Command& WithRequestedDateTime(const Aws::Utils::DateTime& value) { SetRequestedDateTime(value); return *this;}
    inline Command& WithRequestedDateTime(Aws::Utils::DateTime&& value) { SetRequestedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the command.</p>
     */
    inline const CommandStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const CommandStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(CommandStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Command& WithStatus(const CommandStatus& value) { SetStatus(value); return *this;}
    inline Command& WithStatus(CommandStatus&& value) { SetStatus(std::move(value)); return *this;}
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
    inline const Aws::String& GetStatusDetails() const{ return m_statusDetails; }
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }
    inline void SetStatusDetails(const Aws::String& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }
    inline void SetStatusDetails(Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::move(value); }
    inline void SetStatusDetails(const char* value) { m_statusDetailsHasBeenSet = true; m_statusDetails.assign(value); }
    inline Command& WithStatusDetails(const Aws::String& value) { SetStatusDetails(value); return *this;}
    inline Command& WithStatusDetails(Aws::String&& value) { SetStatusDetails(std::move(value)); return *this;}
    inline Command& WithStatusDetails(const char* value) { SetStatusDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Deprecated) You can no longer specify this parameter. The system ignores it.
     * Instead, Systems Manager automatically determines the Amazon Web Services Region
     * of the S3 bucket.</p>
     */
    inline const Aws::String& GetOutputS3Region() const{ return m_outputS3Region; }
    inline bool OutputS3RegionHasBeenSet() const { return m_outputS3RegionHasBeenSet; }
    inline void SetOutputS3Region(const Aws::String& value) { m_outputS3RegionHasBeenSet = true; m_outputS3Region = value; }
    inline void SetOutputS3Region(Aws::String&& value) { m_outputS3RegionHasBeenSet = true; m_outputS3Region = std::move(value); }
    inline void SetOutputS3Region(const char* value) { m_outputS3RegionHasBeenSet = true; m_outputS3Region.assign(value); }
    inline Command& WithOutputS3Region(const Aws::String& value) { SetOutputS3Region(value); return *this;}
    inline Command& WithOutputS3Region(Aws::String&& value) { SetOutputS3Region(std::move(value)); return *this;}
    inline Command& WithOutputS3Region(const char* value) { SetOutputS3Region(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command.</p>
     */
    inline const Aws::String& GetOutputS3BucketName() const{ return m_outputS3BucketName; }
    inline bool OutputS3BucketNameHasBeenSet() const { return m_outputS3BucketNameHasBeenSet; }
    inline void SetOutputS3BucketName(const Aws::String& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = value; }
    inline void SetOutputS3BucketName(Aws::String&& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = std::move(value); }
    inline void SetOutputS3BucketName(const char* value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName.assign(value); }
    inline Command& WithOutputS3BucketName(const Aws::String& value) { SetOutputS3BucketName(value); return *this;}
    inline Command& WithOutputS3BucketName(Aws::String&& value) { SetOutputS3BucketName(std::move(value)); return *this;}
    inline Command& WithOutputS3BucketName(const char* value) { SetOutputS3BucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command.</p>
     */
    inline const Aws::String& GetOutputS3KeyPrefix() const{ return m_outputS3KeyPrefix; }
    inline bool OutputS3KeyPrefixHasBeenSet() const { return m_outputS3KeyPrefixHasBeenSet; }
    inline void SetOutputS3KeyPrefix(const Aws::String& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = value; }
    inline void SetOutputS3KeyPrefix(Aws::String&& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = std::move(value); }
    inline void SetOutputS3KeyPrefix(const char* value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix.assign(value); }
    inline Command& WithOutputS3KeyPrefix(const Aws::String& value) { SetOutputS3KeyPrefix(value); return *this;}
    inline Command& WithOutputS3KeyPrefix(Aws::String&& value) { SetOutputS3KeyPrefix(std::move(value)); return *this;}
    inline Command& WithOutputS3KeyPrefix(const char* value) { SetOutputS3KeyPrefix(value); return *this;}
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
    inline const Aws::String& GetMaxConcurrency() const{ return m_maxConcurrency; }
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }
    inline void SetMaxConcurrency(const Aws::String& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }
    inline void SetMaxConcurrency(Aws::String&& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = std::move(value); }
    inline void SetMaxConcurrency(const char* value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency.assign(value); }
    inline Command& WithMaxConcurrency(const Aws::String& value) { SetMaxConcurrency(value); return *this;}
    inline Command& WithMaxConcurrency(Aws::String&& value) { SetMaxConcurrency(std::move(value)); return *this;}
    inline Command& WithMaxConcurrency(const char* value) { SetMaxConcurrency(value); return *this;}
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
    inline const Aws::String& GetMaxErrors() const{ return m_maxErrors; }
    inline bool MaxErrorsHasBeenSet() const { return m_maxErrorsHasBeenSet; }
    inline void SetMaxErrors(const Aws::String& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = value; }
    inline void SetMaxErrors(Aws::String&& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = std::move(value); }
    inline void SetMaxErrors(const char* value) { m_maxErrorsHasBeenSet = true; m_maxErrors.assign(value); }
    inline Command& WithMaxErrors(const Aws::String& value) { SetMaxErrors(value); return *this;}
    inline Command& WithMaxErrors(Aws::String&& value) { SetMaxErrors(std::move(value)); return *this;}
    inline Command& WithMaxErrors(const char* value) { SetMaxErrors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of targets for the command.</p>
     */
    inline int GetTargetCount() const{ return m_targetCount; }
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
    inline int GetCompletedCount() const{ return m_completedCount; }
    inline bool CompletedCountHasBeenSet() const { return m_completedCountHasBeenSet; }
    inline void SetCompletedCount(int value) { m_completedCountHasBeenSet = true; m_completedCount = value; }
    inline Command& WithCompletedCount(int value) { SetCompletedCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of targets for which the status is Failed or Execution Timed
     * Out.</p>
     */
    inline int GetErrorCount() const{ return m_errorCount; }
    inline bool ErrorCountHasBeenSet() const { return m_errorCountHasBeenSet; }
    inline void SetErrorCount(int value) { m_errorCountHasBeenSet = true; m_errorCount = value; }
    inline Command& WithErrorCount(int value) { SetErrorCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of targets for which the status is Delivery Timed Out.</p>
     */
    inline int GetDeliveryTimedOutCount() const{ return m_deliveryTimedOutCount; }
    inline bool DeliveryTimedOutCountHasBeenSet() const { return m_deliveryTimedOutCountHasBeenSet; }
    inline void SetDeliveryTimedOutCount(int value) { m_deliveryTimedOutCountHasBeenSet = true; m_deliveryTimedOutCount = value; }
    inline Command& WithDeliveryTimedOutCount(int value) { SetDeliveryTimedOutCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Identity and Access Management (IAM) service role that Run Command, a
     * capability of Amazon Web Services Systems Manager, uses to act on your behalf
     * when sending notifications about command status changes. </p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }
    inline Command& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}
    inline Command& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}
    inline Command& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configurations for sending notifications about command status changes. </p>
     */
    inline const NotificationConfig& GetNotificationConfig() const{ return m_notificationConfig; }
    inline bool NotificationConfigHasBeenSet() const { return m_notificationConfigHasBeenSet; }
    inline void SetNotificationConfig(const NotificationConfig& value) { m_notificationConfigHasBeenSet = true; m_notificationConfig = value; }
    inline void SetNotificationConfig(NotificationConfig&& value) { m_notificationConfigHasBeenSet = true; m_notificationConfig = std::move(value); }
    inline Command& WithNotificationConfig(const NotificationConfig& value) { SetNotificationConfig(value); return *this;}
    inline Command& WithNotificationConfig(NotificationConfig&& value) { SetNotificationConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon CloudWatch Logs information where you want Amazon Web Services Systems
     * Manager to send the command output.</p>
     */
    inline const CloudWatchOutputConfig& GetCloudWatchOutputConfig() const{ return m_cloudWatchOutputConfig; }
    inline bool CloudWatchOutputConfigHasBeenSet() const { return m_cloudWatchOutputConfigHasBeenSet; }
    inline void SetCloudWatchOutputConfig(const CloudWatchOutputConfig& value) { m_cloudWatchOutputConfigHasBeenSet = true; m_cloudWatchOutputConfig = value; }
    inline void SetCloudWatchOutputConfig(CloudWatchOutputConfig&& value) { m_cloudWatchOutputConfigHasBeenSet = true; m_cloudWatchOutputConfig = std::move(value); }
    inline Command& WithCloudWatchOutputConfig(const CloudWatchOutputConfig& value) { SetCloudWatchOutputConfig(value); return *this;}
    inline Command& WithCloudWatchOutputConfig(CloudWatchOutputConfig&& value) { SetCloudWatchOutputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>TimeoutSeconds</code> value specified for a command.</p>
     */
    inline int GetTimeoutSeconds() const{ return m_timeoutSeconds; }
    inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }
    inline void SetTimeoutSeconds(int value) { m_timeoutSecondsHasBeenSet = true; m_timeoutSeconds = value; }
    inline Command& WithTimeoutSeconds(int value) { SetTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for the CloudWatch alarm applied to your command.</p>
     */
    inline const AlarmConfiguration& GetAlarmConfiguration() const{ return m_alarmConfiguration; }
    inline bool AlarmConfigurationHasBeenSet() const { return m_alarmConfigurationHasBeenSet; }
    inline void SetAlarmConfiguration(const AlarmConfiguration& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = value; }
    inline void SetAlarmConfiguration(AlarmConfiguration&& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = std::move(value); }
    inline Command& WithAlarmConfiguration(const AlarmConfiguration& value) { SetAlarmConfiguration(value); return *this;}
    inline Command& WithAlarmConfiguration(AlarmConfiguration&& value) { SetAlarmConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch alarm that was invoked by the command.</p>
     */
    inline const Aws::Vector<AlarmStateInformation>& GetTriggeredAlarms() const{ return m_triggeredAlarms; }
    inline bool TriggeredAlarmsHasBeenSet() const { return m_triggeredAlarmsHasBeenSet; }
    inline void SetTriggeredAlarms(const Aws::Vector<AlarmStateInformation>& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms = value; }
    inline void SetTriggeredAlarms(Aws::Vector<AlarmStateInformation>&& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms = std::move(value); }
    inline Command& WithTriggeredAlarms(const Aws::Vector<AlarmStateInformation>& value) { SetTriggeredAlarms(value); return *this;}
    inline Command& WithTriggeredAlarms(Aws::Vector<AlarmStateInformation>&& value) { SetTriggeredAlarms(std::move(value)); return *this;}
    inline Command& AddTriggeredAlarms(const AlarmStateInformation& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms.push_back(value); return *this; }
    inline Command& AddTriggeredAlarms(AlarmStateInformation&& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms.push_back(std::move(value)); return *this; }
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

    Aws::Utils::DateTime m_expiresAfter;
    bool m_expiresAfterHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::Utils::DateTime m_requestedDateTime;
    bool m_requestedDateTimeHasBeenSet = false;

    CommandStatus m_status;
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

    int m_targetCount;
    bool m_targetCountHasBeenSet = false;

    int m_completedCount;
    bool m_completedCountHasBeenSet = false;

    int m_errorCount;
    bool m_errorCountHasBeenSet = false;

    int m_deliveryTimedOutCount;
    bool m_deliveryTimedOutCountHasBeenSet = false;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    NotificationConfig m_notificationConfig;
    bool m_notificationConfigHasBeenSet = false;

    CloudWatchOutputConfig m_cloudWatchOutputConfig;
    bool m_cloudWatchOutputConfigHasBeenSet = false;

    int m_timeoutSeconds;
    bool m_timeoutSecondsHasBeenSet = false;

    AlarmConfiguration m_alarmConfiguration;
    bool m_alarmConfigurationHasBeenSet = false;

    Aws::Vector<AlarmStateInformation> m_triggeredAlarms;
    bool m_triggeredAlarmsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
