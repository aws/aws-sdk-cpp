/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/CommandInvocationStatus.h>
#include <aws/ssm/model/CloudWatchOutputConfig.h>
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
namespace SSM
{
namespace Model
{
  class GetCommandInvocationResult
  {
  public:
    AWS_SSM_API GetCommandInvocationResult() = default;
    AWS_SSM_API GetCommandInvocationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetCommandInvocationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The parent command ID of the invocation plugin.</p>
     */
    inline const Aws::String& GetCommandId() const { return m_commandId; }
    template<typename CommandIdT = Aws::String>
    void SetCommandId(CommandIdT&& value) { m_commandIdHasBeenSet = true; m_commandId = std::forward<CommandIdT>(value); }
    template<typename CommandIdT = Aws::String>
    GetCommandInvocationResult& WithCommandId(CommandIdT&& value) { SetCommandId(std::forward<CommandIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the managed node targeted by the command. A <i>managed node</i> can
     * be an Amazon Elastic Compute Cloud (Amazon EC2) instance, edge device, or
     * on-premises server or VM in your hybrid environment that is configured for
     * Amazon Web Services Systems Manager.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    GetCommandInvocationResult& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comment text for the command.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    GetCommandInvocationResult& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the document that was run. For example,
     * <code>AWS-RunShellScript</code>.</p>
     */
    inline const Aws::String& GetDocumentName() const { return m_documentName; }
    template<typename DocumentNameT = Aws::String>
    void SetDocumentName(DocumentNameT&& value) { m_documentNameHasBeenSet = true; m_documentName = std::forward<DocumentNameT>(value); }
    template<typename DocumentNameT = Aws::String>
    GetCommandInvocationResult& WithDocumentName(DocumentNameT&& value) { SetDocumentName(std::forward<DocumentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Systems Manager document (SSM document) version used in the request.</p>
     */
    inline const Aws::String& GetDocumentVersion() const { return m_documentVersion; }
    template<typename DocumentVersionT = Aws::String>
    void SetDocumentVersion(DocumentVersionT&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::forward<DocumentVersionT>(value); }
    template<typename DocumentVersionT = Aws::String>
    GetCommandInvocationResult& WithDocumentVersion(DocumentVersionT&& value) { SetDocumentVersion(std::forward<DocumentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the plugin, or <i>step name</i>, for which details are reported.
     * For example, <code>aws:RunShellScript</code> is a plugin.</p>
     */
    inline const Aws::String& GetPluginName() const { return m_pluginName; }
    template<typename PluginNameT = Aws::String>
    void SetPluginName(PluginNameT&& value) { m_pluginNameHasBeenSet = true; m_pluginName = std::forward<PluginNameT>(value); }
    template<typename PluginNameT = Aws::String>
    GetCommandInvocationResult& WithPluginName(PluginNameT&& value) { SetPluginName(std::forward<PluginNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error level response code for the plugin script. If the response code is
     * <code>-1</code>, then the command hasn't started running on the managed node, or
     * it wasn't received by the node.</p>
     */
    inline int GetResponseCode() const { return m_responseCode; }
    inline void SetResponseCode(int value) { m_responseCodeHasBeenSet = true; m_responseCode = value; }
    inline GetCommandInvocationResult& WithResponseCode(int value) { SetResponseCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the plugin started running. Date and time are written in
     * ISO 8601 format. For example, June 7, 2017 is represented as 2017-06-7. The
     * following sample Amazon Web Services CLI command uses the
     * <code>InvokedBefore</code> filter.</p> <p> <code>aws ssm list-commands --filters
     * key=InvokedBefore,value=2017-06-07T00:00:00Z</code> </p> <p>If the plugin hasn't
     * started to run, the string is empty.</p>
     */
    inline const Aws::String& GetExecutionStartDateTime() const { return m_executionStartDateTime; }
    template<typename ExecutionStartDateTimeT = Aws::String>
    void SetExecutionStartDateTime(ExecutionStartDateTimeT&& value) { m_executionStartDateTimeHasBeenSet = true; m_executionStartDateTime = std::forward<ExecutionStartDateTimeT>(value); }
    template<typename ExecutionStartDateTimeT = Aws::String>
    GetCommandInvocationResult& WithExecutionStartDateTime(ExecutionStartDateTimeT&& value) { SetExecutionStartDateTime(std::forward<ExecutionStartDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Duration since <code>ExecutionStartDateTime</code>.</p>
     */
    inline const Aws::String& GetExecutionElapsedTime() const { return m_executionElapsedTime; }
    template<typename ExecutionElapsedTimeT = Aws::String>
    void SetExecutionElapsedTime(ExecutionElapsedTimeT&& value) { m_executionElapsedTimeHasBeenSet = true; m_executionElapsedTime = std::forward<ExecutionElapsedTimeT>(value); }
    template<typename ExecutionElapsedTimeT = Aws::String>
    GetCommandInvocationResult& WithExecutionElapsedTime(ExecutionElapsedTimeT&& value) { SetExecutionElapsedTime(std::forward<ExecutionElapsedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the plugin finished running. Date and time are written in
     * ISO 8601 format. For example, June 7, 2017 is represented as 2017-06-7. The
     * following sample Amazon Web Services CLI command uses the
     * <code>InvokedAfter</code> filter.</p> <p> <code>aws ssm list-commands --filters
     * key=InvokedAfter,value=2017-06-07T00:00:00Z</code> </p> <p>If the plugin hasn't
     * started to run, the string is empty.</p>
     */
    inline const Aws::String& GetExecutionEndDateTime() const { return m_executionEndDateTime; }
    template<typename ExecutionEndDateTimeT = Aws::String>
    void SetExecutionEndDateTime(ExecutionEndDateTimeT&& value) { m_executionEndDateTimeHasBeenSet = true; m_executionEndDateTime = std::forward<ExecutionEndDateTimeT>(value); }
    template<typename ExecutionEndDateTimeT = Aws::String>
    GetCommandInvocationResult& WithExecutionEndDateTime(ExecutionEndDateTimeT&& value) { SetExecutionEndDateTime(std::forward<ExecutionEndDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of this invocation plugin. This status can be different than
     * <code>StatusDetails</code>.</p>
     */
    inline CommandInvocationStatus GetStatus() const { return m_status; }
    inline void SetStatus(CommandInvocationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetCommandInvocationResult& WithStatus(CommandInvocationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed status of the command execution for an invocation.
     * <code>StatusDetails</code> includes more information than <code>Status</code>
     * because it includes states resulting from error and concurrency control
     * parameters. <code>StatusDetails</code> can show different results than
     * <code>Status</code>. For more information about these statuses, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/monitor-commands.html">Understanding
     * command statuses</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>. <code>StatusDetails</code> can be one of the following values:</p>
     * <ul> <li> <p>Pending: The command hasn't been sent to the managed node.</p>
     * </li> <li> <p>In Progress: The command has been sent to the managed node but
     * hasn't reached a terminal state.</p> </li> <li> <p>Delayed: The system attempted
     * to send the command to the target, but the target wasn't available. The managed
     * node might not be available because of network issues, because the node was
     * stopped, or for similar reasons. The system will try to send the command
     * again.</p> </li> <li> <p>Success: The command or plugin ran successfully. This
     * is a terminal state.</p> </li> <li> <p>Delivery Timed Out: The command wasn't
     * delivered to the managed node before the delivery timeout expired. Delivery
     * timeouts don't count against the parent command's <code>MaxErrors</code> limit,
     * but they do contribute to whether the parent command status is Success or
     * Incomplete. This is a terminal state.</p> </li> <li> <p>Execution Timed Out: The
     * command started to run on the managed node, but the execution wasn't complete
     * before the timeout expired. Execution timeouts count against the
     * <code>MaxErrors</code> limit of the parent command. This is a terminal
     * state.</p> </li> <li> <p>Failed: The command wasn't run successfully on the
     * managed node. For a plugin, this indicates that the result code wasn't zero. For
     * a command invocation, this indicates that the result code for one or more
     * plugins wasn't zero. Invocation failures count against the
     * <code>MaxErrors</code> limit of the parent command. This is a terminal
     * state.</p> </li> <li> <p>Cancelled: The command was terminated before it was
     * completed. This is a terminal state.</p> </li> <li> <p>Undeliverable: The
     * command can't be delivered to the managed node. The node might not exist or
     * might not be responding. Undeliverable invocations don't count against the
     * parent command's <code>MaxErrors</code> limit and don't contribute to whether
     * the parent command status is Success or Incomplete. This is a terminal
     * state.</p> </li> <li> <p>Terminated: The parent command exceeded its
     * <code>MaxErrors</code> limit and subsequent command invocations were canceled by
     * the system. This is a terminal state.</p> </li> </ul>
     */
    inline const Aws::String& GetStatusDetails() const { return m_statusDetails; }
    template<typename StatusDetailsT = Aws::String>
    void SetStatusDetails(StatusDetailsT&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::forward<StatusDetailsT>(value); }
    template<typename StatusDetailsT = Aws::String>
    GetCommandInvocationResult& WithStatusDetails(StatusDetailsT&& value) { SetStatusDetails(std::forward<StatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first 24,000 characters written by the plugin to <code>stdout</code>. If
     * the command hasn't finished running, if <code>ExecutionStatus</code> is neither
     * Succeeded nor Failed, then this string is empty.</p>
     */
    inline const Aws::String& GetStandardOutputContent() const { return m_standardOutputContent; }
    template<typename StandardOutputContentT = Aws::String>
    void SetStandardOutputContent(StandardOutputContentT&& value) { m_standardOutputContentHasBeenSet = true; m_standardOutputContent = std::forward<StandardOutputContentT>(value); }
    template<typename StandardOutputContentT = Aws::String>
    GetCommandInvocationResult& WithStandardOutputContent(StandardOutputContentT&& value) { SetStandardOutputContent(std::forward<StandardOutputContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL for the complete text written by the plugin to <code>stdout</code> in
     * Amazon Simple Storage Service (Amazon S3). If an S3 bucket wasn't specified,
     * then this string is empty.</p>
     */
    inline const Aws::String& GetStandardOutputUrl() const { return m_standardOutputUrl; }
    template<typename StandardOutputUrlT = Aws::String>
    void SetStandardOutputUrl(StandardOutputUrlT&& value) { m_standardOutputUrlHasBeenSet = true; m_standardOutputUrl = std::forward<StandardOutputUrlT>(value); }
    template<typename StandardOutputUrlT = Aws::String>
    GetCommandInvocationResult& WithStandardOutputUrl(StandardOutputUrlT&& value) { SetStandardOutputUrl(std::forward<StandardOutputUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first 8,000 characters written by the plugin to <code>stderr</code>. If
     * the command hasn't finished running, then this string is empty.</p>
     */
    inline const Aws::String& GetStandardErrorContent() const { return m_standardErrorContent; }
    template<typename StandardErrorContentT = Aws::String>
    void SetStandardErrorContent(StandardErrorContentT&& value) { m_standardErrorContentHasBeenSet = true; m_standardErrorContent = std::forward<StandardErrorContentT>(value); }
    template<typename StandardErrorContentT = Aws::String>
    GetCommandInvocationResult& WithStandardErrorContent(StandardErrorContentT&& value) { SetStandardErrorContent(std::forward<StandardErrorContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL for the complete text written by the plugin to <code>stderr</code>.
     * If the command hasn't finished running, then this string is empty.</p>
     */
    inline const Aws::String& GetStandardErrorUrl() const { return m_standardErrorUrl; }
    template<typename StandardErrorUrlT = Aws::String>
    void SetStandardErrorUrl(StandardErrorUrlT&& value) { m_standardErrorUrlHasBeenSet = true; m_standardErrorUrl = std::forward<StandardErrorUrlT>(value); }
    template<typename StandardErrorUrlT = Aws::String>
    GetCommandInvocationResult& WithStandardErrorUrl(StandardErrorUrlT&& value) { SetStandardErrorUrl(std::forward<StandardErrorUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon CloudWatch Logs information where Systems Manager sent the command
     * output.</p>
     */
    inline const CloudWatchOutputConfig& GetCloudWatchOutputConfig() const { return m_cloudWatchOutputConfig; }
    template<typename CloudWatchOutputConfigT = CloudWatchOutputConfig>
    void SetCloudWatchOutputConfig(CloudWatchOutputConfigT&& value) { m_cloudWatchOutputConfigHasBeenSet = true; m_cloudWatchOutputConfig = std::forward<CloudWatchOutputConfigT>(value); }
    template<typename CloudWatchOutputConfigT = CloudWatchOutputConfig>
    GetCommandInvocationResult& WithCloudWatchOutputConfig(CloudWatchOutputConfigT&& value) { SetCloudWatchOutputConfig(std::forward<CloudWatchOutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCommandInvocationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_commandId;
    bool m_commandIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::String m_documentName;
    bool m_documentNameHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    Aws::String m_pluginName;
    bool m_pluginNameHasBeenSet = false;

    int m_responseCode{0};
    bool m_responseCodeHasBeenSet = false;

    Aws::String m_executionStartDateTime;
    bool m_executionStartDateTimeHasBeenSet = false;

    Aws::String m_executionElapsedTime;
    bool m_executionElapsedTimeHasBeenSet = false;

    Aws::String m_executionEndDateTime;
    bool m_executionEndDateTimeHasBeenSet = false;

    CommandInvocationStatus m_status{CommandInvocationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    Aws::String m_standardOutputContent;
    bool m_standardOutputContentHasBeenSet = false;

    Aws::String m_standardOutputUrl;
    bool m_standardOutputUrlHasBeenSet = false;

    Aws::String m_standardErrorContent;
    bool m_standardErrorContentHasBeenSet = false;

    Aws::String m_standardErrorUrl;
    bool m_standardErrorUrlHasBeenSet = false;

    CloudWatchOutputConfig m_cloudWatchOutputConfig;
    bool m_cloudWatchOutputConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
