/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/QuickResponseDataProvider.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/GroupingConfiguration.h>
#include <utility>

namespace Aws
{
namespace QConnect
{
namespace Model
{

  /**
   */
  class UpdateQuickResponseRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API UpdateQuickResponseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQuickResponse"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Connect contact channels this quick response applies to. The
     * supported contact channel types include <code>Chat</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetChannels() const{ return m_channels; }
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }
    inline void SetChannels(const Aws::Vector<Aws::String>& value) { m_channelsHasBeenSet = true; m_channels = value; }
    inline void SetChannels(Aws::Vector<Aws::String>&& value) { m_channelsHasBeenSet = true; m_channels = std::move(value); }
    inline UpdateQuickResponseRequest& WithChannels(const Aws::Vector<Aws::String>& value) { SetChannels(value); return *this;}
    inline UpdateQuickResponseRequest& WithChannels(Aws::Vector<Aws::String>&& value) { SetChannels(std::move(value)); return *this;}
    inline UpdateQuickResponseRequest& AddChannels(const Aws::String& value) { m_channelsHasBeenSet = true; m_channels.push_back(value); return *this; }
    inline UpdateQuickResponseRequest& AddChannels(Aws::String&& value) { m_channelsHasBeenSet = true; m_channels.push_back(std::move(value)); return *this; }
    inline UpdateQuickResponseRequest& AddChannels(const char* value) { m_channelsHasBeenSet = true; m_channels.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The updated content of the quick response.</p>
     */
    inline const QuickResponseDataProvider& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const QuickResponseDataProvider& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(QuickResponseDataProvider&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline UpdateQuickResponseRequest& WithContent(const QuickResponseDataProvider& value) { SetContent(value); return *this;}
    inline UpdateQuickResponseRequest& WithContent(QuickResponseDataProvider&& value) { SetContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The media type of the quick response content.</p> <ul> <li> <p>Use
     * <code>application/x.quickresponse;format=plain</code> for quick response written
     * in plain text.</p> </li> <li> <p>Use
     * <code>application/x.quickresponse;format=markdown</code> for quick response
     * written in richtext.</p> </li> </ul>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }
    inline UpdateQuickResponseRequest& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline UpdateQuickResponseRequest& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline UpdateQuickResponseRequest& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated description of the quick response.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateQuickResponseRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateQuickResponseRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateQuickResponseRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated grouping configuration of the quick response.</p>
     */
    inline const GroupingConfiguration& GetGroupingConfiguration() const{ return m_groupingConfiguration; }
    inline bool GroupingConfigurationHasBeenSet() const { return m_groupingConfigurationHasBeenSet; }
    inline void SetGroupingConfiguration(const GroupingConfiguration& value) { m_groupingConfigurationHasBeenSet = true; m_groupingConfiguration = value; }
    inline void SetGroupingConfiguration(GroupingConfiguration&& value) { m_groupingConfigurationHasBeenSet = true; m_groupingConfiguration = std::move(value); }
    inline UpdateQuickResponseRequest& WithGroupingConfiguration(const GroupingConfiguration& value) { SetGroupingConfiguration(value); return *this;}
    inline UpdateQuickResponseRequest& WithGroupingConfiguration(GroupingConfiguration&& value) { SetGroupingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the quick response is active. </p>
     */
    inline bool GetIsActive() const{ return m_isActive; }
    inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }
    inline void SetIsActive(bool value) { m_isActiveHasBeenSet = true; m_isActive = value; }
    inline UpdateQuickResponseRequest& WithIsActive(bool value) { SetIsActive(value); return *this;}
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
    inline UpdateQuickResponseRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline UpdateQuickResponseRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline UpdateQuickResponseRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
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
    inline UpdateQuickResponseRequest& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}
    inline UpdateQuickResponseRequest& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}
    inline UpdateQuickResponseRequest& WithLanguage(const char* value) { SetLanguage(value); return *this;}
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
    inline UpdateQuickResponseRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateQuickResponseRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateQuickResponseRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the quick response.</p>
     */
    inline const Aws::String& GetQuickResponseId() const{ return m_quickResponseId; }
    inline bool QuickResponseIdHasBeenSet() const { return m_quickResponseIdHasBeenSet; }
    inline void SetQuickResponseId(const Aws::String& value) { m_quickResponseIdHasBeenSet = true; m_quickResponseId = value; }
    inline void SetQuickResponseId(Aws::String&& value) { m_quickResponseIdHasBeenSet = true; m_quickResponseId = std::move(value); }
    inline void SetQuickResponseId(const char* value) { m_quickResponseIdHasBeenSet = true; m_quickResponseId.assign(value); }
    inline UpdateQuickResponseRequest& WithQuickResponseId(const Aws::String& value) { SetQuickResponseId(value); return *this;}
    inline UpdateQuickResponseRequest& WithQuickResponseId(Aws::String&& value) { SetQuickResponseId(std::move(value)); return *this;}
    inline UpdateQuickResponseRequest& WithQuickResponseId(const char* value) { SetQuickResponseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to remove the description from the quick response.</p>
     */
    inline bool GetRemoveDescription() const{ return m_removeDescription; }
    inline bool RemoveDescriptionHasBeenSet() const { return m_removeDescriptionHasBeenSet; }
    inline void SetRemoveDescription(bool value) { m_removeDescriptionHasBeenSet = true; m_removeDescription = value; }
    inline UpdateQuickResponseRequest& WithRemoveDescription(bool value) { SetRemoveDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to remove the grouping configuration of the quick response.</p>
     */
    inline bool GetRemoveGroupingConfiguration() const{ return m_removeGroupingConfiguration; }
    inline bool RemoveGroupingConfigurationHasBeenSet() const { return m_removeGroupingConfigurationHasBeenSet; }
    inline void SetRemoveGroupingConfiguration(bool value) { m_removeGroupingConfigurationHasBeenSet = true; m_removeGroupingConfiguration = value; }
    inline UpdateQuickResponseRequest& WithRemoveGroupingConfiguration(bool value) { SetRemoveGroupingConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to remove the shortcut key of the quick response.</p>
     */
    inline bool GetRemoveShortcutKey() const{ return m_removeShortcutKey; }
    inline bool RemoveShortcutKeyHasBeenSet() const { return m_removeShortcutKeyHasBeenSet; }
    inline void SetRemoveShortcutKey(bool value) { m_removeShortcutKeyHasBeenSet = true; m_removeShortcutKey = value; }
    inline UpdateQuickResponseRequest& WithRemoveShortcutKey(bool value) { SetRemoveShortcutKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shortcut key of the quick response. The value should be unique across the
     * knowledge base.</p>
     */
    inline const Aws::String& GetShortcutKey() const{ return m_shortcutKey; }
    inline bool ShortcutKeyHasBeenSet() const { return m_shortcutKeyHasBeenSet; }
    inline void SetShortcutKey(const Aws::String& value) { m_shortcutKeyHasBeenSet = true; m_shortcutKey = value; }
    inline void SetShortcutKey(Aws::String&& value) { m_shortcutKeyHasBeenSet = true; m_shortcutKey = std::move(value); }
    inline void SetShortcutKey(const char* value) { m_shortcutKeyHasBeenSet = true; m_shortcutKey.assign(value); }
    inline UpdateQuickResponseRequest& WithShortcutKey(const Aws::String& value) { SetShortcutKey(value); return *this;}
    inline UpdateQuickResponseRequest& WithShortcutKey(Aws::String&& value) { SetShortcutKey(std::move(value)); return *this;}
    inline UpdateQuickResponseRequest& WithShortcutKey(const char* value) { SetShortcutKey(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_channels;
    bool m_channelsHasBeenSet = false;

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

    Aws::String m_quickResponseId;
    bool m_quickResponseIdHasBeenSet = false;

    bool m_removeDescription;
    bool m_removeDescriptionHasBeenSet = false;

    bool m_removeGroupingConfiguration;
    bool m_removeGroupingConfigurationHasBeenSet = false;

    bool m_removeShortcutKey;
    bool m_removeShortcutKeyHasBeenSet = false;

    Aws::String m_shortcutKey;
    bool m_shortcutKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
