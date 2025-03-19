/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/DocumentHashType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/NotificationConfig.h>
#include <aws/ssm/model/CloudWatchOutputConfig.h>
#include <aws/ssm/model/AlarmConfiguration.h>
#include <aws/ssm/model/Target.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class SendCommandRequest : public SSMRequest
  {
  public:
    AWS_SSM_API SendCommandRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendCommand"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The IDs of the managed nodes where the command should run. Specifying managed
     * node IDs is most useful when you are targeting a limited number of managed
     * nodes, though you can specify up to 50 IDs.</p> <p>To target a larger number of
     * managed nodes, or if you prefer not to list individual node IDs, we recommend
     * using the <code>Targets</code> option instead. Using <code>Targets</code>, which
     * accepts tag key-value pairs to identify the managed nodes to send commands to,
     * you can a send command to tens, hundreds, or thousands of nodes at once.</p>
     * <p>For more information about how to use targets, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Run
     * commands at scale</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const { return m_instanceIds; }
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
    template<typename InstanceIdsT = Aws::Vector<Aws::String>>
    void SetInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::forward<InstanceIdsT>(value); }
    template<typename InstanceIdsT = Aws::Vector<Aws::String>>
    SendCommandRequest& WithInstanceIds(InstanceIdsT&& value) { SetInstanceIds(std::forward<InstanceIdsT>(value)); return *this;}
    template<typename InstanceIdsT = Aws::String>
    SendCommandRequest& AddInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.emplace_back(std::forward<InstanceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of search criteria that targets managed nodes using a
     * <code>Key,Value</code> combination that you specify. Specifying targets is most
     * useful when you want to send a command to a large number of managed nodes at
     * once. Using <code>Targets</code>, which accepts tag key-value pairs to identify
     * managed nodes, you can send a command to tens, hundreds, or thousands of nodes
     * at once.</p> <p>To send a command to a smaller number of managed nodes, you can
     * use the <code>InstanceIds</code> option instead.</p> <p>For more information
     * about how to use targets, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html">Run
     * commands at scale</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Vector<Target>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Vector<Target>>
    SendCommandRequest& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsT = Target>
    SendCommandRequest& AddTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets.emplace_back(std::forward<TargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Web Services Systems Manager document (SSM document)
     * to run. This can be a public document or a custom document. To run a shared
     * document belonging to another account, specify the document Amazon Resource Name
     * (ARN). For more information about how to use shared documents, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/ssm-using-shared.html">Sharing
     * SSM documents</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>  <p>If you specify a document name or ARN that hasn't been
     * shared with your account, you receive an <code>InvalidDocument</code> error.
     * </p> 
     */
    inline const Aws::String& GetDocumentName() const { return m_documentName; }
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }
    template<typename DocumentNameT = Aws::String>
    void SetDocumentName(DocumentNameT&& value) { m_documentNameHasBeenSet = true; m_documentName = std::forward<DocumentNameT>(value); }
    template<typename DocumentNameT = Aws::String>
    SendCommandRequest& WithDocumentName(DocumentNameT&& value) { SetDocumentName(std::forward<DocumentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SSM document version to use in the request. You can specify $DEFAULT,
     * $LATEST, or a specific version number. If you run commands by using the Command
     * Line Interface (Amazon Web Services CLI), then you must escape the first two
     * options by using a backslash. If you specify a version number, then you don't
     * need to use the backslash. For example:</p> <p>--document-version
     * "\$DEFAULT"</p> <p>--document-version "\$LATEST"</p> <p>--document-version
     * "3"</p>
     */
    inline const Aws::String& GetDocumentVersion() const { return m_documentVersion; }
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }
    template<typename DocumentVersionT = Aws::String>
    void SetDocumentVersion(DocumentVersionT&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::forward<DocumentVersionT>(value); }
    template<typename DocumentVersionT = Aws::String>
    SendCommandRequest& WithDocumentVersion(DocumentVersionT&& value) { SetDocumentVersion(std::forward<DocumentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p>  <p>Sha1 hashes have been deprecated.</p> 
     */
    inline const Aws::String& GetDocumentHash() const { return m_documentHash; }
    inline bool DocumentHashHasBeenSet() const { return m_documentHashHasBeenSet; }
    template<typename DocumentHashT = Aws::String>
    void SetDocumentHash(DocumentHashT&& value) { m_documentHashHasBeenSet = true; m_documentHash = std::forward<DocumentHashT>(value); }
    template<typename DocumentHashT = Aws::String>
    SendCommandRequest& WithDocumentHash(DocumentHashT&& value) { SetDocumentHash(std::forward<DocumentHashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sha256 or Sha1.</p>  <p>Sha1 hashes have been deprecated.</p> 
     */
    inline DocumentHashType GetDocumentHashType() const { return m_documentHashType; }
    inline bool DocumentHashTypeHasBeenSet() const { return m_documentHashTypeHasBeenSet; }
    inline void SetDocumentHashType(DocumentHashType value) { m_documentHashTypeHasBeenSet = true; m_documentHashType = value; }
    inline SendCommandRequest& WithDocumentHashType(DocumentHashType value) { SetDocumentHashType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this time is reached and the command hasn't already started running, it
     * won't run.</p>
     */
    inline int GetTimeoutSeconds() const { return m_timeoutSeconds; }
    inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }
    inline void SetTimeoutSeconds(int value) { m_timeoutSecondsHasBeenSet = true; m_timeoutSeconds = value; }
    inline SendCommandRequest& WithTimeoutSeconds(int value) { SetTimeoutSeconds(value); return *this;}
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
    SendCommandRequest& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The required and optional parameters specified in the document being run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    SendCommandRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::Vector<Aws::String>>
    SendCommandRequest& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
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
    SendCommandRequest& WithOutputS3Region(OutputS3RegionT&& value) { SetOutputS3Region(std::forward<OutputS3RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the S3 bucket where command execution responses should be
     * stored.</p>
     */
    inline const Aws::String& GetOutputS3BucketName() const { return m_outputS3BucketName; }
    inline bool OutputS3BucketNameHasBeenSet() const { return m_outputS3BucketNameHasBeenSet; }
    template<typename OutputS3BucketNameT = Aws::String>
    void SetOutputS3BucketName(OutputS3BucketNameT&& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = std::forward<OutputS3BucketNameT>(value); }
    template<typename OutputS3BucketNameT = Aws::String>
    SendCommandRequest& WithOutputS3BucketName(OutputS3BucketNameT&& value) { SetOutputS3BucketName(std::forward<OutputS3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory structure within the S3 bucket where the responses should be
     * stored.</p>
     */
    inline const Aws::String& GetOutputS3KeyPrefix() const { return m_outputS3KeyPrefix; }
    inline bool OutputS3KeyPrefixHasBeenSet() const { return m_outputS3KeyPrefixHasBeenSet; }
    template<typename OutputS3KeyPrefixT = Aws::String>
    void SetOutputS3KeyPrefix(OutputS3KeyPrefixT&& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = std::forward<OutputS3KeyPrefixT>(value); }
    template<typename OutputS3KeyPrefixT = Aws::String>
    SendCommandRequest& WithOutputS3KeyPrefix(OutputS3KeyPrefixT&& value) { SetOutputS3KeyPrefix(std::forward<OutputS3KeyPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) The maximum number of managed nodes that are allowed to run the
     * command at the same time. You can specify a number such as 10 or a percentage
     * such as 10%. The default value is <code>50</code>. For more information about
     * how to use <code>MaxConcurrency</code>, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-velocity">Using
     * concurrency controls</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetMaxConcurrency() const { return m_maxConcurrency; }
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }
    template<typename MaxConcurrencyT = Aws::String>
    void SetMaxConcurrency(MaxConcurrencyT&& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = std::forward<MaxConcurrencyT>(value); }
    template<typename MaxConcurrencyT = Aws::String>
    SendCommandRequest& WithMaxConcurrency(MaxConcurrencyT&& value) { SetMaxConcurrency(std::forward<MaxConcurrencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of errors allowed without the command failing. When the
     * command fails one more time beyond the value of <code>MaxErrors</code>, the
     * systems stops sending the command to additional targets. You can specify a
     * number like 10 or a percentage like 10%. The default value is <code>0</code>.
     * For more information about how to use <code>MaxErrors</code>, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-maxerrors">Using
     * error controls</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetMaxErrors() const { return m_maxErrors; }
    inline bool MaxErrorsHasBeenSet() const { return m_maxErrorsHasBeenSet; }
    template<typename MaxErrorsT = Aws::String>
    void SetMaxErrors(MaxErrorsT&& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = std::forward<MaxErrorsT>(value); }
    template<typename MaxErrorsT = Aws::String>
    SendCommandRequest& WithMaxErrors(MaxErrorsT&& value) { SetMaxErrors(std::forward<MaxErrorsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Identity and Access Management (IAM) service role to use to
     * publish Amazon Simple Notification Service (Amazon SNS) notifications for Run
     * Command commands.</p> <p>This role must provide the <code>sns:Publish</code>
     * permission for your notification topic. For information about creating and using
     * this service role, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/monitoring-sns-notifications.html">Monitoring
     * Systems Manager status changes using Amazon SNS notifications</a> in the
     * <i>Amazon Web Services Systems Manager User Guide</i>.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const { return m_serviceRoleArn; }
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }
    template<typename ServiceRoleArnT = Aws::String>
    void SetServiceRoleArn(ServiceRoleArnT&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::forward<ServiceRoleArnT>(value); }
    template<typename ServiceRoleArnT = Aws::String>
    SendCommandRequest& WithServiceRoleArn(ServiceRoleArnT&& value) { SetServiceRoleArn(std::forward<ServiceRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configurations for sending notifications.</p>
     */
    inline const NotificationConfig& GetNotificationConfig() const { return m_notificationConfig; }
    inline bool NotificationConfigHasBeenSet() const { return m_notificationConfigHasBeenSet; }
    template<typename NotificationConfigT = NotificationConfig>
    void SetNotificationConfig(NotificationConfigT&& value) { m_notificationConfigHasBeenSet = true; m_notificationConfig = std::forward<NotificationConfigT>(value); }
    template<typename NotificationConfigT = NotificationConfig>
    SendCommandRequest& WithNotificationConfig(NotificationConfigT&& value) { SetNotificationConfig(std::forward<NotificationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables Amazon Web Services Systems Manager to send Run Command output to
     * Amazon CloudWatch Logs. Run Command is a tool in Amazon Web Services Systems
     * Manager.</p>
     */
    inline const CloudWatchOutputConfig& GetCloudWatchOutputConfig() const { return m_cloudWatchOutputConfig; }
    inline bool CloudWatchOutputConfigHasBeenSet() const { return m_cloudWatchOutputConfigHasBeenSet; }
    template<typename CloudWatchOutputConfigT = CloudWatchOutputConfig>
    void SetCloudWatchOutputConfig(CloudWatchOutputConfigT&& value) { m_cloudWatchOutputConfigHasBeenSet = true; m_cloudWatchOutputConfig = std::forward<CloudWatchOutputConfigT>(value); }
    template<typename CloudWatchOutputConfigT = CloudWatchOutputConfig>
    SendCommandRequest& WithCloudWatchOutputConfig(CloudWatchOutputConfigT&& value) { SetCloudWatchOutputConfig(std::forward<CloudWatchOutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch alarm you want to apply to your command.</p>
     */
    inline const AlarmConfiguration& GetAlarmConfiguration() const { return m_alarmConfiguration; }
    inline bool AlarmConfigurationHasBeenSet() const { return m_alarmConfigurationHasBeenSet; }
    template<typename AlarmConfigurationT = AlarmConfiguration>
    void SetAlarmConfiguration(AlarmConfigurationT&& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = std::forward<AlarmConfigurationT>(value); }
    template<typename AlarmConfigurationT = AlarmConfiguration>
    SendCommandRequest& WithAlarmConfiguration(AlarmConfigurationT&& value) { SetAlarmConfiguration(std::forward<AlarmConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::String m_documentName;
    bool m_documentNameHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    Aws::String m_documentHash;
    bool m_documentHashHasBeenSet = false;

    DocumentHashType m_documentHashType{DocumentHashType::NOT_SET};
    bool m_documentHashTypeHasBeenSet = false;

    int m_timeoutSeconds{0};
    bool m_timeoutSecondsHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet = false;

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

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet = false;

    NotificationConfig m_notificationConfig;
    bool m_notificationConfigHasBeenSet = false;

    CloudWatchOutputConfig m_cloudWatchOutputConfig;
    bool m_cloudWatchOutputConfigHasBeenSet = false;

    AlarmConfiguration m_alarmConfiguration;
    bool m_alarmConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
