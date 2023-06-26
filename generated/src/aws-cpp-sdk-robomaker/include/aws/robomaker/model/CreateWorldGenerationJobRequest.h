/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/WorldCount.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

  /**
   */
  class CreateWorldGenerationJobRequest : public RoboMakerRequest
  {
  public:
    AWS_ROBOMAKER_API CreateWorldGenerationJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorldGenerationJob"; }

    AWS_ROBOMAKER_API Aws::String SerializePayload() const override;


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateWorldGenerationJobRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateWorldGenerationJobRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateWorldGenerationJobRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (arn) of the world template describing the worlds
     * you want to create.</p>
     */
    inline const Aws::String& GetTemplate() const{ return m_template; }

    /**
     * <p>The Amazon Resource Name (arn) of the world template describing the worlds
     * you want to create.</p>
     */
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (arn) of the world template describing the worlds
     * you want to create.</p>
     */
    inline void SetTemplate(const Aws::String& value) { m_templateHasBeenSet = true; m_template = value; }

    /**
     * <p>The Amazon Resource Name (arn) of the world template describing the worlds
     * you want to create.</p>
     */
    inline void SetTemplate(Aws::String&& value) { m_templateHasBeenSet = true; m_template = std::move(value); }

    /**
     * <p>The Amazon Resource Name (arn) of the world template describing the worlds
     * you want to create.</p>
     */
    inline void SetTemplate(const char* value) { m_templateHasBeenSet = true; m_template.assign(value); }

    /**
     * <p>The Amazon Resource Name (arn) of the world template describing the worlds
     * you want to create.</p>
     */
    inline CreateWorldGenerationJobRequest& WithTemplate(const Aws::String& value) { SetTemplate(value); return *this;}

    /**
     * <p>The Amazon Resource Name (arn) of the world template describing the worlds
     * you want to create.</p>
     */
    inline CreateWorldGenerationJobRequest& WithTemplate(Aws::String&& value) { SetTemplate(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (arn) of the world template describing the worlds
     * you want to create.</p>
     */
    inline CreateWorldGenerationJobRequest& WithTemplate(const char* value) { SetTemplate(value); return *this;}


    /**
     * <p>Information about the world count.</p>
     */
    inline const WorldCount& GetWorldCount() const{ return m_worldCount; }

    /**
     * <p>Information about the world count.</p>
     */
    inline bool WorldCountHasBeenSet() const { return m_worldCountHasBeenSet; }

    /**
     * <p>Information about the world count.</p>
     */
    inline void SetWorldCount(const WorldCount& value) { m_worldCountHasBeenSet = true; m_worldCount = value; }

    /**
     * <p>Information about the world count.</p>
     */
    inline void SetWorldCount(WorldCount&& value) { m_worldCountHasBeenSet = true; m_worldCount = std::move(value); }

    /**
     * <p>Information about the world count.</p>
     */
    inline CreateWorldGenerationJobRequest& WithWorldCount(const WorldCount& value) { SetWorldCount(value); return *this;}

    /**
     * <p>Information about the world count.</p>
     */
    inline CreateWorldGenerationJobRequest& WithWorldCount(WorldCount&& value) { SetWorldCount(std::move(value)); return *this;}


    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline CreateWorldGenerationJobRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline CreateWorldGenerationJobRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline CreateWorldGenerationJobRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline CreateWorldGenerationJobRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline CreateWorldGenerationJobRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline CreateWorldGenerationJobRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline CreateWorldGenerationJobRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline CreateWorldGenerationJobRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline CreateWorldGenerationJobRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetWorldTags() const{ return m_worldTags; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline bool WorldTagsHasBeenSet() const { return m_worldTagsHasBeenSet; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline void SetWorldTags(const Aws::Map<Aws::String, Aws::String>& value) { m_worldTagsHasBeenSet = true; m_worldTags = value; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline void SetWorldTags(Aws::Map<Aws::String, Aws::String>&& value) { m_worldTagsHasBeenSet = true; m_worldTags = std::move(value); }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline CreateWorldGenerationJobRequest& WithWorldTags(const Aws::Map<Aws::String, Aws::String>& value) { SetWorldTags(value); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline CreateWorldGenerationJobRequest& WithWorldTags(Aws::Map<Aws::String, Aws::String>&& value) { SetWorldTags(std::move(value)); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline CreateWorldGenerationJobRequest& AddWorldTags(const Aws::String& key, const Aws::String& value) { m_worldTagsHasBeenSet = true; m_worldTags.emplace(key, value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline CreateWorldGenerationJobRequest& AddWorldTags(Aws::String&& key, const Aws::String& value) { m_worldTagsHasBeenSet = true; m_worldTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline CreateWorldGenerationJobRequest& AddWorldTags(const Aws::String& key, Aws::String&& value) { m_worldTagsHasBeenSet = true; m_worldTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline CreateWorldGenerationJobRequest& AddWorldTags(Aws::String&& key, Aws::String&& value) { m_worldTagsHasBeenSet = true; m_worldTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline CreateWorldGenerationJobRequest& AddWorldTags(const char* key, Aws::String&& value) { m_worldTagsHasBeenSet = true; m_worldTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline CreateWorldGenerationJobRequest& AddWorldTags(Aws::String&& key, const char* value) { m_worldTagsHasBeenSet = true; m_worldTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline CreateWorldGenerationJobRequest& AddWorldTags(const char* key, const char* value) { m_worldTagsHasBeenSet = true; m_worldTags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_template;
    bool m_templateHasBeenSet = false;

    WorldCount m_worldCount;
    bool m_worldCountHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_worldTags;
    bool m_worldTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
