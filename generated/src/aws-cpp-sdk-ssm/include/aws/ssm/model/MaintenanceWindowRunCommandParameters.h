/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/CloudWatchOutputConfig.h>
#include <aws/ssm/model/DocumentHashType.h>
#include <aws/ssm/model/NotificationConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The parameters for a <code>RUN_COMMAND</code> task type.</p> <p>For
   * information about specifying and updating task parameters, see
   * <a>RegisterTaskWithMaintenanceWindow</a> and
   * <a>UpdateMaintenanceWindowTask</a>.</p>  <p> <code>LoggingInfo</code> has
   * been deprecated. To specify an Amazon Simple Storage Service (Amazon S3) bucket
   * to contain logs, instead use the <code>OutputS3BucketName</code> and
   * <code>OutputS3KeyPrefix</code> options in the
   * <code>TaskInvocationParameters</code> structure. For information about how
   * Amazon Web Services Systems Manager handles these options for the supported
   * maintenance window task types, see
   * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>
   * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
   * to a task when it runs, instead use the <code>Parameters</code> option in the
   * <code>TaskInvocationParameters</code> structure. For information about how
   * Systems Manager handles these options for the supported maintenance window task
   * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>For
   * <code>RUN_COMMAND</code> tasks, Systems Manager uses specified values for
   * <code>TaskParameters</code> and <code>LoggingInfo</code> only if no values are
   * specified for <code>TaskInvocationParameters</code>. </p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MaintenanceWindowRunCommandParameters">AWS
   * API Reference</a></p>
   */
  class MaintenanceWindowRunCommandParameters
  {
  public:
    AWS_SSM_API MaintenanceWindowRunCommandParameters() = default;
    AWS_SSM_API MaintenanceWindowRunCommandParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API MaintenanceWindowRunCommandParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the commands to run.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    MaintenanceWindowRunCommandParameters& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CloudWatchOutputConfig& GetCloudWatchOutputConfig() const { return m_cloudWatchOutputConfig; }
    inline bool CloudWatchOutputConfigHasBeenSet() const { return m_cloudWatchOutputConfigHasBeenSet; }
    template<typename CloudWatchOutputConfigT = CloudWatchOutputConfig>
    void SetCloudWatchOutputConfig(CloudWatchOutputConfigT&& value) { m_cloudWatchOutputConfigHasBeenSet = true; m_cloudWatchOutputConfig = std::forward<CloudWatchOutputConfigT>(value); }
    template<typename CloudWatchOutputConfigT = CloudWatchOutputConfig>
    MaintenanceWindowRunCommandParameters& WithCloudWatchOutputConfig(CloudWatchOutputConfigT&& value) { SetCloudWatchOutputConfig(std::forward<CloudWatchOutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA-256 or SHA-1 hash created by the system when the document was
     * created. SHA-1 hashes have been deprecated.</p>
     */
    inline const Aws::String& GetDocumentHash() const { return m_documentHash; }
    inline bool DocumentHashHasBeenSet() const { return m_documentHashHasBeenSet; }
    template<typename DocumentHashT = Aws::String>
    void SetDocumentHash(DocumentHashT&& value) { m_documentHashHasBeenSet = true; m_documentHash = std::forward<DocumentHashT>(value); }
    template<typename DocumentHashT = Aws::String>
    MaintenanceWindowRunCommandParameters& WithDocumentHash(DocumentHashT&& value) { SetDocumentHash(std::forward<DocumentHashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>SHA-256 or SHA-1. SHA-1 hashes have been deprecated.</p>
     */
    inline DocumentHashType GetDocumentHashType() const { return m_documentHashType; }
    inline bool DocumentHashTypeHasBeenSet() const { return m_documentHashTypeHasBeenSet; }
    inline void SetDocumentHashType(DocumentHashType value) { m_documentHashTypeHasBeenSet = true; m_documentHashType = value; }
    inline MaintenanceWindowRunCommandParameters& WithDocumentHashType(DocumentHashType value) { SetDocumentHashType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Systems Manager document (SSM document) version to
     * use in the request. You can specify <code>$DEFAULT</code>, <code>$LATEST</code>,
     * or a specific version number. If you run commands by using the Amazon Web
     * Services CLI, then you must escape the first two options by using a backslash.
     * If you specify a version number, then you don't need to use the backslash. For
     * example:</p> <p> <code>--document-version "\$DEFAULT"</code> </p> <p>
     * <code>--document-version "\$LATEST"</code> </p> <p> <code>--document-version
     * "3"</code> </p>
     */
    inline const Aws::String& GetDocumentVersion() const { return m_documentVersion; }
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }
    template<typename DocumentVersionT = Aws::String>
    void SetDocumentVersion(DocumentVersionT&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::forward<DocumentVersionT>(value); }
    template<typename DocumentVersionT = Aws::String>
    MaintenanceWindowRunCommandParameters& WithDocumentVersion(DocumentVersionT&& value) { SetDocumentVersion(std::forward<DocumentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configurations for sending notifications about command status changes on a
     * per-managed node basis.</p>
     */
    inline const NotificationConfig& GetNotificationConfig() const { return m_notificationConfig; }
    inline bool NotificationConfigHasBeenSet() const { return m_notificationConfigHasBeenSet; }
    template<typename NotificationConfigT = NotificationConfig>
    void SetNotificationConfig(NotificationConfigT&& value) { m_notificationConfigHasBeenSet = true; m_notificationConfig = std::forward<NotificationConfigT>(value); }
    template<typename NotificationConfigT = NotificationConfig>
    MaintenanceWindowRunCommandParameters& WithNotificationConfig(NotificationConfigT&& value) { SetNotificationConfig(std::forward<NotificationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Simple Storage Service (Amazon S3) bucket.</p>
     */
    inline const Aws::String& GetOutputS3BucketName() const { return m_outputS3BucketName; }
    inline bool OutputS3BucketNameHasBeenSet() const { return m_outputS3BucketNameHasBeenSet; }
    template<typename OutputS3BucketNameT = Aws::String>
    void SetOutputS3BucketName(OutputS3BucketNameT&& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = std::forward<OutputS3BucketNameT>(value); }
    template<typename OutputS3BucketNameT = Aws::String>
    MaintenanceWindowRunCommandParameters& WithOutputS3BucketName(OutputS3BucketNameT&& value) { SetOutputS3BucketName(std::forward<OutputS3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 bucket subfolder.</p>
     */
    inline const Aws::String& GetOutputS3KeyPrefix() const { return m_outputS3KeyPrefix; }
    inline bool OutputS3KeyPrefixHasBeenSet() const { return m_outputS3KeyPrefixHasBeenSet; }
    template<typename OutputS3KeyPrefixT = Aws::String>
    void SetOutputS3KeyPrefix(OutputS3KeyPrefixT&& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = std::forward<OutputS3KeyPrefixT>(value); }
    template<typename OutputS3KeyPrefixT = Aws::String>
    MaintenanceWindowRunCommandParameters& WithOutputS3KeyPrefix(OutputS3KeyPrefixT&& value) { SetOutputS3KeyPrefix(std::forward<OutputS3KeyPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for the <code>RUN_COMMAND</code> task execution.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    MaintenanceWindowRunCommandParameters& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::Vector<Aws::String>>
    MaintenanceWindowRunCommandParameters& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role for Amazon Web
     * Services Systems Manager to assume when running a maintenance window task. If
     * you do not specify a service role ARN, Systems Manager uses a service-linked
     * role in your account. If no appropriate service-linked role for Systems Manager
     * exists in your account, it is created when you run
     * <code>RegisterTaskWithMaintenanceWindow</code>.</p> <p>However, for an improved
     * security posture, we strongly recommend creating a custom policy and custom
     * service role for running your maintenance window tasks. The policy can be
     * crafted to provide only the permissions needed for your particular maintenance
     * window tasks. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-maintenance-permissions.html">Setting
     * up Maintenance Windows</a> in the in the <i>Amazon Web Services Systems Manager
     * User Guide</i>.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const { return m_serviceRoleArn; }
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }
    template<typename ServiceRoleArnT = Aws::String>
    void SetServiceRoleArn(ServiceRoleArnT&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::forward<ServiceRoleArnT>(value); }
    template<typename ServiceRoleArnT = Aws::String>
    MaintenanceWindowRunCommandParameters& WithServiceRoleArn(ServiceRoleArnT&& value) { SetServiceRoleArn(std::forward<ServiceRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this time is reached and the command hasn't already started running, it
     * doesn't run.</p>
     */
    inline int GetTimeoutSeconds() const { return m_timeoutSeconds; }
    inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }
    inline void SetTimeoutSeconds(int value) { m_timeoutSecondsHasBeenSet = true; m_timeoutSeconds = value; }
    inline MaintenanceWindowRunCommandParameters& WithTimeoutSeconds(int value) { SetTimeoutSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    CloudWatchOutputConfig m_cloudWatchOutputConfig;
    bool m_cloudWatchOutputConfigHasBeenSet = false;

    Aws::String m_documentHash;
    bool m_documentHashHasBeenSet = false;

    DocumentHashType m_documentHashType{DocumentHashType::NOT_SET};
    bool m_documentHashTypeHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    NotificationConfig m_notificationConfig;
    bool m_notificationConfigHasBeenSet = false;

    Aws::String m_outputS3BucketName;
    bool m_outputS3BucketNameHasBeenSet = false;

    Aws::String m_outputS3KeyPrefix;
    bool m_outputS3KeyPrefixHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet = false;

    int m_timeoutSeconds{0};
    bool m_timeoutSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
