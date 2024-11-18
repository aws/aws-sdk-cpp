/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/QuickResponseDataProvider.h>
#include <aws/qconnect/model/GroupingConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace QConnect
{
namespace Model
{

  /**
   */
  class CreateQuickResponseRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API CreateQuickResponseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateQuickResponse"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Connect channels this quick response applies to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetChannels() const{ return m_channels; }
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }
    inline void SetChannels(const Aws::Vector<Aws::String>& value) { m_channelsHasBeenSet = true; m_channels = value; }
    inline void SetChannels(Aws::Vector<Aws::String>&& value) { m_channelsHasBeenSet = true; m_channels = std::move(value); }
    inline CreateQuickResponseRequest& WithChannels(const Aws::Vector<Aws::String>& value) { SetChannels(value); return *this;}
    inline CreateQuickResponseRequest& WithChannels(Aws::Vector<Aws::String>&& value) { SetChannels(std::move(value)); return *this;}
    inline CreateQuickResponseRequest& AddChannels(const Aws::String& value) { m_channelsHasBeenSet = true; m_channels.push_back(value); return *this; }
    inline CreateQuickResponseRequest& AddChannels(Aws::String&& value) { m_channelsHasBeenSet = true; m_channels.push_back(std::move(value)); return *this; }
    inline CreateQuickResponseRequest& AddChannels(const char* value) { m_channelsHasBeenSet = true; m_channels.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="http://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateQuickResponseRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateQuickResponseRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateQuickResponseRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the quick response.</p>
     */
    inline const QuickResponseDataProvider& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const QuickResponseDataProvider& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(QuickResponseDataProvider&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline CreateQuickResponseRequest& WithContent(const QuickResponseDataProvider& value) { SetContent(value); return *this;}
    inline CreateQuickResponseRequest& WithContent(QuickResponseDataProvider&& value) { SetContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The media type of the quick response content.</p> <ul> <li> <p>Use
     * <code>application/x.quickresponse;format=plain</code> for a quick response
     * written in plain text.</p> </li> <li> <p>Use
     * <code>application/x.quickresponse;format=markdown</code> for a quick response
     * written in richtext.</p> </li> </ul>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }
    inline CreateQuickResponseRequest& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline CreateQuickResponseRequest& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline CreateQuickResponseRequest& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the quick response.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateQuickResponseRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateQuickResponseRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateQuickResponseRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information of the user groups that the quick response is
     * accessible to.</p>
     */
    inline const GroupingConfiguration& GetGroupingConfiguration() const{ return m_groupingConfiguration; }
    inline bool GroupingConfigurationHasBeenSet() const { return m_groupingConfigurationHasBeenSet; }
    inline void SetGroupingConfiguration(const GroupingConfiguration& value) { m_groupingConfigurationHasBeenSet = true; m_groupingConfiguration = value; }
    inline void SetGroupingConfiguration(GroupingConfiguration&& value) { m_groupingConfigurationHasBeenSet = true; m_groupingConfiguration = std::move(value); }
    inline CreateQuickResponseRequest& WithGroupingConfiguration(const GroupingConfiguration& value) { SetGroupingConfiguration(value); return *this;}
    inline CreateQuickResponseRequest& WithGroupingConfiguration(GroupingConfiguration&& value) { SetGroupingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the quick response is active.</p>
     */
    inline bool GetIsActive() const{ return m_isActive; }
    inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }
    inline void SetIsActive(bool value) { m_isActiveHasBeenSet = true; m_isActive = value; }
    inline CreateQuickResponseRequest& WithIsActive(bool value) { SetIsActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the knowledge base. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }
    inline CreateQuickResponseRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline CreateQuickResponseRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline CreateQuickResponseRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code value for the language in which the quick response is
     * written. The supported language codes include <code>de_DE</code>,
     * <code>en_US</code>, <code>es_ES</code>, <code>fr_FR</code>, <code>id_ID</code>,
     * <code>it_IT</code>, <code>ja_JP</code>, <code>ko_KR</code>, <code>pt_BR</code>,
     * <code>zh_CN</code>, <code>zh_TW</code> </p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }
    inline CreateQuickResponseRequest& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}
    inline CreateQuickResponseRequest& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}
    inline CreateQuickResponseRequest& WithLanguage(const char* value) { SetLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the quick response.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateQuickResponseRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateQuickResponseRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateQuickResponseRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shortcut key of the quick response. The value should be unique across the
     * knowledge base. </p>
     */
    inline const Aws::String& GetShortcutKey() const{ return m_shortcutKey; }
    inline bool ShortcutKeyHasBeenSet() const { return m_shortcutKeyHasBeenSet; }
    inline void SetShortcutKey(const Aws::String& value) { m_shortcutKeyHasBeenSet = true; m_shortcutKey = value; }
    inline void SetShortcutKey(Aws::String&& value) { m_shortcutKeyHasBeenSet = true; m_shortcutKey = std::move(value); }
    inline void SetShortcutKey(const char* value) { m_shortcutKeyHasBeenSet = true; m_shortcutKey.assign(value); }
    inline CreateQuickResponseRequest& WithShortcutKey(const Aws::String& value) { SetShortcutKey(value); return *this;}
    inline CreateQuickResponseRequest& WithShortcutKey(Aws::String&& value) { SetShortcutKey(std::move(value)); return *this;}
    inline CreateQuickResponseRequest& WithShortcutKey(const char* value) { SetShortcutKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateQuickResponseRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateQuickResponseRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateQuickResponseRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateQuickResponseRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateQuickResponseRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateQuickResponseRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateQuickResponseRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateQuickResponseRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateQuickResponseRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_channels;
    bool m_channelsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    QuickResponseDataProvider m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    GroupingConfiguration m_groupingConfiguration;
    bool m_groupingConfigurationHasBeenSet = false;

    bool m_isActive;
    bool m_isActiveHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_shortcutKey;
    bool m_shortcutKeyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
