/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/model/VolumeTypeEnum.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace WorkspacesInstances {
namespace Model {

/**
 * <p>Defines configuration for an Elastic Block Store volume.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/EbsBlockDevice">AWS
 * API Reference</a></p>
 */
class EbsBlockDevice {
 public:
  AWS_WORKSPACESINSTANCES_API EbsBlockDevice() = default;
  AWS_WORKSPACESINSTANCES_API EbsBlockDevice(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_WORKSPACESINSTANCES_API EbsBlockDevice& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_WORKSPACESINSTANCES_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Type of EBS volume (e.g., gp2, io1).</p>
   */
  inline VolumeTypeEnum GetVolumeType() const { return m_volumeType; }
  inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
  inline void SetVolumeType(VolumeTypeEnum value) {
    m_volumeTypeHasBeenSet = true;
    m_volumeType = value;
  }
  inline EbsBlockDevice& WithVolumeType(VolumeTypeEnum value) {
    SetVolumeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates if the volume is encrypted.</p>
   */
  inline bool GetEncrypted() const { return m_encrypted; }
  inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
  inline void SetEncrypted(bool value) {
    m_encryptedHasBeenSet = true;
    m_encrypted = value;
  }
  inline EbsBlockDevice& WithEncrypted(bool value) {
    SetEncrypted(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>KMS key used for volume encryption.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  EbsBlockDevice& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Input/output operations per second for the volume.</p>
   */
  inline int64_t GetIops() const { return m_iops; }
  inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
  inline void SetIops(int64_t value) {
    m_iopsHasBeenSet = true;
    m_iops = value;
  }
  inline EbsBlockDevice& WithIops(int64_t value) {
    SetIops(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Volume data transfer rate.</p>
   */
  inline int64_t GetThroughput() const { return m_throughput; }
  inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }
  inline void SetThroughput(int64_t value) {
    m_throughputHasBeenSet = true;
    m_throughput = value;
  }
  inline EbsBlockDevice& WithThroughput(int64_t value) {
    SetThroughput(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Size of the EBS volume in gigabytes.</p>
   */
  inline int64_t GetVolumeSize() const { return m_volumeSize; }
  inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }
  inline void SetVolumeSize(int64_t value) {
    m_volumeSizeHasBeenSet = true;
    m_volumeSize = value;
  }
  inline EbsBlockDevice& WithVolumeSize(int64_t value) {
    SetVolumeSize(value);
    return *this;
  }
  ///@}
 private:
  VolumeTypeEnum m_volumeType{VolumeTypeEnum::NOT_SET};

  bool m_encrypted{false};

  Aws::String m_kmsKeyId;

  int64_t m_iops{0};

  int64_t m_throughput{0};

  int64_t m_volumeSize{0};
  bool m_volumeTypeHasBeenSet = false;
  bool m_encryptedHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_iopsHasBeenSet = false;
  bool m_throughputHasBeenSet = false;
  bool m_volumeSizeHasBeenSet = false;
};

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
