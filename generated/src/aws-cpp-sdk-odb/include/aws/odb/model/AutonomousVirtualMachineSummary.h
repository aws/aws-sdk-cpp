/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/model/ResourceStatus.h>
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
   * <p>A summary of an Autonomous Virtual Machine (VM) within an Autonomous VM
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/AutonomousVirtualMachineSummary">AWS
   * API Reference</a></p>
   */
  class AutonomousVirtualMachineSummary
  {
  public:
    AWS_ODB_API AutonomousVirtualMachineSummary() = default;
    AWS_ODB_API AutonomousVirtualMachineSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API AutonomousVirtualMachineSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the Autonomous VM.</p>
     */
    inline const Aws::String& GetAutonomousVirtualMachineId() const { return m_autonomousVirtualMachineId; }
    inline bool AutonomousVirtualMachineIdHasBeenSet() const { return m_autonomousVirtualMachineIdHasBeenSet; }
    template<typename AutonomousVirtualMachineIdT = Aws::String>
    void SetAutonomousVirtualMachineId(AutonomousVirtualMachineIdT&& value) { m_autonomousVirtualMachineIdHasBeenSet = true; m_autonomousVirtualMachineId = std::forward<AutonomousVirtualMachineIdT>(value); }
    template<typename AutonomousVirtualMachineIdT = Aws::String>
    AutonomousVirtualMachineSummary& WithAutonomousVirtualMachineId(AutonomousVirtualMachineIdT&& value) { SetAutonomousVirtualMachineId(std::forward<AutonomousVirtualMachineIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the Autonomous VM.</p>
     */
    inline ResourceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ResourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AutonomousVirtualMachineSummary& WithStatus(ResourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the current status of the Autonomous VM, if
     * applicable.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    AutonomousVirtualMachineSummary& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Autonomous VM.</p>
     */
    inline const Aws::String& GetVmName() const { return m_vmName; }
    inline bool VmNameHasBeenSet() const { return m_vmNameHasBeenSet; }
    template<typename VmNameT = Aws::String>
    void SetVmName(VmNameT&& value) { m_vmNameHasBeenSet = true; m_vmName = std::forward<VmNameT>(value); }
    template<typename VmNameT = Aws::String>
    AutonomousVirtualMachineSummary& WithVmName(VmNameT&& value) { SetVmName(std::forward<VmNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the database server hosting this Autonomous VM.</p>
     */
    inline const Aws::String& GetDbServerId() const { return m_dbServerId; }
    inline bool DbServerIdHasBeenSet() const { return m_dbServerIdHasBeenSet; }
    template<typename DbServerIdT = Aws::String>
    void SetDbServerId(DbServerIdT&& value) { m_dbServerIdHasBeenSet = true; m_dbServerId = std::forward<DbServerIdT>(value); }
    template<typename DbServerIdT = Aws::String>
    AutonomousVirtualMachineSummary& WithDbServerId(DbServerIdT&& value) { SetDbServerId(std::forward<DbServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the database server hosting this Autonomous VM.</p>
     */
    inline const Aws::String& GetDbServerDisplayName() const { return m_dbServerDisplayName; }
    inline bool DbServerDisplayNameHasBeenSet() const { return m_dbServerDisplayNameHasBeenSet; }
    template<typename DbServerDisplayNameT = Aws::String>
    void SetDbServerDisplayName(DbServerDisplayNameT&& value) { m_dbServerDisplayNameHasBeenSet = true; m_dbServerDisplayName = std::forward<DbServerDisplayNameT>(value); }
    template<typename DbServerDisplayNameT = Aws::String>
    AutonomousVirtualMachineSummary& WithDbServerDisplayName(DbServerDisplayNameT&& value) { SetDbServerDisplayName(std::forward<DbServerDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of CPU cores allocated to this Autonomous VM.</p>
     */
    inline int GetCpuCoreCount() const { return m_cpuCoreCount; }
    inline bool CpuCoreCountHasBeenSet() const { return m_cpuCoreCountHasBeenSet; }
    inline void SetCpuCoreCount(int value) { m_cpuCoreCountHasBeenSet = true; m_cpuCoreCount = value; }
    inline AutonomousVirtualMachineSummary& WithCpuCoreCount(int value) { SetCpuCoreCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of memory allocated to this Autonomous VM, in gigabytes (GB).</p>
     */
    inline int GetMemorySizeInGBs() const { return m_memorySizeInGBs; }
    inline bool MemorySizeInGBsHasBeenSet() const { return m_memorySizeInGBsHasBeenSet; }
    inline void SetMemorySizeInGBs(int value) { m_memorySizeInGBsHasBeenSet = true; m_memorySizeInGBs = value; }
    inline AutonomousVirtualMachineSummary& WithMemorySizeInGBs(int value) { SetMemorySizeInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage allocated to this Autonomous Virtual Machine, in
     * gigabytes (GB).</p>
     */
    inline int GetDbNodeStorageSizeInGBs() const { return m_dbNodeStorageSizeInGBs; }
    inline bool DbNodeStorageSizeInGBsHasBeenSet() const { return m_dbNodeStorageSizeInGBsHasBeenSet; }
    inline void SetDbNodeStorageSizeInGBs(int value) { m_dbNodeStorageSizeInGBsHasBeenSet = true; m_dbNodeStorageSizeInGBs = value; }
    inline AutonomousVirtualMachineSummary& WithDbNodeStorageSizeInGBs(int value) { SetDbNodeStorageSizeInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address used by clients to connect to this Autonomous VM.</p>
     */
    inline const Aws::String& GetClientIpAddress() const { return m_clientIpAddress; }
    inline bool ClientIpAddressHasBeenSet() const { return m_clientIpAddressHasBeenSet; }
    template<typename ClientIpAddressT = Aws::String>
    void SetClientIpAddress(ClientIpAddressT&& value) { m_clientIpAddressHasBeenSet = true; m_clientIpAddress = std::forward<ClientIpAddressT>(value); }
    template<typename ClientIpAddressT = Aws::String>
    AutonomousVirtualMachineSummary& WithClientIpAddress(ClientIpAddressT&& value) { SetClientIpAddress(std::forward<ClientIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Autonomous VM cluster containing this Autonomous
     * VM.</p>
     */
    inline const Aws::String& GetCloudAutonomousVmClusterId() const { return m_cloudAutonomousVmClusterId; }
    inline bool CloudAutonomousVmClusterIdHasBeenSet() const { return m_cloudAutonomousVmClusterIdHasBeenSet; }
    template<typename CloudAutonomousVmClusterIdT = Aws::String>
    void SetCloudAutonomousVmClusterId(CloudAutonomousVmClusterIdT&& value) { m_cloudAutonomousVmClusterIdHasBeenSet = true; m_cloudAutonomousVmClusterId = std::forward<CloudAutonomousVmClusterIdT>(value); }
    template<typename CloudAutonomousVmClusterIdT = Aws::String>
    AutonomousVirtualMachineSummary& WithCloudAutonomousVmClusterId(CloudAutonomousVmClusterIdT&& value) { SetCloudAutonomousVmClusterId(std::forward<CloudAutonomousVmClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Oracle Cloud Identifier (OCID) of the Autonomous VM.</p>
     */
    inline const Aws::String& GetOcid() const { return m_ocid; }
    inline bool OcidHasBeenSet() const { return m_ocidHasBeenSet; }
    template<typename OcidT = Aws::String>
    void SetOcid(OcidT&& value) { m_ocidHasBeenSet = true; m_ocid = std::forward<OcidT>(value); }
    template<typename OcidT = Aws::String>
    AutonomousVirtualMachineSummary& WithOcid(OcidT&& value) { SetOcid(std::forward<OcidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Oracle Cloud Infrastructure (OCI) resource anchor associated
     * with this Autonomous VM.</p>
     */
    inline const Aws::String& GetOciResourceAnchorName() const { return m_ociResourceAnchorName; }
    inline bool OciResourceAnchorNameHasBeenSet() const { return m_ociResourceAnchorNameHasBeenSet; }
    template<typename OciResourceAnchorNameT = Aws::String>
    void SetOciResourceAnchorName(OciResourceAnchorNameT&& value) { m_ociResourceAnchorNameHasBeenSet = true; m_ociResourceAnchorName = std::forward<OciResourceAnchorNameT>(value); }
    template<typename OciResourceAnchorNameT = Aws::String>
    AutonomousVirtualMachineSummary& WithOciResourceAnchorName(OciResourceAnchorNameT&& value) { SetOciResourceAnchorName(std::forward<OciResourceAnchorNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_autonomousVirtualMachineId;
    bool m_autonomousVirtualMachineIdHasBeenSet = false;

    ResourceStatus m_status{ResourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_vmName;
    bool m_vmNameHasBeenSet = false;

    Aws::String m_dbServerId;
    bool m_dbServerIdHasBeenSet = false;

    Aws::String m_dbServerDisplayName;
    bool m_dbServerDisplayNameHasBeenSet = false;

    int m_cpuCoreCount{0};
    bool m_cpuCoreCountHasBeenSet = false;

    int m_memorySizeInGBs{0};
    bool m_memorySizeInGBsHasBeenSet = false;

    int m_dbNodeStorageSizeInGBs{0};
    bool m_dbNodeStorageSizeInGBsHasBeenSet = false;

    Aws::String m_clientIpAddress;
    bool m_clientIpAddressHasBeenSet = false;

    Aws::String m_cloudAutonomousVmClusterId;
    bool m_cloudAutonomousVmClusterIdHasBeenSet = false;

    Aws::String m_ocid;
    bool m_ocidHasBeenSet = false;

    Aws::String m_ociResourceAnchorName;
    bool m_ociResourceAnchorNameHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
