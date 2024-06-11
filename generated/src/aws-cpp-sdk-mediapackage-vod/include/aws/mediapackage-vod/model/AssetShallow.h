﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaPackageVod
{
namespace Model
{

  /**
   * A MediaPackage VOD Asset resource.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/AssetShallow">AWS
   * API Reference</a></p>
   */
  class AssetShallow
  {
  public:
    AWS_MEDIAPACKAGEVOD_API AssetShallow();
    AWS_MEDIAPACKAGEVOD_API AssetShallow(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API AssetShallow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ARN of the Asset.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline AssetShallow& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AssetShallow& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AssetShallow& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The time the Asset was initially submitted for Ingest.
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }
    inline AssetShallow& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}
    inline AssetShallow& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}
    inline AssetShallow& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * The unique identifier for the Asset.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AssetShallow& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AssetShallow& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AssetShallow& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the PackagingGroup for the Asset.
     */
    inline const Aws::String& GetPackagingGroupId() const{ return m_packagingGroupId; }
    inline bool PackagingGroupIdHasBeenSet() const { return m_packagingGroupIdHasBeenSet; }
    inline void SetPackagingGroupId(const Aws::String& value) { m_packagingGroupIdHasBeenSet = true; m_packagingGroupId = value; }
    inline void SetPackagingGroupId(Aws::String&& value) { m_packagingGroupIdHasBeenSet = true; m_packagingGroupId = std::move(value); }
    inline void SetPackagingGroupId(const char* value) { m_packagingGroupIdHasBeenSet = true; m_packagingGroupId.assign(value); }
    inline AssetShallow& WithPackagingGroupId(const Aws::String& value) { SetPackagingGroupId(value); return *this;}
    inline AssetShallow& WithPackagingGroupId(Aws::String&& value) { SetPackagingGroupId(std::move(value)); return *this;}
    inline AssetShallow& WithPackagingGroupId(const char* value) { SetPackagingGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * The resource ID to include in SPEKE key requests.
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline AssetShallow& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline AssetShallow& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline AssetShallow& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * ARN of the source object in S3.
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }
    inline AssetShallow& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}
    inline AssetShallow& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}
    inline AssetShallow& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The IAM role ARN used to access the source S3 bucket.
     */
    inline const Aws::String& GetSourceRoleArn() const{ return m_sourceRoleArn; }
    inline bool SourceRoleArnHasBeenSet() const { return m_sourceRoleArnHasBeenSet; }
    inline void SetSourceRoleArn(const Aws::String& value) { m_sourceRoleArnHasBeenSet = true; m_sourceRoleArn = value; }
    inline void SetSourceRoleArn(Aws::String&& value) { m_sourceRoleArnHasBeenSet = true; m_sourceRoleArn = std::move(value); }
    inline void SetSourceRoleArn(const char* value) { m_sourceRoleArnHasBeenSet = true; m_sourceRoleArn.assign(value); }
    inline AssetShallow& WithSourceRoleArn(const Aws::String& value) { SetSourceRoleArn(value); return *this;}
    inline AssetShallow& WithSourceRoleArn(Aws::String&& value) { SetSourceRoleArn(std::move(value)); return *this;}
    inline AssetShallow& WithSourceRoleArn(const char* value) { SetSourceRoleArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline AssetShallow& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline AssetShallow& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline AssetShallow& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline AssetShallow& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline AssetShallow& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline AssetShallow& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline AssetShallow& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline AssetShallow& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline AssetShallow& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_packagingGroupId;
    bool m_packagingGroupIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::String m_sourceRoleArn;
    bool m_sourceRoleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
