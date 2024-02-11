/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/StorageLensGroup.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/Tag.h>
#include <utility>

namespace Aws
{
namespace S3Control
{
namespace Model
{

  /**
   */
  class CreateStorageLensGroupRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API CreateStorageLensGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStorageLensGroup"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    /**
     * <p> The Amazon Web Services account ID that the Storage Lens group is created
     * from and associated with. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p> The Amazon Web Services account ID that the Storage Lens group is created
     * from and associated with. </p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p> The Amazon Web Services account ID that the Storage Lens group is created
     * from and associated with. </p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p> The Amazon Web Services account ID that the Storage Lens group is created
     * from and associated with. </p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p> The Amazon Web Services account ID that the Storage Lens group is created
     * from and associated with. </p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p> The Amazon Web Services account ID that the Storage Lens group is created
     * from and associated with. </p>
     */
    inline CreateStorageLensGroupRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p> The Amazon Web Services account ID that the Storage Lens group is created
     * from and associated with. </p>
     */
    inline CreateStorageLensGroupRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p> The Amazon Web Services account ID that the Storage Lens group is created
     * from and associated with. </p>
     */
    inline CreateStorageLensGroupRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p> The Storage Lens group configuration. </p>
     */
    inline const StorageLensGroup& GetStorageLensGroup() const{ return m_storageLensGroup; }

    /**
     * <p> The Storage Lens group configuration. </p>
     */
    inline bool StorageLensGroupHasBeenSet() const { return m_storageLensGroupHasBeenSet; }

    /**
     * <p> The Storage Lens group configuration. </p>
     */
    inline void SetStorageLensGroup(const StorageLensGroup& value) { m_storageLensGroupHasBeenSet = true; m_storageLensGroup = value; }

    /**
     * <p> The Storage Lens group configuration. </p>
     */
    inline void SetStorageLensGroup(StorageLensGroup&& value) { m_storageLensGroupHasBeenSet = true; m_storageLensGroup = std::move(value); }

    /**
     * <p> The Storage Lens group configuration. </p>
     */
    inline CreateStorageLensGroupRequest& WithStorageLensGroup(const StorageLensGroup& value) { SetStorageLensGroup(value); return *this;}

    /**
     * <p> The Storage Lens group configuration. </p>
     */
    inline CreateStorageLensGroupRequest& WithStorageLensGroup(StorageLensGroup&& value) { SetStorageLensGroup(std::move(value)); return *this;}


    /**
     * <p> The Amazon Web Services resource tags that you're adding to your Storage
     * Lens group. This parameter is optional. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p> The Amazon Web Services resource tags that you're adding to your Storage
     * Lens group. This parameter is optional. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> The Amazon Web Services resource tags that you're adding to your Storage
     * Lens group. This parameter is optional. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> The Amazon Web Services resource tags that you're adding to your Storage
     * Lens group. This parameter is optional. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> The Amazon Web Services resource tags that you're adding to your Storage
     * Lens group. This parameter is optional. </p>
     */
    inline CreateStorageLensGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p> The Amazon Web Services resource tags that you're adding to your Storage
     * Lens group. This parameter is optional. </p>
     */
    inline CreateStorageLensGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> The Amazon Web Services resource tags that you're adding to your Storage
     * Lens group. This parameter is optional. </p>
     */
    inline CreateStorageLensGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p> The Amazon Web Services resource tags that you're adding to your Storage
     * Lens group. This parameter is optional. </p>
     */
    inline CreateStorageLensGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    StorageLensGroup m_storageLensGroup;
    bool m_storageLensGroupHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
