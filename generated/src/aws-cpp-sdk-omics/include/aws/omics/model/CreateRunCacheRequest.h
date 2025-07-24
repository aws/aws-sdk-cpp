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
    AWS_OMICS_API CreateRunCacheRequest() = default;

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
     * cache behavior</a> in the <i>Amazon Web Services HealthOmics User Guide</i>.</p>
     */
    inline CacheBehavior GetCacheBehavior() const { return m_cacheBehavior; }
    inline bool CacheBehaviorHasBeenSet() const { return m_cacheBehaviorHasBeenSet; }
    inline void SetCacheBehavior(CacheBehavior value) { m_cacheBehaviorHasBeenSet = true; m_cacheBehavior = value; }
    inline CreateRunCacheRequest& WithCacheBehavior(CacheBehavior value) { SetCacheBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the S3 location for storing the cached task outputs. This data must
     * be immediately accessible (not in an archived state).</p>
     */
    inline const Aws::String& GetCacheS3Location() const { return m_cacheS3Location; }
    inline bool CacheS3LocationHasBeenSet() const { return m_cacheS3LocationHasBeenSet; }
    template<typename CacheS3LocationT = Aws::String>
    void SetCacheS3Location(CacheS3LocationT&& value) { m_cacheS3LocationHasBeenSet = true; m_cacheS3Location = std::forward<CacheS3LocationT>(value); }
    template<typename CacheS3LocationT = Aws::String>
    CreateRunCacheRequest& WithCacheS3Location(CacheS3LocationT&& value) { SetCacheS3Location(std::forward<CacheS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enter a description of the run cache.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateRunCacheRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enter a user-friendly name for the run cache.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateRunCacheRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique request token, to ensure idempotency. If you don't specify a token,
     * Amazon Web Services HealthOmics automatically generates a universally unique
     * identifier (UUID) for the request.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateRunCacheRequest& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify one or more tags to associate with this run cache.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateRunCacheRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateRunCacheRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the expected owner of the S3 bucket for
     * the run cache. If not provided, your account ID is set as the owner of the
     * bucket.</p>
     */
    inline const Aws::String& GetCacheBucketOwnerId() const { return m_cacheBucketOwnerId; }
    inline bool CacheBucketOwnerIdHasBeenSet() const { return m_cacheBucketOwnerIdHasBeenSet; }
    template<typename CacheBucketOwnerIdT = Aws::String>
    void SetCacheBucketOwnerId(CacheBucketOwnerIdT&& value) { m_cacheBucketOwnerIdHasBeenSet = true; m_cacheBucketOwnerId = std::forward<CacheBucketOwnerIdT>(value); }
    template<typename CacheBucketOwnerIdT = Aws::String>
    CreateRunCacheRequest& WithCacheBucketOwnerId(CacheBucketOwnerIdT&& value) { SetCacheBucketOwnerId(std::forward<CacheBucketOwnerIdT>(value)); return *this;}
    ///@}
  private:

    CacheBehavior m_cacheBehavior{CacheBehavior::NOT_SET};
    bool m_cacheBehaviorHasBeenSet = false;

    Aws::String m_cacheS3Location;
    bool m_cacheS3LocationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_requestId{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_requestIdHasBeenSet = true;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_cacheBucketOwnerId;
    bool m_cacheBucketOwnerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
