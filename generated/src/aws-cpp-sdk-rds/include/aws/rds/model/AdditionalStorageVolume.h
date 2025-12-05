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
 * <p>Contains details about an additional storage volume for a DB instance. RDS
 * support additional storage volumes for RDS for Oracle and RDS for SQL
 * Server.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AdditionalStorageVolume">AWS
 * API Reference</a></p>
 */
class AdditionalStorageVolume {
 public:
  AWS_RDS_API AdditionalStorageVolume() = default;
  AWS_RDS_API AdditionalStorageVolume(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RDS_API AdditionalStorageVolume& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The name of the additional storage volume.</p> <p>Valid Values:
   * <code>RDSDBDATA2 | RDSDBDATA3 | RDSDBDATA4</code> </p>
   */
  inline const Aws::String& GetVolumeName() const { return m_volumeName; }
  inline bool VolumeNameHasBeenSet() const { return m_volumeNameHasBeenSet; }
  template <typename VolumeNameT = Aws::String>
  void SetVolumeName(VolumeNameT&& value) {
    m_volumeNameHasBeenSet = true;
    m_volumeName = std::forward<VolumeNameT>(value);
  }
  template <typename VolumeNameT = Aws::String>
  AdditionalStorageVolume& WithVolumeName(VolumeNameT&& value) {
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
  inline AdditionalStorageVolume& WithAllocatedStorage(int value) {
    SetAllocatedStorage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of I/O operations per second (IOPS) provisioned for the additional
   * storage volume.</p>
   */
  inline int GetIOPS() const { return m_iOPS; }
  inline bool IOPSHasBeenSet() const { return m_iOPSHasBeenSet; }
  inline void SetIOPS(int value) {
    m_iOPSHasBeenSet = true;
    m_iOPS = value;
  }
  inline AdditionalStorageVolume& WithIOPS(int value) {
    SetIOPS(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The upper limit in gibibytes (GiB) to which RDS can automatically scale the
   * storage of the additional storage volume.</p>
   */
  inline int GetMaxAllocatedStorage() const { return m_maxAllocatedStorage; }
  inline bool MaxAllocatedStorageHasBeenSet() const { return m_maxAllocatedStorageHasBeenSet; }
  inline void SetMaxAllocatedStorage(int value) {
    m_maxAllocatedStorageHasBeenSet = true;
    m_maxAllocatedStorage = value;
  }
  inline AdditionalStorageVolume& WithMaxAllocatedStorage(int value) {
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
  inline AdditionalStorageVolume& WithStorageThroughput(int value) {
    SetStorageThroughput(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The storage type for the additional storage volume.</p> <p>Valid Values:
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
  AdditionalStorageVolume& WithStorageType(StorageTypeT&& value) {
    SetStorageType(std::forward<StorageTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_volumeName;

  int m_allocatedStorage{0};

  int m_iOPS{0};

  int m_maxAllocatedStorage{0};

  int m_storageThroughput{0};

  Aws::String m_storageType;
  bool m_volumeNameHasBeenSet = false;
  bool m_allocatedStorageHasBeenSet = false;
  bool m_iOPSHasBeenSet = false;
  bool m_maxAllocatedStorageHasBeenSet = false;
  bool m_storageThroughputHasBeenSet = false;
  bool m_storageTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
