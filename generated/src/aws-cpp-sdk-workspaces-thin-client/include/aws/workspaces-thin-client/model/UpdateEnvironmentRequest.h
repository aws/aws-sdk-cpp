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


    /**
     * <p>The ID of the environment to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the environment to update.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the environment to update.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the environment to update.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the environment to update.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the environment to update.</p>
     */
    inline UpdateEnvironmentRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the environment to update.</p>
     */
    inline UpdateEnvironmentRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the environment to update.</p>
     */
    inline UpdateEnvironmentRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the environment to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the environment to update.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the environment to update.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the environment to update.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the environment to update.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the environment to update.</p>
     */
    inline UpdateEnvironmentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the environment to update.</p>
     */
    inline UpdateEnvironmentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment to update.</p>
     */
    inline UpdateEnvironmentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the desktop to stream from Amazon
     * WorkSpaces, WorkSpaces Web, or AppStream 2.0.</p>
     */
    inline const Aws::String& GetDesktopArn() const{ return m_desktopArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the desktop to stream from Amazon
     * WorkSpaces, WorkSpaces Web, or AppStream 2.0.</p>
     */
    inline bool DesktopArnHasBeenSet() const { return m_desktopArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the desktop to stream from Amazon
     * WorkSpaces, WorkSpaces Web, or AppStream 2.0.</p>
     */
    inline void SetDesktopArn(const Aws::String& value) { m_desktopArnHasBeenSet = true; m_desktopArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the desktop to stream from Amazon
     * WorkSpaces, WorkSpaces Web, or AppStream 2.0.</p>
     */
    inline void SetDesktopArn(Aws::String&& value) { m_desktopArnHasBeenSet = true; m_desktopArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the desktop to stream from Amazon
     * WorkSpaces, WorkSpaces Web, or AppStream 2.0.</p>
     */
    inline void SetDesktopArn(const char* value) { m_desktopArnHasBeenSet = true; m_desktopArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the desktop to stream from Amazon
     * WorkSpaces, WorkSpaces Web, or AppStream 2.0.</p>
     */
    inline UpdateEnvironmentRequest& WithDesktopArn(const Aws::String& value) { SetDesktopArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the desktop to stream from Amazon
     * WorkSpaces, WorkSpaces Web, or AppStream 2.0.</p>
     */
    inline UpdateEnvironmentRequest& WithDesktopArn(Aws::String&& value) { SetDesktopArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the desktop to stream from Amazon
     * WorkSpaces, WorkSpaces Web, or AppStream 2.0.</p>
     */
    inline UpdateEnvironmentRequest& WithDesktopArn(const char* value) { SetDesktopArn(value); return *this;}


    /**
     * <p>The URL for the identity provider login (only for environments that use
     * AppStream 2.0).</p>
     */
    inline const Aws::String& GetDesktopEndpoint() const{ return m_desktopEndpoint; }

    /**
     * <p>The URL for the identity provider login (only for environments that use
     * AppStream 2.0).</p>
     */
    inline bool DesktopEndpointHasBeenSet() const { return m_desktopEndpointHasBeenSet; }

    /**
     * <p>The URL for the identity provider login (only for environments that use
     * AppStream 2.0).</p>
     */
    inline void SetDesktopEndpoint(const Aws::String& value) { m_desktopEndpointHasBeenSet = true; m_desktopEndpoint = value; }

    /**
     * <p>The URL for the identity provider login (only for environments that use
     * AppStream 2.0).</p>
     */
    inline void SetDesktopEndpoint(Aws::String&& value) { m_desktopEndpointHasBeenSet = true; m_desktopEndpoint = std::move(value); }

    /**
     * <p>The URL for the identity provider login (only for environments that use
     * AppStream 2.0).</p>
     */
    inline void SetDesktopEndpoint(const char* value) { m_desktopEndpointHasBeenSet = true; m_desktopEndpoint.assign(value); }

    /**
     * <p>The URL for the identity provider login (only for environments that use
     * AppStream 2.0).</p>
     */
    inline UpdateEnvironmentRequest& WithDesktopEndpoint(const Aws::String& value) { SetDesktopEndpoint(value); return *this;}

    /**
     * <p>The URL for the identity provider login (only for environments that use
     * AppStream 2.0).</p>
     */
    inline UpdateEnvironmentRequest& WithDesktopEndpoint(Aws::String&& value) { SetDesktopEndpoint(std::move(value)); return *this;}

    /**
     * <p>The URL for the identity provider login (only for environments that use
     * AppStream 2.0).</p>
     */
    inline UpdateEnvironmentRequest& WithDesktopEndpoint(const char* value) { SetDesktopEndpoint(value); return *this;}


    /**
     * <p>An option to define if software updates should be applied within a
     * maintenance window.</p>
     */
    inline const SoftwareSetUpdateSchedule& GetSoftwareSetUpdateSchedule() const{ return m_softwareSetUpdateSchedule; }

    /**
     * <p>An option to define if software updates should be applied within a
     * maintenance window.</p>
     */
    inline bool SoftwareSetUpdateScheduleHasBeenSet() const { return m_softwareSetUpdateScheduleHasBeenSet; }

    /**
     * <p>An option to define if software updates should be applied within a
     * maintenance window.</p>
     */
    inline void SetSoftwareSetUpdateSchedule(const SoftwareSetUpdateSchedule& value) { m_softwareSetUpdateScheduleHasBeenSet = true; m_softwareSetUpdateSchedule = value; }

    /**
     * <p>An option to define if software updates should be applied within a
     * maintenance window.</p>
     */
    inline void SetSoftwareSetUpdateSchedule(SoftwareSetUpdateSchedule&& value) { m_softwareSetUpdateScheduleHasBeenSet = true; m_softwareSetUpdateSchedule = std::move(value); }

    /**
     * <p>An option to define if software updates should be applied within a
     * maintenance window.</p>
     */
    inline UpdateEnvironmentRequest& WithSoftwareSetUpdateSchedule(const SoftwareSetUpdateSchedule& value) { SetSoftwareSetUpdateSchedule(value); return *this;}

    /**
     * <p>An option to define if software updates should be applied within a
     * maintenance window.</p>
     */
    inline UpdateEnvironmentRequest& WithSoftwareSetUpdateSchedule(SoftwareSetUpdateSchedule&& value) { SetSoftwareSetUpdateSchedule(std::move(value)); return *this;}


    /**
     * <p>A specification for a time window to apply software updates.</p>
     */
    inline const MaintenanceWindow& GetMaintenanceWindow() const{ return m_maintenanceWindow; }

    /**
     * <p>A specification for a time window to apply software updates.</p>
     */
    inline bool MaintenanceWindowHasBeenSet() const { return m_maintenanceWindowHasBeenSet; }

    /**
     * <p>A specification for a time window to apply software updates.</p>
     */
    inline void SetMaintenanceWindow(const MaintenanceWindow& value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow = value; }

    /**
     * <p>A specification for a time window to apply software updates.</p>
     */
    inline void SetMaintenanceWindow(MaintenanceWindow&& value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow = std::move(value); }

    /**
     * <p>A specification for a time window to apply software updates.</p>
     */
    inline UpdateEnvironmentRequest& WithMaintenanceWindow(const MaintenanceWindow& value) { SetMaintenanceWindow(value); return *this;}

    /**
     * <p>A specification for a time window to apply software updates.</p>
     */
    inline UpdateEnvironmentRequest& WithMaintenanceWindow(MaintenanceWindow&& value) { SetMaintenanceWindow(std::move(value)); return *this;}


    /**
     * <p>An option to define which software updates to apply.</p>
     */
    inline const SoftwareSetUpdateMode& GetSoftwareSetUpdateMode() const{ return m_softwareSetUpdateMode; }

    /**
     * <p>An option to define which software updates to apply.</p>
     */
    inline bool SoftwareSetUpdateModeHasBeenSet() const { return m_softwareSetUpdateModeHasBeenSet; }

    /**
     * <p>An option to define which software updates to apply.</p>
     */
    inline void SetSoftwareSetUpdateMode(const SoftwareSetUpdateMode& value) { m_softwareSetUpdateModeHasBeenSet = true; m_softwareSetUpdateMode = value; }

    /**
     * <p>An option to define which software updates to apply.</p>
     */
    inline void SetSoftwareSetUpdateMode(SoftwareSetUpdateMode&& value) { m_softwareSetUpdateModeHasBeenSet = true; m_softwareSetUpdateMode = std::move(value); }

    /**
     * <p>An option to define which software updates to apply.</p>
     */
    inline UpdateEnvironmentRequest& WithSoftwareSetUpdateMode(const SoftwareSetUpdateMode& value) { SetSoftwareSetUpdateMode(value); return *this;}

    /**
     * <p>An option to define which software updates to apply.</p>
     */
    inline UpdateEnvironmentRequest& WithSoftwareSetUpdateMode(SoftwareSetUpdateMode&& value) { SetSoftwareSetUpdateMode(std::move(value)); return *this;}


    /**
     * <p>The ID of the software set to apply.</p>
     */
    inline const Aws::String& GetDesiredSoftwareSetId() const{ return m_desiredSoftwareSetId; }

    /**
     * <p>The ID of the software set to apply.</p>
     */
    inline bool DesiredSoftwareSetIdHasBeenSet() const { return m_desiredSoftwareSetIdHasBeenSet; }

    /**
     * <p>The ID of the software set to apply.</p>
     */
    inline void SetDesiredSoftwareSetId(const Aws::String& value) { m_desiredSoftwareSetIdHasBeenSet = true; m_desiredSoftwareSetId = value; }

    /**
     * <p>The ID of the software set to apply.</p>
     */
    inline void SetDesiredSoftwareSetId(Aws::String&& value) { m_desiredSoftwareSetIdHasBeenSet = true; m_desiredSoftwareSetId = std::move(value); }

    /**
     * <p>The ID of the software set to apply.</p>
     */
    inline void SetDesiredSoftwareSetId(const char* value) { m_desiredSoftwareSetIdHasBeenSet = true; m_desiredSoftwareSetId.assign(value); }

    /**
     * <p>The ID of the software set to apply.</p>
     */
    inline UpdateEnvironmentRequest& WithDesiredSoftwareSetId(const Aws::String& value) { SetDesiredSoftwareSetId(value); return *this;}

    /**
     * <p>The ID of the software set to apply.</p>
     */
    inline UpdateEnvironmentRequest& WithDesiredSoftwareSetId(Aws::String&& value) { SetDesiredSoftwareSetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the software set to apply.</p>
     */
    inline UpdateEnvironmentRequest& WithDesiredSoftwareSetId(const char* value) { SetDesiredSoftwareSetId(value); return *this;}

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
  };

} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
