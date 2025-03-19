/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/CacheBehavior.h>
#include <aws/core/utils/DateTime.h>
#include <aws/omics/model/RunCacheStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Omics
{
namespace Model
{
  class GetRunCacheResult
  {
  public:
    AWS_OMICS_API GetRunCacheResult() = default;
    AWS_OMICS_API GetRunCacheResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API GetRunCacheResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Unique resource identifier for the run cache.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetRunCacheResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default cache behavior for runs using this cache.</p>
     */
    inline CacheBehavior GetCacheBehavior() const { return m_cacheBehavior; }
    inline void SetCacheBehavior(CacheBehavior value) { m_cacheBehaviorHasBeenSet = true; m_cacheBehavior = value; }
    inline GetRunCacheResult& WithCacheBehavior(CacheBehavior value) { SetCacheBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bucket owner.</p>
     */
    inline const Aws::String& GetCacheBucketOwnerId() const { return m_cacheBucketOwnerId; }
    template<typename CacheBucketOwnerIdT = Aws::String>
    void SetCacheBucketOwnerId(CacheBucketOwnerIdT&& value) { m_cacheBucketOwnerIdHasBeenSet = true; m_cacheBucketOwnerId = std::forward<CacheBucketOwnerIdT>(value); }
    template<typename CacheBucketOwnerIdT = Aws::String>
    GetRunCacheResult& WithCacheBucketOwnerId(CacheBucketOwnerIdT&& value) { SetCacheBucketOwnerId(std::forward<CacheBucketOwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 URI where the cache data is stored.</p>
     */
    inline const Aws::String& GetCacheS3Uri() const { return m_cacheS3Uri; }
    template<typename CacheS3UriT = Aws::String>
    void SetCacheS3Uri(CacheS3UriT&& value) { m_cacheS3UriHasBeenSet = true; m_cacheS3Uri = std::forward<CacheS3UriT>(value); }
    template<typename CacheS3UriT = Aws::String>
    GetRunCacheResult& WithCacheS3Uri(CacheS3UriT&& value) { SetCacheS3Uri(std::forward<CacheS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creation time of the run cache (an ISO 8601 formatted string).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetRunCacheResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run cache description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetRunCacheResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run cache ID.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetRunCacheResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run cache name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetRunCacheResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run cache status.</p>
     */
    inline RunCacheStatus GetStatus() const { return m_status; }
    inline void SetStatus(RunCacheStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetRunCacheResult& WithStatus(RunCacheStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the run cache.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetRunCacheResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetRunCacheResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRunCacheResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    CacheBehavior m_cacheBehavior{CacheBehavior::NOT_SET};
    bool m_cacheBehaviorHasBeenSet = false;

    Aws::String m_cacheBucketOwnerId;
    bool m_cacheBucketOwnerIdHasBeenSet = false;

    Aws::String m_cacheS3Uri;
    bool m_cacheS3UriHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RunCacheStatus m_status{RunCacheStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
