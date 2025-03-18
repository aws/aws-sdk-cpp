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
    AWS_OPSWORKS_API Command() = default;
    AWS_OPSWORKS_API Command(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Command& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The command ID.</p>
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
     * <p>The ID of the instance where the command was executed.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    Command& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command deployment ID.</p>
     */
    inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    template<typename DeploymentIdT = Aws::String>
    void SetDeploymentId(DeploymentIdT&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::forward<DeploymentIdT>(value); }
    template<typename DeploymentIdT = Aws::String>
    Command& WithDeploymentId(DeploymentIdT&& value) { SetDeploymentId(std::forward<DeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time when the command was run.</p>
     */
    inline const Aws::String& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::String>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::String>
    Command& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time when the command was acknowledged.</p>
     */
    inline const Aws::String& GetAcknowledgedAt() const { return m_acknowledgedAt; }
    inline bool AcknowledgedAtHasBeenSet() const { return m_acknowledgedAtHasBeenSet; }
    template<typename AcknowledgedAtT = Aws::String>
    void SetAcknowledgedAt(AcknowledgedAtT&& value) { m_acknowledgedAtHasBeenSet = true; m_acknowledgedAt = std::forward<AcknowledgedAtT>(value); }
    template<typename AcknowledgedAtT = Aws::String>
    Command& WithAcknowledgedAt(AcknowledgedAtT&& value) { SetAcknowledgedAt(std::forward<AcknowledgedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date when the command completed.</p>
     */
    inline const Aws::String& GetCompletedAt() const { return m_completedAt; }
    inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }
    template<typename CompletedAtT = Aws::String>
    void SetCompletedAt(CompletedAtT&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::forward<CompletedAtT>(value); }
    template<typename CompletedAtT = Aws::String>
    Command& WithCompletedAt(CompletedAtT&& value) { SetCompletedAt(std::forward<CompletedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command status:</p> <ul> <li> <p>failed</p> </li> <li> <p>successful</p>
     * </li> <li> <p>skipped</p> </li> <li> <p>pending</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    Command& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command exit code.</p>
     */
    inline int GetExitCode() const { return m_exitCode; }
    inline bool ExitCodeHasBeenSet() const { return m_exitCodeHasBeenSet; }
    inline void SetExitCode(int value) { m_exitCodeHasBeenSet = true; m_exitCode = value; }
    inline Command& WithExitCode(int value) { SetExitCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the command log.</p>
     */
    inline const Aws::String& GetLogUrl() const { return m_logUrl; }
    inline bool LogUrlHasBeenSet() const { return m_logUrlHasBeenSet; }
    template<typename LogUrlT = Aws::String>
    void SetLogUrl(LogUrlT&& value) { m_logUrlHasBeenSet = true; m_logUrl = std::forward<LogUrlT>(value); }
    template<typename LogUrlT = Aws::String>
    Command& WithLogUrl(LogUrlT&& value) { SetLogUrl(std::forward<LogUrlT>(value)); return *this;}
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
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    Command& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
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

    int m_exitCode{0};
    bool m_exitCodeHasBeenSet = false;

    Aws::String m_logUrl;
    bool m_logUrlHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
