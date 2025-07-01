/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/model/DbNodeResourceStatus.h>
#include <aws/odb/model/DbNodeMaintenanceType.h>
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
namespace odb
{
namespace Model
{

  /**
   * <p>Information about a DB node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/DbNodeSummary">AWS
   * API Reference</a></p>
   */
  class DbNodeSummary
  {
  public:
    AWS_ODB_API DbNodeSummary() = default;
    AWS_ODB_API DbNodeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API DbNodeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the DB node.</p>
     */
    inline const Aws::String& GetDbNodeId() const { return m_dbNodeId; }
    inline bool DbNodeIdHasBeenSet() const { return m_dbNodeIdHasBeenSet; }
    template<typename DbNodeIdT = Aws::String>
    void SetDbNodeId(DbNodeIdT&& value) { m_dbNodeIdHasBeenSet = true; m_dbNodeId = std::forward<DbNodeIdT>(value); }
    template<typename DbNodeIdT = Aws::String>
    DbNodeSummary& WithDbNodeId(DbNodeIdT&& value) { SetDbNodeId(std::forward<DbNodeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the DB node.</p>
     */
    inline const Aws::String& GetDbNodeArn() const { return m_dbNodeArn; }
    inline bool DbNodeArnHasBeenSet() const { return m_dbNodeArnHasBeenSet; }
    template<typename DbNodeArnT = Aws::String>
    void SetDbNodeArn(DbNodeArnT&& value) { m_dbNodeArnHasBeenSet = true; m_dbNodeArn = std::forward<DbNodeArnT>(value); }
    template<typename DbNodeArnT = Aws::String>
    DbNodeSummary& WithDbNodeArn(DbNodeArnT&& value) { SetDbNodeArn(std::forward<DbNodeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the DB node.</p>
     */
    inline DbNodeResourceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DbNodeResourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DbNodeSummary& WithStatus(DbNodeResourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the status of the DB node.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    DbNodeSummary& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the planned maintenance.</p>
     */
    inline const Aws::String& GetAdditionalDetails() const { return m_additionalDetails; }
    inline bool AdditionalDetailsHasBeenSet() const { return m_additionalDetailsHasBeenSet; }
    template<typename AdditionalDetailsT = Aws::String>
    void SetAdditionalDetails(AdditionalDetailsT&& value) { m_additionalDetailsHasBeenSet = true; m_additionalDetails = std::forward<AdditionalDetailsT>(value); }
    template<typename AdditionalDetailsT = Aws::String>
    DbNodeSummary& WithAdditionalDetails(AdditionalDetailsT&& value) { SetAdditionalDetails(std::forward<AdditionalDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Oracle Cloud ID (OCID) of the backup IP address that's associated with
     * the DB node.</p>
     */
    inline const Aws::String& GetBackupIpId() const { return m_backupIpId; }
    inline bool BackupIpIdHasBeenSet() const { return m_backupIpIdHasBeenSet; }
    template<typename BackupIpIdT = Aws::String>
    void SetBackupIpId(BackupIpIdT&& value) { m_backupIpIdHasBeenSet = true; m_backupIpId = std::forward<BackupIpIdT>(value); }
    template<typename BackupIpIdT = Aws::String>
    DbNodeSummary& WithBackupIpId(BackupIpIdT&& value) { SetBackupIpId(std::forward<BackupIpIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OCID of the second backup virtual network interface card (VNIC) for the
     * DB node.</p>
     */
    inline const Aws::String& GetBackupVnic2Id() const { return m_backupVnic2Id; }
    inline bool BackupVnic2IdHasBeenSet() const { return m_backupVnic2IdHasBeenSet; }
    template<typename BackupVnic2IdT = Aws::String>
    void SetBackupVnic2Id(BackupVnic2IdT&& value) { m_backupVnic2IdHasBeenSet = true; m_backupVnic2Id = std::forward<BackupVnic2IdT>(value); }
    template<typename BackupVnic2IdT = Aws::String>
    DbNodeSummary& WithBackupVnic2Id(BackupVnic2IdT&& value) { SetBackupVnic2Id(std::forward<BackupVnic2IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OCID of the backup VNIC for the DB node.</p>
     */
    inline const Aws::String& GetBackupVnicId() const { return m_backupVnicId; }
    inline bool BackupVnicIdHasBeenSet() const { return m_backupVnicIdHasBeenSet; }
    template<typename BackupVnicIdT = Aws::String>
    void SetBackupVnicId(BackupVnicIdT&& value) { m_backupVnicIdHasBeenSet = true; m_backupVnicId = std::forward<BackupVnicIdT>(value); }
    template<typename BackupVnicIdT = Aws::String>
    DbNodeSummary& WithBackupVnicId(BackupVnicIdT&& value) { SetBackupVnicId(std::forward<BackupVnicIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of CPU cores enabled on the DB node.</p>
     */
    inline int GetCpuCoreCount() const { return m_cpuCoreCount; }
    inline bool CpuCoreCountHasBeenSet() const { return m_cpuCoreCountHasBeenSet; }
    inline void SetCpuCoreCount(int value) { m_cpuCoreCountHasBeenSet = true; m_cpuCoreCount = value; }
    inline DbNodeSummary& WithCpuCoreCount(int value) { SetCpuCoreCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of local node storage, in gigabytes (GB), that's allocated on the
     * DB node.</p>
     */
    inline int GetDbNodeStorageSizeInGBs() const { return m_dbNodeStorageSizeInGBs; }
    inline bool DbNodeStorageSizeInGBsHasBeenSet() const { return m_dbNodeStorageSizeInGBsHasBeenSet; }
    inline void SetDbNodeStorageSizeInGBs(int value) { m_dbNodeStorageSizeInGBsHasBeenSet = true; m_dbNodeStorageSizeInGBs = value; }
    inline DbNodeSummary& WithDbNodeStorageSizeInGBs(int value) { SetDbNodeStorageSizeInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the database server that's associated with the DB
     * node.</p>
     */
    inline const Aws::String& GetDbServerId() const { return m_dbServerId; }
    inline bool DbServerIdHasBeenSet() const { return m_dbServerIdHasBeenSet; }
    template<typename DbServerIdT = Aws::String>
    void SetDbServerId(DbServerIdT&& value) { m_dbServerIdHasBeenSet = true; m_dbServerId = std::forward<DbServerIdT>(value); }
    template<typename DbServerIdT = Aws::String>
    DbNodeSummary& WithDbServerId(DbServerIdT&& value) { SetDbServerId(std::forward<DbServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OCID of the DB system.</p>
     */
    inline const Aws::String& GetDbSystemId() const { return m_dbSystemId; }
    inline bool DbSystemIdHasBeenSet() const { return m_dbSystemIdHasBeenSet; }
    template<typename DbSystemIdT = Aws::String>
    void SetDbSystemId(DbSystemIdT&& value) { m_dbSystemIdHasBeenSet = true; m_dbSystemId = std::forward<DbSystemIdT>(value); }
    template<typename DbSystemIdT = Aws::String>
    DbNodeSummary& WithDbSystemId(DbSystemIdT&& value) { SetDbSystemId(std::forward<DbSystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the fault domain where the DB node is located.</p>
     */
    inline const Aws::String& GetFaultDomain() const { return m_faultDomain; }
    inline bool FaultDomainHasBeenSet() const { return m_faultDomainHasBeenSet; }
    template<typename FaultDomainT = Aws::String>
    void SetFaultDomain(FaultDomainT&& value) { m_faultDomainHasBeenSet = true; m_faultDomain = std::forward<FaultDomainT>(value); }
    template<typename FaultDomainT = Aws::String>
    DbNodeSummary& WithFaultDomain(FaultDomainT&& value) { SetFaultDomain(std::forward<FaultDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OCID of the host IP address that's associated with the DB node.</p>
     */
    inline const Aws::String& GetHostIpId() const { return m_hostIpId; }
    inline bool HostIpIdHasBeenSet() const { return m_hostIpIdHasBeenSet; }
    template<typename HostIpIdT = Aws::String>
    void SetHostIpId(HostIpIdT&& value) { m_hostIpIdHasBeenSet = true; m_hostIpId = std::forward<HostIpIdT>(value); }
    template<typename HostIpIdT = Aws::String>
    DbNodeSummary& WithHostIpId(HostIpIdT&& value) { SetHostIpId(std::forward<HostIpIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The host name for the DB node.</p>
     */
    inline const Aws::String& GetHostname() const { return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    template<typename HostnameT = Aws::String>
    void SetHostname(HostnameT&& value) { m_hostnameHasBeenSet = true; m_hostname = std::forward<HostnameT>(value); }
    template<typename HostnameT = Aws::String>
    DbNodeSummary& WithHostname(HostnameT&& value) { SetHostname(std::forward<HostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OCID of the DB node.</p>
     */
    inline const Aws::String& GetOcid() const { return m_ocid; }
    inline bool OcidHasBeenSet() const { return m_ocidHasBeenSet; }
    template<typename OcidT = Aws::String>
    void SetOcid(OcidT&& value) { m_ocidHasBeenSet = true; m_ocid = std::forward<OcidT>(value); }
    template<typename OcidT = Aws::String>
    DbNodeSummary& WithOcid(OcidT&& value) { SetOcid(std::forward<OcidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the OCI resource anchor for the DB node.</p>
     */
    inline const Aws::String& GetOciResourceAnchorName() const { return m_ociResourceAnchorName; }
    inline bool OciResourceAnchorNameHasBeenSet() const { return m_ociResourceAnchorNameHasBeenSet; }
    template<typename OciResourceAnchorNameT = Aws::String>
    void SetOciResourceAnchorName(OciResourceAnchorNameT&& value) { m_ociResourceAnchorNameHasBeenSet = true; m_ociResourceAnchorName = std::forward<OciResourceAnchorNameT>(value); }
    template<typename OciResourceAnchorNameT = Aws::String>
    DbNodeSummary& WithOciResourceAnchorName(OciResourceAnchorNameT&& value) { SetOciResourceAnchorName(std::forward<OciResourceAnchorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of maintenance the DB node. </p>
     */
    inline DbNodeMaintenanceType GetMaintenanceType() const { return m_maintenanceType; }
    inline bool MaintenanceTypeHasBeenSet() const { return m_maintenanceTypeHasBeenSet; }
    inline void SetMaintenanceType(DbNodeMaintenanceType value) { m_maintenanceTypeHasBeenSet = true; m_maintenanceType = value; }
    inline DbNodeSummary& WithMaintenanceType(DbNodeMaintenanceType value) { SetMaintenanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of memory, in gigabytes (GB), that allocated on the DB node.</p>
     */
    inline int GetMemorySizeInGBs() const { return m_memorySizeInGBs; }
    inline bool MemorySizeInGBsHasBeenSet() const { return m_memorySizeInGBsHasBeenSet; }
    inline void SetMemorySizeInGBs(int value) { m_memorySizeInGBsHasBeenSet = true; m_memorySizeInGBs = value; }
    inline DbNodeSummary& WithMemorySizeInGBs(int value) { SetMemorySizeInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the block storage volume, in gigabytes (GB), that's allocated for
     * the DB system. This attribute applies only for virtual machine DB systems.</p>
     */
    inline int GetSoftwareStorageSizeInGB() const { return m_softwareStorageSizeInGB; }
    inline bool SoftwareStorageSizeInGBHasBeenSet() const { return m_softwareStorageSizeInGBHasBeenSet; }
    inline void SetSoftwareStorageSizeInGB(int value) { m_softwareStorageSizeInGBHasBeenSet = true; m_softwareStorageSizeInGB = value; }
    inline DbNodeSummary& WithSoftwareStorageSizeInGB(int value) { SetSoftwareStorageSizeInGB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the DB node was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DbNodeSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date and time of the maintenance window.</p>
     */
    inline const Aws::String& GetTimeMaintenanceWindowEnd() const { return m_timeMaintenanceWindowEnd; }
    inline bool TimeMaintenanceWindowEndHasBeenSet() const { return m_timeMaintenanceWindowEndHasBeenSet; }
    template<typename TimeMaintenanceWindowEndT = Aws::String>
    void SetTimeMaintenanceWindowEnd(TimeMaintenanceWindowEndT&& value) { m_timeMaintenanceWindowEndHasBeenSet = true; m_timeMaintenanceWindowEnd = std::forward<TimeMaintenanceWindowEndT>(value); }
    template<typename TimeMaintenanceWindowEndT = Aws::String>
    DbNodeSummary& WithTimeMaintenanceWindowEnd(TimeMaintenanceWindowEndT&& value) { SetTimeMaintenanceWindowEnd(std::forward<TimeMaintenanceWindowEndT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date and time of the maintenance window.</p>
     */
    inline const Aws::String& GetTimeMaintenanceWindowStart() const { return m_timeMaintenanceWindowStart; }
    inline bool TimeMaintenanceWindowStartHasBeenSet() const { return m_timeMaintenanceWindowStartHasBeenSet; }
    template<typename TimeMaintenanceWindowStartT = Aws::String>
    void SetTimeMaintenanceWindowStart(TimeMaintenanceWindowStartT&& value) { m_timeMaintenanceWindowStartHasBeenSet = true; m_timeMaintenanceWindowStart = std::forward<TimeMaintenanceWindowStartT>(value); }
    template<typename TimeMaintenanceWindowStartT = Aws::String>
    DbNodeSummary& WithTimeMaintenanceWindowStart(TimeMaintenanceWindowStartT&& value) { SetTimeMaintenanceWindowStart(std::forward<TimeMaintenanceWindowStartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of CPU cores reserved on the DB node.</p>
     */
    inline int GetTotalCpuCoreCount() const { return m_totalCpuCoreCount; }
    inline bool TotalCpuCoreCountHasBeenSet() const { return m_totalCpuCoreCountHasBeenSet; }
    inline void SetTotalCpuCoreCount(int value) { m_totalCpuCoreCountHasBeenSet = true; m_totalCpuCoreCount = value; }
    inline DbNodeSummary& WithTotalCpuCoreCount(int value) { SetTotalCpuCoreCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OCID of the second VNIC.</p>
     */
    inline const Aws::String& GetVnic2Id() const { return m_vnic2Id; }
    inline bool Vnic2IdHasBeenSet() const { return m_vnic2IdHasBeenSet; }
    template<typename Vnic2IdT = Aws::String>
    void SetVnic2Id(Vnic2IdT&& value) { m_vnic2IdHasBeenSet = true; m_vnic2Id = std::forward<Vnic2IdT>(value); }
    template<typename Vnic2IdT = Aws::String>
    DbNodeSummary& WithVnic2Id(Vnic2IdT&& value) { SetVnic2Id(std::forward<Vnic2IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OCID of the VNIC.</p>
     */
    inline const Aws::String& GetVnicId() const { return m_vnicId; }
    inline bool VnicIdHasBeenSet() const { return m_vnicIdHasBeenSet; }
    template<typename VnicIdT = Aws::String>
    void SetVnicId(VnicIdT&& value) { m_vnicIdHasBeenSet = true; m_vnicId = std::forward<VnicIdT>(value); }
    template<typename VnicIdT = Aws::String>
    DbNodeSummary& WithVnicId(VnicIdT&& value) { SetVnicId(std::forward<VnicIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dbNodeId;
    bool m_dbNodeIdHasBeenSet = false;

    Aws::String m_dbNodeArn;
    bool m_dbNodeArnHasBeenSet = false;

    DbNodeResourceStatus m_status{DbNodeResourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_additionalDetails;
    bool m_additionalDetailsHasBeenSet = false;

    Aws::String m_backupIpId;
    bool m_backupIpIdHasBeenSet = false;

    Aws::String m_backupVnic2Id;
    bool m_backupVnic2IdHasBeenSet = false;

    Aws::String m_backupVnicId;
    bool m_backupVnicIdHasBeenSet = false;

    int m_cpuCoreCount{0};
    bool m_cpuCoreCountHasBeenSet = false;

    int m_dbNodeStorageSizeInGBs{0};
    bool m_dbNodeStorageSizeInGBsHasBeenSet = false;

    Aws::String m_dbServerId;
    bool m_dbServerIdHasBeenSet = false;

    Aws::String m_dbSystemId;
    bool m_dbSystemIdHasBeenSet = false;

    Aws::String m_faultDomain;
    bool m_faultDomainHasBeenSet = false;

    Aws::String m_hostIpId;
    bool m_hostIpIdHasBeenSet = false;

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    Aws::String m_ocid;
    bool m_ocidHasBeenSet = false;

    Aws::String m_ociResourceAnchorName;
    bool m_ociResourceAnchorNameHasBeenSet = false;

    DbNodeMaintenanceType m_maintenanceType{DbNodeMaintenanceType::NOT_SET};
    bool m_maintenanceTypeHasBeenSet = false;

    int m_memorySizeInGBs{0};
    bool m_memorySizeInGBsHasBeenSet = false;

    int m_softwareStorageSizeInGB{0};
    bool m_softwareStorageSizeInGBHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_timeMaintenanceWindowEnd;
    bool m_timeMaintenanceWindowEndHasBeenSet = false;

    Aws::String m_timeMaintenanceWindowStart;
    bool m_timeMaintenanceWindowStartHasBeenSet = false;

    int m_totalCpuCoreCount{0};
    bool m_totalCpuCoreCountHasBeenSet = false;

    Aws::String m_vnic2Id;
    bool m_vnic2IdHasBeenSet = false;

    Aws::String m_vnicId;
    bool m_vnicIdHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
