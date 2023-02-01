/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/TemplateLocation.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

  /**
   */
  class CreateWorldTemplateRequest : public RoboMakerRequest
  {
  public:
    AWS_ROBOMAKER_API CreateWorldTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorldTemplate"; }

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
    inline CreateWorldTemplateRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateWorldTemplateRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateWorldTemplateRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The name of the world template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the world template.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the world template.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the world template.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the world template.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the world template.</p>
     */
    inline CreateWorldTemplateRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the world template.</p>
     */
    inline CreateWorldTemplateRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the world template.</p>
     */
    inline CreateWorldTemplateRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The world template body.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }

    /**
     * <p>The world template body.</p>
     */
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }

    /**
     * <p>The world template body.</p>
     */
    inline void SetTemplateBody(const Aws::String& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }

    /**
     * <p>The world template body.</p>
     */
    inline void SetTemplateBody(Aws::String&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::move(value); }

    /**
     * <p>The world template body.</p>
     */
    inline void SetTemplateBody(const char* value) { m_templateBodyHasBeenSet = true; m_templateBody.assign(value); }

    /**
     * <p>The world template body.</p>
     */
    inline CreateWorldTemplateRequest& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>The world template body.</p>
     */
    inline CreateWorldTemplateRequest& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}

    /**
     * <p>The world template body.</p>
     */
    inline CreateWorldTemplateRequest& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}


    /**
     * <p>The location of the world template.</p>
     */
    inline const TemplateLocation& GetTemplateLocation() const{ return m_templateLocation; }

    /**
     * <p>The location of the world template.</p>
     */
    inline bool TemplateLocationHasBeenSet() const { return m_templateLocationHasBeenSet; }

    /**
     * <p>The location of the world template.</p>
     */
    inline void SetTemplateLocation(const TemplateLocation& value) { m_templateLocationHasBeenSet = true; m_templateLocation = value; }

    /**
     * <p>The location of the world template.</p>
     */
    inline void SetTemplateLocation(TemplateLocation&& value) { m_templateLocationHasBeenSet = true; m_templateLocation = std::move(value); }

    /**
     * <p>The location of the world template.</p>
     */
    inline CreateWorldTemplateRequest& WithTemplateLocation(const TemplateLocation& value) { SetTemplateLocation(value); return *this;}

    /**
     * <p>The location of the world template.</p>
     */
    inline CreateWorldTemplateRequest& WithTemplateLocation(TemplateLocation&& value) { SetTemplateLocation(std::move(value)); return *this;}


    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * template.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * template.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * template.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * template.</p>
     */
    inline CreateWorldTemplateRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * template.</p>
     */
    inline CreateWorldTemplateRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * template.</p>
     */
    inline CreateWorldTemplateRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * template.</p>
     */
    inline CreateWorldTemplateRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * template.</p>
     */
    inline CreateWorldTemplateRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * template.</p>
     */
    inline CreateWorldTemplateRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * template.</p>
     */
    inline CreateWorldTemplateRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * template.</p>
     */
    inline CreateWorldTemplateRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * template.</p>
     */
    inline CreateWorldTemplateRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet = false;

    TemplateLocation m_templateLocation;
    bool m_templateLocationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
