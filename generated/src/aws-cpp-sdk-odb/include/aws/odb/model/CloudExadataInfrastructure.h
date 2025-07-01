/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/model/ResourceStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/model/MaintenanceWindow.h>
#include <aws/core/utils/DateTime.h>
#include <aws/odb/model/ComputeModel.h>
#include <aws/odb/model/CustomerContact.h>
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
   * <p>Information about an Exadata infrastructure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/CloudExadataInfrastructure">AWS
   * API Reference</a></p>
   */
  class CloudExadataInfrastructure
  {
  public:
    AWS_ODB_API CloudExadataInfrastructure() = default;
    AWS_ODB_API CloudExadataInfrastructure(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API CloudExadataInfrastructure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the Exadata infrastructure.</p>
     */
    inline const Aws::String& GetCloudExadataInfrastructureId() const { return m_cloudExadataInfrastructureId; }
    inline bool CloudExadataInfrastructureIdHasBeenSet() const { return m_cloudExadataInfrastructureIdHasBeenSet; }
    template<typename CloudExadataInfrastructureIdT = Aws::String>
    void SetCloudExadataInfrastructureId(CloudExadataInfrastructureIdT&& value) { m_cloudExadataInfrastructureIdHasBeenSet = true; m_cloudExadataInfrastructureId = std::forward<CloudExadataInfrastructureIdT>(value); }
    template<typename CloudExadataInfrastructureIdT = Aws::String>
    CloudExadataInfrastructure& WithCloudExadataInfrastructureId(CloudExadataInfrastructureIdT&& value) { SetCloudExadataInfrastructureId(std::forward<CloudExadataInfrastructureIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name for the Exadata infrastructure.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    CloudExadataInfrastructure& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the Exadata infrastructure.</p>
     */
    inline ResourceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ResourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CloudExadataInfrastructure& WithStatus(ResourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the status of the Exadata infrastructure.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    CloudExadataInfrastructure& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the Exadata infrastructure.</p>
     */
    inline const Aws::String& GetCloudExadataInfrastructureArn() const { return m_cloudExadataInfrastructureArn; }
    inline bool CloudExadataInfrastructureArnHasBeenSet() const { return m_cloudExadataInfrastructureArnHasBeenSet; }
    template<typename CloudExadataInfrastructureArnT = Aws::String>
    void SetCloudExadataInfrastructureArn(CloudExadataInfrastructureArnT&& value) { m_cloudExadataInfrastructureArnHasBeenSet = true; m_cloudExadataInfrastructureArn = std::forward<CloudExadataInfrastructureArnT>(value); }
    template<typename CloudExadataInfrastructureArnT = Aws::String>
    CloudExadataInfrastructure& WithCloudExadataInfrastructureArn(CloudExadataInfrastructureArnT&& value) { SetCloudExadataInfrastructureArn(std::forward<CloudExadataInfrastructureArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of storage servers requested for the Exadata infrastructure.</p>
     */
    inline int GetActivatedStorageCount() const { return m_activatedStorageCount; }
    inline bool ActivatedStorageCountHasBeenSet() const { return m_activatedStorageCountHasBeenSet; }
    inline void SetActivatedStorageCount(int value) { m_activatedStorageCountHasBeenSet = true; m_activatedStorageCount = value; }
    inline CloudExadataInfrastructure& WithActivatedStorageCount(int value) { SetActivatedStorageCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of storage servers requested for the Exadata infrastructure.</p>
     */
    inline int GetAdditionalStorageCount() const { return m_additionalStorageCount; }
    inline bool AdditionalStorageCountHasBeenSet() const { return m_additionalStorageCountHasBeenSet; }
    inline void SetAdditionalStorageCount(int value) { m_additionalStorageCountHasBeenSet = true; m_additionalStorageCount = value; }
    inline CloudExadataInfrastructure& WithAdditionalStorageCount(int value) { SetAdditionalStorageCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of available storage, in gigabytes (GB), for the Exadata
     * infrastructure.</p>
     */
    inline int GetAvailableStorageSizeInGBs() const { return m_availableStorageSizeInGBs; }
    inline bool AvailableStorageSizeInGBsHasBeenSet() const { return m_availableStorageSizeInGBsHasBeenSet; }
    inline void SetAvailableStorageSizeInGBs(int value) { m_availableStorageSizeInGBsHasBeenSet = true; m_availableStorageSizeInGBs = value; }
    inline CloudExadataInfrastructure& WithAvailableStorageSizeInGBs(int value) { SetAvailableStorageSizeInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Availability Zone (AZ) where the Exadata infrastructure is
     * located.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    CloudExadataInfrastructure& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AZ ID of the AZ where the Exadata infrastructure is located.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    CloudExadataInfrastructure& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of database servers for the Exadata infrastructure.</p>
     */
    inline int GetComputeCount() const { return m_computeCount; }
    inline bool ComputeCountHasBeenSet() const { return m_computeCountHasBeenSet; }
    inline void SetComputeCount(int value) { m_computeCountHasBeenSet = true; m_computeCount = value; }
    inline CloudExadataInfrastructure& WithComputeCount(int value) { SetComputeCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of CPU cores that are allocated to the Exadata
     * infrastructure.</p>
     */
    inline int GetCpuCount() const { return m_cpuCount; }
    inline bool CpuCountHasBeenSet() const { return m_cpuCountHasBeenSet; }
    inline void SetCpuCount(int value) { m_cpuCountHasBeenSet = true; m_cpuCount = value; }
    inline CloudExadataInfrastructure& WithCpuCount(int value) { SetCpuCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email addresses of contacts to receive notification from Oracle about
     * maintenance updates for the Exadata infrastructure.</p>
     */
    inline const Aws::Vector<CustomerContact>& GetCustomerContactsToSendToOCI() const { return m_customerContactsToSendToOCI; }
    inline bool CustomerContactsToSendToOCIHasBeenSet() const { return m_customerContactsToSendToOCIHasBeenSet; }
    template<typename CustomerContactsToSendToOCIT = Aws::Vector<CustomerContact>>
    void SetCustomerContactsToSendToOCI(CustomerContactsToSendToOCIT&& value) { m_customerContactsToSendToOCIHasBeenSet = true; m_customerContactsToSendToOCI = std::forward<CustomerContactsToSendToOCIT>(value); }
    template<typename CustomerContactsToSendToOCIT = Aws::Vector<CustomerContact>>
    CloudExadataInfrastructure& WithCustomerContactsToSendToOCI(CustomerContactsToSendToOCIT&& value) { SetCustomerContactsToSendToOCI(std::forward<CustomerContactsToSendToOCIT>(value)); return *this;}
    template<typename CustomerContactsToSendToOCIT = CustomerContact>
    CloudExadataInfrastructure& AddCustomerContactsToSendToOCI(CustomerContactsToSendToOCIT&& value) { m_customerContactsToSendToOCIHasBeenSet = true; m_customerContactsToSendToOCI.emplace_back(std::forward<CustomerContactsToSendToOCIT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The size of the Exadata infrastructure's data disk group, in terabytes
     * (TB).</p>
     */
    inline double GetDataStorageSizeInTBs() const { return m_dataStorageSizeInTBs; }
    inline bool DataStorageSizeInTBsHasBeenSet() const { return m_dataStorageSizeInTBsHasBeenSet; }
    inline void SetDataStorageSizeInTBs(double value) { m_dataStorageSizeInTBsHasBeenSet = true; m_dataStorageSizeInTBs = value; }
    inline CloudExadataInfrastructure& WithDataStorageSizeInTBs(double value) { SetDataStorageSizeInTBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the Exadata infrastructure's local node storage, in gigabytes
     * (GB).</p>
     */
    inline int GetDbNodeStorageSizeInGBs() const { return m_dbNodeStorageSizeInGBs; }
    inline bool DbNodeStorageSizeInGBsHasBeenSet() const { return m_dbNodeStorageSizeInGBsHasBeenSet; }
    inline void SetDbNodeStorageSizeInGBs(int value) { m_dbNodeStorageSizeInGBsHasBeenSet = true; m_dbNodeStorageSizeInGBs = value; }
    inline CloudExadataInfrastructure& WithDbNodeStorageSizeInGBs(int value) { SetDbNodeStorageSizeInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The software version of the database servers (dom0) in the Exadata
     * infrastructure.</p>
     */
    inline const Aws::String& GetDbServerVersion() const { return m_dbServerVersion; }
    inline bool DbServerVersionHasBeenSet() const { return m_dbServerVersionHasBeenSet; }
    template<typename DbServerVersionT = Aws::String>
    void SetDbServerVersion(DbServerVersionT&& value) { m_dbServerVersionHasBeenSet = true; m_dbServerVersion = std::forward<DbServerVersionT>(value); }
    template<typename DbServerVersionT = Aws::String>
    CloudExadataInfrastructure& WithDbServerVersion(DbServerVersionT&& value) { SetDbServerVersion(std::forward<DbServerVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Oracle Cloud Identifier (OCID) of the last maintenance run for the
     * Exadata infrastructure.</p>
     */
    inline const Aws::String& GetLastMaintenanceRunId() const { return m_lastMaintenanceRunId; }
    inline bool LastMaintenanceRunIdHasBeenSet() const { return m_lastMaintenanceRunIdHasBeenSet; }
    template<typename LastMaintenanceRunIdT = Aws::String>
    void SetLastMaintenanceRunId(LastMaintenanceRunIdT&& value) { m_lastMaintenanceRunIdHasBeenSet = true; m_lastMaintenanceRunId = std::forward<LastMaintenanceRunIdT>(value); }
    template<typename LastMaintenanceRunIdT = Aws::String>
    CloudExadataInfrastructure& WithLastMaintenanceRunId(LastMaintenanceRunIdT&& value) { SetLastMaintenanceRunId(std::forward<LastMaintenanceRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scheduling details for the maintenance window. Patching and system
     * updates take place during the maintenance window.</p>
     */
    inline const MaintenanceWindow& GetMaintenanceWindow() const { return m_maintenanceWindow; }
    inline bool MaintenanceWindowHasBeenSet() const { return m_maintenanceWindowHasBeenSet; }
    template<typename MaintenanceWindowT = MaintenanceWindow>
    void SetMaintenanceWindow(MaintenanceWindowT&& value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow = std::forward<MaintenanceWindowT>(value); }
    template<typename MaintenanceWindowT = MaintenanceWindow>
    CloudExadataInfrastructure& WithMaintenanceWindow(MaintenanceWindowT&& value) { SetMaintenanceWindow(std::forward<MaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of CPU cores available on the Exadata infrastructure.</p>
     */
    inline int GetMaxCpuCount() const { return m_maxCpuCount; }
    inline bool MaxCpuCountHasBeenSet() const { return m_maxCpuCountHasBeenSet; }
    inline void SetMaxCpuCount(int value) { m_maxCpuCountHasBeenSet = true; m_maxCpuCount = value; }
    inline CloudExadataInfrastructure& WithMaxCpuCount(int value) { SetMaxCpuCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amount of data disk group storage, in terabytes (TB), that's
     * available on the Exadata infrastructure.</p>
     */
    inline double GetMaxDataStorageInTBs() const { return m_maxDataStorageInTBs; }
    inline bool MaxDataStorageInTBsHasBeenSet() const { return m_maxDataStorageInTBsHasBeenSet; }
    inline void SetMaxDataStorageInTBs(double value) { m_maxDataStorageInTBsHasBeenSet = true; m_maxDataStorageInTBs = value; }
    inline CloudExadataInfrastructure& WithMaxDataStorageInTBs(double value) { SetMaxDataStorageInTBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amount of local node storage, in gigabytes (GB), that's available
     * on the Exadata infrastructure.</p>
     */
    inline int GetMaxDbNodeStorageSizeInGBs() const { return m_maxDbNodeStorageSizeInGBs; }
    inline bool MaxDbNodeStorageSizeInGBsHasBeenSet() const { return m_maxDbNodeStorageSizeInGBsHasBeenSet; }
    inline void SetMaxDbNodeStorageSizeInGBs(int value) { m_maxDbNodeStorageSizeInGBsHasBeenSet = true; m_maxDbNodeStorageSizeInGBs = value; }
    inline CloudExadataInfrastructure& WithMaxDbNodeStorageSizeInGBs(int value) { SetMaxDbNodeStorageSizeInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amount of memory, in gigabytes (GB), that's available on the
     * Exadata infrastructure.</p>
     */
    inline int GetMaxMemoryInGBs() const { return m_maxMemoryInGBs; }
    inline bool MaxMemoryInGBsHasBeenSet() const { return m_maxMemoryInGBsHasBeenSet; }
    inline void SetMaxMemoryInGBs(int value) { m_maxMemoryInGBsHasBeenSet = true; m_maxMemoryInGBs = value; }
    inline CloudExadataInfrastructure& WithMaxMemoryInGBs(int value) { SetMaxMemoryInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of memory, in gigabytes (GB), that's allocated on the Exadata
     * infrastructure.</p>
     */
    inline int GetMemorySizeInGBs() const { return m_memorySizeInGBs; }
    inline bool MemorySizeInGBsHasBeenSet() const { return m_memorySizeInGBsHasBeenSet; }
    inline void SetMemorySizeInGBs(int value) { m_memorySizeInGBsHasBeenSet = true; m_memorySizeInGBs = value; }
    inline CloudExadataInfrastructure& WithMemorySizeInGBs(int value) { SetMemorySizeInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The monthly software version of the database servers installed on the Exadata
     * infrastructure.</p>
     */
    inline const Aws::String& GetMonthlyDbServerVersion() const { return m_monthlyDbServerVersion; }
    inline bool MonthlyDbServerVersionHasBeenSet() const { return m_monthlyDbServerVersionHasBeenSet; }
    template<typename MonthlyDbServerVersionT = Aws::String>
    void SetMonthlyDbServerVersion(MonthlyDbServerVersionT&& value) { m_monthlyDbServerVersionHasBeenSet = true; m_monthlyDbServerVersion = std::forward<MonthlyDbServerVersionT>(value); }
    template<typename MonthlyDbServerVersionT = Aws::String>
    CloudExadataInfrastructure& WithMonthlyDbServerVersion(MonthlyDbServerVersionT&& value) { SetMonthlyDbServerVersion(std::forward<MonthlyDbServerVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The monthly software version of the storage servers installed on the Exadata
     * infrastructure.</p>
     */
    inline const Aws::String& GetMonthlyStorageServerVersion() const { return m_monthlyStorageServerVersion; }
    inline bool MonthlyStorageServerVersionHasBeenSet() const { return m_monthlyStorageServerVersionHasBeenSet; }
    template<typename MonthlyStorageServerVersionT = Aws::String>
    void SetMonthlyStorageServerVersion(MonthlyStorageServerVersionT&& value) { m_monthlyStorageServerVersionHasBeenSet = true; m_monthlyStorageServerVersion = std::forward<MonthlyStorageServerVersionT>(value); }
    template<typename MonthlyStorageServerVersionT = Aws::String>
    CloudExadataInfrastructure& WithMonthlyStorageServerVersion(MonthlyStorageServerVersionT&& value) { SetMonthlyStorageServerVersion(std::forward<MonthlyStorageServerVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OCID of the next maintenance run for the Exadata infrastructure.</p>
     */
    inline const Aws::String& GetNextMaintenanceRunId() const { return m_nextMaintenanceRunId; }
    inline bool NextMaintenanceRunIdHasBeenSet() const { return m_nextMaintenanceRunIdHasBeenSet; }
    template<typename NextMaintenanceRunIdT = Aws::String>
    void SetNextMaintenanceRunId(NextMaintenanceRunIdT&& value) { m_nextMaintenanceRunIdHasBeenSet = true; m_nextMaintenanceRunId = std::forward<NextMaintenanceRunIdT>(value); }
    template<typename NextMaintenanceRunIdT = Aws::String>
    CloudExadataInfrastructure& WithNextMaintenanceRunId(NextMaintenanceRunIdT&& value) { SetNextMaintenanceRunId(std::forward<NextMaintenanceRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the OCI resource anchor for the Exadata infrastructure.</p>
     */
    inline const Aws::String& GetOciResourceAnchorName() const { return m_ociResourceAnchorName; }
    inline bool OciResourceAnchorNameHasBeenSet() const { return m_ociResourceAnchorNameHasBeenSet; }
    template<typename OciResourceAnchorNameT = Aws::String>
    void SetOciResourceAnchorName(OciResourceAnchorNameT&& value) { m_ociResourceAnchorNameHasBeenSet = true; m_ociResourceAnchorName = std::forward<OciResourceAnchorNameT>(value); }
    template<typename OciResourceAnchorNameT = Aws::String>
    CloudExadataInfrastructure& WithOciResourceAnchorName(OciResourceAnchorNameT&& value) { SetOciResourceAnchorName(std::forward<OciResourceAnchorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTPS link to the Exadata infrastructure in OCI.</p>
     */
    inline const Aws::String& GetOciUrl() const { return m_ociUrl; }
    inline bool OciUrlHasBeenSet() const { return m_ociUrlHasBeenSet; }
    template<typename OciUrlT = Aws::String>
    void SetOciUrl(OciUrlT&& value) { m_ociUrlHasBeenSet = true; m_ociUrl = std::forward<OciUrlT>(value); }
    template<typename OciUrlT = Aws::String>
    CloudExadataInfrastructure& WithOciUrl(OciUrlT&& value) { SetOciUrl(std::forward<OciUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OCID of the Exadata infrastructure.</p>
     */
    inline const Aws::String& GetOcid() const { return m_ocid; }
    inline bool OcidHasBeenSet() const { return m_ocidHasBeenSet; }
    template<typename OcidT = Aws::String>
    void SetOcid(OcidT&& value) { m_ocidHasBeenSet = true; m_ocid = std::forward<OcidT>(value); }
    template<typename OcidT = Aws::String>
    CloudExadataInfrastructure& WithOcid(OcidT&& value) { SetOcid(std::forward<OcidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model name of the Exadata infrastructure.</p>
     */
    inline const Aws::String& GetShape() const { return m_shape; }
    inline bool ShapeHasBeenSet() const { return m_shapeHasBeenSet; }
    template<typename ShapeT = Aws::String>
    void SetShape(ShapeT&& value) { m_shapeHasBeenSet = true; m_shape = std::forward<ShapeT>(value); }
    template<typename ShapeT = Aws::String>
    CloudExadataInfrastructure& WithShape(ShapeT&& value) { SetShape(std::forward<ShapeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of storage servers that are activated for the Exadata
     * infrastructure.</p>
     */
    inline int GetStorageCount() const { return m_storageCount; }
    inline bool StorageCountHasBeenSet() const { return m_storageCountHasBeenSet; }
    inline void SetStorageCount(int value) { m_storageCountHasBeenSet = true; m_storageCount = value; }
    inline CloudExadataInfrastructure& WithStorageCount(int value) { SetStorageCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The software version of the storage servers on the Exadata
     * infrastructure.</p>
     */
    inline const Aws::String& GetStorageServerVersion() const { return m_storageServerVersion; }
    inline bool StorageServerVersionHasBeenSet() const { return m_storageServerVersionHasBeenSet; }
    template<typename StorageServerVersionT = Aws::String>
    void SetStorageServerVersion(StorageServerVersionT&& value) { m_storageServerVersionHasBeenSet = true; m_storageServerVersion = std::forward<StorageServerVersionT>(value); }
    template<typename StorageServerVersionT = Aws::String>
    CloudExadataInfrastructure& WithStorageServerVersion(StorageServerVersionT&& value) { SetStorageServerVersion(std::forward<StorageServerVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the Exadata infrastructure was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CloudExadataInfrastructure& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amount of storage, in gigabytes (GB), on the the Exadata
     * infrastructure.</p>
     */
    inline int GetTotalStorageSizeInGBs() const { return m_totalStorageSizeInGBs; }
    inline bool TotalStorageSizeInGBsHasBeenSet() const { return m_totalStorageSizeInGBsHasBeenSet; }
    inline void SetTotalStorageSizeInGBs(int value) { m_totalStorageSizeInGBsHasBeenSet = true; m_totalStorageSizeInGBs = value; }
    inline CloudExadataInfrastructure& WithTotalStorageSizeInGBs(int value) { SetTotalStorageSizeInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of progress made on the current operation on the Exadata
     * infrastructure, expressed as a percentage.</p>
     */
    inline double GetPercentProgress() const { return m_percentProgress; }
    inline bool PercentProgressHasBeenSet() const { return m_percentProgressHasBeenSet; }
    inline void SetPercentProgress(double value) { m_percentProgressHasBeenSet = true; m_percentProgress = value; }
    inline CloudExadataInfrastructure& WithPercentProgress(double value) { SetPercentProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database server model type of the Exadata infrastructure. For the list of
     * valid model names, use the <code>ListDbSystemShapes</code> operation.</p>
     */
    inline const Aws::String& GetDatabaseServerType() const { return m_databaseServerType; }
    inline bool DatabaseServerTypeHasBeenSet() const { return m_databaseServerTypeHasBeenSet; }
    template<typename DatabaseServerTypeT = Aws::String>
    void SetDatabaseServerType(DatabaseServerTypeT&& value) { m_databaseServerTypeHasBeenSet = true; m_databaseServerType = std::forward<DatabaseServerTypeT>(value); }
    template<typename DatabaseServerTypeT = Aws::String>
    CloudExadataInfrastructure& WithDatabaseServerType(DatabaseServerTypeT&& value) { SetDatabaseServerType(std::forward<DatabaseServerTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage server model type of the Exadata infrastructure. For the list of
     * valid model names, use the <code>ListDbSystemShapes</code> operation.</p>
     */
    inline const Aws::String& GetStorageServerType() const { return m_storageServerType; }
    inline bool StorageServerTypeHasBeenSet() const { return m_storageServerTypeHasBeenSet; }
    template<typename StorageServerTypeT = Aws::String>
    void SetStorageServerType(StorageServerTypeT&& value) { m_storageServerTypeHasBeenSet = true; m_storageServerType = std::forward<StorageServerTypeT>(value); }
    template<typename StorageServerTypeT = Aws::String>
    CloudExadataInfrastructure& WithStorageServerType(StorageServerTypeT&& value) { SetStorageServerType(std::forward<StorageServerTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OCI model compute model used when you create or clone an instance: ECPU
     * or OCPU. An ECPU is an abstracted measure of compute resources. ECPUs are based
     * on the number of cores elastically allocated from a pool of compute and storage
     * servers. An OCPU is a legacy physical measure of compute resources. OCPUs are
     * based on the physical core of a processor with hyper-threading enabled. </p>
     */
    inline ComputeModel GetComputeModel() const { return m_computeModel; }
    inline bool ComputeModelHasBeenSet() const { return m_computeModelHasBeenSet; }
    inline void SetComputeModel(ComputeModel value) { m_computeModelHasBeenSet = true; m_computeModel = value; }
    inline CloudExadataInfrastructure& WithComputeModel(ComputeModel value) { SetComputeModel(value); return *this;}
    ///@}
  private:

    Aws::String m_cloudExadataInfrastructureId;
    bool m_cloudExadataInfrastructureIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    ResourceStatus m_status{ResourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_cloudExadataInfrastructureArn;
    bool m_cloudExadataInfrastructureArnHasBeenSet = false;

    int m_activatedStorageCount{0};
    bool m_activatedStorageCountHasBeenSet = false;

    int m_additionalStorageCount{0};
    bool m_additionalStorageCountHasBeenSet = false;

    int m_availableStorageSizeInGBs{0};
    bool m_availableStorageSizeInGBsHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    int m_computeCount{0};
    bool m_computeCountHasBeenSet = false;

    int m_cpuCount{0};
    bool m_cpuCountHasBeenSet = false;

    Aws::Vector<CustomerContact> m_customerContactsToSendToOCI;
    bool m_customerContactsToSendToOCIHasBeenSet = false;

    double m_dataStorageSizeInTBs{0.0};
    bool m_dataStorageSizeInTBsHasBeenSet = false;

    int m_dbNodeStorageSizeInGBs{0};
    bool m_dbNodeStorageSizeInGBsHasBeenSet = false;

    Aws::String m_dbServerVersion;
    bool m_dbServerVersionHasBeenSet = false;

    Aws::String m_lastMaintenanceRunId;
    bool m_lastMaintenanceRunIdHasBeenSet = false;

    MaintenanceWindow m_maintenanceWindow;
    bool m_maintenanceWindowHasBeenSet = false;

    int m_maxCpuCount{0};
    bool m_maxCpuCountHasBeenSet = false;

    double m_maxDataStorageInTBs{0.0};
    bool m_maxDataStorageInTBsHasBeenSet = false;

    int m_maxDbNodeStorageSizeInGBs{0};
    bool m_maxDbNodeStorageSizeInGBsHasBeenSet = false;

    int m_maxMemoryInGBs{0};
    bool m_maxMemoryInGBsHasBeenSet = false;

    int m_memorySizeInGBs{0};
    bool m_memorySizeInGBsHasBeenSet = false;

    Aws::String m_monthlyDbServerVersion;
    bool m_monthlyDbServerVersionHasBeenSet = false;

    Aws::String m_monthlyStorageServerVersion;
    bool m_monthlyStorageServerVersionHasBeenSet = false;

    Aws::String m_nextMaintenanceRunId;
    bool m_nextMaintenanceRunIdHasBeenSet = false;

    Aws::String m_ociResourceAnchorName;
    bool m_ociResourceAnchorNameHasBeenSet = false;

    Aws::String m_ociUrl;
    bool m_ociUrlHasBeenSet = false;

    Aws::String m_ocid;
    bool m_ocidHasBeenSet = false;

    Aws::String m_shape;
    bool m_shapeHasBeenSet = false;

    int m_storageCount{0};
    bool m_storageCountHasBeenSet = false;

    Aws::String m_storageServerVersion;
    bool m_storageServerVersionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    int m_totalStorageSizeInGBs{0};
    bool m_totalStorageSizeInGBsHasBeenSet = false;

    double m_percentProgress{0.0};
    bool m_percentProgressHasBeenSet = false;

    Aws::String m_databaseServerType;
    bool m_databaseServerTypeHasBeenSet = false;

    Aws::String m_storageServerType;
    bool m_storageServerTypeHasBeenSet = false;

    ComputeModel m_computeModel{ComputeModel::NOT_SET};
    bool m_computeModelHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
