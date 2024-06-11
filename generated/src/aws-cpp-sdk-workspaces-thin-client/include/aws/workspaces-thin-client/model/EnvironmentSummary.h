/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-thin-client/WorkSpacesThinClient_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-thin-client/model/DesktopType.h>
#include <aws/workspaces-thin-client/model/SoftwareSetUpdateSchedule.h>
#include <aws/workspaces-thin-client/model/MaintenanceWindow.h>
#include <aws/workspaces-thin-client/model/SoftwareSetUpdateMode.h>
#include <aws/core/utils/DateTime.h>
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
namespace WorkSpacesThinClient
{
namespace Model
{

  /**
   * <p>Describes an environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-thin-client-2023-08-22/EnvironmentSummary">AWS
   * API Reference</a></p>
   */
  class EnvironmentSummary
  {
  public:
    AWS_WORKSPACESTHINCLIENT_API EnvironmentSummary();
    AWS_WORKSPACESTHINCLIENT_API EnvironmentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESTHINCLIENT_API EnvironmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESTHINCLIENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the environment.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline EnvironmentSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline EnvironmentSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline EnvironmentSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline EnvironmentSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline EnvironmentSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline EnvironmentSummary& WithName(const char* value) { SetName(value); return *this;}
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
    inline EnvironmentSummary& WithDesktopArn(const Aws::String& value) { SetDesktopArn(value); return *this;}
    inline EnvironmentSummary& WithDesktopArn(Aws::String&& value) { SetDesktopArn(std::move(value)); return *this;}
    inline EnvironmentSummary& WithDesktopArn(const char* value) { SetDesktopArn(value); return *this;}
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
    inline EnvironmentSummary& WithDesktopEndpoint(const Aws::String& value) { SetDesktopEndpoint(value); return *this;}
    inline EnvironmentSummary& WithDesktopEndpoint(Aws::String&& value) { SetDesktopEndpoint(std::move(value)); return *this;}
    inline EnvironmentSummary& WithDesktopEndpoint(const char* value) { SetDesktopEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of streaming desktop for the environment.</p>
     */
    inline const DesktopType& GetDesktopType() const{ return m_desktopType; }
    inline bool DesktopTypeHasBeenSet() const { return m_desktopTypeHasBeenSet; }
    inline void SetDesktopType(const DesktopType& value) { m_desktopTypeHasBeenSet = true; m_desktopType = value; }
    inline void SetDesktopType(DesktopType&& value) { m_desktopTypeHasBeenSet = true; m_desktopType = std::move(value); }
    inline EnvironmentSummary& WithDesktopType(const DesktopType& value) { SetDesktopType(value); return *this;}
    inline EnvironmentSummary& WithDesktopType(DesktopType&& value) { SetDesktopType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The activation code to register a device to the environment.</p>
     */
    inline const Aws::String& GetActivationCode() const{ return m_activationCode; }
    inline bool ActivationCodeHasBeenSet() const { return m_activationCodeHasBeenSet; }
    inline void SetActivationCode(const Aws::String& value) { m_activationCodeHasBeenSet = true; m_activationCode = value; }
    inline void SetActivationCode(Aws::String&& value) { m_activationCodeHasBeenSet = true; m_activationCode = std::move(value); }
    inline void SetActivationCode(const char* value) { m_activationCodeHasBeenSet = true; m_activationCode.assign(value); }
    inline EnvironmentSummary& WithActivationCode(const Aws::String& value) { SetActivationCode(value); return *this;}
    inline EnvironmentSummary& WithActivationCode(Aws::String&& value) { SetActivationCode(std::move(value)); return *this;}
    inline EnvironmentSummary& WithActivationCode(const char* value) { SetActivationCode(value); return *this;}
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
    inline EnvironmentSummary& WithSoftwareSetUpdateSchedule(const SoftwareSetUpdateSchedule& value) { SetSoftwareSetUpdateSchedule(value); return *this;}
    inline EnvironmentSummary& WithSoftwareSetUpdateSchedule(SoftwareSetUpdateSchedule&& value) { SetSoftwareSetUpdateSchedule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A specification for a time window to apply software updates.</p>
     */
    inline const MaintenanceWindow& GetMaintenanceWindow() const{ return m_maintenanceWindow; }
    inline bool MaintenanceWindowHasBeenSet() const { return m_maintenanceWindowHasBeenSet; }
    inline void SetMaintenanceWindow(const MaintenanceWindow& value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow = value; }
    inline void SetMaintenanceWindow(MaintenanceWindow&& value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow = std::move(value); }
    inline EnvironmentSummary& WithMaintenanceWindow(const MaintenanceWindow& value) { SetMaintenanceWindow(value); return *this;}
    inline EnvironmentSummary& WithMaintenanceWindow(MaintenanceWindow&& value) { SetMaintenanceWindow(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An option to define which software updates to apply.</p>
     */
    inline const SoftwareSetUpdateMode& GetSoftwareSetUpdateMode() const{ return m_softwareSetUpdateMode; }
    inline bool SoftwareSetUpdateModeHasBeenSet() const { return m_softwareSetUpdateModeHasBeenSet; }
    inline void SetSoftwareSetUpdateMode(const SoftwareSetUpdateMode& value) { m_softwareSetUpdateModeHasBeenSet = true; m_softwareSetUpdateMode = value; }
    inline void SetSoftwareSetUpdateMode(SoftwareSetUpdateMode&& value) { m_softwareSetUpdateModeHasBeenSet = true; m_softwareSetUpdateMode = std::move(value); }
    inline EnvironmentSummary& WithSoftwareSetUpdateMode(const SoftwareSetUpdateMode& value) { SetSoftwareSetUpdateMode(value); return *this;}
    inline EnvironmentSummary& WithSoftwareSetUpdateMode(SoftwareSetUpdateMode&& value) { SetSoftwareSetUpdateMode(std::move(value)); return *this;}
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
    inline EnvironmentSummary& WithDesiredSoftwareSetId(const Aws::String& value) { SetDesiredSoftwareSetId(value); return *this;}
    inline EnvironmentSummary& WithDesiredSoftwareSetId(Aws::String&& value) { SetDesiredSoftwareSetId(std::move(value)); return *this;}
    inline EnvironmentSummary& WithDesiredSoftwareSetId(const char* value) { SetDesiredSoftwareSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the software set that is pending to be installed.</p>
     */
    inline const Aws::String& GetPendingSoftwareSetId() const{ return m_pendingSoftwareSetId; }
    inline bool PendingSoftwareSetIdHasBeenSet() const { return m_pendingSoftwareSetIdHasBeenSet; }
    inline void SetPendingSoftwareSetId(const Aws::String& value) { m_pendingSoftwareSetIdHasBeenSet = true; m_pendingSoftwareSetId = value; }
    inline void SetPendingSoftwareSetId(Aws::String&& value) { m_pendingSoftwareSetIdHasBeenSet = true; m_pendingSoftwareSetId = std::move(value); }
    inline void SetPendingSoftwareSetId(const char* value) { m_pendingSoftwareSetIdHasBeenSet = true; m_pendingSoftwareSetId.assign(value); }
    inline EnvironmentSummary& WithPendingSoftwareSetId(const Aws::String& value) { SetPendingSoftwareSetId(value); return *this;}
    inline EnvironmentSummary& WithPendingSoftwareSetId(Aws::String&& value) { SetPendingSoftwareSetId(std::move(value)); return *this;}
    inline EnvironmentSummary& WithPendingSoftwareSetId(const char* value) { SetPendingSoftwareSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the environment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline EnvironmentSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline EnvironmentSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the device was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline EnvironmentSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline EnvironmentSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline EnvironmentSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline EnvironmentSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline EnvironmentSummary& WithArn(const char* value) { SetArn(value); return *this;}
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

    DesktopType m_desktopType;
    bool m_desktopTypeHasBeenSet = false;

    Aws::String m_activationCode;
    bool m_activationCodeHasBeenSet = false;

    SoftwareSetUpdateSchedule m_softwareSetUpdateSchedule;
    bool m_softwareSetUpdateScheduleHasBeenSet = false;

    MaintenanceWindow m_maintenanceWindow;
    bool m_maintenanceWindowHasBeenSet = false;

    SoftwareSetUpdateMode m_softwareSetUpdateMode;
    bool m_softwareSetUpdateModeHasBeenSet = false;

    Aws::String m_desiredSoftwareSetId;
    bool m_desiredSoftwareSetIdHasBeenSet = false;

    Aws::String m_pendingSoftwareSetId;
    bool m_pendingSoftwareSetIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
