/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-thin-client/WorkSpacesThinClient_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-thin-client/model/DeviceStatus.h>
#include <aws/workspaces-thin-client/model/SoftwareSetUpdateSchedule.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-thin-client-2023-08-22/DeviceSummary">AWS
   * API Reference</a></p>
   */
  class DeviceSummary
  {
  public:
    AWS_WORKSPACESTHINCLIENT_API DeviceSummary();
    AWS_WORKSPACESTHINCLIENT_API DeviceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESTHINCLIENT_API DeviceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESTHINCLIENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the device.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline DeviceSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DeviceSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DeviceSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hardware serial number of the device.</p>
     */
    inline const Aws::String& GetSerialNumber() const{ return m_serialNumber; }
    inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }
    inline void SetSerialNumber(const Aws::String& value) { m_serialNumberHasBeenSet = true; m_serialNumber = value; }
    inline void SetSerialNumber(Aws::String&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::move(value); }
    inline void SetSerialNumber(const char* value) { m_serialNumberHasBeenSet = true; m_serialNumber.assign(value); }
    inline DeviceSummary& WithSerialNumber(const Aws::String& value) { SetSerialNumber(value); return *this;}
    inline DeviceSummary& WithSerialNumber(Aws::String&& value) { SetSerialNumber(std::move(value)); return *this;}
    inline DeviceSummary& WithSerialNumber(const char* value) { SetSerialNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the device.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DeviceSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DeviceSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DeviceSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model number of the device.</p>
     */
    inline const Aws::String& GetModel() const{ return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    inline void SetModel(const Aws::String& value) { m_modelHasBeenSet = true; m_model = value; }
    inline void SetModel(Aws::String&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }
    inline void SetModel(const char* value) { m_modelHasBeenSet = true; m_model.assign(value); }
    inline DeviceSummary& WithModel(const Aws::String& value) { SetModel(value); return *this;}
    inline DeviceSummary& WithModel(Aws::String&& value) { SetModel(std::move(value)); return *this;}
    inline DeviceSummary& WithModel(const char* value) { SetModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment the device is associated with.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline DeviceSummary& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline DeviceSummary& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline DeviceSummary& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the device.</p>
     */
    inline const DeviceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const DeviceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(DeviceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DeviceSummary& WithStatus(const DeviceStatus& value) { SetStatus(value); return *this;}
    inline DeviceSummary& WithStatus(DeviceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the software set currently installed on the device.</p>
     */
    inline const Aws::String& GetCurrentSoftwareSetId() const{ return m_currentSoftwareSetId; }
    inline bool CurrentSoftwareSetIdHasBeenSet() const { return m_currentSoftwareSetIdHasBeenSet; }
    inline void SetCurrentSoftwareSetId(const Aws::String& value) { m_currentSoftwareSetIdHasBeenSet = true; m_currentSoftwareSetId = value; }
    inline void SetCurrentSoftwareSetId(Aws::String&& value) { m_currentSoftwareSetIdHasBeenSet = true; m_currentSoftwareSetId = std::move(value); }
    inline void SetCurrentSoftwareSetId(const char* value) { m_currentSoftwareSetIdHasBeenSet = true; m_currentSoftwareSetId.assign(value); }
    inline DeviceSummary& WithCurrentSoftwareSetId(const Aws::String& value) { SetCurrentSoftwareSetId(value); return *this;}
    inline DeviceSummary& WithCurrentSoftwareSetId(Aws::String&& value) { SetCurrentSoftwareSetId(std::move(value)); return *this;}
    inline DeviceSummary& WithCurrentSoftwareSetId(const char* value) { SetCurrentSoftwareSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the software set which the device has been set to.</p>
     */
    inline const Aws::String& GetDesiredSoftwareSetId() const{ return m_desiredSoftwareSetId; }
    inline bool DesiredSoftwareSetIdHasBeenSet() const { return m_desiredSoftwareSetIdHasBeenSet; }
    inline void SetDesiredSoftwareSetId(const Aws::String& value) { m_desiredSoftwareSetIdHasBeenSet = true; m_desiredSoftwareSetId = value; }
    inline void SetDesiredSoftwareSetId(Aws::String&& value) { m_desiredSoftwareSetIdHasBeenSet = true; m_desiredSoftwareSetId = std::move(value); }
    inline void SetDesiredSoftwareSetId(const char* value) { m_desiredSoftwareSetIdHasBeenSet = true; m_desiredSoftwareSetId.assign(value); }
    inline DeviceSummary& WithDesiredSoftwareSetId(const Aws::String& value) { SetDesiredSoftwareSetId(value); return *this;}
    inline DeviceSummary& WithDesiredSoftwareSetId(Aws::String&& value) { SetDesiredSoftwareSetId(std::move(value)); return *this;}
    inline DeviceSummary& WithDesiredSoftwareSetId(const char* value) { SetDesiredSoftwareSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the software set that is pending to be installed on the device.</p>
     */
    inline const Aws::String& GetPendingSoftwareSetId() const{ return m_pendingSoftwareSetId; }
    inline bool PendingSoftwareSetIdHasBeenSet() const { return m_pendingSoftwareSetIdHasBeenSet; }
    inline void SetPendingSoftwareSetId(const Aws::String& value) { m_pendingSoftwareSetIdHasBeenSet = true; m_pendingSoftwareSetId = value; }
    inline void SetPendingSoftwareSetId(Aws::String&& value) { m_pendingSoftwareSetIdHasBeenSet = true; m_pendingSoftwareSetId = std::move(value); }
    inline void SetPendingSoftwareSetId(const char* value) { m_pendingSoftwareSetIdHasBeenSet = true; m_pendingSoftwareSetId.assign(value); }
    inline DeviceSummary& WithPendingSoftwareSetId(const Aws::String& value) { SetPendingSoftwareSetId(value); return *this;}
    inline DeviceSummary& WithPendingSoftwareSetId(Aws::String&& value) { SetPendingSoftwareSetId(std::move(value)); return *this;}
    inline DeviceSummary& WithPendingSoftwareSetId(const char* value) { SetPendingSoftwareSetId(value); return *this;}
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
    inline DeviceSummary& WithSoftwareSetUpdateSchedule(const SoftwareSetUpdateSchedule& value) { SetSoftwareSetUpdateSchedule(value); return *this;}
    inline DeviceSummary& WithSoftwareSetUpdateSchedule(SoftwareSetUpdateSchedule&& value) { SetSoftwareSetUpdateSchedule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the most recent session on the device.</p>
     */
    inline const Aws::Utils::DateTime& GetLastConnectedAt() const{ return m_lastConnectedAt; }
    inline bool LastConnectedAtHasBeenSet() const { return m_lastConnectedAtHasBeenSet; }
    inline void SetLastConnectedAt(const Aws::Utils::DateTime& value) { m_lastConnectedAtHasBeenSet = true; m_lastConnectedAt = value; }
    inline void SetLastConnectedAt(Aws::Utils::DateTime&& value) { m_lastConnectedAtHasBeenSet = true; m_lastConnectedAt = std::move(value); }
    inline DeviceSummary& WithLastConnectedAt(const Aws::Utils::DateTime& value) { SetLastConnectedAt(value); return *this;}
    inline DeviceSummary& WithLastConnectedAt(Aws::Utils::DateTime&& value) { SetLastConnectedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the most recent check-in of the device.</p>
     */
    inline const Aws::Utils::DateTime& GetLastPostureAt() const{ return m_lastPostureAt; }
    inline bool LastPostureAtHasBeenSet() const { return m_lastPostureAtHasBeenSet; }
    inline void SetLastPostureAt(const Aws::Utils::DateTime& value) { m_lastPostureAtHasBeenSet = true; m_lastPostureAt = value; }
    inline void SetLastPostureAt(Aws::Utils::DateTime&& value) { m_lastPostureAtHasBeenSet = true; m_lastPostureAt = std::move(value); }
    inline DeviceSummary& WithLastPostureAt(const Aws::Utils::DateTime& value) { SetLastPostureAt(value); return *this;}
    inline DeviceSummary& WithLastPostureAt(Aws::Utils::DateTime&& value) { SetLastPostureAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the device was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline DeviceSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline DeviceSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the device was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline DeviceSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline DeviceSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the device.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline DeviceSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DeviceSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DeviceSummary& WithArn(const char* value) { SetArn(value); return *this;}
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

    DeviceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_currentSoftwareSetId;
    bool m_currentSoftwareSetIdHasBeenSet = false;

    Aws::String m_desiredSoftwareSetId;
    bool m_desiredSoftwareSetIdHasBeenSet = false;

    Aws::String m_pendingSoftwareSetId;
    bool m_pendingSoftwareSetIdHasBeenSet = false;

    SoftwareSetUpdateSchedule m_softwareSetUpdateSchedule;
    bool m_softwareSetUpdateScheduleHasBeenSet = false;

    Aws::Utils::DateTime m_lastConnectedAt;
    bool m_lastConnectedAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastPostureAt;
    bool m_lastPostureAtHasBeenSet = false;

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
