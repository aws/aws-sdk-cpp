/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-thin-client/WorkSpacesThinClient_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-thin-client/model/DeviceStatus.h>
#include <aws/workspaces-thin-client/model/SoftwareSetUpdateSchedule.h>
#include <aws/workspaces-thin-client/model/DeviceSoftwareSetComplianceStatus.h>
#include <aws/workspaces-thin-client/model/SoftwareSetUpdateStatus.h>
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
   * <p>Describes a thin client device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-thin-client-2023-08-22/Device">AWS
   * API Reference</a></p>
   */
  class Device
  {
  public:
    AWS_WORKSPACESTHINCLIENT_API Device() = default;
    AWS_WORKSPACESTHINCLIENT_API Device(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESTHINCLIENT_API Device& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESTHINCLIENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the device.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Device& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hardware serial number of the device.</p>
     */
    inline const Aws::String& GetSerialNumber() const { return m_serialNumber; }
    inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }
    template<typename SerialNumberT = Aws::String>
    void SetSerialNumber(SerialNumberT&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::forward<SerialNumberT>(value); }
    template<typename SerialNumberT = Aws::String>
    Device& WithSerialNumber(SerialNumberT&& value) { SetSerialNumber(std::forward<SerialNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the device.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Device& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model number of the device.</p>
     */
    inline const Aws::String& GetModel() const { return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    template<typename ModelT = Aws::String>
    void SetModel(ModelT&& value) { m_modelHasBeenSet = true; m_model = std::forward<ModelT>(value); }
    template<typename ModelT = Aws::String>
    Device& WithModel(ModelT&& value) { SetModel(std::forward<ModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment the device is associated with.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    Device& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the device.</p>
     */
    inline DeviceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DeviceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Device& WithStatus(DeviceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the software set currently installed on the device.</p>
     */
    inline const Aws::String& GetCurrentSoftwareSetId() const { return m_currentSoftwareSetId; }
    inline bool CurrentSoftwareSetIdHasBeenSet() const { return m_currentSoftwareSetIdHasBeenSet; }
    template<typename CurrentSoftwareSetIdT = Aws::String>
    void SetCurrentSoftwareSetId(CurrentSoftwareSetIdT&& value) { m_currentSoftwareSetIdHasBeenSet = true; m_currentSoftwareSetId = std::forward<CurrentSoftwareSetIdT>(value); }
    template<typename CurrentSoftwareSetIdT = Aws::String>
    Device& WithCurrentSoftwareSetId(CurrentSoftwareSetIdT&& value) { SetCurrentSoftwareSetId(std::forward<CurrentSoftwareSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the software set currently installed on the device.</p>
     */
    inline const Aws::String& GetCurrentSoftwareSetVersion() const { return m_currentSoftwareSetVersion; }
    inline bool CurrentSoftwareSetVersionHasBeenSet() const { return m_currentSoftwareSetVersionHasBeenSet; }
    template<typename CurrentSoftwareSetVersionT = Aws::String>
    void SetCurrentSoftwareSetVersion(CurrentSoftwareSetVersionT&& value) { m_currentSoftwareSetVersionHasBeenSet = true; m_currentSoftwareSetVersion = std::forward<CurrentSoftwareSetVersionT>(value); }
    template<typename CurrentSoftwareSetVersionT = Aws::String>
    Device& WithCurrentSoftwareSetVersion(CurrentSoftwareSetVersionT&& value) { SetCurrentSoftwareSetVersion(std::forward<CurrentSoftwareSetVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the software set which the device has been set to.</p>
     */
    inline const Aws::String& GetDesiredSoftwareSetId() const { return m_desiredSoftwareSetId; }
    inline bool DesiredSoftwareSetIdHasBeenSet() const { return m_desiredSoftwareSetIdHasBeenSet; }
    template<typename DesiredSoftwareSetIdT = Aws::String>
    void SetDesiredSoftwareSetId(DesiredSoftwareSetIdT&& value) { m_desiredSoftwareSetIdHasBeenSet = true; m_desiredSoftwareSetId = std::forward<DesiredSoftwareSetIdT>(value); }
    template<typename DesiredSoftwareSetIdT = Aws::String>
    Device& WithDesiredSoftwareSetId(DesiredSoftwareSetIdT&& value) { SetDesiredSoftwareSetId(std::forward<DesiredSoftwareSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the software set that is pending to be installed on the device.</p>
     */
    inline const Aws::String& GetPendingSoftwareSetId() const { return m_pendingSoftwareSetId; }
    inline bool PendingSoftwareSetIdHasBeenSet() const { return m_pendingSoftwareSetIdHasBeenSet; }
    template<typename PendingSoftwareSetIdT = Aws::String>
    void SetPendingSoftwareSetId(PendingSoftwareSetIdT&& value) { m_pendingSoftwareSetIdHasBeenSet = true; m_pendingSoftwareSetId = std::forward<PendingSoftwareSetIdT>(value); }
    template<typename PendingSoftwareSetIdT = Aws::String>
    Device& WithPendingSoftwareSetId(PendingSoftwareSetIdT&& value) { SetPendingSoftwareSetId(std::forward<PendingSoftwareSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the software set that is pending to be installed on the
     * device.</p>
     */
    inline const Aws::String& GetPendingSoftwareSetVersion() const { return m_pendingSoftwareSetVersion; }
    inline bool PendingSoftwareSetVersionHasBeenSet() const { return m_pendingSoftwareSetVersionHasBeenSet; }
    template<typename PendingSoftwareSetVersionT = Aws::String>
    void SetPendingSoftwareSetVersion(PendingSoftwareSetVersionT&& value) { m_pendingSoftwareSetVersionHasBeenSet = true; m_pendingSoftwareSetVersion = std::forward<PendingSoftwareSetVersionT>(value); }
    template<typename PendingSoftwareSetVersionT = Aws::String>
    Device& WithPendingSoftwareSetVersion(PendingSoftwareSetVersionT&& value) { SetPendingSoftwareSetVersion(std::forward<PendingSoftwareSetVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An option to define if software updates should be applied within a
     * maintenance window.</p>
     */
    inline SoftwareSetUpdateSchedule GetSoftwareSetUpdateSchedule() const { return m_softwareSetUpdateSchedule; }
    inline bool SoftwareSetUpdateScheduleHasBeenSet() const { return m_softwareSetUpdateScheduleHasBeenSet; }
    inline void SetSoftwareSetUpdateSchedule(SoftwareSetUpdateSchedule value) { m_softwareSetUpdateScheduleHasBeenSet = true; m_softwareSetUpdateSchedule = value; }
    inline Device& WithSoftwareSetUpdateSchedule(SoftwareSetUpdateSchedule value) { SetSoftwareSetUpdateSchedule(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes if the software currently installed on the device is a supported
     * version.</p>
     */
    inline DeviceSoftwareSetComplianceStatus GetSoftwareSetComplianceStatus() const { return m_softwareSetComplianceStatus; }
    inline bool SoftwareSetComplianceStatusHasBeenSet() const { return m_softwareSetComplianceStatusHasBeenSet; }
    inline void SetSoftwareSetComplianceStatus(DeviceSoftwareSetComplianceStatus value) { m_softwareSetComplianceStatusHasBeenSet = true; m_softwareSetComplianceStatus = value; }
    inline Device& WithSoftwareSetComplianceStatus(DeviceSoftwareSetComplianceStatus value) { SetSoftwareSetComplianceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes if the device has a supported version of software installed.</p>
     */
    inline SoftwareSetUpdateStatus GetSoftwareSetUpdateStatus() const { return m_softwareSetUpdateStatus; }
    inline bool SoftwareSetUpdateStatusHasBeenSet() const { return m_softwareSetUpdateStatusHasBeenSet; }
    inline void SetSoftwareSetUpdateStatus(SoftwareSetUpdateStatus value) { m_softwareSetUpdateStatusHasBeenSet = true; m_softwareSetUpdateStatus = value; }
    inline Device& WithSoftwareSetUpdateStatus(SoftwareSetUpdateStatus value) { SetSoftwareSetUpdateStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the most recent session on the device.</p>
     */
    inline const Aws::Utils::DateTime& GetLastConnectedAt() const { return m_lastConnectedAt; }
    inline bool LastConnectedAtHasBeenSet() const { return m_lastConnectedAtHasBeenSet; }
    template<typename LastConnectedAtT = Aws::Utils::DateTime>
    void SetLastConnectedAt(LastConnectedAtT&& value) { m_lastConnectedAtHasBeenSet = true; m_lastConnectedAt = std::forward<LastConnectedAtT>(value); }
    template<typename LastConnectedAtT = Aws::Utils::DateTime>
    Device& WithLastConnectedAt(LastConnectedAtT&& value) { SetLastConnectedAt(std::forward<LastConnectedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the most recent check-in of the device.</p>
     */
    inline const Aws::Utils::DateTime& GetLastPostureAt() const { return m_lastPostureAt; }
    inline bool LastPostureAtHasBeenSet() const { return m_lastPostureAtHasBeenSet; }
    template<typename LastPostureAtT = Aws::Utils::DateTime>
    void SetLastPostureAt(LastPostureAtT&& value) { m_lastPostureAtHasBeenSet = true; m_lastPostureAt = std::forward<LastPostureAtT>(value); }
    template<typename LastPostureAtT = Aws::Utils::DateTime>
    Device& WithLastPostureAt(LastPostureAtT&& value) { SetLastPostureAt(std::forward<LastPostureAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the device was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Device& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
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
    Device& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the device.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Device& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service key used to
     * encrypt the device.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    Device& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ID of the most recent session on the device.</p>
     */
    inline const Aws::String& GetLastUserId() const { return m_lastUserId; }
    inline bool LastUserIdHasBeenSet() const { return m_lastUserIdHasBeenSet; }
    template<typename LastUserIdT = Aws::String>
    void SetLastUserId(LastUserIdT&& value) { m_lastUserIdHasBeenSet = true; m_lastUserId = std::forward<LastUserIdT>(value); }
    template<typename LastUserIdT = Aws::String>
    Device& WithLastUserId(LastUserIdT&& value) { SetLastUserId(std::forward<LastUserIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_serialNumber;
    bool m_serialNumberHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_model;
    bool m_modelHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    DeviceStatus m_status{DeviceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_currentSoftwareSetId;
    bool m_currentSoftwareSetIdHasBeenSet = false;

    Aws::String m_currentSoftwareSetVersion;
    bool m_currentSoftwareSetVersionHasBeenSet = false;

    Aws::String m_desiredSoftwareSetId;
    bool m_desiredSoftwareSetIdHasBeenSet = false;

    Aws::String m_pendingSoftwareSetId;
    bool m_pendingSoftwareSetIdHasBeenSet = false;

    Aws::String m_pendingSoftwareSetVersion;
    bool m_pendingSoftwareSetVersionHasBeenSet = false;

    SoftwareSetUpdateSchedule m_softwareSetUpdateSchedule{SoftwareSetUpdateSchedule::NOT_SET};
    bool m_softwareSetUpdateScheduleHasBeenSet = false;

    DeviceSoftwareSetComplianceStatus m_softwareSetComplianceStatus{DeviceSoftwareSetComplianceStatus::NOT_SET};
    bool m_softwareSetComplianceStatusHasBeenSet = false;

    SoftwareSetUpdateStatus m_softwareSetUpdateStatus{SoftwareSetUpdateStatus::NOT_SET};
    bool m_softwareSetUpdateStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastConnectedAt{};
    bool m_lastConnectedAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastPostureAt{};
    bool m_lastPostureAtHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_lastUserId;
    bool m_lastUserIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
