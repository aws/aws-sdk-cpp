/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/RDS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace RDS {
namespace Model {

/**
 * <p>Contains details about the modification of an additional storage
 * volume.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyAdditionalStorageVolume">AWS
 * API Reference</a></p>
 */
class ModifyAdditionalStorageVolume {
 public:
  AWS_RDS_API ModifyAdditionalStorageVolume() = default;
  AWS_RDS_API ModifyAdditionalStorageVolume(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RDS_API ModifyAdditionalStorageVolume& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The name of the additional storage volume that you want to modify.</p>
   * <p>Valid Values: <code>RDSDBDATA2 | RDSDBDATA3 | RDSDBDATA4</code> </p>
   */
  inline const Aws::String& GetVolumeName() const { return m_volumeName; }
  inline bool VolumeNameHasBeenSet() const { return m_volumeNameHasBeenSet; }
  template <typename VolumeNameT = Aws::String>
  void SetVolumeName(VolumeNameT&& value) {
    m_volumeNameHasBeenSet = true;
    m_volumeName = std::forward<VolumeNameT>(value);
  }
  template <typename VolumeNameT = Aws::String>
  ModifyAdditionalStorageVolume& WithVolumeName(VolumeNameT&& value) {
    SetVolumeName(std::forward<VolumeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of storage allocated for the additional storage volume, in
   * gibibytes (GiB). The minimum is 20 GiB. The maximum is 65,536 GiB (64 TiB).</p>
   */
  inline int GetAllocatedStorage() const { return m_allocatedStorage; }
  inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
  inline void SetAllocatedStorage(int value) {
    m_allocatedStorageHasBeenSet = true;
    m_allocatedStorage = value;
  }
  inline ModifyAdditionalStorageVolume& WithAllocatedStorage(int value) {
    SetAllocatedStorage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of I/O operations per second (IOPS) provisioned for the additional
   * storage volume. This setting is only supported for Provisioned IOPS SSD
   * (<code>io1</code> and <code>io2</code>) storage types.</p>
   */
  inline int GetIOPS() const { return m_iOPS; }
  inline bool IOPSHasBeenSet() const { return m_iOPSHasBeenSet; }
  inline void SetIOPS(int value) {
    m_iOPSHasBeenSet = true;
    m_iOPS = value;
  }
  inline ModifyAdditionalStorageVolume& WithIOPS(int value) {
    SetIOPS(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The upper limit in gibibytes (GiB) to which RDS can automatically scale the
   * storage of the additional storage volume. You must provide a value greater than
   * or equal to <code>AllocatedStorage</code>.</p>
   */
  inline int GetMaxAllocatedStorage() const { return m_maxAllocatedStorage; }
  inline bool MaxAllocatedStorageHasBeenSet() const { return m_maxAllocatedStorageHasBeenSet; }
  inline void SetMaxAllocatedStorage(int value) {
    m_maxAllocatedStorageHasBeenSet = true;
    m_maxAllocatedStorage = value;
  }
  inline ModifyAdditionalStorageVolume& WithMaxAllocatedStorage(int value) {
    SetMaxAllocatedStorage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The storage throughput value for the additional storage volume, in mebibytes
   * per second (MiBps). This setting applies only to the General Purpose SSD
   * (<code>gp3</code>) storage type.</p>
   */
  inline int GetStorageThroughput() const { return m_storageThroughput; }
  inline bool StorageThroughputHasBeenSet() const { return m_storageThroughputHasBeenSet; }
  inline void SetStorageThroughput(int value) {
    m_storageThroughputHasBeenSet = true;
    m_storageThroughput = value;
  }
  inline ModifyAdditionalStorageVolume& WithStorageThroughput(int value) {
    SetStorageThroughput(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new storage type for the additional storage volume.</p> <p>Valid Values:
   * <code>GP3 | IO2</code> </p>
   */
  inline const Aws::String& GetStorageType() const { return m_storageType; }
  inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
  template <typename StorageTypeT = Aws::String>
  void SetStorageType(StorageTypeT&& value) {
    m_storageTypeHasBeenSet = true;
    m_storageType = std::forward<StorageTypeT>(value);
  }
  template <typename StorageTypeT = Aws::String>
  ModifyAdditionalStorageVolume& WithStorageType(StorageTypeT&& value) {
    SetStorageType(std::forward<StorageTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether to delete the additional storage volume. The value
   * <code>true</code> schedules the volume for deletion. You can delete an
   * additional storage volume only when it doesn't contain database files or other
   * data.</p>
   */
  inline bool GetSetForDelete() const { return m_setForDelete; }
  inline bool SetForDeleteHasBeenSet() const { return m_setForDeleteHasBeenSet; }
  inline void SetSetForDelete(bool value) {
    m_setForDeleteHasBeenSet = true;
    m_setForDelete = value;
  }
  inline ModifyAdditionalStorageVolume& WithSetForDelete(bool value) {
    SetSetForDelete(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_volumeName;
  bool m_volumeNameHasBeenSet = false;

  int m_allocatedStorage{0};
  bool m_allocatedStorageHasBeenSet = false;

  int m_iOPS{0};
  bool m_iOPSHasBeenSet = false;

  int m_maxAllocatedStorage{0};
  bool m_maxAllocatedStorageHasBeenSet = false;

  int m_storageThroughput{0};
  bool m_storageThroughputHasBeenSet = false;

  Aws::String m_storageType;
  bool m_storageTypeHasBeenSet = false;

  bool m_setForDelete{false};
  bool m_setForDeleteHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
