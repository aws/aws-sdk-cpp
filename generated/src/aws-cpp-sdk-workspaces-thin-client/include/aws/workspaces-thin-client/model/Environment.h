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
#include <aws/workspaces-thin-client/model/EnvironmentSoftwareSetComplianceStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/workspaces-thin-client/model/EmbeddedTag.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-thin-client-2023-08-22/Environment">AWS
   * API Reference</a></p>
   */
  class Environment
  {
  public:
    AWS_WORKSPACESTHINCLIENT_API Environment();
    AWS_WORKSPACESTHINCLIENT_API Environment(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESTHINCLIENT_API Environment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESTHINCLIENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the environment.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the environment.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the environment.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the environment.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the environment.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the environment.</p>
     */
    inline Environment& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the environment.</p>
     */
    inline Environment& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the environment.</p>
     */
    inline Environment& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the environment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the environment.</p>
     */
    inline Environment& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the environment.</p>
     */
    inline Environment& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment.</p>
     */
    inline Environment& WithName(const char* value) { SetName(value); return *this;}


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
    inline Environment& WithDesktopArn(const Aws::String& value) { SetDesktopArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the desktop to stream from Amazon
     * WorkSpaces, WorkSpaces Web, or AppStream 2.0.</p>
     */
    inline Environment& WithDesktopArn(Aws::String&& value) { SetDesktopArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the desktop to stream from Amazon
     * WorkSpaces, WorkSpaces Web, or AppStream 2.0.</p>
     */
    inline Environment& WithDesktopArn(const char* value) { SetDesktopArn(value); return *this;}


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
    inline Environment& WithDesktopEndpoint(const Aws::String& value) { SetDesktopEndpoint(value); return *this;}

    /**
     * <p>The URL for the identity provider login (only for environments that use
     * AppStream 2.0).</p>
     */
    inline Environment& WithDesktopEndpoint(Aws::String&& value) { SetDesktopEndpoint(std::move(value)); return *this;}

    /**
     * <p>The URL for the identity provider login (only for environments that use
     * AppStream 2.0).</p>
     */
    inline Environment& WithDesktopEndpoint(const char* value) { SetDesktopEndpoint(value); return *this;}


    /**
     * <p>The type of streaming desktop for the environment.</p>
     */
    inline const DesktopType& GetDesktopType() const{ return m_desktopType; }

    /**
     * <p>The type of streaming desktop for the environment.</p>
     */
    inline bool DesktopTypeHasBeenSet() const { return m_desktopTypeHasBeenSet; }

    /**
     * <p>The type of streaming desktop for the environment.</p>
     */
    inline void SetDesktopType(const DesktopType& value) { m_desktopTypeHasBeenSet = true; m_desktopType = value; }

    /**
     * <p>The type of streaming desktop for the environment.</p>
     */
    inline void SetDesktopType(DesktopType&& value) { m_desktopTypeHasBeenSet = true; m_desktopType = std::move(value); }

    /**
     * <p>The type of streaming desktop for the environment.</p>
     */
    inline Environment& WithDesktopType(const DesktopType& value) { SetDesktopType(value); return *this;}

    /**
     * <p>The type of streaming desktop for the environment.</p>
     */
    inline Environment& WithDesktopType(DesktopType&& value) { SetDesktopType(std::move(value)); return *this;}


    /**
     * <p>The activation code to register a device to the environment.</p>
     */
    inline const Aws::String& GetActivationCode() const{ return m_activationCode; }

    /**
     * <p>The activation code to register a device to the environment.</p>
     */
    inline bool ActivationCodeHasBeenSet() const { return m_activationCodeHasBeenSet; }

    /**
     * <p>The activation code to register a device to the environment.</p>
     */
    inline void SetActivationCode(const Aws::String& value) { m_activationCodeHasBeenSet = true; m_activationCode = value; }

    /**
     * <p>The activation code to register a device to the environment.</p>
     */
    inline void SetActivationCode(Aws::String&& value) { m_activationCodeHasBeenSet = true; m_activationCode = std::move(value); }

    /**
     * <p>The activation code to register a device to the environment.</p>
     */
    inline void SetActivationCode(const char* value) { m_activationCodeHasBeenSet = true; m_activationCode.assign(value); }

    /**
     * <p>The activation code to register a device to the environment.</p>
     */
    inline Environment& WithActivationCode(const Aws::String& value) { SetActivationCode(value); return *this;}

    /**
     * <p>The activation code to register a device to the environment.</p>
     */
    inline Environment& WithActivationCode(Aws::String&& value) { SetActivationCode(std::move(value)); return *this;}

    /**
     * <p>The activation code to register a device to the environment.</p>
     */
    inline Environment& WithActivationCode(const char* value) { SetActivationCode(value); return *this;}


    /**
     * <p>The number of devices registered to the environment.</p>
     */
    inline int GetRegisteredDevicesCount() const{ return m_registeredDevicesCount; }

    /**
     * <p>The number of devices registered to the environment.</p>
     */
    inline bool RegisteredDevicesCountHasBeenSet() const { return m_registeredDevicesCountHasBeenSet; }

    /**
     * <p>The number of devices registered to the environment.</p>
     */
    inline void SetRegisteredDevicesCount(int value) { m_registeredDevicesCountHasBeenSet = true; m_registeredDevicesCount = value; }

    /**
     * <p>The number of devices registered to the environment.</p>
     */
    inline Environment& WithRegisteredDevicesCount(int value) { SetRegisteredDevicesCount(value); return *this;}


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
    inline Environment& WithSoftwareSetUpdateSchedule(const SoftwareSetUpdateSchedule& value) { SetSoftwareSetUpdateSchedule(value); return *this;}

    /**
     * <p>An option to define if software updates should be applied within a
     * maintenance window.</p>
     */
    inline Environment& WithSoftwareSetUpdateSchedule(SoftwareSetUpdateSchedule&& value) { SetSoftwareSetUpdateSchedule(std::move(value)); return *this;}


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
    inline Environment& WithMaintenanceWindow(const MaintenanceWindow& value) { SetMaintenanceWindow(value); return *this;}

    /**
     * <p>A specification for a time window to apply software updates.</p>
     */
    inline Environment& WithMaintenanceWindow(MaintenanceWindow&& value) { SetMaintenanceWindow(std::move(value)); return *this;}


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
    inline Environment& WithSoftwareSetUpdateMode(const SoftwareSetUpdateMode& value) { SetSoftwareSetUpdateMode(value); return *this;}

    /**
     * <p>An option to define which software updates to apply.</p>
     */
    inline Environment& WithSoftwareSetUpdateMode(SoftwareSetUpdateMode&& value) { SetSoftwareSetUpdateMode(std::move(value)); return *this;}


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
    inline Environment& WithDesiredSoftwareSetId(const Aws::String& value) { SetDesiredSoftwareSetId(value); return *this;}

    /**
     * <p>The ID of the software set to apply.</p>
     */
    inline Environment& WithDesiredSoftwareSetId(Aws::String&& value) { SetDesiredSoftwareSetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the software set to apply.</p>
     */
    inline Environment& WithDesiredSoftwareSetId(const char* value) { SetDesiredSoftwareSetId(value); return *this;}


    /**
     * <p>The ID of the software set that is pending to be installed.</p>
     */
    inline const Aws::String& GetPendingSoftwareSetId() const{ return m_pendingSoftwareSetId; }

    /**
     * <p>The ID of the software set that is pending to be installed.</p>
     */
    inline bool PendingSoftwareSetIdHasBeenSet() const { return m_pendingSoftwareSetIdHasBeenSet; }

    /**
     * <p>The ID of the software set that is pending to be installed.</p>
     */
    inline void SetPendingSoftwareSetId(const Aws::String& value) { m_pendingSoftwareSetIdHasBeenSet = true; m_pendingSoftwareSetId = value; }

    /**
     * <p>The ID of the software set that is pending to be installed.</p>
     */
    inline void SetPendingSoftwareSetId(Aws::String&& value) { m_pendingSoftwareSetIdHasBeenSet = true; m_pendingSoftwareSetId = std::move(value); }

    /**
     * <p>The ID of the software set that is pending to be installed.</p>
     */
    inline void SetPendingSoftwareSetId(const char* value) { m_pendingSoftwareSetIdHasBeenSet = true; m_pendingSoftwareSetId.assign(value); }

    /**
     * <p>The ID of the software set that is pending to be installed.</p>
     */
    inline Environment& WithPendingSoftwareSetId(const Aws::String& value) { SetPendingSoftwareSetId(value); return *this;}

    /**
     * <p>The ID of the software set that is pending to be installed.</p>
     */
    inline Environment& WithPendingSoftwareSetId(Aws::String&& value) { SetPendingSoftwareSetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the software set that is pending to be installed.</p>
     */
    inline Environment& WithPendingSoftwareSetId(const char* value) { SetPendingSoftwareSetId(value); return *this;}


    /**
     * <p>The version of the software set that is pending to be installed.</p>
     */
    inline const Aws::String& GetPendingSoftwareSetVersion() const{ return m_pendingSoftwareSetVersion; }

    /**
     * <p>The version of the software set that is pending to be installed.</p>
     */
    inline bool PendingSoftwareSetVersionHasBeenSet() const { return m_pendingSoftwareSetVersionHasBeenSet; }

    /**
     * <p>The version of the software set that is pending to be installed.</p>
     */
    inline void SetPendingSoftwareSetVersion(const Aws::String& value) { m_pendingSoftwareSetVersionHasBeenSet = true; m_pendingSoftwareSetVersion = value; }

    /**
     * <p>The version of the software set that is pending to be installed.</p>
     */
    inline void SetPendingSoftwareSetVersion(Aws::String&& value) { m_pendingSoftwareSetVersionHasBeenSet = true; m_pendingSoftwareSetVersion = std::move(value); }

    /**
     * <p>The version of the software set that is pending to be installed.</p>
     */
    inline void SetPendingSoftwareSetVersion(const char* value) { m_pendingSoftwareSetVersionHasBeenSet = true; m_pendingSoftwareSetVersion.assign(value); }

    /**
     * <p>The version of the software set that is pending to be installed.</p>
     */
    inline Environment& WithPendingSoftwareSetVersion(const Aws::String& value) { SetPendingSoftwareSetVersion(value); return *this;}

    /**
     * <p>The version of the software set that is pending to be installed.</p>
     */
    inline Environment& WithPendingSoftwareSetVersion(Aws::String&& value) { SetPendingSoftwareSetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the software set that is pending to be installed.</p>
     */
    inline Environment& WithPendingSoftwareSetVersion(const char* value) { SetPendingSoftwareSetVersion(value); return *this;}


    /**
     * <p>Describes if the software currently installed on all devices in the
     * environment is a supported version.</p>
     */
    inline const EnvironmentSoftwareSetComplianceStatus& GetSoftwareSetComplianceStatus() const{ return m_softwareSetComplianceStatus; }

    /**
     * <p>Describes if the software currently installed on all devices in the
     * environment is a supported version.</p>
     */
    inline bool SoftwareSetComplianceStatusHasBeenSet() const { return m_softwareSetComplianceStatusHasBeenSet; }

    /**
     * <p>Describes if the software currently installed on all devices in the
     * environment is a supported version.</p>
     */
    inline void SetSoftwareSetComplianceStatus(const EnvironmentSoftwareSetComplianceStatus& value) { m_softwareSetComplianceStatusHasBeenSet = true; m_softwareSetComplianceStatus = value; }

    /**
     * <p>Describes if the software currently installed on all devices in the
     * environment is a supported version.</p>
     */
    inline void SetSoftwareSetComplianceStatus(EnvironmentSoftwareSetComplianceStatus&& value) { m_softwareSetComplianceStatusHasBeenSet = true; m_softwareSetComplianceStatus = std::move(value); }

    /**
     * <p>Describes if the software currently installed on all devices in the
     * environment is a supported version.</p>
     */
    inline Environment& WithSoftwareSetComplianceStatus(const EnvironmentSoftwareSetComplianceStatus& value) { SetSoftwareSetComplianceStatus(value); return *this;}

    /**
     * <p>Describes if the software currently installed on all devices in the
     * environment is a supported version.</p>
     */
    inline Environment& WithSoftwareSetComplianceStatus(EnvironmentSoftwareSetComplianceStatus&& value) { SetSoftwareSetComplianceStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the environment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the environment was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp of when the environment was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp of when the environment was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the environment was created.</p>
     */
    inline Environment& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the environment was created.</p>
     */
    inline Environment& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the device was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when the device was updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp of when the device was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp of when the device was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the device was updated.</p>
     */
    inline Environment& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the device was updated.</p>
     */
    inline Environment& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline Environment& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline Environment& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline Environment& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service key used to
     * encrypt the environment.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service key used to
     * encrypt the environment.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service key used to
     * encrypt the environment.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service key used to
     * encrypt the environment.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service key used to
     * encrypt the environment.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service key used to
     * encrypt the environment.</p>
     */
    inline Environment& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service key used to
     * encrypt the environment.</p>
     */
    inline Environment& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service key used to
     * encrypt the environment.</p>
     */
    inline Environment& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}


    /**
     * <p>The tag keys and optional values for the resource.</p>
     */
    inline const EmbeddedTag& GetTags() const{ return m_tags; }

    /**
     * <p>The tag keys and optional values for the resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag keys and optional values for the resource.</p>
     */
    inline void SetTags(const EmbeddedTag& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag keys and optional values for the resource.</p>
     */
    inline void SetTags(EmbeddedTag&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag keys and optional values for the resource.</p>
     */
    inline Environment& WithTags(const EmbeddedTag& value) { SetTags(value); return *this;}

    /**
     * <p>The tag keys and optional values for the resource.</p>
     */
    inline Environment& WithTags(EmbeddedTag&& value) { SetTags(std::move(value)); return *this;}

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

    int m_registeredDevicesCount;
    bool m_registeredDevicesCountHasBeenSet = false;

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

    Aws::String m_pendingSoftwareSetVersion;
    bool m_pendingSoftwareSetVersionHasBeenSet = false;

    EnvironmentSoftwareSetComplianceStatus m_softwareSetComplianceStatus;
    bool m_softwareSetComplianceStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    EmbeddedTag m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
