/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/CommandInvocationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/NotificationConfig.h>
#include <aws/ssm/model/CloudWatchOutputConfig.h>
#include <aws/ssm/model/CommandPlugin.h>
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
   * <p>An invocation is a copy of a command sent to a specific managed node. A
   * command can apply to one or more managed nodes. A command invocation applies to
   * one managed node. For example, if a user runs <code>SendCommand</code> against
   * three managed nodes, then a command invocation is created for each requested
   * managed node ID. A command invocation returns status and detail information
   * about a command you ran. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CommandInvocation">AWS
   * API Reference</a></p>
   */
  class CommandInvocation
  {
  public:
    AWS_SSM_API CommandInvocation();
    AWS_SSM_API CommandInvocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API CommandInvocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The command against which this invocation was requested.</p>
     */
    inline const Aws::String& GetCommandId() const{ return m_commandId; }
    inline bool CommandIdHasBeenSet() const { return m_commandIdHasBeenSet; }
    inline void SetCommandId(const Aws::String& value) { m_commandIdHasBeenSet = true; m_commandId = value; }
    inline void SetCommandId(Aws::String&& value) { m_commandIdHasBeenSet = true; m_commandId = std::move(value); }
    inline void SetCommandId(const char* value) { m_commandIdHasBeenSet = true; m_commandId.assign(value); }
    inline CommandInvocation& WithCommandId(const Aws::String& value) { SetCommandId(value); return *this;}
    inline CommandInvocation& WithCommandId(Aws::String&& value) { SetCommandId(std::move(value)); return *this;}
    inline CommandInvocation& WithCommandId(const char* value) { SetCommandId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed node ID in which this invocation was requested.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline CommandInvocation& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline CommandInvocation& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline CommandInvocation& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified host name of the managed node.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }
    inline CommandInvocation& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}
    inline CommandInvocation& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}
    inline CommandInvocation& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}
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
    inline CommandInvocation& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline CommandInvocation& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline CommandInvocation& WithComment(const char* value) { SetComment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document name that was requested for execution.</p>
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }
    inline void SetDocumentName(const Aws::String& value) { m_documentNameHasBeenSet = true; m_documentName = value; }
    inline void SetDocumentName(Aws::String&& value) { m_documentNameHasBeenSet = true; m_documentName = std::move(value); }
    inline void SetDocumentName(const char* value) { m_documentNameHasBeenSet = true; m_documentName.assign(value); }
    inline CommandInvocation& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}
    inline CommandInvocation& WithDocumentName(Aws::String&& value) { SetDocumentName(std::move(value)); return *this;}
    inline CommandInvocation& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}
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
    inline CommandInvocation& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}
    inline CommandInvocation& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}
    inline CommandInvocation& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time and date the request was sent to this managed node.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestedDateTime() const{ return m_requestedDateTime; }
    inline bool RequestedDateTimeHasBeenSet() const { return m_requestedDateTimeHasBeenSet; }
    inline void SetRequestedDateTime(const Aws::Utils::DateTime& value) { m_requestedDateTimeHasBeenSet = true; m_requestedDateTime = value; }
    inline void SetRequestedDateTime(Aws::Utils::DateTime&& value) { m_requestedDateTimeHasBeenSet = true; m_requestedDateTime = std::move(value); }
    inline CommandInvocation& WithRequestedDateTime(const Aws::Utils::DateTime& value) { SetRequestedDateTime(value); return *this;}
    inline CommandInvocation& WithRequestedDateTime(Aws::Utils::DateTime&& value) { SetRequestedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not the invocation succeeded, failed, or is pending.</p>
     */
    inline const CommandInvocationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const CommandInvocationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(CommandInvocationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CommandInvocation& WithStatus(const CommandInvocationStatus& value) { SetStatus(value); return *this;}
    inline CommandInvocation& WithStatus(CommandInvocationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed status of the command execution for each invocation (each managed
     * node targeted by the command). StatusDetails includes more information than
     * Status because it includes states resulting from error and concurrency control
     * parameters. StatusDetails can show different results than Status. For more
     * information about these statuses, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-commands.html">Understanding
     * command statuses</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>. StatusDetails can be one of the following values:</p> <ul> <li>
     * <p>Pending: The command hasn't been sent to the managed node.</p> </li> <li>
     * <p>In Progress: The command has been sent to the managed node but hasn't reached
     * a terminal state.</p> </li> <li> <p>Success: The execution of the command or
     * plugin was successfully completed. This is a terminal state.</p> </li> <li>
     * <p>Delivery Timed Out: The command wasn't delivered to the managed node before
     * the delivery timeout expired. Delivery timeouts don't count against the parent
     * command's <code>MaxErrors</code> limit, but they do contribute to whether the
     * parent command status is Success or Incomplete. This is a terminal state.</p>
     * </li> <li> <p>Execution Timed Out: Command execution started on the managed
     * node, but the execution wasn't complete before the execution timeout expired.
     * Execution timeouts count against the <code>MaxErrors</code> limit of the parent
     * command. This is a terminal state.</p> </li> <li> <p>Failed: The command wasn't
     * successful on the managed node. For a plugin, this indicates that the result
     * code wasn't zero. For a command invocation, this indicates that the result code
     * for one or more plugins wasn't zero. Invocation failures count against the
     * <code>MaxErrors</code> limit of the parent command. This is a terminal
     * state.</p> </li> <li> <p>Cancelled: The command was terminated before it was
     * completed. This is a terminal state.</p> </li> <li> <p>Undeliverable: The
     * command can't be delivered to the managed node. The managed node might not exist
     * or might not be responding. Undeliverable invocations don't count against the
     * parent command's MaxErrors limit and don't contribute to whether the parent
     * command status is Success or Incomplete. This is a terminal state.</p> </li>
     * <li> <p>Terminated: The parent command exceeded its MaxErrors limit and
     * subsequent command invocations were canceled by the system. This is a terminal
     * state.</p> </li> <li> <p>Delayed: The system attempted to send the command to
     * the managed node but wasn't successful. The system retries again.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetStatusDetails() const{ return m_statusDetails; }
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }
    inline void SetStatusDetails(const Aws::String& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }
    inline void SetStatusDetails(Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::move(value); }
    inline void SetStatusDetails(const char* value) { m_statusDetailsHasBeenSet = true; m_statusDetails.assign(value); }
    inline CommandInvocation& WithStatusDetails(const Aws::String& value) { SetStatusDetails(value); return *this;}
    inline CommandInvocation& WithStatusDetails(Aws::String&& value) { SetStatusDetails(std::move(value)); return *this;}
    inline CommandInvocation& WithStatusDetails(const char* value) { SetStatusDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Gets the trace output sent by the agent. </p>
     */
    inline const Aws::String& GetTraceOutput() const{ return m_traceOutput; }
    inline bool TraceOutputHasBeenSet() const { return m_traceOutputHasBeenSet; }
    inline void SetTraceOutput(const Aws::String& value) { m_traceOutputHasBeenSet = true; m_traceOutput = value; }
    inline void SetTraceOutput(Aws::String&& value) { m_traceOutputHasBeenSet = true; m_traceOutput = std::move(value); }
    inline void SetTraceOutput(const char* value) { m_traceOutputHasBeenSet = true; m_traceOutput.assign(value); }
    inline CommandInvocation& WithTraceOutput(const Aws::String& value) { SetTraceOutput(value); return *this;}
    inline CommandInvocation& WithTraceOutput(Aws::String&& value) { SetTraceOutput(std::move(value)); return *this;}
    inline CommandInvocation& WithTraceOutput(const char* value) { SetTraceOutput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the plugin's StdOut file in Amazon Simple Storage Service (Amazon
     * S3), if the S3 bucket was defined for the parent command. For an invocation,
     * <code>StandardOutputUrl</code> is populated if there is just one plugin defined
     * for the command, and the S3 bucket was defined for the command.</p>
     */
    inline const Aws::String& GetStandardOutputUrl() const{ return m_standardOutputUrl; }
    inline bool StandardOutputUrlHasBeenSet() const { return m_standardOutputUrlHasBeenSet; }
    inline void SetStandardOutputUrl(const Aws::String& value) { m_standardOutputUrlHasBeenSet = true; m_standardOutputUrl = value; }
    inline void SetStandardOutputUrl(Aws::String&& value) { m_standardOutputUrlHasBeenSet = true; m_standardOutputUrl = std::move(value); }
    inline void SetStandardOutputUrl(const char* value) { m_standardOutputUrlHasBeenSet = true; m_standardOutputUrl.assign(value); }
    inline CommandInvocation& WithStandardOutputUrl(const Aws::String& value) { SetStandardOutputUrl(value); return *this;}
    inline CommandInvocation& WithStandardOutputUrl(Aws::String&& value) { SetStandardOutputUrl(std::move(value)); return *this;}
    inline CommandInvocation& WithStandardOutputUrl(const char* value) { SetStandardOutputUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the plugin's StdErr file in Amazon Simple Storage Service (Amazon
     * S3), if the S3 bucket was defined for the parent command. For an invocation,
     * <code>StandardErrorUrl</code> is populated if there is just one plugin defined
     * for the command, and the S3 bucket was defined for the command.</p>
     */
    inline const Aws::String& GetStandardErrorUrl() const{ return m_standardErrorUrl; }
    inline bool StandardErrorUrlHasBeenSet() const { return m_standardErrorUrlHasBeenSet; }
    inline void SetStandardErrorUrl(const Aws::String& value) { m_standardErrorUrlHasBeenSet = true; m_standardErrorUrl = value; }
    inline void SetStandardErrorUrl(Aws::String&& value) { m_standardErrorUrlHasBeenSet = true; m_standardErrorUrl = std::move(value); }
    inline void SetStandardErrorUrl(const char* value) { m_standardErrorUrlHasBeenSet = true; m_standardErrorUrl.assign(value); }
    inline CommandInvocation& WithStandardErrorUrl(const Aws::String& value) { SetStandardErrorUrl(value); return *this;}
    inline CommandInvocation& WithStandardErrorUrl(Aws::String&& value) { SetStandardErrorUrl(std::move(value)); return *this;}
    inline CommandInvocation& WithStandardErrorUrl(const char* value) { SetStandardErrorUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Plugins processed by the command.</p>
     */
    inline const Aws::Vector<CommandPlugin>& GetCommandPlugins() const{ return m_commandPlugins; }
    inline bool CommandPluginsHasBeenSet() const { return m_commandPluginsHasBeenSet; }
    inline void SetCommandPlugins(const Aws::Vector<CommandPlugin>& value) { m_commandPluginsHasBeenSet = true; m_commandPlugins = value; }
    inline void SetCommandPlugins(Aws::Vector<CommandPlugin>&& value) { m_commandPluginsHasBeenSet = true; m_commandPlugins = std::move(value); }
    inline CommandInvocation& WithCommandPlugins(const Aws::Vector<CommandPlugin>& value) { SetCommandPlugins(value); return *this;}
    inline CommandInvocation& WithCommandPlugins(Aws::Vector<CommandPlugin>&& value) { SetCommandPlugins(std::move(value)); return *this;}
    inline CommandInvocation& AddCommandPlugins(const CommandPlugin& value) { m_commandPluginsHasBeenSet = true; m_commandPlugins.push_back(value); return *this; }
    inline CommandInvocation& AddCommandPlugins(CommandPlugin&& value) { m_commandPluginsHasBeenSet = true; m_commandPlugins.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Identity and Access Management (IAM) service role that Run Command, a
     * capability of Amazon Web Services Systems Manager, uses to act on your behalf
     * when sending notifications about command status changes on a per managed node
     * basis.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }
    inline CommandInvocation& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}
    inline CommandInvocation& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}
    inline CommandInvocation& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configurations for sending notifications about command status changes on a
     * per managed node basis.</p>
     */
    inline const NotificationConfig& GetNotificationConfig() const{ return m_notificationConfig; }
    inline bool NotificationConfigHasBeenSet() const { return m_notificationConfigHasBeenSet; }
    inline void SetNotificationConfig(const NotificationConfig& value) { m_notificationConfigHasBeenSet = true; m_notificationConfig = value; }
    inline void SetNotificationConfig(NotificationConfig&& value) { m_notificationConfigHasBeenSet = true; m_notificationConfig = std::move(value); }
    inline CommandInvocation& WithNotificationConfig(const NotificationConfig& value) { SetNotificationConfig(value); return *this;}
    inline CommandInvocation& WithNotificationConfig(NotificationConfig&& value) { SetNotificationConfig(std::move(value)); return *this;}
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
    inline CommandInvocation& WithCloudWatchOutputConfig(const CloudWatchOutputConfig& value) { SetCloudWatchOutputConfig(value); return *this;}
    inline CommandInvocation& WithCloudWatchOutputConfig(CloudWatchOutputConfig&& value) { SetCloudWatchOutputConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_commandId;
    bool m_commandIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::String m_documentName;
    bool m_documentNameHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    Aws::Utils::DateTime m_requestedDateTime;
    bool m_requestedDateTimeHasBeenSet = false;

    CommandInvocationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    Aws::String m_traceOutput;
    bool m_traceOutputHasBeenSet = false;

    Aws::String m_standardOutputUrl;
    bool m_standardOutputUrlHasBeenSet = false;

    Aws::String m_standardErrorUrl;
    bool m_standardErrorUrlHasBeenSet = false;

    Aws::Vector<CommandPlugin> m_commandPlugins;
    bool m_commandPluginsHasBeenSet = false;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    NotificationConfig m_notificationConfig;
    bool m_notificationConfigHasBeenSet = false;

    CloudWatchOutputConfig m_cloudWatchOutputConfig;
    bool m_cloudWatchOutputConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
