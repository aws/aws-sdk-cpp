/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/DeleteOnTermination.h>
#include <aws/mgn/model/VolumeType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>Contains the Amazon Elastic Block Store (Amazon EBS) volume configuration for
 * the disk mappings created later in the source server's Amazon Elastic Compute
 * Cloud (Amazon EC2) launch template. Fields that aren't set get the service's
 * default values.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/SourceServerVolumeConfiguration">AWS
 * API Reference</a></p>
 */
class SourceServerVolumeConfiguration {
 public:
  AWS_MGN_API SourceServerVolumeConfiguration() = default;
  AWS_MGN_API SourceServerVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API SourceServerVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>EBS volume type.</p>
   */
  inline VolumeType GetVolumeType() const { return m_volumeType; }
  inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
  inline void SetVolumeType(VolumeType value) {
    m_volumeTypeHasBeenSet = true;
    m_volumeType = value;
  }
  inline SourceServerVolumeConfiguration& WithVolumeType(VolumeType value) {
    SetVolumeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provisioned IOPS, for io1, io2 and gp3 volumes.</p>
   */
  inline long long GetIops() const { return m_iops; }
  inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
  inline void SetIops(long long value) {
    m_iopsHasBeenSet = true;
    m_iops = value;
  }
  inline SourceServerVolumeConfiguration& WithIops(long long value) {
    SetIops(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Throughput in MiB/s, for gp3 volumes only.</p>
   */
  inline long long GetThroughput() const { return m_throughput; }
  inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }
  inline void SetThroughput(long long value) {
    m_throughputHasBeenSet = true;
    m_throughput = value;
  }
  inline SourceServerVolumeConfiguration& WithThroughput(long long value) {
    SetThroughput(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provisioned rate for volume initialization, in MiB/s.</p>
   */
  inline long long GetVolumeInitializationRate() const { return m_volumeInitializationRate; }
  inline bool VolumeInitializationRateHasBeenSet() const { return m_volumeInitializationRateHasBeenSet; }
  inline void SetVolumeInitializationRate(long long value) {
    m_volumeInitializationRateHasBeenSet = true;
    m_volumeInitializationRate = value;
  }
  inline SourceServerVolumeConfiguration& WithVolumeInitializationRate(long long value) {
    SetVolumeInitializationRate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the volume is deleted when the launched instance
   * terminates.</p>
   */
  inline DeleteOnTermination GetDeleteOnTermination() const { return m_deleteOnTermination; }
  inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }
  inline void SetDeleteOnTermination(DeleteOnTermination value) {
    m_deleteOnTerminationHasBeenSet = true;
    m_deleteOnTermination = value;
  }
  inline SourceServerVolumeConfiguration& WithDeleteOnTermination(DeleteOnTermination value) {
    SetDeleteOnTermination(value);
    return *this;
  }
  ///@}
 private:
  VolumeType m_volumeType{VolumeType::NOT_SET};

  long long m_iops{0};

  long long m_throughput{0};

  long long m_volumeInitializationRate{0};

  DeleteOnTermination m_deleteOnTermination{DeleteOnTermination::NOT_SET};
  bool m_volumeTypeHasBeenSet = false;
  bool m_iopsHasBeenSet = false;
  bool m_throughputHasBeenSet = false;
  bool m_volumeInitializationRateHasBeenSet = false;
  bool m_deleteOnTerminationHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
