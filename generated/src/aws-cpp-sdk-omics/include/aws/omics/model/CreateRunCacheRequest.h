/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/omics/model/CacheBehavior.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class CreateRunCacheRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API CreateRunCacheRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRunCache"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Default cache behavior for runs that use this cache. Supported values
     * are:</p> <p> <code>CACHE_ON_FAILURE</code>: Caches task outputs from completed
     * tasks for runs that fail. This setting is useful if you're debugging a workflow
     * that fails after several tasks completed successfully. The subsequent run uses
     * the cache outputs for previously-completed tasks if the task definition, inputs,
     * and container in ECR are identical to the prior run.</p> <p>
     * <code>CACHE_ALWAYS</code>: Caches task outputs from completed tasks for all
     * runs. This setting is useful in development mode, but do not use it in a
     * production setting.</p> <p>If you don't specify a value, the default behavior is
     * CACHE_ON_FAILURE. When you start a run that uses this cache, you can override
     * the default cache behavior.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/omics/latest/dev/how-run-cache.html#run-cache-behavior">Run
     * cache behavior</a> in the AWS HealthOmics User Guide.</p>
     */
    inline const CacheBehavior& GetCacheBehavior() const{ return m_cacheBehavior; }
    inline bool CacheBehaviorHasBeenSet() const { return m_cacheBehaviorHasBeenSet; }
    inline void SetCacheBehavior(const CacheBehavior& value) { m_cacheBehaviorHasBeenSet = true; m_cacheBehavior = value; }
    inline void SetCacheBehavior(CacheBehavior&& value) { m_cacheBehaviorHasBeenSet = true; m_cacheBehavior = std::move(value); }
    inline CreateRunCacheRequest& WithCacheBehavior(const CacheBehavior& value) { SetCacheBehavior(value); return *this;}
    inline CreateRunCacheRequest& WithCacheBehavior(CacheBehavior&& value) { SetCacheBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the S3 location for storing the cached task outputs. This data must
     * be immediately accessible (not in an archived state).</p>
     */
    inline const Aws::String& GetCacheS3Location() const{ return m_cacheS3Location; }
    inline bool CacheS3LocationHasBeenSet() const { return m_cacheS3LocationHasBeenSet; }
    inline void SetCacheS3Location(const Aws::String& value) { m_cacheS3LocationHasBeenSet = true; m_cacheS3Location = value; }
    inline void SetCacheS3Location(Aws::String&& value) { m_cacheS3LocationHasBeenSet = true; m_cacheS3Location = std::move(value); }
    inline void SetCacheS3Location(const char* value) { m_cacheS3LocationHasBeenSet = true; m_cacheS3Location.assign(value); }
    inline CreateRunCacheRequest& WithCacheS3Location(const Aws::String& value) { SetCacheS3Location(value); return *this;}
    inline CreateRunCacheRequest& WithCacheS3Location(Aws::String&& value) { SetCacheS3Location(std::move(value)); return *this;}
    inline CreateRunCacheRequest& WithCacheS3Location(const char* value) { SetCacheS3Location(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enter a description of the run cache.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateRunCacheRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateRunCacheRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateRunCacheRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enter a user-friendly name for the run cache.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateRunCacheRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateRunCacheRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateRunCacheRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique request token, to ensure idempotency. If you don't specify a token,
     * HealthOmics automatically generates a universally unique identifier (UUID) for
     * the request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline CreateRunCacheRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateRunCacheRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateRunCacheRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify one or more tags to associate with this run cache.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateRunCacheRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateRunCacheRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateRunCacheRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateRunCacheRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateRunCacheRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateRunCacheRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateRunCacheRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateRunCacheRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateRunCacheRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The AWS account ID of the expected owner of the S3 bucket for the run cache.
     * If not provided, your account ID is set as the owner of the bucket.</p>
     */
    inline const Aws::String& GetCacheBucketOwnerId() const{ return m_cacheBucketOwnerId; }
    inline bool CacheBucketOwnerIdHasBeenSet() const { return m_cacheBucketOwnerIdHasBeenSet; }
    inline void SetCacheBucketOwnerId(const Aws::String& value) { m_cacheBucketOwnerIdHasBeenSet = true; m_cacheBucketOwnerId = value; }
    inline void SetCacheBucketOwnerId(Aws::String&& value) { m_cacheBucketOwnerIdHasBeenSet = true; m_cacheBucketOwnerId = std::move(value); }
    inline void SetCacheBucketOwnerId(const char* value) { m_cacheBucketOwnerIdHasBeenSet = true; m_cacheBucketOwnerId.assign(value); }
    inline CreateRunCacheRequest& WithCacheBucketOwnerId(const Aws::String& value) { SetCacheBucketOwnerId(value); return *this;}
    inline CreateRunCacheRequest& WithCacheBucketOwnerId(Aws::String&& value) { SetCacheBucketOwnerId(std::move(value)); return *this;}
    inline CreateRunCacheRequest& WithCacheBucketOwnerId(const char* value) { SetCacheBucketOwnerId(value); return *this;}
    ///@}
  private:

    CacheBehavior m_cacheBehavior;
    bool m_cacheBehaviorHasBeenSet = false;

    Aws::String m_cacheS3Location;
    bool m_cacheS3LocationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_cacheBucketOwnerId;
    bool m_cacheBucketOwnerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
