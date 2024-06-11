/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/TapeStorageClass.h>
#include <aws/storagegateway/model/RetentionLockType.h>
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
  class CreateTapePoolRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API CreateTapePoolRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTapePool"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the new custom tape pool.</p>
     */
    inline const Aws::String& GetPoolName() const{ return m_poolName; }
    inline bool PoolNameHasBeenSet() const { return m_poolNameHasBeenSet; }
    inline void SetPoolName(const Aws::String& value) { m_poolNameHasBeenSet = true; m_poolName = value; }
    inline void SetPoolName(Aws::String&& value) { m_poolNameHasBeenSet = true; m_poolName = std::move(value); }
    inline void SetPoolName(const char* value) { m_poolNameHasBeenSet = true; m_poolName.assign(value); }
    inline CreateTapePoolRequest& WithPoolName(const Aws::String& value) { SetPoolName(value); return *this;}
    inline CreateTapePoolRequest& WithPoolName(Aws::String&& value) { SetPoolName(std::move(value)); return *this;}
    inline CreateTapePoolRequest& WithPoolName(const char* value) { SetPoolName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage class that is associated with the new custom pool. When you use
     * your backup application to eject the tape, the tape is archived directly into
     * the storage class (S3 Glacier or S3 Glacier Deep Archive) that corresponds to
     * the pool.</p>
     */
    inline const TapeStorageClass& GetStorageClass() const{ return m_storageClass; }
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
    inline void SetStorageClass(const TapeStorageClass& value) { m_storageClassHasBeenSet = true; m_storageClass = value; }
    inline void SetStorageClass(TapeStorageClass&& value) { m_storageClassHasBeenSet = true; m_storageClass = std::move(value); }
    inline CreateTapePoolRequest& WithStorageClass(const TapeStorageClass& value) { SetStorageClass(value); return *this;}
    inline CreateTapePoolRequest& WithStorageClass(TapeStorageClass&& value) { SetStorageClass(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tape retention lock can be configured in two modes. When configured in
     * governance mode, Amazon Web Services accounts with specific IAM permissions are
     * authorized to remove the tape retention lock from archived virtual tapes. When
     * configured in compliance mode, the tape retention lock cannot be removed by any
     * user, including the root Amazon Web Services account.</p>
     */
    inline const RetentionLockType& GetRetentionLockType() const{ return m_retentionLockType; }
    inline bool RetentionLockTypeHasBeenSet() const { return m_retentionLockTypeHasBeenSet; }
    inline void SetRetentionLockType(const RetentionLockType& value) { m_retentionLockTypeHasBeenSet = true; m_retentionLockType = value; }
    inline void SetRetentionLockType(RetentionLockType&& value) { m_retentionLockTypeHasBeenSet = true; m_retentionLockType = std::move(value); }
    inline CreateTapePoolRequest& WithRetentionLockType(const RetentionLockType& value) { SetRetentionLockType(value); return *this;}
    inline CreateTapePoolRequest& WithRetentionLockType(RetentionLockType&& value) { SetRetentionLockType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tape retention lock time is set in days. Tape retention lock can be enabled
     * for up to 100 years (36,500 days).</p>
     */
    inline int GetRetentionLockTimeInDays() const{ return m_retentionLockTimeInDays; }
    inline bool RetentionLockTimeInDaysHasBeenSet() const { return m_retentionLockTimeInDaysHasBeenSet; }
    inline void SetRetentionLockTimeInDays(int value) { m_retentionLockTimeInDaysHasBeenSet = true; m_retentionLockTimeInDays = value; }
    inline CreateTapePoolRequest& WithRetentionLockTimeInDays(int value) { SetRetentionLockTimeInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to 50 tags that can be assigned to tape pool. Each tag is a
     * key-value pair.</p>  <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateTapePoolRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateTapePoolRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateTapePoolRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateTapePoolRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_poolName;
    bool m_poolNameHasBeenSet = false;

    TapeStorageClass m_storageClass;
    bool m_storageClassHasBeenSet = false;

    RetentionLockType m_retentionLockType;
    bool m_retentionLockTypeHasBeenSet = false;

    int m_retentionLockTimeInDays;
    bool m_retentionLockTimeInDaysHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
