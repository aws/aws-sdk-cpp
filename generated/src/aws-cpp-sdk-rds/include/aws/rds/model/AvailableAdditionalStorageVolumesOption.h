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
 * <p>Contains the available options for additional storage volumes for a DB
 * instance class.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AvailableAdditionalStorageVolumesOption">AWS
 * API Reference</a></p>
 */
class AvailableAdditionalStorageVolumesOption {
 public:
  AWS_RDS_API AvailableAdditionalStorageVolumesOption() = default;
  AWS_RDS_API AvailableAdditionalStorageVolumesOption(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RDS_API AvailableAdditionalStorageVolumesOption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>Indicates whether the additional storage volume supports storage
   * autoscaling.</p>
   */
  inline bool GetSupportsStorageAutoscaling() const { return m_supportsStorageAutoscaling; }
  inline bool SupportsStorageAutoscalingHasBeenSet() const { return m_supportsStorageAutoscalingHasBeenSet; }
  inline void SetSupportsStorageAutoscaling(bool value) {
    m_supportsStorageAutoscalingHasBeenSet = true;
    m_supportsStorageAutoscaling = value;
  }
  inline AvailableAdditionalStorageVolumesOption& WithSupportsStorageAutoscaling(bool value) {
    SetSupportsStorageAutoscaling(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the additional storage volume supports configurable storage
   * throughput.</p>
   */
  inline bool GetSupportsStorageThroughput() const { return m_supportsStorageThroughput; }
  inline bool SupportsStorageThroughputHasBeenSet() const { return m_supportsStorageThroughputHasBeenSet; }
  inline void SetSupportsStorageThroughput(bool value) {
    m_supportsStorageThroughputHasBeenSet = true;
    m_supportsStorageThroughput = value;
  }
  inline AvailableAdditionalStorageVolumesOption& WithSupportsStorageThroughput(bool value) {
    SetSupportsStorageThroughput(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the additional storage volume supports provisioned
   * IOPS.</p>
   */
  inline bool GetSupportsIops() const { return m_supportsIops; }
  inline bool SupportsIopsHasBeenSet() const { return m_supportsIopsHasBeenSet; }
  inline void SetSupportsIops(bool value) {
    m_supportsIopsHasBeenSet = true;
    m_supportsIops = value;
  }
  inline AvailableAdditionalStorageVolumesOption& WithSupportsIops(bool value) {
    SetSupportsIops(value);
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
  AvailableAdditionalStorageVolumesOption& WithStorageType(StorageTypeT&& value) {
    SetStorageType(std::forward<StorageTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum amount of storage that you can allocate for the additional
   * storage volume, in gibibytes (GiB).</p>
   */
  inline int GetMinStorageSize() const { return m_minStorageSize; }
  inline bool MinStorageSizeHasBeenSet() const { return m_minStorageSizeHasBeenSet; }
  inline void SetMinStorageSize(int value) {
    m_minStorageSizeHasBeenSet = true;
    m_minStorageSize = value;
  }
  inline AvailableAdditionalStorageVolumesOption& WithMinStorageSize(int value) {
    SetMinStorageSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum amount of storage that you can allocate for the additional
   * storage volume, in gibibytes (GiB).</p>
   */
  inline int GetMaxStorageSize() const { return m_maxStorageSize; }
  inline bool MaxStorageSizeHasBeenSet() const { return m_maxStorageSizeHasBeenSet; }
  inline void SetMaxStorageSize(int value) {
    m_maxStorageSizeHasBeenSet = true;
    m_maxStorageSize = value;
  }
  inline AvailableAdditionalStorageVolumesOption& WithMaxStorageSize(int value) {
    SetMaxStorageSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum number of I/O operations per second (IOPS) that the additional
   * storage volume supports.</p>
   */
  inline int GetMinIops() const { return m_minIops; }
  inline bool MinIopsHasBeenSet() const { return m_minIopsHasBeenSet; }
  inline void SetMinIops(int value) {
    m_minIopsHasBeenSet = true;
    m_minIops = value;
  }
  inline AvailableAdditionalStorageVolumesOption& WithMinIops(int value) {
    SetMinIops(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of I/O operations per second (IOPS) that the additional
   * storage volume supports.</p>
   */
  inline int GetMaxIops() const { return m_maxIops; }
  inline bool MaxIopsHasBeenSet() const { return m_maxIopsHasBeenSet; }
  inline void SetMaxIops(int value) {
    m_maxIopsHasBeenSet = true;
    m_maxIops = value;
  }
  inline AvailableAdditionalStorageVolumesOption& WithMaxIops(int value) {
    SetMaxIops(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum ratio of I/O operations per second (IOPS) to gibibytes (GiB) of
   * storage for the additional storage volume.</p>
   */
  inline double GetMinIopsPerGib() const { return m_minIopsPerGib; }
  inline bool MinIopsPerGibHasBeenSet() const { return m_minIopsPerGibHasBeenSet; }
  inline void SetMinIopsPerGib(double value) {
    m_minIopsPerGibHasBeenSet = true;
    m_minIopsPerGib = value;
  }
  inline AvailableAdditionalStorageVolumesOption& WithMinIopsPerGib(double value) {
    SetMinIopsPerGib(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum ratio of I/O operations per second (IOPS) to gibibytes (GiB) of
   * storage for the additional storage volume.</p>
   */
  inline double GetMaxIopsPerGib() const { return m_maxIopsPerGib; }
  inline bool MaxIopsPerGibHasBeenSet() const { return m_maxIopsPerGibHasBeenSet; }
  inline void SetMaxIopsPerGib(double value) {
    m_maxIopsPerGibHasBeenSet = true;
    m_maxIopsPerGib = value;
  }
  inline AvailableAdditionalStorageVolumesOption& WithMaxIopsPerGib(double value) {
    SetMaxIopsPerGib(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum storage throughput that the additional storage volume supports,
   * in mebibytes per second (MiBps).</p>
   */
  inline int GetMinStorageThroughput() const { return m_minStorageThroughput; }
  inline bool MinStorageThroughputHasBeenSet() const { return m_minStorageThroughputHasBeenSet; }
  inline void SetMinStorageThroughput(int value) {
    m_minStorageThroughputHasBeenSet = true;
    m_minStorageThroughput = value;
  }
  inline AvailableAdditionalStorageVolumesOption& WithMinStorageThroughput(int value) {
    SetMinStorageThroughput(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum storage throughput that the additional storage volume supports,
   * in mebibytes per second (MiBps).</p>
   */
  inline int GetMaxStorageThroughput() const { return m_maxStorageThroughput; }
  inline bool MaxStorageThroughputHasBeenSet() const { return m_maxStorageThroughputHasBeenSet; }
  inline void SetMaxStorageThroughput(int value) {
    m_maxStorageThroughputHasBeenSet = true;
    m_maxStorageThroughput = value;
  }
  inline AvailableAdditionalStorageVolumesOption& WithMaxStorageThroughput(int value) {
    SetMaxStorageThroughput(value);
    return *this;
  }
  ///@}
 private:
  bool m_supportsStorageAutoscaling{false};

  bool m_supportsStorageThroughput{false};

  bool m_supportsIops{false};

  Aws::String m_storageType;

  int m_minStorageSize{0};

  int m_maxStorageSize{0};

  int m_minIops{0};

  int m_maxIops{0};

  double m_minIopsPerGib{0.0};

  double m_maxIopsPerGib{0.0};

  int m_minStorageThroughput{0};

  int m_maxStorageThroughput{0};
  bool m_supportsStorageAutoscalingHasBeenSet = false;
  bool m_supportsStorageThroughputHasBeenSet = false;
  bool m_supportsIopsHasBeenSet = false;
  bool m_storageTypeHasBeenSet = false;
  bool m_minStorageSizeHasBeenSet = false;
  bool m_maxStorageSizeHasBeenSet = false;
  bool m_minIopsHasBeenSet = false;
  bool m_maxIopsHasBeenSet = false;
  bool m_minIopsPerGibHasBeenSet = false;
  bool m_maxIopsPerGibHasBeenSet = false;
  bool m_minStorageThroughputHasBeenSet = false;
  bool m_maxStorageThroughputHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
