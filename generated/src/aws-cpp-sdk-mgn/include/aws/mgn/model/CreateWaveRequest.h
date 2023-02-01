/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class CreateWaveRequest : public MgnRequest
  {
  public:
    AWS_MGN_API CreateWaveRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWave"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    /**
     * <p>Wave description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Wave description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Wave description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Wave description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Wave description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Wave description.</p>
     */
    inline CreateWaveRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Wave description.</p>
     */
    inline CreateWaveRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Wave description.</p>
     */
    inline CreateWaveRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Wave name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Wave name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Wave name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Wave name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Wave name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Wave name.</p>
     */
    inline CreateWaveRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Wave name.</p>
     */
    inline CreateWaveRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Wave name.</p>
     */
    inline CreateWaveRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Wave tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Wave tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Wave tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Wave tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Wave tags.</p>
     */
    inline CreateWaveRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Wave tags.</p>
     */
    inline CreateWaveRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Wave tags.</p>
     */
    inline CreateWaveRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Wave tags.</p>
     */
    inline CreateWaveRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Wave tags.</p>
     */
    inline CreateWaveRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Wave tags.</p>
     */
    inline CreateWaveRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Wave tags.</p>
     */
    inline CreateWaveRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Wave tags.</p>
     */
    inline CreateWaveRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Wave tags.</p>
     */
    inline CreateWaveRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
