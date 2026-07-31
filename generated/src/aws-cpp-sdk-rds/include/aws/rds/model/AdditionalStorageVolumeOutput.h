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
 * <p>Contains information about an additional storage volume for a DB
 * instance.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AdditionalStorageVolumeOutput">AWS
 * API Reference</a></p>
 */
class AdditionalStorageVolumeOutput {
 public:
  AWS_RDS_API AdditionalStorageVolumeOutput() = default;
  AWS_RDS_API AdditionalStorageVolumeOutput(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RDS_API AdditionalStorageVolumeOutput& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The name of the additional storage volume.</p>
   */
  inline const Aws::String& GetVolumeName() const { return m_volumeName; }
  inline bool VolumeNameHasBeenSet() const { return m_volumeNameHasBeenSet; }
  template <typename VolumeNameT = Aws::String>
  void SetVolumeName(VolumeNameT&& value) {
    m_volumeNameHasBeenSet = true;
    m_volumeName = std::forward<VolumeNameT>(value);
  }
  template <typename VolumeNameT = Aws::String>
  AdditionalStorageVolumeOutput& WithVolumeName(VolumeNameT&& value) {
    SetVolumeName(std::forward<VolumeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the additional storage volume.</p> <p>Valid Values:
   * <code>ACTIVE | CREATING | DELETING | MODIFYING | NOT-IN-USE |
   * STORAGE-OPTIMIZATION | VOLUME-FULL</code> </p>
   */
  inline const Aws::String& GetStorageVolumeStatus() const { return m_storageVolumeStatus; }
  inline bool StorageVolumeStatusHasBeenSet() const { return m_storageVolumeStatusHasBeenSet; }
  template <typename StorageVolumeStatusT = Aws::String>
  void SetStorageVolumeStatus(StorageVolumeStatusT&& value) {
    m_storageVolumeStatusHasBeenSet = true;
    m_storageVolumeStatus = std::forward<StorageVolumeStatusT>(value);
  }
  template <typename StorageVolumeStatusT = Aws::String>
  AdditionalStorageVolumeOutput& WithStorageVolumeStatus(StorageVolumeStatusT&& value) {
    SetStorageVolumeStatus(std::forward<StorageVolumeStatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of an in-progress storage operation on the additional storage
   * volume. This field appears only while a storage operation is in progress. It
   * isn't present when no storage operation is active. Possible values:</p> <ul>
   * <li> <p> <code>Initializing</code> - The volume is initializing from a snapshot,
   * such as during a snapshot restore, point-in-time restore, read replica creation,
   * or blue/green deployment. Performance can be lower than provisioned until
   * initialization completes.</p> </li> <li> <p> <code>Optimizing</code> - The
   * volume is optimizing following a storage scaling or modification operation.</p>
   * </li> </ul>
   */
  inline const Aws::String& GetStorageOperationStatus() const { return m_storageOperationStatus; }
  inline bool StorageOperationStatusHasBeenSet() const { return m_storageOperationStatusHasBeenSet; }
  template <typename StorageOperationStatusT = Aws::String>
  void SetStorageOperationStatus(StorageOperationStatusT&& value) {
    m_storageOperationStatusHasBeenSet = true;
    m_storageOperationStatus = std::forward<StorageOperationStatusT>(value);
  }
  template <typename StorageOperationStatusT = Aws::String>
  AdditionalStorageVolumeOutput& WithStorageOperationStatus(StorageOperationStatusT&& value) {
    SetStorageOperationStatus(std::forward<StorageOperationStatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of the in-progress storage operation on the additional storage
   * volume that has completed, from <code>0</code> to <code>100</code>. This field
   * appears only while a storage operation is in progress. It isn't present when no
   * storage operation is active.</p>
   */
  inline int GetStorageOperationPercentProgress() const { return m_storageOperationPercentProgress; }
  inline bool StorageOperationPercentProgressHasBeenSet() const { return m_storageOperationPercentProgressHasBeenSet; }
  inline void SetStorageOperationPercentProgress(int value) {
    m_storageOperationPercentProgressHasBeenSet = true;
    m_storageOperationPercentProgress = value;
  }
  inline AdditionalStorageVolumeOutput& WithStorageOperationPercentProgress(int value) {
    SetStorageOperationPercentProgress(value);
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
  inline AdditionalStorageVolumeOutput& WithAllocatedStorage(int value) {
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
  inline AdditionalStorageVolumeOutput& WithIOPS(int value) {
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
  inline AdditionalStorageVolumeOutput& WithMaxAllocatedStorage(int value) {
    SetMaxAllocatedStorage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The storage throughput value for the additional storage volume, in mebibytes
   * per second (MiBps).</p>
   */
  inline int GetStorageThroughput() const { return m_storageThroughput; }
  inline bool StorageThroughputHasBeenSet() const { return m_storageThroughputHasBeenSet; }
  inline void SetStorageThroughput(int value) {
    m_storageThroughputHasBeenSet = true;
    m_storageThroughput = value;
  }
  inline AdditionalStorageVolumeOutput& WithStorageThroughput(int value) {
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
  AdditionalStorageVolumeOutput& WithStorageType(StorageTypeT&& value) {
    SetStorageType(std::forward<StorageTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_volumeName;

  Aws::String m_storageVolumeStatus;

  Aws::String m_storageOperationStatus;

  int m_storageOperationPercentProgress{0};

  int m_allocatedStorage{0};

  int m_iOPS{0};

  int m_maxAllocatedStorage{0};

  int m_storageThroughput{0};

  Aws::String m_storageType;
  bool m_volumeNameHasBeenSet = false;
  bool m_storageVolumeStatusHasBeenSet = false;
  bool m_storageOperationStatusHasBeenSet = false;
  bool m_storageOperationPercentProgressHasBeenSet = false;
  bool m_allocatedStorageHasBeenSet = false;
  bool m_iOPSHasBeenSet = false;
  bool m_maxAllocatedStorageHasBeenSet = false;
  bool m_storageThroughputHasBeenSet = false;
  bool m_storageTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
