/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/WorkspacesInstancesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-instances/model/VolumeTypeEnum.h>
#include <aws/workspaces-instances/model/TagSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{

  /**
   * <p>Specifies volume creation parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/CreateVolumeRequest">AWS
   * API Reference</a></p>
   */
  class CreateVolumeRequest : public WorkspacesInstancesRequest
  {
  public:
    AWS_WORKSPACESINSTANCES_API CreateVolumeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVolume"; }

    AWS_WORKSPACESINSTANCES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACESINSTANCES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Availability zone for the volume.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    CreateVolumeRequest& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique token to prevent duplicate volume creation.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateVolumeRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the volume should be encrypted.</p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline CreateVolumeRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input/output operations per second for the volume.</p>
     */
    inline int GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline CreateVolumeRequest& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>KMS key for volume encryption.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CreateVolumeRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Volume size in gigabytes.</p>
     */
    inline int GetSizeInGB() const { return m_sizeInGB; }
    inline bool SizeInGBHasBeenSet() const { return m_sizeInGBHasBeenSet; }
    inline void SetSizeInGB(int value) { m_sizeInGBHasBeenSet = true; m_sizeInGB = value; }
    inline CreateVolumeRequest& WithSizeInGB(int value) { SetSizeInGB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source snapshot for volume creation.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    CreateVolumeRequest& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata tags for the volume.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateVolumeRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateVolumeRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Volume throughput performance.</p>
     */
    inline int GetThroughput() const { return m_throughput; }
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }
    inline void SetThroughput(int value) { m_throughputHasBeenSet = true; m_throughput = value; }
    inline CreateVolumeRequest& WithThroughput(int value) { SetThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of EBS volume.</p>
     */
    inline VolumeTypeEnum GetVolumeType() const { return m_volumeType; }
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
    inline void SetVolumeType(VolumeTypeEnum value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }
    inline CreateVolumeRequest& WithVolumeType(VolumeTypeEnum value) { SetVolumeType(value); return *this;}
    ///@}
  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    int m_iops{0};
    bool m_iopsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    int m_sizeInGB{0};
    bool m_sizeInGBHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    int m_throughput{0};
    bool m_throughputHasBeenSet = false;

    VolumeTypeEnum m_volumeType{VolumeTypeEnum::NOT_SET};
    bool m_volumeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
