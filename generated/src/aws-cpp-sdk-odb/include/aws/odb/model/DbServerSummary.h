﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/ComputeModel.h>
#include <aws/odb/model/DbServerPatchingDetails.h>
#include <aws/odb/model/ResourceStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {

/**
 * <p>Information about a database server.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/DbServerSummary">AWS
 * API Reference</a></p>
 */
class DbServerSummary {
 public:
  AWS_ODB_API DbServerSummary() = default;
  AWS_ODB_API DbServerSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API DbServerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the database server.</p>
   */
  inline const Aws::String& GetDbServerId() const { return m_dbServerId; }
  inline bool DbServerIdHasBeenSet() const { return m_dbServerIdHasBeenSet; }
  template <typename DbServerIdT = Aws::String>
  void SetDbServerId(DbServerIdT&& value) {
    m_dbServerIdHasBeenSet = true;
    m_dbServerId = std::forward<DbServerIdT>(value);
  }
  template <typename DbServerIdT = Aws::String>
  DbServerSummary& WithDbServerId(DbServerIdT&& value) {
    SetDbServerId(std::forward<DbServerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the database server.</p>
   */
  inline ResourceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DbServerSummary& WithStatus(ResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the status of the database server.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  DbServerSummary& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of CPU cores enabled on the database server.</p>
   */
  inline int GetCpuCoreCount() const { return m_cpuCoreCount; }
  inline bool CpuCoreCountHasBeenSet() const { return m_cpuCoreCountHasBeenSet; }
  inline void SetCpuCoreCount(int value) {
    m_cpuCoreCountHasBeenSet = true;
    m_cpuCoreCount = value;
  }
  inline DbServerSummary& WithCpuCoreCount(int value) {
    SetCpuCoreCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of local node storage, in gigabytes (GB), that's allocated on the
   * database server.</p>
   */
  inline int GetDbNodeStorageSizeInGBs() const { return m_dbNodeStorageSizeInGBs; }
  inline bool DbNodeStorageSizeInGBsHasBeenSet() const { return m_dbNodeStorageSizeInGBsHasBeenSet; }
  inline void SetDbNodeStorageSizeInGBs(int value) {
    m_dbNodeStorageSizeInGBsHasBeenSet = true;
    m_dbNodeStorageSizeInGBs = value;
  }
  inline DbServerSummary& WithDbNodeStorageSizeInGBs(int value) {
    SetDbNodeStorageSizeInGBs(value);
    return *this;
  }
  ///@}

  ///@{

  inline const DbServerPatchingDetails& GetDbServerPatchingDetails() const { return m_dbServerPatchingDetails; }
  inline bool DbServerPatchingDetailsHasBeenSet() const { return m_dbServerPatchingDetailsHasBeenSet; }
  template <typename DbServerPatchingDetailsT = DbServerPatchingDetails>
  void SetDbServerPatchingDetails(DbServerPatchingDetailsT&& value) {
    m_dbServerPatchingDetailsHasBeenSet = true;
    m_dbServerPatchingDetails = std::forward<DbServerPatchingDetailsT>(value);
  }
  template <typename DbServerPatchingDetailsT = DbServerPatchingDetails>
  DbServerSummary& WithDbServerPatchingDetails(DbServerPatchingDetailsT&& value) {
    SetDbServerPatchingDetails(std::forward<DbServerPatchingDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user-friendly name of the database server. The name doesn't need to be
   * unique.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  DbServerSummary& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Exadata infrastructure that hosts the database server.</p>
   */
  inline const Aws::String& GetExadataInfrastructureId() const { return m_exadataInfrastructureId; }
  inline bool ExadataInfrastructureIdHasBeenSet() const { return m_exadataInfrastructureIdHasBeenSet; }
  template <typename ExadataInfrastructureIdT = Aws::String>
  void SetExadataInfrastructureId(ExadataInfrastructureIdT&& value) {
    m_exadataInfrastructureIdHasBeenSet = true;
    m_exadataInfrastructureId = std::forward<ExadataInfrastructureIdT>(value);
  }
  template <typename ExadataInfrastructureIdT = Aws::String>
  DbServerSummary& WithExadataInfrastructureId(ExadataInfrastructureIdT&& value) {
    SetExadataInfrastructureId(std::forward<ExadataInfrastructureIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OCID of the database server.</p>
   */
  inline const Aws::String& GetOcid() const { return m_ocid; }
  inline bool OcidHasBeenSet() const { return m_ocidHasBeenSet; }
  template <typename OcidT = Aws::String>
  void SetOcid(OcidT&& value) {
    m_ocidHasBeenSet = true;
    m_ocid = std::forward<OcidT>(value);
  }
  template <typename OcidT = Aws::String>
  DbServerSummary& WithOcid(OcidT&& value) {
    SetOcid(std::forward<OcidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the OCI resource anchor for the database server.</p>
   */
  inline const Aws::String& GetOciResourceAnchorName() const { return m_ociResourceAnchorName; }
  inline bool OciResourceAnchorNameHasBeenSet() const { return m_ociResourceAnchorNameHasBeenSet; }
  template <typename OciResourceAnchorNameT = Aws::String>
  void SetOciResourceAnchorName(OciResourceAnchorNameT&& value) {
    m_ociResourceAnchorNameHasBeenSet = true;
    m_ociResourceAnchorName = std::forward<OciResourceAnchorNameT>(value);
  }
  template <typename OciResourceAnchorNameT = Aws::String>
  DbServerSummary& WithOciResourceAnchorName(OciResourceAnchorNameT&& value) {
    SetOciResourceAnchorName(std::forward<OciResourceAnchorNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of CPU cores available on the database server.</p>
   */
  inline int GetMaxCpuCount() const { return m_maxCpuCount; }
  inline bool MaxCpuCountHasBeenSet() const { return m_maxCpuCountHasBeenSet; }
  inline void SetMaxCpuCount(int value) {
    m_maxCpuCountHasBeenSet = true;
    m_maxCpuCount = value;
  }
  inline DbServerSummary& WithMaxCpuCount(int value) {
    SetMaxCpuCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total amount of local node storage, in gigabytes (GB), that's available
   * on the database server.</p>
   */
  inline int GetMaxDbNodeStorageInGBs() const { return m_maxDbNodeStorageInGBs; }
  inline bool MaxDbNodeStorageInGBsHasBeenSet() const { return m_maxDbNodeStorageInGBsHasBeenSet; }
  inline void SetMaxDbNodeStorageInGBs(int value) {
    m_maxDbNodeStorageInGBsHasBeenSet = true;
    m_maxDbNodeStorageInGBs = value;
  }
  inline DbServerSummary& WithMaxDbNodeStorageInGBs(int value) {
    SetMaxDbNodeStorageInGBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total amount of memory, in gigabytes (GB), that's available on the
   * database server.</p>
   */
  inline int GetMaxMemoryInGBs() const { return m_maxMemoryInGBs; }
  inline bool MaxMemoryInGBsHasBeenSet() const { return m_maxMemoryInGBsHasBeenSet; }
  inline void SetMaxMemoryInGBs(int value) {
    m_maxMemoryInGBsHasBeenSet = true;
    m_maxMemoryInGBs = value;
  }
  inline DbServerSummary& WithMaxMemoryInGBs(int value) {
    SetMaxMemoryInGBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of memory, in gigabytes (GB), that's allocated on the database
   * server.</p>
   */
  inline int GetMemorySizeInGBs() const { return m_memorySizeInGBs; }
  inline bool MemorySizeInGBsHasBeenSet() const { return m_memorySizeInGBsHasBeenSet; }
  inline void SetMemorySizeInGBs(int value) {
    m_memorySizeInGBsHasBeenSet = true;
    m_memorySizeInGBs = value;
  }
  inline DbServerSummary& WithMemorySizeInGBs(int value) {
    SetMemorySizeInGBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The hardware system model of the Exadata infrastructure that the database
   * server is hosted on. The shape determines the amount of CPU, storage, and memory
   * resources available.</p>
   */
  inline const Aws::String& GetShape() const { return m_shape; }
  inline bool ShapeHasBeenSet() const { return m_shapeHasBeenSet; }
  template <typename ShapeT = Aws::String>
  void SetShape(ShapeT&& value) {
    m_shapeHasBeenSet = true;
    m_shape = std::forward<ShapeT>(value);
  }
  template <typename ShapeT = Aws::String>
  DbServerSummary& WithShape(ShapeT&& value) {
    SetShape(std::forward<ShapeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the database server was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  DbServerSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the VM clusters that are associated with the database server.</p>
   */
  inline const Aws::Vector<Aws::String>& GetVmClusterIds() const { return m_vmClusterIds; }
  inline bool VmClusterIdsHasBeenSet() const { return m_vmClusterIdsHasBeenSet; }
  template <typename VmClusterIdsT = Aws::Vector<Aws::String>>
  void SetVmClusterIds(VmClusterIdsT&& value) {
    m_vmClusterIdsHasBeenSet = true;
    m_vmClusterIds = std::forward<VmClusterIdsT>(value);
  }
  template <typename VmClusterIdsT = Aws::Vector<Aws::String>>
  DbServerSummary& WithVmClusterIds(VmClusterIdsT&& value) {
    SetVmClusterIds(std::forward<VmClusterIdsT>(value));
    return *this;
  }
  template <typename VmClusterIdsT = Aws::String>
  DbServerSummary& AddVmClusterIds(VmClusterIdsT&& value) {
    m_vmClusterIdsHasBeenSet = true;
    m_vmClusterIds.emplace_back(std::forward<VmClusterIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OCI model compute model used when you create or clone an instance: ECPU
   * or OCPU. An ECPU is an abstracted measure of compute resources. ECPUs are based
   * on the number of cores elastically allocated from a pool of compute and storage
   * servers. An OCPU is a legacy physical measure of compute resources. OCPUs are
   * based on the physical core of a processor with hyper-threading enabled.</p>
   */
  inline ComputeModel GetComputeModel() const { return m_computeModel; }
  inline bool ComputeModelHasBeenSet() const { return m_computeModelHasBeenSet; }
  inline void SetComputeModel(ComputeModel value) {
    m_computeModelHasBeenSet = true;
    m_computeModel = value;
  }
  inline DbServerSummary& WithComputeModel(ComputeModel value) {
    SetComputeModel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of identifiers for the Autonomous VM clusters.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAutonomousVmClusterIds() const { return m_autonomousVmClusterIds; }
  inline bool AutonomousVmClusterIdsHasBeenSet() const { return m_autonomousVmClusterIdsHasBeenSet; }
  template <typename AutonomousVmClusterIdsT = Aws::Vector<Aws::String>>
  void SetAutonomousVmClusterIds(AutonomousVmClusterIdsT&& value) {
    m_autonomousVmClusterIdsHasBeenSet = true;
    m_autonomousVmClusterIds = std::forward<AutonomousVmClusterIdsT>(value);
  }
  template <typename AutonomousVmClusterIdsT = Aws::Vector<Aws::String>>
  DbServerSummary& WithAutonomousVmClusterIds(AutonomousVmClusterIdsT&& value) {
    SetAutonomousVmClusterIds(std::forward<AutonomousVmClusterIdsT>(value));
    return *this;
  }
  template <typename AutonomousVmClusterIdsT = Aws::String>
  DbServerSummary& AddAutonomousVmClusterIds(AutonomousVmClusterIdsT&& value) {
    m_autonomousVmClusterIdsHasBeenSet = true;
    m_autonomousVmClusterIds.emplace_back(std::forward<AutonomousVmClusterIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of unique identifiers for the Autonomous VMs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAutonomousVirtualMachineIds() const { return m_autonomousVirtualMachineIds; }
  inline bool AutonomousVirtualMachineIdsHasBeenSet() const { return m_autonomousVirtualMachineIdsHasBeenSet; }
  template <typename AutonomousVirtualMachineIdsT = Aws::Vector<Aws::String>>
  void SetAutonomousVirtualMachineIds(AutonomousVirtualMachineIdsT&& value) {
    m_autonomousVirtualMachineIdsHasBeenSet = true;
    m_autonomousVirtualMachineIds = std::forward<AutonomousVirtualMachineIdsT>(value);
  }
  template <typename AutonomousVirtualMachineIdsT = Aws::Vector<Aws::String>>
  DbServerSummary& WithAutonomousVirtualMachineIds(AutonomousVirtualMachineIdsT&& value) {
    SetAutonomousVirtualMachineIds(std::forward<AutonomousVirtualMachineIdsT>(value));
    return *this;
  }
  template <typename AutonomousVirtualMachineIdsT = Aws::String>
  DbServerSummary& AddAutonomousVirtualMachineIds(AutonomousVirtualMachineIdsT&& value) {
    m_autonomousVirtualMachineIdsHasBeenSet = true;
    m_autonomousVirtualMachineIds.emplace_back(std::forward<AutonomousVirtualMachineIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dbServerId;
  bool m_dbServerIdHasBeenSet = false;

  ResourceStatus m_status{ResourceStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_statusReason;
  bool m_statusReasonHasBeenSet = false;

  int m_cpuCoreCount{0};
  bool m_cpuCoreCountHasBeenSet = false;

  int m_dbNodeStorageSizeInGBs{0};
  bool m_dbNodeStorageSizeInGBsHasBeenSet = false;

  DbServerPatchingDetails m_dbServerPatchingDetails;
  bool m_dbServerPatchingDetailsHasBeenSet = false;

  Aws::String m_displayName;
  bool m_displayNameHasBeenSet = false;

  Aws::String m_exadataInfrastructureId;
  bool m_exadataInfrastructureIdHasBeenSet = false;

  Aws::String m_ocid;
  bool m_ocidHasBeenSet = false;

  Aws::String m_ociResourceAnchorName;
  bool m_ociResourceAnchorNameHasBeenSet = false;

  int m_maxCpuCount{0};
  bool m_maxCpuCountHasBeenSet = false;

  int m_maxDbNodeStorageInGBs{0};
  bool m_maxDbNodeStorageInGBsHasBeenSet = false;

  int m_maxMemoryInGBs{0};
  bool m_maxMemoryInGBsHasBeenSet = false;

  int m_memorySizeInGBs{0};
  bool m_memorySizeInGBsHasBeenSet = false;

  Aws::String m_shape;
  bool m_shapeHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::Vector<Aws::String> m_vmClusterIds;
  bool m_vmClusterIdsHasBeenSet = false;

  ComputeModel m_computeModel{ComputeModel::NOT_SET};
  bool m_computeModelHasBeenSet = false;

  Aws::Vector<Aws::String> m_autonomousVmClusterIds;
  bool m_autonomousVmClusterIdsHasBeenSet = false;

  Aws::Vector<Aws::String> m_autonomousVirtualMachineIds;
  bool m_autonomousVirtualMachineIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
