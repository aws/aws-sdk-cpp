/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes an instance's RAID array.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RaidArray">AWS
   * API Reference</a></p>
   */
  class RaidArray
  {
  public:
    AWS_OPSWORKS_API RaidArray() = default;
    AWS_OPSWORKS_API RaidArray(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API RaidArray& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The array ID.</p>
     */
    inline const Aws::String& GetRaidArrayId() const { return m_raidArrayId; }
    inline bool RaidArrayIdHasBeenSet() const { return m_raidArrayIdHasBeenSet; }
    template<typename RaidArrayIdT = Aws::String>
    void SetRaidArrayId(RaidArrayIdT&& value) { m_raidArrayIdHasBeenSet = true; m_raidArrayId = std::forward<RaidArrayIdT>(value); }
    template<typename RaidArrayIdT = Aws::String>
    RaidArray& WithRaidArrayId(RaidArrayIdT&& value) { SetRaidArrayId(std::forward<RaidArrayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    RaidArray& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RaidArray& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a href="http://en.wikipedia.org/wiki/Standard_RAID_levels">RAID
     * level</a>.</p>
     */
    inline int GetRaidLevel() const { return m_raidLevel; }
    inline bool RaidLevelHasBeenSet() const { return m_raidLevelHasBeenSet; }
    inline void SetRaidLevel(int value) { m_raidLevelHasBeenSet = true; m_raidLevel = value; }
    inline RaidArray& WithRaidLevel(int value) { SetRaidLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of disks in the array.</p>
     */
    inline int GetNumberOfDisks() const { return m_numberOfDisks; }
    inline bool NumberOfDisksHasBeenSet() const { return m_numberOfDisksHasBeenSet; }
    inline void SetNumberOfDisks(int value) { m_numberOfDisksHasBeenSet = true; m_numberOfDisks = value; }
    inline RaidArray& WithNumberOfDisks(int value) { SetNumberOfDisks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array's size.</p>
     */
    inline int GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }
    inline RaidArray& WithSize(int value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array's Linux device. For example /dev/mdadm0.</p>
     */
    inline const Aws::String& GetDevice() const { return m_device; }
    inline bool DeviceHasBeenSet() const { return m_deviceHasBeenSet; }
    template<typename DeviceT = Aws::String>
    void SetDevice(DeviceT&& value) { m_deviceHasBeenSet = true; m_device = std::forward<DeviceT>(value); }
    template<typename DeviceT = Aws::String>
    RaidArray& WithDevice(DeviceT&& value) { SetDevice(std::forward<DeviceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array's mount point.</p>
     */
    inline const Aws::String& GetMountPoint() const { return m_mountPoint; }
    inline bool MountPointHasBeenSet() const { return m_mountPointHasBeenSet; }
    template<typename MountPointT = Aws::String>
    void SetMountPoint(MountPointT&& value) { m_mountPointHasBeenSet = true; m_mountPoint = std::forward<MountPointT>(value); }
    template<typename MountPointT = Aws::String>
    RaidArray& WithMountPoint(MountPointT&& value) { SetMountPoint(std::forward<MountPointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array's Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    RaidArray& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the RAID array was created.</p>
     */
    inline const Aws::String& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::String>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::String>
    RaidArray& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    RaidArray& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume type, standard or PIOPS.</p>
     */
    inline const Aws::String& GetVolumeType() const { return m_volumeType; }
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
    template<typename VolumeTypeT = Aws::String>
    void SetVolumeType(VolumeTypeT&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::forward<VolumeTypeT>(value); }
    template<typename VolumeTypeT = Aws::String>
    RaidArray& WithVolumeType(VolumeTypeT&& value) { SetVolumeType(std::forward<VolumeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For PIOPS volumes, the IOPS per disk.</p>
     */
    inline int GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline RaidArray& WithIops(int value) { SetIops(value); return *this;}
    ///@}
  private:

    Aws::String m_raidArrayId;
    bool m_raidArrayIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_raidLevel{0};
    bool m_raidLevelHasBeenSet = false;

    int m_numberOfDisks{0};
    bool m_numberOfDisksHasBeenSet = false;

    int m_size{0};
    bool m_sizeHasBeenSet = false;

    Aws::String m_device;
    bool m_deviceHasBeenSet = false;

    Aws::String m_mountPoint;
    bool m_mountPointHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet = false;

    int m_iops{0};
    bool m_iopsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
