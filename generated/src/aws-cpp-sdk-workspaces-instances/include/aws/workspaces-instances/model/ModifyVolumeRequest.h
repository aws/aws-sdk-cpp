/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-instances/WorkspacesInstancesRequest.h>
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/model/VolumeTypeEnum.h>

#include <utility>

namespace Aws {
namespace WorkspacesInstances {
namespace Model {

/**
 * <p>Contains the parameters for modifying a volume, including the target size,
 * volume type, IOPS, or throughput.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/ModifyVolumeRequest">AWS
 * API Reference</a></p>
 */
class ModifyVolumeRequest : public WorkspacesInstancesRequest {
 public:
  AWS_WORKSPACESINSTANCES_API ModifyVolumeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ModifyVolume"; }

  AWS_WORKSPACESINSTANCES_API Aws::String SerializePayload() const override;

  AWS_WORKSPACESINSTANCES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Specifies the identifier of the volume to modify.</p>
   */
  inline const Aws::String& GetVolumeId() const { return m_volumeId; }
  inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
  template <typename VolumeIdT = Aws::String>
  void SetVolumeId(VolumeIdT&& value) {
    m_volumeIdHasBeenSet = true;
    m_volumeId = std::forward<VolumeIdT>(value);
  }
  template <typename VolumeIdT = Aws::String>
  ModifyVolumeRequest& WithVolumeId(VolumeIdT&& value) {
    SetVolumeId(std::forward<VolumeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the target size of the volume, in GiB. The target size must be
   * greater than or equal to the current size of the volume. If you don't specify a
   * size, the current size is retained.</p>
   */
  inline int GetSizeInGB() const { return m_sizeInGB; }
  inline bool SizeInGBHasBeenSet() const { return m_sizeInGBHasBeenSet; }
  inline void SetSizeInGB(int value) {
    m_sizeInGBHasBeenSet = true;
    m_sizeInGB = value;
  }
  inline ModifyVolumeRequest& WithSizeInGB(int value) {
    SetSizeInGB(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the target Amazon Elastic Block Store (Amazon EBS) volume type. If
   * you don't specify a volume type, the current volume type is retained.</p>
   */
  inline VolumeTypeEnum GetVolumeType() const { return m_volumeType; }
  inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
  inline void SetVolumeType(VolumeTypeEnum value) {
    m_volumeTypeHasBeenSet = true;
    m_volumeType = value;
  }
  inline ModifyVolumeRequest& WithVolumeType(VolumeTypeEnum value) {
    SetVolumeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the target IOPS rate of the volume. This parameter is valid only
   * for <code>gp3</code>, <code>io1</code>, and <code>io2</code> volumes. If you
   * don't specify IOPS and keep the same volume type, the current IOPS rate is
   * retained.</p>
   */
  inline int GetIops() const { return m_iops; }
  inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
  inline void SetIops(int value) {
    m_iopsHasBeenSet = true;
    m_iops = value;
  }
  inline ModifyVolumeRequest& WithIops(int value) {
    SetIops(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the target throughput of the volume, in MiB/s. This parameter is
   * valid only for <code>gp3</code> volumes. If you don't specify throughput and the
   * volume remains <code>gp3</code>, the current throughput is retained.</p>
   */
  inline int GetThroughput() const { return m_throughput; }
  inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }
  inline void SetThroughput(int value) {
    m_throughputHasBeenSet = true;
    m_throughput = value;
  }
  inline ModifyVolumeRequest& WithThroughput(int value) {
    SetThroughput(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique token to ensure idempotent volume modification, preventing duplicate
   * volume modifications.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  ModifyVolumeRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_volumeId;

  int m_sizeInGB{0};

  VolumeTypeEnum m_volumeType{VolumeTypeEnum::NOT_SET};

  int m_iops{0};

  int m_throughput{0};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_volumeIdHasBeenSet = false;
  bool m_sizeInGBHasBeenSet = false;
  bool m_volumeTypeHasBeenSet = false;
  bool m_iopsHasBeenSet = false;
  bool m_throughputHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
