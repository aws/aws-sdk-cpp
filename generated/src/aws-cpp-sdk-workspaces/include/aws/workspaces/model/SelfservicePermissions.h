/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/ReconnectEnum.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the self-service permissions for a directory. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/enable-user-self-service-workspace-management.html">Enable
   * Self-Service WorkSpace Management Capabilities for Your Users</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/SelfservicePermissions">AWS
   * API Reference</a></p>
   */
  class SelfservicePermissions
  {
  public:
    AWS_WORKSPACES_API SelfservicePermissions() = default;
    AWS_WORKSPACES_API SelfservicePermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API SelfservicePermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether users can restart their WorkSpace.</p>
     */
    inline ReconnectEnum GetRestartWorkspace() const { return m_restartWorkspace; }
    inline bool RestartWorkspaceHasBeenSet() const { return m_restartWorkspaceHasBeenSet; }
    inline void SetRestartWorkspace(ReconnectEnum value) { m_restartWorkspaceHasBeenSet = true; m_restartWorkspace = value; }
    inline SelfservicePermissions& WithRestartWorkspace(ReconnectEnum value) { SetRestartWorkspace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether users can increase the volume size of the drives on their
     * WorkSpace.</p>
     */
    inline ReconnectEnum GetIncreaseVolumeSize() const { return m_increaseVolumeSize; }
    inline bool IncreaseVolumeSizeHasBeenSet() const { return m_increaseVolumeSizeHasBeenSet; }
    inline void SetIncreaseVolumeSize(ReconnectEnum value) { m_increaseVolumeSizeHasBeenSet = true; m_increaseVolumeSize = value; }
    inline SelfservicePermissions& WithIncreaseVolumeSize(ReconnectEnum value) { SetIncreaseVolumeSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether users can change the compute type (bundle) for their
     * WorkSpace.</p>
     */
    inline ReconnectEnum GetChangeComputeType() const { return m_changeComputeType; }
    inline bool ChangeComputeTypeHasBeenSet() const { return m_changeComputeTypeHasBeenSet; }
    inline void SetChangeComputeType(ReconnectEnum value) { m_changeComputeTypeHasBeenSet = true; m_changeComputeType = value; }
    inline SelfservicePermissions& WithChangeComputeType(ReconnectEnum value) { SetChangeComputeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether users can switch the running mode of their WorkSpace.</p>
     */
    inline ReconnectEnum GetSwitchRunningMode() const { return m_switchRunningMode; }
    inline bool SwitchRunningModeHasBeenSet() const { return m_switchRunningModeHasBeenSet; }
    inline void SetSwitchRunningMode(ReconnectEnum value) { m_switchRunningModeHasBeenSet = true; m_switchRunningMode = value; }
    inline SelfservicePermissions& WithSwitchRunningMode(ReconnectEnum value) { SetSwitchRunningMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether users can rebuild the operating system of a WorkSpace to
     * its original state.</p>
     */
    inline ReconnectEnum GetRebuildWorkspace() const { return m_rebuildWorkspace; }
    inline bool RebuildWorkspaceHasBeenSet() const { return m_rebuildWorkspaceHasBeenSet; }
    inline void SetRebuildWorkspace(ReconnectEnum value) { m_rebuildWorkspaceHasBeenSet = true; m_rebuildWorkspace = value; }
    inline SelfservicePermissions& WithRebuildWorkspace(ReconnectEnum value) { SetRebuildWorkspace(value); return *this;}
    ///@}
  private:

    ReconnectEnum m_restartWorkspace{ReconnectEnum::NOT_SET};
    bool m_restartWorkspaceHasBeenSet = false;

    ReconnectEnum m_increaseVolumeSize{ReconnectEnum::NOT_SET};
    bool m_increaseVolumeSizeHasBeenSet = false;

    ReconnectEnum m_changeComputeType{ReconnectEnum::NOT_SET};
    bool m_changeComputeTypeHasBeenSet = false;

    ReconnectEnum m_switchRunningMode{ReconnectEnum::NOT_SET};
    bool m_switchRunningModeHasBeenSet = false;

    ReconnectEnum m_rebuildWorkspace{ReconnectEnum::NOT_SET};
    bool m_rebuildWorkspaceHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
