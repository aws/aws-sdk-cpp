/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/mediapackage-vod/MediaPackageVodRequest.h>
#include <aws/mediapackage-vod/model/Authorization.h>
#include <aws/mediapackage-vod/model/EgressAccessLogs.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{

  /**
   * A new MediaPackage VOD PackagingGroup resource configuration.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/CreatePackagingGroupRequest">AWS
   * API Reference</a></p>
   */
  class CreatePackagingGroupRequest : public MediaPackageVodRequest
  {
  public:
    AWS_MEDIAPACKAGEVOD_API CreatePackagingGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePackagingGroup"; }

    AWS_MEDIAPACKAGEVOD_API Aws::String SerializePayload() const override;


    
    inline const Authorization& GetAuthorization() const{ return m_authorization; }

    
    inline bool AuthorizationHasBeenSet() const { return m_authorizationHasBeenSet; }

    
    inline void SetAuthorization(const Authorization& value) { m_authorizationHasBeenSet = true; m_authorization = value; }

    
    inline void SetAuthorization(Authorization&& value) { m_authorizationHasBeenSet = true; m_authorization = std::move(value); }

    
    inline CreatePackagingGroupRequest& WithAuthorization(const Authorization& value) { SetAuthorization(value); return *this;}

    
    inline CreatePackagingGroupRequest& WithAuthorization(Authorization&& value) { SetAuthorization(std::move(value)); return *this;}


    
    inline const EgressAccessLogs& GetEgressAccessLogs() const{ return m_egressAccessLogs; }

    
    inline bool EgressAccessLogsHasBeenSet() const { return m_egressAccessLogsHasBeenSet; }

    
    inline void SetEgressAccessLogs(const EgressAccessLogs& value) { m_egressAccessLogsHasBeenSet = true; m_egressAccessLogs = value; }

    
    inline void SetEgressAccessLogs(EgressAccessLogs&& value) { m_egressAccessLogsHasBeenSet = true; m_egressAccessLogs = std::move(value); }

    
    inline CreatePackagingGroupRequest& WithEgressAccessLogs(const EgressAccessLogs& value) { SetEgressAccessLogs(value); return *this;}

    
    inline CreatePackagingGroupRequest& WithEgressAccessLogs(EgressAccessLogs&& value) { SetEgressAccessLogs(std::move(value)); return *this;}


    /**
     * The ID of the PackagingGroup.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the PackagingGroup.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The ID of the PackagingGroup.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The ID of the PackagingGroup.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The ID of the PackagingGroup.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The ID of the PackagingGroup.
     */
    inline CreatePackagingGroupRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the PackagingGroup.
     */
    inline CreatePackagingGroupRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the PackagingGroup.
     */
    inline CreatePackagingGroupRequest& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreatePackagingGroupRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline CreatePackagingGroupRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreatePackagingGroupRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    
    inline CreatePackagingGroupRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreatePackagingGroupRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreatePackagingGroupRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline CreatePackagingGroupRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreatePackagingGroupRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreatePackagingGroupRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Authorization m_authorization;
    bool m_authorizationHasBeenSet = false;

    EgressAccessLogs m_egressAccessLogs;
    bool m_egressAccessLogsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
