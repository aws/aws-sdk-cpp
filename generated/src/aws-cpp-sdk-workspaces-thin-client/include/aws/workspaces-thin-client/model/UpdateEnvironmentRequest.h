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
    AWS_WORKSPACESTHINCLIENT_API UpdateEnvironmentRequest();

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
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateEnvironmentRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateEnvironmentRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateEnvironmentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateEnvironmentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the desktop to stream from Amazon
     * WorkSpaces, WorkSpaces Web, or AppStream 2.0.</p>
     */
    inline const Aws::String& GetDesktopArn() const{ return m_desktopArn; }
    inline bool DesktopArnHasBeenSet() const { return m_desktopArnHasBeenSet; }
    inline void SetDesktopArn(const Aws::String& value) { m_desktopArnHasBeenSet = true; m_desktopArn = value; }
    inline void SetDesktopArn(Aws::String&& value) { m_desktopArnHasBeenSet = true; m_desktopArn = std::move(value); }
    inline void SetDesktopArn(const char* value) { m_desktopArnHasBeenSet = true; m_desktopArn.assign(value); }
    inline UpdateEnvironmentRequest& WithDesktopArn(const Aws::String& value) { SetDesktopArn(value); return *this;}
    inline UpdateEnvironmentRequest& WithDesktopArn(Aws::String&& value) { SetDesktopArn(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithDesktopArn(const char* value) { SetDesktopArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL for the identity provider login (only for environments that use
     * AppStream 2.0).</p>
     */
    inline const Aws::String& GetDesktopEndpoint() const{ return m_desktopEndpoint; }
    inline bool DesktopEndpointHasBeenSet() const { return m_desktopEndpointHasBeenSet; }
    inline void SetDesktopEndpoint(const Aws::String& value) { m_desktopEndpointHasBeenSet = true; m_desktopEndpoint = value; }
    inline void SetDesktopEndpoint(Aws::String&& value) { m_desktopEndpointHasBeenSet = true; m_desktopEndpoint = std::move(value); }
    inline void SetDesktopEndpoint(const char* value) { m_desktopEndpointHasBeenSet = true; m_desktopEndpoint.assign(value); }
    inline UpdateEnvironmentRequest& WithDesktopEndpoint(const Aws::String& value) { SetDesktopEndpoint(value); return *this;}
    inline UpdateEnvironmentRequest& WithDesktopEndpoint(Aws::String&& value) { SetDesktopEndpoint(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithDesktopEndpoint(const char* value) { SetDesktopEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An option to define if software updates should be applied within a
     * maintenance window.</p>
     */
    inline const SoftwareSetUpdateSchedule& GetSoftwareSetUpdateSchedule() const{ return m_softwareSetUpdateSchedule; }
    inline bool SoftwareSetUpdateScheduleHasBeenSet() const { return m_softwareSetUpdateScheduleHasBeenSet; }
    inline void SetSoftwareSetUpdateSchedule(const SoftwareSetUpdateSchedule& value) { m_softwareSetUpdateScheduleHasBeenSet = true; m_softwareSetUpdateSchedule = value; }
    inline void SetSoftwareSetUpdateSchedule(SoftwareSetUpdateSchedule&& value) { m_softwareSetUpdateScheduleHasBeenSet = true; m_softwareSetUpdateSchedule = std::move(value); }
    inline UpdateEnvironmentRequest& WithSoftwareSetUpdateSchedule(const SoftwareSetUpdateSchedule& value) { SetSoftwareSetUpdateSchedule(value); return *this;}
    inline UpdateEnvironmentRequest& WithSoftwareSetUpdateSchedule(SoftwareSetUpdateSchedule&& value) { SetSoftwareSetUpdateSchedule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A specification for a time window to apply software updates.</p>
     */
    inline const MaintenanceWindow& GetMaintenanceWindow() const{ return m_maintenanceWindow; }
    inline bool MaintenanceWindowHasBeenSet() const { return m_maintenanceWindowHasBeenSet; }
    inline void SetMaintenanceWindow(const MaintenanceWindow& value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow = value; }
    inline void SetMaintenanceWindow(MaintenanceWindow&& value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow = std::move(value); }
    inline UpdateEnvironmentRequest& WithMaintenanceWindow(const MaintenanceWindow& value) { SetMaintenanceWindow(value); return *this;}
    inline UpdateEnvironmentRequest& WithMaintenanceWindow(MaintenanceWindow&& value) { SetMaintenanceWindow(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An option to define which software updates to apply.</p>
     */
    inline const SoftwareSetUpdateMode& GetSoftwareSetUpdateMode() const{ return m_softwareSetUpdateMode; }
    inline bool SoftwareSetUpdateModeHasBeenSet() const { return m_softwareSetUpdateModeHasBeenSet; }
    inline void SetSoftwareSetUpdateMode(const SoftwareSetUpdateMode& value) { m_softwareSetUpdateModeHasBeenSet = true; m_softwareSetUpdateMode = value; }
    inline void SetSoftwareSetUpdateMode(SoftwareSetUpdateMode&& value) { m_softwareSetUpdateModeHasBeenSet = true; m_softwareSetUpdateMode = std::move(value); }
    inline UpdateEnvironmentRequest& WithSoftwareSetUpdateMode(const SoftwareSetUpdateMode& value) { SetSoftwareSetUpdateMode(value); return *this;}
    inline UpdateEnvironmentRequest& WithSoftwareSetUpdateMode(SoftwareSetUpdateMode&& value) { SetSoftwareSetUpdateMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the software set to apply.</p>
     */
    inline const Aws::String& GetDesiredSoftwareSetId() const{ return m_desiredSoftwareSetId; }
    inline bool DesiredSoftwareSetIdHasBeenSet() const { return m_desiredSoftwareSetIdHasBeenSet; }
    inline void SetDesiredSoftwareSetId(const Aws::String& value) { m_desiredSoftwareSetIdHasBeenSet = true; m_desiredSoftwareSetId = value; }
    inline void SetDesiredSoftwareSetId(Aws::String&& value) { m_desiredSoftwareSetIdHasBeenSet = true; m_desiredSoftwareSetId = std::move(value); }
    inline void SetDesiredSoftwareSetId(const char* value) { m_desiredSoftwareSetIdHasBeenSet = true; m_desiredSoftwareSetId.assign(value); }
    inline UpdateEnvironmentRequest& WithDesiredSoftwareSetId(const Aws::String& value) { SetDesiredSoftwareSetId(value); return *this;}
    inline UpdateEnvironmentRequest& WithDesiredSoftwareSetId(Aws::String&& value) { SetDesiredSoftwareSetId(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithDesiredSoftwareSetId(const char* value) { SetDesiredSoftwareSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of the key-value pairs of the tag or tags to assign to the newly
     * created devices for this environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDeviceCreationTags() const{ return m_deviceCreationTags; }
    inline bool DeviceCreationTagsHasBeenSet() const { return m_deviceCreationTagsHasBeenSet; }
    inline void SetDeviceCreationTags(const Aws::Map<Aws::String, Aws::String>& value) { m_deviceCreationTagsHasBeenSet = true; m_deviceCreationTags = value; }
    inline void SetDeviceCreationTags(Aws::Map<Aws::String, Aws::String>&& value) { m_deviceCreationTagsHasBeenSet = true; m_deviceCreationTags = std::move(value); }
    inline UpdateEnvironmentRequest& WithDeviceCreationTags(const Aws::Map<Aws::String, Aws::String>& value) { SetDeviceCreationTags(value); return *this;}
    inline UpdateEnvironmentRequest& WithDeviceCreationTags(Aws::Map<Aws::String, Aws::String>&& value) { SetDeviceCreationTags(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& AddDeviceCreationTags(const Aws::String& key, const Aws::String& value) { m_deviceCreationTagsHasBeenSet = true; m_deviceCreationTags.emplace(key, value); return *this; }
    inline UpdateEnvironmentRequest& AddDeviceCreationTags(Aws::String&& key, const Aws::String& value) { m_deviceCreationTagsHasBeenSet = true; m_deviceCreationTags.emplace(std::move(key), value); return *this; }
    inline UpdateEnvironmentRequest& AddDeviceCreationTags(const Aws::String& key, Aws::String&& value) { m_deviceCreationTagsHasBeenSet = true; m_deviceCreationTags.emplace(key, std::move(value)); return *this; }
    inline UpdateEnvironmentRequest& AddDeviceCreationTags(Aws::String&& key, Aws::String&& value) { m_deviceCreationTagsHasBeenSet = true; m_deviceCreationTags.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateEnvironmentRequest& AddDeviceCreationTags(const char* key, Aws::String&& value) { m_deviceCreationTagsHasBeenSet = true; m_deviceCreationTags.emplace(key, std::move(value)); return *this; }
    inline UpdateEnvironmentRequest& AddDeviceCreationTags(Aws::String&& key, const char* value) { m_deviceCreationTagsHasBeenSet = true; m_deviceCreationTags.emplace(std::move(key), value); return *this; }
    inline UpdateEnvironmentRequest& AddDeviceCreationTags(const char* key, const char* value) { m_deviceCreationTagsHasBeenSet = true; m_deviceCreationTags.emplace(key, value); return *this; }
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

    SoftwareSetUpdateSchedule m_softwareSetUpdateSchedule;
    bool m_softwareSetUpdateScheduleHasBeenSet = false;

    MaintenanceWindow m_maintenanceWindow;
    bool m_maintenanceWindowHasBeenSet = false;

    SoftwareSetUpdateMode m_softwareSetUpdateMode;
    bool m_softwareSetUpdateModeHasBeenSet = false;

    Aws::String m_desiredSoftwareSetId;
    bool m_desiredSoftwareSetIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_deviceCreationTags;
    bool m_deviceCreationTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
