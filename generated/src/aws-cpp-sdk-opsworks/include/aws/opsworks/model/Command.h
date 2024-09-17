/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes a command.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/Command">AWS
   * API Reference</a></p>
   */
  class Command
  {
  public:
    AWS_OPSWORKS_API Command();
    AWS_OPSWORKS_API Command(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Command& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The command ID.</p>
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
     * <p>The ID of the instance where the command was executed.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline Command& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline Command& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline Command& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command deployment ID.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }
    inline Command& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}
    inline Command& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}
    inline Command& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time when the command was run.</p>
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }
    inline Command& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}
    inline Command& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}
    inline Command& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time when the command was acknowledged.</p>
     */
    inline const Aws::String& GetAcknowledgedAt() const{ return m_acknowledgedAt; }
    inline bool AcknowledgedAtHasBeenSet() const { return m_acknowledgedAtHasBeenSet; }
    inline void SetAcknowledgedAt(const Aws::String& value) { m_acknowledgedAtHasBeenSet = true; m_acknowledgedAt = value; }
    inline void SetAcknowledgedAt(Aws::String&& value) { m_acknowledgedAtHasBeenSet = true; m_acknowledgedAt = std::move(value); }
    inline void SetAcknowledgedAt(const char* value) { m_acknowledgedAtHasBeenSet = true; m_acknowledgedAt.assign(value); }
    inline Command& WithAcknowledgedAt(const Aws::String& value) { SetAcknowledgedAt(value); return *this;}
    inline Command& WithAcknowledgedAt(Aws::String&& value) { SetAcknowledgedAt(std::move(value)); return *this;}
    inline Command& WithAcknowledgedAt(const char* value) { SetAcknowledgedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date when the command completed.</p>
     */
    inline const Aws::String& GetCompletedAt() const{ return m_completedAt; }
    inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }
    inline void SetCompletedAt(const Aws::String& value) { m_completedAtHasBeenSet = true; m_completedAt = value; }
    inline void SetCompletedAt(Aws::String&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::move(value); }
    inline void SetCompletedAt(const char* value) { m_completedAtHasBeenSet = true; m_completedAt.assign(value); }
    inline Command& WithCompletedAt(const Aws::String& value) { SetCompletedAt(value); return *this;}
    inline Command& WithCompletedAt(Aws::String&& value) { SetCompletedAt(std::move(value)); return *this;}
    inline Command& WithCompletedAt(const char* value) { SetCompletedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command status:</p> <ul> <li> <p>failed</p> </li> <li> <p>successful</p>
     * </li> <li> <p>skipped</p> </li> <li> <p>pending</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline Command& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline Command& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline Command& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command exit code.</p>
     */
    inline int GetExitCode() const{ return m_exitCode; }
    inline bool ExitCodeHasBeenSet() const { return m_exitCodeHasBeenSet; }
    inline void SetExitCode(int value) { m_exitCodeHasBeenSet = true; m_exitCode = value; }
    inline Command& WithExitCode(int value) { SetExitCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the command log.</p>
     */
    inline const Aws::String& GetLogUrl() const{ return m_logUrl; }
    inline bool LogUrlHasBeenSet() const { return m_logUrlHasBeenSet; }
    inline void SetLogUrl(const Aws::String& value) { m_logUrlHasBeenSet = true; m_logUrl = value; }
    inline void SetLogUrl(Aws::String&& value) { m_logUrlHasBeenSet = true; m_logUrl = std::move(value); }
    inline void SetLogUrl(const char* value) { m_logUrlHasBeenSet = true; m_logUrl.assign(value); }
    inline Command& WithLogUrl(const Aws::String& value) { SetLogUrl(value); return *this;}
    inline Command& WithLogUrl(Aws::String&& value) { SetLogUrl(std::move(value)); return *this;}
    inline Command& WithLogUrl(const char* value) { SetLogUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command type:</p> <ul> <li> <p> <code>configure</code> </p> </li> <li>
     * <p> <code>deploy</code> </p> </li> <li> <p> <code>execute_recipes</code> </p>
     * </li> <li> <p> <code>install_dependencies</code> </p> </li> <li> <p>
     * <code>restart</code> </p> </li> <li> <p> <code>rollback</code> </p> </li> <li>
     * <p> <code>setup</code> </p> </li> <li> <p> <code>start</code> </p> </li> <li>
     * <p> <code>stop</code> </p> </li> <li> <p> <code>undeploy</code> </p> </li> <li>
     * <p> <code>update_custom_cookbooks</code> </p> </li> <li> <p>
     * <code>update_dependencies</code> </p> </li> </ul>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline Command& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline Command& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline Command& WithType(const char* value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_commandId;
    bool m_commandIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_acknowledgedAt;
    bool m_acknowledgedAtHasBeenSet = false;

    Aws::String m_completedAt;
    bool m_completedAtHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    int m_exitCode;
    bool m_exitCodeHasBeenSet = false;

    Aws::String m_logUrl;
    bool m_logUrlHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
