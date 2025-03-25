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
#include <aws/core/utils/memory/stl/AWSMap.h>
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
    AWS_WORKSPACESTHINCLIENT_API Environment() = default;
    AWS_WORKSPACESTHINCLIENT_API Environment(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESTHINCLIENT_API Environment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESTHINCLIENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the environment.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Environment& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Environment& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    Environment& WithDesktopArn(DesktopArnT&& value) { SetDesktopArn(std::forward<DesktopArnT>(value)); return *this;}
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
    Environment& WithDesktopEndpoint(DesktopEndpointT&& value) { SetDesktopEndpoint(std::forward<DesktopEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of streaming desktop for the environment.</p>
     */
    inline DesktopType GetDesktopType() const { return m_desktopType; }
    inline bool DesktopTypeHasBeenSet() const { return m_desktopTypeHasBeenSet; }
    inline void SetDesktopType(DesktopType value) { m_desktopTypeHasBeenSet = true; m_desktopType = value; }
    inline Environment& WithDesktopType(DesktopType value) { SetDesktopType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The activation code to register a device to the environment.</p>
     */
    inline const Aws::String& GetActivationCode() const { return m_activationCode; }
    inline bool ActivationCodeHasBeenSet() const { return m_activationCodeHasBeenSet; }
    template<typename ActivationCodeT = Aws::String>
    void SetActivationCode(ActivationCodeT&& value) { m_activationCodeHasBeenSet = true; m_activationCode = std::forward<ActivationCodeT>(value); }
    template<typename ActivationCodeT = Aws::String>
    Environment& WithActivationCode(ActivationCodeT&& value) { SetActivationCode(std::forward<ActivationCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of devices registered to the environment.</p>
     */
    inline int GetRegisteredDevicesCount() const { return m_registeredDevicesCount; }
    inline bool RegisteredDevicesCountHasBeenSet() const { return m_registeredDevicesCountHasBeenSet; }
    inline void SetRegisteredDevicesCount(int value) { m_registeredDevicesCountHasBeenSet = true; m_registeredDevicesCount = value; }
    inline Environment& WithRegisteredDevicesCount(int value) { SetRegisteredDevicesCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An option to define if software updates should be applied within a
     * maintenance window.</p>
     */
    inline SoftwareSetUpdateSchedule GetSoftwareSetUpdateSchedule() const { return m_softwareSetUpdateSchedule; }
    inline bool SoftwareSetUpdateScheduleHasBeenSet() const { return m_softwareSetUpdateScheduleHasBeenSet; }
    inline void SetSoftwareSetUpdateSchedule(SoftwareSetUpdateSchedule value) { m_softwareSetUpdateScheduleHasBeenSet = true; m_softwareSetUpdateSchedule = value; }
    inline Environment& WithSoftwareSetUpdateSchedule(SoftwareSetUpdateSchedule value) { SetSoftwareSetUpdateSchedule(value); return *this;}
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
    Environment& WithMaintenanceWindow(MaintenanceWindowT&& value) { SetMaintenanceWindow(std::forward<MaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An option to define which software updates to apply.</p>
     */
    inline SoftwareSetUpdateMode GetSoftwareSetUpdateMode() const { return m_softwareSetUpdateMode; }
    inline bool SoftwareSetUpdateModeHasBeenSet() const { return m_softwareSetUpdateModeHasBeenSet; }
    inline void SetSoftwareSetUpdateMode(SoftwareSetUpdateMode value) { m_softwareSetUpdateModeHasBeenSet = true; m_softwareSetUpdateMode = value; }
    inline Environment& WithSoftwareSetUpdateMode(SoftwareSetUpdateMode value) { SetSoftwareSetUpdateMode(value); return *this;}
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
    Environment& WithDesiredSoftwareSetId(DesiredSoftwareSetIdT&& value) { SetDesiredSoftwareSetId(std::forward<DesiredSoftwareSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the software set that is pending to be installed.</p>
     */
    inline const Aws::String& GetPendingSoftwareSetId() const { return m_pendingSoftwareSetId; }
    inline bool PendingSoftwareSetIdHasBeenSet() const { return m_pendingSoftwareSetIdHasBeenSet; }
    template<typename PendingSoftwareSetIdT = Aws::String>
    void SetPendingSoftwareSetId(PendingSoftwareSetIdT&& value) { m_pendingSoftwareSetIdHasBeenSet = true; m_pendingSoftwareSetId = std::forward<PendingSoftwareSetIdT>(value); }
    template<typename PendingSoftwareSetIdT = Aws::String>
    Environment& WithPendingSoftwareSetId(PendingSoftwareSetIdT&& value) { SetPendingSoftwareSetId(std::forward<PendingSoftwareSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the software set that is pending to be installed.</p>
     */
    inline const Aws::String& GetPendingSoftwareSetVersion() const { return m_pendingSoftwareSetVersion; }
    inline bool PendingSoftwareSetVersionHasBeenSet() const { return m_pendingSoftwareSetVersionHasBeenSet; }
    template<typename PendingSoftwareSetVersionT = Aws::String>
    void SetPendingSoftwareSetVersion(PendingSoftwareSetVersionT&& value) { m_pendingSoftwareSetVersionHasBeenSet = true; m_pendingSoftwareSetVersion = std::forward<PendingSoftwareSetVersionT>(value); }
    template<typename PendingSoftwareSetVersionT = Aws::String>
    Environment& WithPendingSoftwareSetVersion(PendingSoftwareSetVersionT&& value) { SetPendingSoftwareSetVersion(std::forward<PendingSoftwareSetVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes if the software currently installed on all devices in the
     * environment is a supported version.</p>
     */
    inline EnvironmentSoftwareSetComplianceStatus GetSoftwareSetComplianceStatus() const { return m_softwareSetComplianceStatus; }
    inline bool SoftwareSetComplianceStatusHasBeenSet() const { return m_softwareSetComplianceStatusHasBeenSet; }
    inline void SetSoftwareSetComplianceStatus(EnvironmentSoftwareSetComplianceStatus value) { m_softwareSetComplianceStatusHasBeenSet = true; m_softwareSetComplianceStatus = value; }
    inline Environment& WithSoftwareSetComplianceStatus(EnvironmentSoftwareSetComplianceStatus value) { SetSoftwareSetComplianceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the environment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Environment& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the device was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    Environment& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Environment& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service key used to
     * encrypt the environment.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    Environment& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values for the newly created devices for this
     * environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDeviceCreationTags() const { return m_deviceCreationTags; }
    inline bool DeviceCreationTagsHasBeenSet() const { return m_deviceCreationTagsHasBeenSet; }
    template<typename DeviceCreationTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetDeviceCreationTags(DeviceCreationTagsT&& value) { m_deviceCreationTagsHasBeenSet = true; m_deviceCreationTags = std::forward<DeviceCreationTagsT>(value); }
    template<typename DeviceCreationTagsT = Aws::Map<Aws::String, Aws::String>>
    Environment& WithDeviceCreationTags(DeviceCreationTagsT&& value) { SetDeviceCreationTags(std::forward<DeviceCreationTagsT>(value)); return *this;}
    template<typename DeviceCreationTagsKeyT = Aws::String, typename DeviceCreationTagsValueT = Aws::String>
    Environment& AddDeviceCreationTags(DeviceCreationTagsKeyT&& key, DeviceCreationTagsValueT&& value) {
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

    DesktopType m_desktopType{DesktopType::NOT_SET};
    bool m_desktopTypeHasBeenSet = false;

    Aws::String m_activationCode;
    bool m_activationCodeHasBeenSet = false;

    int m_registeredDevicesCount{0};
    bool m_registeredDevicesCountHasBeenSet = false;

    SoftwareSetUpdateSchedule m_softwareSetUpdateSchedule{SoftwareSetUpdateSchedule::NOT_SET};
    bool m_softwareSetUpdateScheduleHasBeenSet = false;

    MaintenanceWindow m_maintenanceWindow;
    bool m_maintenanceWindowHasBeenSet = false;

    SoftwareSetUpdateMode m_softwareSetUpdateMode{SoftwareSetUpdateMode::NOT_SET};
    bool m_softwareSetUpdateModeHasBeenSet = false;

    Aws::String m_desiredSoftwareSetId;
    bool m_desiredSoftwareSetIdHasBeenSet = false;

    Aws::String m_pendingSoftwareSetId;
    bool m_pendingSoftwareSetIdHasBeenSet = false;

    Aws::String m_pendingSoftwareSetVersion;
    bool m_pendingSoftwareSetVersionHasBeenSet = false;

    EnvironmentSoftwareSetComplianceStatus m_softwareSetComplianceStatus{EnvironmentSoftwareSetComplianceStatus::NOT_SET};
    bool m_softwareSetComplianceStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_deviceCreationTags;
    bool m_deviceCreationTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
