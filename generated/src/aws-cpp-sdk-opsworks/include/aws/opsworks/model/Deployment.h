/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/DeploymentCommand.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes a deployment of a stack or app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/Deployment">AWS
   * API Reference</a></p>
   */
  class Deployment
  {
  public:
    AWS_OPSWORKS_API Deployment();
    AWS_OPSWORKS_API Deployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Deployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The deployment ID.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }
    inline Deployment& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}
    inline Deployment& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}
    inline Deployment& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }
    inline Deployment& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}
    inline Deployment& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}
    inline Deployment& WithStackId(const char* value) { SetStackId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app ID.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }
    inline Deployment& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline Deployment& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline Deployment& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date when the deployment was created.</p>
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }
    inline Deployment& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}
    inline Deployment& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}
    inline Deployment& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date when the deployment completed.</p>
     */
    inline const Aws::String& GetCompletedAt() const{ return m_completedAt; }
    inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }
    inline void SetCompletedAt(const Aws::String& value) { m_completedAtHasBeenSet = true; m_completedAt = value; }
    inline void SetCompletedAt(Aws::String&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::move(value); }
    inline void SetCompletedAt(const char* value) { m_completedAtHasBeenSet = true; m_completedAt.assign(value); }
    inline Deployment& WithCompletedAt(const Aws::String& value) { SetCompletedAt(value); return *this;}
    inline Deployment& WithCompletedAt(Aws::String&& value) { SetCompletedAt(std::move(value)); return *this;}
    inline Deployment& WithCompletedAt(const char* value) { SetCompletedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment duration.</p>
     */
    inline int GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline Deployment& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user's IAM ARN.</p>
     */
    inline const Aws::String& GetIamUserArn() const{ return m_iamUserArn; }
    inline bool IamUserArnHasBeenSet() const { return m_iamUserArnHasBeenSet; }
    inline void SetIamUserArn(const Aws::String& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = value; }
    inline void SetIamUserArn(Aws::String&& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = std::move(value); }
    inline void SetIamUserArn(const char* value) { m_iamUserArnHasBeenSet = true; m_iamUserArn.assign(value); }
    inline Deployment& WithIamUserArn(const Aws::String& value) { SetIamUserArn(value); return *this;}
    inline Deployment& WithIamUserArn(Aws::String&& value) { SetIamUserArn(std::move(value)); return *this;}
    inline Deployment& WithIamUserArn(const char* value) { SetIamUserArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-defined comment.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }
    inline Deployment& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline Deployment& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline Deployment& WithComment(const char* value) { SetComment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used to specify a stack or deployment command.</p>
     */
    inline const DeploymentCommand& GetCommand() const{ return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    inline void SetCommand(const DeploymentCommand& value) { m_commandHasBeenSet = true; m_command = value; }
    inline void SetCommand(DeploymentCommand&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }
    inline Deployment& WithCommand(const DeploymentCommand& value) { SetCommand(value); return *this;}
    inline Deployment& WithCommand(DeploymentCommand&& value) { SetCommand(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment status:</p> <ul> <li> <p>running</p> </li> <li>
     * <p>successful</p> </li> <li> <p>failed</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline Deployment& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline Deployment& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline Deployment& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that contains user-defined custom JSON. It can be used to override
     * the corresponding default stack configuration attribute values for stack or to
     * pass data to recipes. The string should be in the following format:</p> <p>
     * <code>"{\"key1\": \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more
     * information on custom JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
     */
    inline const Aws::String& GetCustomJson() const{ return m_customJson; }
    inline bool CustomJsonHasBeenSet() const { return m_customJsonHasBeenSet; }
    inline void SetCustomJson(const Aws::String& value) { m_customJsonHasBeenSet = true; m_customJson = value; }
    inline void SetCustomJson(Aws::String&& value) { m_customJsonHasBeenSet = true; m_customJson = std::move(value); }
    inline void SetCustomJson(const char* value) { m_customJsonHasBeenSet = true; m_customJson.assign(value); }
    inline Deployment& WithCustomJson(const Aws::String& value) { SetCustomJson(value); return *this;}
    inline Deployment& WithCustomJson(Aws::String&& value) { SetCustomJson(std::move(value)); return *this;}
    inline Deployment& WithCustomJson(const char* value) { SetCustomJson(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the target instances.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::move(value); }
    inline Deployment& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}
    inline Deployment& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(std::move(value)); return *this;}
    inline Deployment& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }
    inline Deployment& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(std::move(value)); return *this; }
    inline Deployment& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_completedAt;
    bool m_completedAtHasBeenSet = false;

    int m_duration;
    bool m_durationHasBeenSet = false;

    Aws::String m_iamUserArn;
    bool m_iamUserArnHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    DeploymentCommand m_command;
    bool m_commandHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_customJson;
    bool m_customJsonHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
