/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/ResourceExplorer2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ResourceExplorer2
{
namespace Model
{

  /**
   */
  class CreateIndexRequest : public ResourceExplorer2Request
  {
  public:
    AWS_RESOURCEEXPLORER2_API CreateIndexRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIndex"; }

    AWS_RESOURCEEXPLORER2_API Aws::String SerializePayload() const override;


    /**
     * <p>This value helps ensure idempotency. Resource Explorer uses this value to
     * prevent the accidental creation of duplicate versions. We recommend that you
     * generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type
     * value</a> to ensure the uniqueness of your views.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>This value helps ensure idempotency. Resource Explorer uses this value to
     * prevent the accidental creation of duplicate versions. We recommend that you
     * generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type
     * value</a> to ensure the uniqueness of your views.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>This value helps ensure idempotency. Resource Explorer uses this value to
     * prevent the accidental creation of duplicate versions. We recommend that you
     * generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type
     * value</a> to ensure the uniqueness of your views.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>This value helps ensure idempotency. Resource Explorer uses this value to
     * prevent the accidental creation of duplicate versions. We recommend that you
     * generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type
     * value</a> to ensure the uniqueness of your views.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>This value helps ensure idempotency. Resource Explorer uses this value to
     * prevent the accidental creation of duplicate versions. We recommend that you
     * generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type
     * value</a> to ensure the uniqueness of your views.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>This value helps ensure idempotency. Resource Explorer uses this value to
     * prevent the accidental creation of duplicate versions. We recommend that you
     * generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type
     * value</a> to ensure the uniqueness of your views.</p>
     */
    inline CreateIndexRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>This value helps ensure idempotency. Resource Explorer uses this value to
     * prevent the accidental creation of duplicate versions. We recommend that you
     * generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type
     * value</a> to ensure the uniqueness of your views.</p>
     */
    inline CreateIndexRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>This value helps ensure idempotency. Resource Explorer uses this value to
     * prevent the accidental creation of duplicate versions. We recommend that you
     * generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type
     * value</a> to ensure the uniqueness of your views.</p>
     */
    inline CreateIndexRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The specified tags are attached only to the index created in this Amazon Web
     * Services Region. The tags aren't attached to any of the resources listed in the
     * index.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The specified tags are attached only to the index created in this Amazon Web
     * Services Region. The tags aren't attached to any of the resources listed in the
     * index.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The specified tags are attached only to the index created in this Amazon Web
     * Services Region. The tags aren't attached to any of the resources listed in the
     * index.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The specified tags are attached only to the index created in this Amazon Web
     * Services Region. The tags aren't attached to any of the resources listed in the
     * index.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The specified tags are attached only to the index created in this Amazon Web
     * Services Region. The tags aren't attached to any of the resources listed in the
     * index.</p>
     */
    inline CreateIndexRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The specified tags are attached only to the index created in this Amazon Web
     * Services Region. The tags aren't attached to any of the resources listed in the
     * index.</p>
     */
    inline CreateIndexRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The specified tags are attached only to the index created in this Amazon Web
     * Services Region. The tags aren't attached to any of the resources listed in the
     * index.</p>
     */
    inline CreateIndexRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The specified tags are attached only to the index created in this Amazon Web
     * Services Region. The tags aren't attached to any of the resources listed in the
     * index.</p>
     */
    inline CreateIndexRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The specified tags are attached only to the index created in this Amazon Web
     * Services Region. The tags aren't attached to any of the resources listed in the
     * index.</p>
     */
    inline CreateIndexRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The specified tags are attached only to the index created in this Amazon Web
     * Services Region. The tags aren't attached to any of the resources listed in the
     * index.</p>
     */
    inline CreateIndexRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The specified tags are attached only to the index created in this Amazon Web
     * Services Region. The tags aren't attached to any of the resources listed in the
     * index.</p>
     */
    inline CreateIndexRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The specified tags are attached only to the index created in this Amazon Web
     * Services Region. The tags aren't attached to any of the resources listed in the
     * index.</p>
     */
    inline CreateIndexRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The specified tags are attached only to the index created in this Amazon Web
     * Services Region. The tags aren't attached to any of the resources listed in the
     * index.</p>
     */
    inline CreateIndexRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
