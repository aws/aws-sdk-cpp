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
    AWS_OMICS_API GetRunCacheResult();
    AWS_OMICS_API GetRunCacheResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API GetRunCacheResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Unique resource identifier for the run cache.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetRunCacheResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetRunCacheResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetRunCacheResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default cache behavior for runs using this cache.</p>
     */
    inline const CacheBehavior& GetCacheBehavior() const{ return m_cacheBehavior; }
    inline void SetCacheBehavior(const CacheBehavior& value) { m_cacheBehavior = value; }
    inline void SetCacheBehavior(CacheBehavior&& value) { m_cacheBehavior = std::move(value); }
    inline GetRunCacheResult& WithCacheBehavior(const CacheBehavior& value) { SetCacheBehavior(value); return *this;}
    inline GetRunCacheResult& WithCacheBehavior(CacheBehavior&& value) { SetCacheBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bucket owner.</p>
     */
    inline const Aws::String& GetCacheBucketOwnerId() const{ return m_cacheBucketOwnerId; }
    inline void SetCacheBucketOwnerId(const Aws::String& value) { m_cacheBucketOwnerId = value; }
    inline void SetCacheBucketOwnerId(Aws::String&& value) { m_cacheBucketOwnerId = std::move(value); }
    inline void SetCacheBucketOwnerId(const char* value) { m_cacheBucketOwnerId.assign(value); }
    inline GetRunCacheResult& WithCacheBucketOwnerId(const Aws::String& value) { SetCacheBucketOwnerId(value); return *this;}
    inline GetRunCacheResult& WithCacheBucketOwnerId(Aws::String&& value) { SetCacheBucketOwnerId(std::move(value)); return *this;}
    inline GetRunCacheResult& WithCacheBucketOwnerId(const char* value) { SetCacheBucketOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 URI where the cache data is stored.</p>
     */
    inline const Aws::String& GetCacheS3Uri() const{ return m_cacheS3Uri; }
    inline void SetCacheS3Uri(const Aws::String& value) { m_cacheS3Uri = value; }
    inline void SetCacheS3Uri(Aws::String&& value) { m_cacheS3Uri = std::move(value); }
    inline void SetCacheS3Uri(const char* value) { m_cacheS3Uri.assign(value); }
    inline GetRunCacheResult& WithCacheS3Uri(const Aws::String& value) { SetCacheS3Uri(value); return *this;}
    inline GetRunCacheResult& WithCacheS3Uri(Aws::String&& value) { SetCacheS3Uri(std::move(value)); return *this;}
    inline GetRunCacheResult& WithCacheS3Uri(const char* value) { SetCacheS3Uri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creation time of the run cache (an ISO 8601 formatted string).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetRunCacheResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetRunCacheResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run cache description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetRunCacheResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetRunCacheResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetRunCacheResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run cache ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetRunCacheResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetRunCacheResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetRunCacheResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run cache name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetRunCacheResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetRunCacheResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetRunCacheResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run cache status.</p>
     */
    inline const RunCacheStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const RunCacheStatus& value) { m_status = value; }
    inline void SetStatus(RunCacheStatus&& value) { m_status = std::move(value); }
    inline GetRunCacheResult& WithStatus(const RunCacheStatus& value) { SetStatus(value); return *this;}
    inline GetRunCacheResult& WithStatus(RunCacheStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the run cache.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetRunCacheResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetRunCacheResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetRunCacheResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetRunCacheResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetRunCacheResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetRunCacheResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetRunCacheResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetRunCacheResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetRunCacheResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRunCacheResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRunCacheResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRunCacheResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    CacheBehavior m_cacheBehavior;

    Aws::String m_cacheBucketOwnerId;

    Aws::String m_cacheS3Uri;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_description;

    Aws::String m_id;

    Aws::String m_name;

    RunCacheStatus m_status;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
