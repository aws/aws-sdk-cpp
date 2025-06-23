/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/WorkspacesInstancesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-instances/model/DisassociateModeEnum.h>
#include <utility>

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{

  /**
   * <p>Specifies volume detachment parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/DisassociateVolumeRequest">AWS
   * API Reference</a></p>
   */
  class DisassociateVolumeRequest : public WorkspacesInstancesRequest
  {
  public:
    AWS_WORKSPACESINSTANCES_API DisassociateVolumeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateVolume"; }

    AWS_WORKSPACESINSTANCES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACESINSTANCES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>WorkSpace Instance to detach volume from.</p>
     */
    inline const Aws::String& GetWorkspaceInstanceId() const { return m_workspaceInstanceId; }
    inline bool WorkspaceInstanceIdHasBeenSet() const { return m_workspaceInstanceIdHasBeenSet; }
    template<typename WorkspaceInstanceIdT = Aws::String>
    void SetWorkspaceInstanceId(WorkspaceInstanceIdT&& value) { m_workspaceInstanceIdHasBeenSet = true; m_workspaceInstanceId = std::forward<WorkspaceInstanceIdT>(value); }
    template<typename WorkspaceInstanceIdT = Aws::String>
    DisassociateVolumeRequest& WithWorkspaceInstanceId(WorkspaceInstanceIdT&& value) { SetWorkspaceInstanceId(std::forward<WorkspaceInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Volume to be detached.</p>
     */
    inline const Aws::String& GetVolumeId() const { return m_volumeId; }
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
    template<typename VolumeIdT = Aws::String>
    void SetVolumeId(VolumeIdT&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::forward<VolumeIdT>(value); }
    template<typename VolumeIdT = Aws::String>
    DisassociateVolumeRequest& WithVolumeId(VolumeIdT&& value) { SetVolumeId(std::forward<VolumeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Device path of volume to detach.</p>
     */
    inline const Aws::String& GetDevice() const { return m_device; }
    inline bool DeviceHasBeenSet() const { return m_deviceHasBeenSet; }
    template<typename DeviceT = Aws::String>
    void SetDevice(DeviceT&& value) { m_deviceHasBeenSet = true; m_device = std::forward<DeviceT>(value); }
    template<typename DeviceT = Aws::String>
    DisassociateVolumeRequest& WithDevice(DeviceT&& value) { SetDevice(std::forward<DeviceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Mode for volume detachment.</p>
     */
    inline DisassociateModeEnum GetDisassociateMode() const { return m_disassociateMode; }
    inline bool DisassociateModeHasBeenSet() const { return m_disassociateModeHasBeenSet; }
    inline void SetDisassociateMode(DisassociateModeEnum value) { m_disassociateModeHasBeenSet = true; m_disassociateMode = value; }
    inline DisassociateVolumeRequest& WithDisassociateMode(DisassociateModeEnum value) { SetDisassociateMode(value); return *this;}
    ///@}
  private:

    Aws::String m_workspaceInstanceId;
    bool m_workspaceInstanceIdHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    Aws::String m_device;
    bool m_deviceHasBeenSet = false;

    DisassociateModeEnum m_disassociateMode{DisassociateModeEnum::NOT_SET};
    bool m_disassociateModeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
