﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/Tag.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class CreateSnapshotFromVolumeRecoveryPointRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API CreateSnapshotFromVolumeRecoveryPointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSnapshotFromVolumeRecoveryPoint"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the iSCSI volume target. Use the
     * <a>DescribeStorediSCSIVolumes</a> operation to return to retrieve the TargetARN
     * for specified VolumeARN.</p>
     */
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }
    inline bool VolumeARNHasBeenSet() const { return m_volumeARNHasBeenSet; }
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARNHasBeenSet = true; m_volumeARN = value; }
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARNHasBeenSet = true; m_volumeARN = std::move(value); }
    inline void SetVolumeARN(const char* value) { m_volumeARNHasBeenSet = true; m_volumeARN.assign(value); }
    inline CreateSnapshotFromVolumeRecoveryPointRequest& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}
    inline CreateSnapshotFromVolumeRecoveryPointRequest& WithVolumeARN(Aws::String&& value) { SetVolumeARN(std::move(value)); return *this;}
    inline CreateSnapshotFromVolumeRecoveryPointRequest& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Textual description of the snapshot that appears in the Amazon EC2 console,
     * Elastic Block Store snapshots panel in the <b>Description</b> field, and in the
     * Storage Gateway snapshot <b>Details</b> pane, <b>Description</b> field.</p>
     */
    inline const Aws::String& GetSnapshotDescription() const{ return m_snapshotDescription; }
    inline bool SnapshotDescriptionHasBeenSet() const { return m_snapshotDescriptionHasBeenSet; }
    inline void SetSnapshotDescription(const Aws::String& value) { m_snapshotDescriptionHasBeenSet = true; m_snapshotDescription = value; }
    inline void SetSnapshotDescription(Aws::String&& value) { m_snapshotDescriptionHasBeenSet = true; m_snapshotDescription = std::move(value); }
    inline void SetSnapshotDescription(const char* value) { m_snapshotDescriptionHasBeenSet = true; m_snapshotDescription.assign(value); }
    inline CreateSnapshotFromVolumeRecoveryPointRequest& WithSnapshotDescription(const Aws::String& value) { SetSnapshotDescription(value); return *this;}
    inline CreateSnapshotFromVolumeRecoveryPointRequest& WithSnapshotDescription(Aws::String&& value) { SetSnapshotDescription(std::move(value)); return *this;}
    inline CreateSnapshotFromVolumeRecoveryPointRequest& WithSnapshotDescription(const char* value) { SetSnapshotDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to 50 tags that can be assigned to a snapshot. Each tag is a
     * key-value pair.</p>  <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateSnapshotFromVolumeRecoveryPointRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateSnapshotFromVolumeRecoveryPointRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateSnapshotFromVolumeRecoveryPointRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateSnapshotFromVolumeRecoveryPointRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_volumeARN;
    bool m_volumeARNHasBeenSet = false;

    Aws::String m_snapshotDescription;
    bool m_snapshotDescriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
