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
    AWS_ROBOMAKER_API CreateWorldGenerationJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorldGenerationJob"; }

    AWS_ROBOMAKER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateWorldGenerationJobRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (arn) of the world template describing the worlds
     * you want to create.</p>
     */
    inline const Aws::String& GetTemplate() const { return m_template; }
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }
    template<typename TemplateT = Aws::String>
    void SetTemplate(TemplateT&& value) { m_templateHasBeenSet = true; m_template = std::forward<TemplateT>(value); }
    template<typename TemplateT = Aws::String>
    CreateWorldGenerationJobRequest& WithTemplate(TemplateT&& value) { SetTemplate(std::forward<TemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the world count.</p>
     */
    inline const WorldCount& GetWorldCount() const { return m_worldCount; }
    inline bool WorldCountHasBeenSet() const { return m_worldCountHasBeenSet; }
    template<typename WorldCountT = WorldCount>
    void SetWorldCount(WorldCountT&& value) { m_worldCountHasBeenSet = true; m_worldCount = std::forward<WorldCountT>(value); }
    template<typename WorldCountT = WorldCount>
    CreateWorldGenerationJobRequest& WithWorldCount(WorldCountT&& value) { SetWorldCount(std::forward<WorldCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * generator job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateWorldGenerationJobRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateWorldGenerationJobRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * generated worlds.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetWorldTags() const { return m_worldTags; }
    inline bool WorldTagsHasBeenSet() const { return m_worldTagsHasBeenSet; }
    template<typename WorldTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetWorldTags(WorldTagsT&& value) { m_worldTagsHasBeenSet = true; m_worldTags = std::forward<WorldTagsT>(value); }
    template<typename WorldTagsT = Aws::Map<Aws::String, Aws::String>>
    CreateWorldGenerationJobRequest& WithWorldTags(WorldTagsT&& value) { SetWorldTags(std::forward<WorldTagsT>(value)); return *this;}
    template<typename WorldTagsKeyT = Aws::String, typename WorldTagsValueT = Aws::String>
    CreateWorldGenerationJobRequest& AddWorldTags(WorldTagsKeyT&& key, WorldTagsValueT&& value) {
      m_worldTagsHasBeenSet = true; m_worldTags.emplace(std::forward<WorldTagsKeyT>(key), std::forward<WorldTagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

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
