/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/CommandPluginStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Describes plugin details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CommandPlugin">AWS
   * API Reference</a></p>
   */
  class CommandPlugin
  {
  public:
    AWS_SSM_API CommandPlugin() = default;
    AWS_SSM_API CommandPlugin(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API CommandPlugin& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the plugin. Must be one of the following:
     * <code>aws:updateAgent</code>, <code>aws:domainjoin</code>,
     * <code>aws:applications</code>, <code>aws:runPowerShellScript</code>,
     * <code>aws:psmodule</code>, <code>aws:cloudWatch</code>,
     * <code>aws:runShellScript</code>, or <code>aws:updateSSMAgent</code>. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CommandPlugin& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of this plugin. You can run a document with multiple plugins.</p>
     */
    inline CommandPluginStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CommandPluginStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CommandPlugin& WithStatus(CommandPluginStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed status of the plugin execution. <code>StatusDetails</code>
     * includes more information than Status because it includes states resulting from
     * error and concurrency control parameters. StatusDetails can show different
     * results than Status. For more information about these statuses, see <a
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
     * MaxErrors limit of the parent command. This is a terminal state.</p> </li> <li>
     * <p>Cancelled: The command was terminated before it was completed. This is a
     * terminal state.</p> </li> <li> <p>Undeliverable: The command can't be delivered
     * to the managed node. The managed node might not exist, or it might not be
     * responding. Undeliverable invocations don't count against the parent command's
     * MaxErrors limit, and they don't contribute to whether the parent command status
     * is Success or Incomplete. This is a terminal state.</p> </li> <li>
     * <p>Terminated: The parent command exceeded its MaxErrors limit and subsequent
     * command invocations were canceled by the system. This is a terminal state.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetStatusDetails() const { return m_statusDetails; }
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }
    template<typename StatusDetailsT = Aws::String>
    void SetStatusDetails(StatusDetailsT&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::forward<StatusDetailsT>(value); }
    template<typename StatusDetailsT = Aws::String>
    CommandPlugin& WithStatusDetails(StatusDetailsT&& value) { SetStatusDetails(std::forward<StatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A numeric response code generated after running the plugin. </p>
     */
    inline int GetResponseCode() const { return m_responseCode; }
    inline bool ResponseCodeHasBeenSet() const { return m_responseCodeHasBeenSet; }
    inline void SetResponseCode(int value) { m_responseCodeHasBeenSet = true; m_responseCode = value; }
    inline CommandPlugin& WithResponseCode(int value) { SetResponseCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the plugin started running. </p>
     */
    inline const Aws::Utils::DateTime& GetResponseStartDateTime() const { return m_responseStartDateTime; }
    inline bool ResponseStartDateTimeHasBeenSet() const { return m_responseStartDateTimeHasBeenSet; }
    template<typename ResponseStartDateTimeT = Aws::Utils::DateTime>
    void SetResponseStartDateTime(ResponseStartDateTimeT&& value) { m_responseStartDateTimeHasBeenSet = true; m_responseStartDateTime = std::forward<ResponseStartDateTimeT>(value); }
    template<typename ResponseStartDateTimeT = Aws::Utils::DateTime>
    CommandPlugin& WithResponseStartDateTime(ResponseStartDateTimeT&& value) { SetResponseStartDateTime(std::forward<ResponseStartDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the plugin stopped running. Could stop prematurely if, for example,
     * a cancel command was sent. </p>
     */
    inline const Aws::Utils::DateTime& GetResponseFinishDateTime() const { return m_responseFinishDateTime; }
    inline bool ResponseFinishDateTimeHasBeenSet() const { return m_responseFinishDateTimeHasBeenSet; }
    template<typename ResponseFinishDateTimeT = Aws::Utils::DateTime>
    void SetResponseFinishDateTime(ResponseFinishDateTimeT&& value) { m_responseFinishDateTimeHasBeenSet = true; m_responseFinishDateTime = std::forward<ResponseFinishDateTimeT>(value); }
    template<typename ResponseFinishDateTimeT = Aws::Utils::DateTime>
    CommandPlugin& WithResponseFinishDateTime(ResponseFinishDateTimeT&& value) { SetResponseFinishDateTime(std::forward<ResponseFinishDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Output of the plugin execution.</p>
     */
    inline const Aws::String& GetOutput() const { return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    template<typename OutputT = Aws::String>
    void SetOutput(OutputT&& value) { m_outputHasBeenSet = true; m_output = std::forward<OutputT>(value); }
    template<typename OutputT = Aws::String>
    CommandPlugin& WithOutput(OutputT&& value) { SetOutput(std::forward<OutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL for the complete text written by the plugin to stdout in Amazon S3.
     * If the S3 bucket for the command wasn't specified, then this string is
     * empty.</p>
     */
    inline const Aws::String& GetStandardOutputUrl() const { return m_standardOutputUrl; }
    inline bool StandardOutputUrlHasBeenSet() const { return m_standardOutputUrlHasBeenSet; }
    template<typename StandardOutputUrlT = Aws::String>
    void SetStandardOutputUrl(StandardOutputUrlT&& value) { m_standardOutputUrlHasBeenSet = true; m_standardOutputUrl = std::forward<StandardOutputUrlT>(value); }
    template<typename StandardOutputUrlT = Aws::String>
    CommandPlugin& WithStandardOutputUrl(StandardOutputUrlT&& value) { SetStandardOutputUrl(std::forward<StandardOutputUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL for the complete text written by the plugin to stderr. If execution
     * isn't yet complete, then this string is empty.</p>
     */
    inline const Aws::String& GetStandardErrorUrl() const { return m_standardErrorUrl; }
    inline bool StandardErrorUrlHasBeenSet() const { return m_standardErrorUrlHasBeenSet; }
    template<typename StandardErrorUrlT = Aws::String>
    void SetStandardErrorUrl(StandardErrorUrlT&& value) { m_standardErrorUrlHasBeenSet = true; m_standardErrorUrl = std::forward<StandardErrorUrlT>(value); }
    template<typename StandardErrorUrlT = Aws::String>
    CommandPlugin& WithStandardErrorUrl(StandardErrorUrlT&& value) { SetStandardErrorUrl(std::forward<StandardErrorUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Deprecated) You can no longer specify this parameter. The system ignores it.
     * Instead, Amazon Web Services Systems Manager automatically determines the S3
     * bucket region.</p>
     */
    inline const Aws::String& GetOutputS3Region() const { return m_outputS3Region; }
    inline bool OutputS3RegionHasBeenSet() const { return m_outputS3RegionHasBeenSet; }
    template<typename OutputS3RegionT = Aws::String>
    void SetOutputS3Region(OutputS3RegionT&& value) { m_outputS3RegionHasBeenSet = true; m_outputS3Region = std::forward<OutputS3RegionT>(value); }
    template<typename OutputS3RegionT = Aws::String>
    CommandPlugin& WithOutputS3Region(OutputS3RegionT&& value) { SetOutputS3Region(std::forward<OutputS3RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 bucket where the responses to the command executions should be stored.
     * This was requested when issuing the command. For example, in the following
     * response:</p> <p>
     * <code>amzn-s3-demo-bucket/my-prefix/i-02573cafcfEXAMPLE/awsrunShellScript</code>
     * </p> <p> <code>amzn-s3-demo-bucket</code> is the name of the S3 bucket;</p> <p>
     * <code>my-prefix</code> is the name of the S3 prefix;</p> <p>
     * <code>i-02573cafcfEXAMPLE</code> is the managed node ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline const Aws::String& GetOutputS3BucketName() const { return m_outputS3BucketName; }
    inline bool OutputS3BucketNameHasBeenSet() const { return m_outputS3BucketNameHasBeenSet; }
    template<typename OutputS3BucketNameT = Aws::String>
    void SetOutputS3BucketName(OutputS3BucketNameT&& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = std::forward<OutputS3BucketNameT>(value); }
    template<typename OutputS3BucketNameT = Aws::String>
    CommandPlugin& WithOutputS3BucketName(OutputS3BucketNameT&& value) { SetOutputS3BucketName(std::forward<OutputS3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 directory path inside the bucket where the responses to the command
     * executions should be stored. This was requested when issuing the command. For
     * example, in the following response:</p> <p>
     * <code>amzn-s3-demo-bucket/my-prefix/i-02573cafcfEXAMPLE/awsrunShellScript</code>
     * </p> <p> <code>amzn-s3-demo-bucket</code> is the name of the S3 bucket;</p> <p>
     * <code>my-prefix</code> is the name of the S3 prefix;</p> <p>
     * <code>i-02573cafcfEXAMPLE</code> is the managed node ID;</p> <p>
     * <code>awsrunShellScript</code> is the name of the plugin.</p>
     */
    inline const Aws::String& GetOutputS3KeyPrefix() const { return m_outputS3KeyPrefix; }
    inline bool OutputS3KeyPrefixHasBeenSet() const { return m_outputS3KeyPrefixHasBeenSet; }
    template<typename OutputS3KeyPrefixT = Aws::String>
    void SetOutputS3KeyPrefix(OutputS3KeyPrefixT&& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = std::forward<OutputS3KeyPrefixT>(value); }
    template<typename OutputS3KeyPrefixT = Aws::String>
    CommandPlugin& WithOutputS3KeyPrefix(OutputS3KeyPrefixT&& value) { SetOutputS3KeyPrefix(std::forward<OutputS3KeyPrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CommandPluginStatus m_status{CommandPluginStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    int m_responseCode{0};
    bool m_responseCodeHasBeenSet = false;

    Aws::Utils::DateTime m_responseStartDateTime{};
    bool m_responseStartDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_responseFinishDateTime{};
    bool m_responseFinishDateTimeHasBeenSet = false;

    Aws::String m_output;
    bool m_outputHasBeenSet = false;

    Aws::String m_standardOutputUrl;
    bool m_standardOutputUrlHasBeenSet = false;

    Aws::String m_standardErrorUrl;
    bool m_standardErrorUrlHasBeenSet = false;

    Aws::String m_outputS3Region;
    bool m_outputS3RegionHasBeenSet = false;

    Aws::String m_outputS3BucketName;
    bool m_outputS3BucketNameHasBeenSet = false;

    Aws::String m_outputS3KeyPrefix;
    bool m_outputS3KeyPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
