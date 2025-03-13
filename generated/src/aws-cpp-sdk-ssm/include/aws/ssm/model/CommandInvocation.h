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
    AWS_SSM_API CommandInvocation() = default;
    AWS_SSM_API CommandInvocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API CommandInvocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The command against which this invocation was requested.</p>
     */
    inline const Aws::String& GetCommandId() const { return m_commandId; }
    inline bool CommandIdHasBeenSet() const { return m_commandIdHasBeenSet; }
    template<typename CommandIdT = Aws::String>
    void SetCommandId(CommandIdT&& value) { m_commandIdHasBeenSet = true; m_commandId = std::forward<CommandIdT>(value); }
    template<typename CommandIdT = Aws::String>
    CommandInvocation& WithCommandId(CommandIdT&& value) { SetCommandId(std::forward<CommandIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed node ID in which this invocation was requested.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    CommandInvocation& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified host name of the managed node.</p>
     */
    inline const Aws::String& GetInstanceName() const { return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    template<typename InstanceNameT = Aws::String>
    void SetInstanceName(InstanceNameT&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::forward<InstanceNameT>(value); }
    template<typename InstanceNameT = Aws::String>
    CommandInvocation& WithInstanceName(InstanceNameT&& value) { SetInstanceName(std::forward<InstanceNameT>(value)); return *this;}
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
    CommandInvocation& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document name that was requested for execution.</p>
     */
    inline const Aws::String& GetDocumentName() const { return m_documentName; }
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }
    template<typename DocumentNameT = Aws::String>
    void SetDocumentName(DocumentNameT&& value) { m_documentNameHasBeenSet = true; m_documentName = std::forward<DocumentNameT>(value); }
    template<typename DocumentNameT = Aws::String>
    CommandInvocation& WithDocumentName(DocumentNameT&& value) { SetDocumentName(std::forward<DocumentNameT>(value)); return *this;}
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
    CommandInvocation& WithDocumentVersion(DocumentVersionT&& value) { SetDocumentVersion(std::forward<DocumentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time and date the request was sent to this managed node.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestedDateTime() const { return m_requestedDateTime; }
    inline bool RequestedDateTimeHasBeenSet() const { return m_requestedDateTimeHasBeenSet; }
    template<typename RequestedDateTimeT = Aws::Utils::DateTime>
    void SetRequestedDateTime(RequestedDateTimeT&& value) { m_requestedDateTimeHasBeenSet = true; m_requestedDateTime = std::forward<RequestedDateTimeT>(value); }
    template<typename RequestedDateTimeT = Aws::Utils::DateTime>
    CommandInvocation& WithRequestedDateTime(RequestedDateTimeT&& value) { SetRequestedDateTime(std::forward<RequestedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not the invocation succeeded, failed, or is pending.</p>
     */
    inline CommandInvocationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CommandInvocationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CommandInvocation& WithStatus(CommandInvocationStatus value) { SetStatus(value); return *this;}
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
    inline const Aws::String& GetStatusDetails() const { return m_statusDetails; }
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }
    template<typename StatusDetailsT = Aws::String>
    void SetStatusDetails(StatusDetailsT&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::forward<StatusDetailsT>(value); }
    template<typename StatusDetailsT = Aws::String>
    CommandInvocation& WithStatusDetails(StatusDetailsT&& value) { SetStatusDetails(std::forward<StatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Gets the trace output sent by the agent. </p>
     */
    inline const Aws::String& GetTraceOutput() const { return m_traceOutput; }
    inline bool TraceOutputHasBeenSet() const { return m_traceOutputHasBeenSet; }
    template<typename TraceOutputT = Aws::String>
    void SetTraceOutput(TraceOutputT&& value) { m_traceOutputHasBeenSet = true; m_traceOutput = std::forward<TraceOutputT>(value); }
    template<typename TraceOutputT = Aws::String>
    CommandInvocation& WithTraceOutput(TraceOutputT&& value) { SetTraceOutput(std::forward<TraceOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the plugin's StdOut file in Amazon Simple Storage Service (Amazon
     * S3), if the S3 bucket was defined for the parent command. For an invocation,
     * <code>StandardOutputUrl</code> is populated if there is just one plugin defined
     * for the command, and the S3 bucket was defined for the command.</p>
     */
    inline const Aws::String& GetStandardOutputUrl() const { return m_standardOutputUrl; }
    inline bool StandardOutputUrlHasBeenSet() const { return m_standardOutputUrlHasBeenSet; }
    template<typename StandardOutputUrlT = Aws::String>
    void SetStandardOutputUrl(StandardOutputUrlT&& value) { m_standardOutputUrlHasBeenSet = true; m_standardOutputUrl = std::forward<StandardOutputUrlT>(value); }
    template<typename StandardOutputUrlT = Aws::String>
    CommandInvocation& WithStandardOutputUrl(StandardOutputUrlT&& value) { SetStandardOutputUrl(std::forward<StandardOutputUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the plugin's StdErr file in Amazon Simple Storage Service (Amazon
     * S3), if the S3 bucket was defined for the parent command. For an invocation,
     * <code>StandardErrorUrl</code> is populated if there is just one plugin defined
     * for the command, and the S3 bucket was defined for the command.</p>
     */
    inline const Aws::String& GetStandardErrorUrl() const { return m_standardErrorUrl; }
    inline bool StandardErrorUrlHasBeenSet() const { return m_standardErrorUrlHasBeenSet; }
    template<typename StandardErrorUrlT = Aws::String>
    void SetStandardErrorUrl(StandardErrorUrlT&& value) { m_standardErrorUrlHasBeenSet = true; m_standardErrorUrl = std::forward<StandardErrorUrlT>(value); }
    template<typename StandardErrorUrlT = Aws::String>
    CommandInvocation& WithStandardErrorUrl(StandardErrorUrlT&& value) { SetStandardErrorUrl(std::forward<StandardErrorUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Plugins processed by the command.</p>
     */
    inline const Aws::Vector<CommandPlugin>& GetCommandPlugins() const { return m_commandPlugins; }
    inline bool CommandPluginsHasBeenSet() const { return m_commandPluginsHasBeenSet; }
    template<typename CommandPluginsT = Aws::Vector<CommandPlugin>>
    void SetCommandPlugins(CommandPluginsT&& value) { m_commandPluginsHasBeenSet = true; m_commandPlugins = std::forward<CommandPluginsT>(value); }
    template<typename CommandPluginsT = Aws::Vector<CommandPlugin>>
    CommandInvocation& WithCommandPlugins(CommandPluginsT&& value) { SetCommandPlugins(std::forward<CommandPluginsT>(value)); return *this;}
    template<typename CommandPluginsT = CommandPlugin>
    CommandInvocation& AddCommandPlugins(CommandPluginsT&& value) { m_commandPluginsHasBeenSet = true; m_commandPlugins.emplace_back(std::forward<CommandPluginsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Identity and Access Management (IAM) service role that Run Command, a
     * tool in Amazon Web Services Systems Manager, uses to act on your behalf when
     * sending notifications about command status changes on a per managed node
     * basis.</p>
     */
    inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    template<typename ServiceRoleT = Aws::String>
    void SetServiceRole(ServiceRoleT&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::forward<ServiceRoleT>(value); }
    template<typename ServiceRoleT = Aws::String>
    CommandInvocation& WithServiceRole(ServiceRoleT&& value) { SetServiceRole(std::forward<ServiceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configurations for sending notifications about command status changes on a
     * per managed node basis.</p>
     */
    inline const NotificationConfig& GetNotificationConfig() const { return m_notificationConfig; }
    inline bool NotificationConfigHasBeenSet() const { return m_notificationConfigHasBeenSet; }
    template<typename NotificationConfigT = NotificationConfig>
    void SetNotificationConfig(NotificationConfigT&& value) { m_notificationConfigHasBeenSet = true; m_notificationConfig = std::forward<NotificationConfigT>(value); }
    template<typename NotificationConfigT = NotificationConfig>
    CommandInvocation& WithNotificationConfig(NotificationConfigT&& value) { SetNotificationConfig(std::forward<NotificationConfigT>(value)); return *this;}
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
    CommandInvocation& WithCloudWatchOutputConfig(CloudWatchOutputConfigT&& value) { SetCloudWatchOutputConfig(std::forward<CloudWatchOutputConfigT>(value)); return *this;}
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

    Aws::Utils::DateTime m_requestedDateTime{};
    bool m_requestedDateTimeHasBeenSet = false;

    CommandInvocationStatus m_status{CommandInvocationStatus::NOT_SET};
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
