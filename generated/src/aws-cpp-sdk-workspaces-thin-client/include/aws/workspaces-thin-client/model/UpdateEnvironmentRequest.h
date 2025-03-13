/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-thin-client/WorkSpacesThinClient_EXPORTS.h>
#include <aws/workspaces-thin-client/WorkSpacesThinClientRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-thin-client/model/SoftwareSetUpdateSchedule.h>
#include <aws/workspaces-thin-client/model/MaintenanceWindow.h>
#include <aws/workspaces-thin-client/model/SoftwareSetUpdateMode.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace WorkSpacesThinClient
{
namespace Model
{

  /**
   */
  class UpdateEnvironmentRequest : public WorkSpacesThinClientRequest
  {
  public:
    AWS_WORKSPACESTHINCLIENT_API UpdateEnvironmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEnvironment"; }

    AWS_WORKSPACESTHINCLIENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the environment to update.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateEnvironmentRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment to update.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateEnvironmentRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the desktop to stream from Amazon
     * WorkSpaces, WorkSpaces Secure Browser, or AppStream 2.0.</p>
     */
    inline const Aws::String& GetDesktopArn() const { return m_desktopArn; }
    inline bool DesktopArnHasBeenSet() const { return m_desktopArnHasBeenSet; }
    template<typename DesktopArnT = Aws::String>
    void SetDesktopArn(DesktopArnT&& value) { m_desktopArnHasBeenSet = true; m_desktopArn = std::forward<DesktopArnT>(value); }
    template<typename DesktopArnT = Aws::String>
    UpdateEnvironmentRequest& WithDesktopArn(DesktopArnT&& value) { SetDesktopArn(std::forward<DesktopArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL for the identity provider login (only for environments that use
     * AppStream 2.0).</p>
     */
    inline const Aws::String& GetDesktopEndpoint() const { return m_desktopEndpoint; }
    inline bool DesktopEndpointHasBeenSet() const { return m_desktopEndpointHasBeenSet; }
    template<typename DesktopEndpointT = Aws::String>
    void SetDesktopEndpoint(DesktopEndpointT&& value) { m_desktopEndpointHasBeenSet = true; m_desktopEndpoint = std::forward<DesktopEndpointT>(value); }
    template<typename DesktopEndpointT = Aws::String>
    UpdateEnvironmentRequest& WithDesktopEndpoint(DesktopEndpointT&& value) { SetDesktopEndpoint(std::forward<DesktopEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An option to define if software updates should be applied within a
     * maintenance window.</p>
     */
    inline SoftwareSetUpdateSchedule GetSoftwareSetUpdateSchedule() const { return m_softwareSetUpdateSchedule; }
    inline bool SoftwareSetUpdateScheduleHasBeenSet() const { return m_softwareSetUpdateScheduleHasBeenSet; }
    inline void SetSoftwareSetUpdateSchedule(SoftwareSetUpdateSchedule value) { m_softwareSetUpdateScheduleHasBeenSet = true; m_softwareSetUpdateSchedule = value; }
    inline UpdateEnvironmentRequest& WithSoftwareSetUpdateSchedule(SoftwareSetUpdateSchedule value) { SetSoftwareSetUpdateSchedule(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A specification for a time window to apply software updates.</p>
     */
    inline const MaintenanceWindow& GetMaintenanceWindow() const { return m_maintenanceWindow; }
    inline bool MaintenanceWindowHasBeenSet() const { return m_maintenanceWindowHasBeenSet; }
    template<typename MaintenanceWindowT = MaintenanceWindow>
    void SetMaintenanceWindow(MaintenanceWindowT&& value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow = std::forward<MaintenanceWindowT>(value); }
    template<typename MaintenanceWindowT = MaintenanceWindow>
    UpdateEnvironmentRequest& WithMaintenanceWindow(MaintenanceWindowT&& value) { SetMaintenanceWindow(std::forward<MaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An option to define which software updates to apply.</p>
     */
    inline SoftwareSetUpdateMode GetSoftwareSetUpdateMode() const { return m_softwareSetUpdateMode; }
    inline bool SoftwareSetUpdateModeHasBeenSet() const { return m_softwareSetUpdateModeHasBeenSet; }
    inline void SetSoftwareSetUpdateMode(SoftwareSetUpdateMode value) { m_softwareSetUpdateModeHasBeenSet = true; m_softwareSetUpdateMode = value; }
    inline UpdateEnvironmentRequest& WithSoftwareSetUpdateMode(SoftwareSetUpdateMode value) { SetSoftwareSetUpdateMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the software set to apply.</p>
     */
    inline const Aws::String& GetDesiredSoftwareSetId() const { return m_desiredSoftwareSetId; }
    inline bool DesiredSoftwareSetIdHasBeenSet() const { return m_desiredSoftwareSetIdHasBeenSet; }
    template<typename DesiredSoftwareSetIdT = Aws::String>
    void SetDesiredSoftwareSetId(DesiredSoftwareSetIdT&& value) { m_desiredSoftwareSetIdHasBeenSet = true; m_desiredSoftwareSetId = std::forward<DesiredSoftwareSetIdT>(value); }
    template<typename DesiredSoftwareSetIdT = Aws::String>
    UpdateEnvironmentRequest& WithDesiredSoftwareSetId(DesiredSoftwareSetIdT&& value) { SetDesiredSoftwareSetId(std::forward<DesiredSoftwareSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of the key-value pairs of the tag or tags to assign to the newly
     * created devices for this environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDeviceCreationTags() const { return m_deviceCreationTags; }
    inline bool DeviceCreationTagsHasBeenSet() const { return m_deviceCreationTagsHasBeenSet; }
    template<typename DeviceCreationTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetDeviceCreationTags(DeviceCreationTagsT&& value) { m_deviceCreationTagsHasBeenSet = true; m_deviceCreationTags = std::forward<DeviceCreationTagsT>(value); }
    template<typename DeviceCreationTagsT = Aws::Map<Aws::String, Aws::String>>
    UpdateEnvironmentRequest& WithDeviceCreationTags(DeviceCreationTagsT&& value) { SetDeviceCreationTags(std::forward<DeviceCreationTagsT>(value)); return *this;}
    template<typename DeviceCreationTagsKeyT = Aws::String, typename DeviceCreationTagsValueT = Aws::String>
    UpdateEnvironmentRequest& AddDeviceCreationTags(DeviceCreationTagsKeyT&& key, DeviceCreationTagsValueT&& value) {
      m_deviceCreationTagsHasBeenSet = true; m_deviceCreationTags.emplace(std::forward<DeviceCreationTagsKeyT>(key), std::forward<DeviceCreationTagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_desktopArn;
    bool m_desktopArnHasBeenSet = false;

    Aws::String m_desktopEndpoint;
    bool m_desktopEndpointHasBeenSet = false;

    SoftwareSetUpdateSchedule m_softwareSetUpdateSchedule{SoftwareSetUpdateSchedule::NOT_SET};
    bool m_softwareSetUpdateScheduleHasBeenSet = false;

    MaintenanceWindow m_maintenanceWindow;
    bool m_maintenanceWindowHasBeenSet = false;

    SoftwareSetUpdateMode m_softwareSetUpdateMode{SoftwareSetUpdateMode::NOT_SET};
    bool m_softwareSetUpdateModeHasBeenSet = false;

    Aws::String m_desiredSoftwareSetId;
    bool m_desiredSoftwareSetIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_deviceCreationTags;
    bool m_deviceCreationTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
