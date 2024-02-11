/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/ConnectWisdomServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wisdom/model/QuickResponseDataProvider.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wisdom/model/GroupingConfiguration.h>
#include <utility>

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{

  /**
   */
  class UpdateQuickResponseRequest : public ConnectWisdomServiceRequest
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API UpdateQuickResponseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQuickResponse"; }

    AWS_CONNECTWISDOMSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Connect contact channels this quick response applies to. The
     * supported contact channel types include <code>Chat</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetChannels() const{ return m_channels; }

    /**
     * <p>The Amazon Connect contact channels this quick response applies to. The
     * supported contact channel types include <code>Chat</code>.</p>
     */
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }

    /**
     * <p>The Amazon Connect contact channels this quick response applies to. The
     * supported contact channel types include <code>Chat</code>.</p>
     */
    inline void SetChannels(const Aws::Vector<Aws::String>& value) { m_channelsHasBeenSet = true; m_channels = value; }

    /**
     * <p>The Amazon Connect contact channels this quick response applies to. The
     * supported contact channel types include <code>Chat</code>.</p>
     */
    inline void SetChannels(Aws::Vector<Aws::String>&& value) { m_channelsHasBeenSet = true; m_channels = std::move(value); }

    /**
     * <p>The Amazon Connect contact channels this quick response applies to. The
     * supported contact channel types include <code>Chat</code>.</p>
     */
    inline UpdateQuickResponseRequest& WithChannels(const Aws::Vector<Aws::String>& value) { SetChannels(value); return *this;}

    /**
     * <p>The Amazon Connect contact channels this quick response applies to. The
     * supported contact channel types include <code>Chat</code>.</p>
     */
    inline UpdateQuickResponseRequest& WithChannels(Aws::Vector<Aws::String>&& value) { SetChannels(std::move(value)); return *this;}

    /**
     * <p>The Amazon Connect contact channels this quick response applies to. The
     * supported contact channel types include <code>Chat</code>.</p>
     */
    inline UpdateQuickResponseRequest& AddChannels(const Aws::String& value) { m_channelsHasBeenSet = true; m_channels.push_back(value); return *this; }

    /**
     * <p>The Amazon Connect contact channels this quick response applies to. The
     * supported contact channel types include <code>Chat</code>.</p>
     */
    inline UpdateQuickResponseRequest& AddChannels(Aws::String&& value) { m_channelsHasBeenSet = true; m_channels.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Connect contact channels this quick response applies to. The
     * supported contact channel types include <code>Chat</code>.</p>
     */
    inline UpdateQuickResponseRequest& AddChannels(const char* value) { m_channelsHasBeenSet = true; m_channels.push_back(value); return *this; }


    /**
     * <p>The updated content of the quick response.</p>
     */
    inline const QuickResponseDataProvider& GetContent() const{ return m_content; }

    /**
     * <p>The updated content of the quick response.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The updated content of the quick response.</p>
     */
    inline void SetContent(const QuickResponseDataProvider& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The updated content of the quick response.</p>
     */
    inline void SetContent(QuickResponseDataProvider&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The updated content of the quick response.</p>
     */
    inline UpdateQuickResponseRequest& WithContent(const QuickResponseDataProvider& value) { SetContent(value); return *this;}

    /**
     * <p>The updated content of the quick response.</p>
     */
    inline UpdateQuickResponseRequest& WithContent(QuickResponseDataProvider&& value) { SetContent(std::move(value)); return *this;}


    /**
     * <p>The media type of the quick response content.</p> <ul> <li> <p>Use
     * <code>application/x.quickresponse;format=plain</code> for quick response written
     * in plain text.</p> </li> <li> <p>Use
     * <code>application/x.quickresponse;format=markdown</code> for quick response
     * written in richtext.</p> </li> </ul>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The media type of the quick response content.</p> <ul> <li> <p>Use
     * <code>application/x.quickresponse;format=plain</code> for quick response written
     * in plain text.</p> </li> <li> <p>Use
     * <code>application/x.quickresponse;format=markdown</code> for quick response
     * written in richtext.</p> </li> </ul>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The media type of the quick response content.</p> <ul> <li> <p>Use
     * <code>application/x.quickresponse;format=plain</code> for quick response written
     * in plain text.</p> </li> <li> <p>Use
     * <code>application/x.quickresponse;format=markdown</code> for quick response
     * written in richtext.</p> </li> </ul>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The media type of the quick response content.</p> <ul> <li> <p>Use
     * <code>application/x.quickresponse;format=plain</code> for quick response written
     * in plain text.</p> </li> <li> <p>Use
     * <code>application/x.quickresponse;format=markdown</code> for quick response
     * written in richtext.</p> </li> </ul>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The media type of the quick response content.</p> <ul> <li> <p>Use
     * <code>application/x.quickresponse;format=plain</code> for quick response written
     * in plain text.</p> </li> <li> <p>Use
     * <code>application/x.quickresponse;format=markdown</code> for quick response
     * written in richtext.</p> </li> </ul>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>The media type of the quick response content.</p> <ul> <li> <p>Use
     * <code>application/x.quickresponse;format=plain</code> for quick response written
     * in plain text.</p> </li> <li> <p>Use
     * <code>application/x.quickresponse;format=markdown</code> for quick response
     * written in richtext.</p> </li> </ul>
     */
    inline UpdateQuickResponseRequest& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The media type of the quick response content.</p> <ul> <li> <p>Use
     * <code>application/x.quickresponse;format=plain</code> for quick response written
     * in plain text.</p> </li> <li> <p>Use
     * <code>application/x.quickresponse;format=markdown</code> for quick response
     * written in richtext.</p> </li> </ul>
     */
    inline UpdateQuickResponseRequest& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The media type of the quick response content.</p> <ul> <li> <p>Use
     * <code>application/x.quickresponse;format=plain</code> for quick response written
     * in plain text.</p> </li> <li> <p>Use
     * <code>application/x.quickresponse;format=markdown</code> for quick response
     * written in richtext.</p> </li> </ul>
     */
    inline UpdateQuickResponseRequest& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>The updated description of the quick response.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The updated description of the quick response.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The updated description of the quick response.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The updated description of the quick response.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The updated description of the quick response.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The updated description of the quick response.</p>
     */
    inline UpdateQuickResponseRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The updated description of the quick response.</p>
     */
    inline UpdateQuickResponseRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The updated description of the quick response.</p>
     */
    inline UpdateQuickResponseRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The updated grouping configuration of the quick response.</p>
     */
    inline const GroupingConfiguration& GetGroupingConfiguration() const{ return m_groupingConfiguration; }

    /**
     * <p>The updated grouping configuration of the quick response.</p>
     */
    inline bool GroupingConfigurationHasBeenSet() const { return m_groupingConfigurationHasBeenSet; }

    /**
     * <p>The updated grouping configuration of the quick response.</p>
     */
    inline void SetGroupingConfiguration(const GroupingConfiguration& value) { m_groupingConfigurationHasBeenSet = true; m_groupingConfiguration = value; }

    /**
     * <p>The updated grouping configuration of the quick response.</p>
     */
    inline void SetGroupingConfiguration(GroupingConfiguration&& value) { m_groupingConfigurationHasBeenSet = true; m_groupingConfiguration = std::move(value); }

    /**
     * <p>The updated grouping configuration of the quick response.</p>
     */
    inline UpdateQuickResponseRequest& WithGroupingConfiguration(const GroupingConfiguration& value) { SetGroupingConfiguration(value); return *this;}

    /**
     * <p>The updated grouping configuration of the quick response.</p>
     */
    inline UpdateQuickResponseRequest& WithGroupingConfiguration(GroupingConfiguration&& value) { SetGroupingConfiguration(std::move(value)); return *this;}


    /**
     * <p>Whether the quick response is active. </p>
     */
    inline bool GetIsActive() const{ return m_isActive; }

    /**
     * <p>Whether the quick response is active. </p>
     */
    inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }

    /**
     * <p>Whether the quick response is active. </p>
     */
    inline void SetIsActive(bool value) { m_isActiveHasBeenSet = true; m_isActive = value; }

    /**
     * <p>Whether the quick response is active. </p>
     */
    inline UpdateQuickResponseRequest& WithIsActive(bool value) { SetIsActive(value); return *this;}


    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Wisdom Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Wisdom Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p>
     */
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Wisdom Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Wisdom Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Wisdom Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Wisdom Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p>
     */
    inline UpdateQuickResponseRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Wisdom Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p>
     */
    inline UpdateQuickResponseRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Wisdom Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p>
     */
    inline UpdateQuickResponseRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


    /**
     * <p>The language code value for the language in which the quick response is
     * written. The supported language codes include <code>de_DE</code>,
     * <code>en_US</code>, <code>es_ES</code>, <code>fr_FR</code>, <code>id_ID</code>,
     * <code>it_IT</code>, <code>ja_JP</code>, <code>ko_KR</code>, <code>pt_BR</code>,
     * <code>zh_CN</code>, <code>zh_TW</code> </p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }

    /**
     * <p>The language code value for the language in which the quick response is
     * written. The supported language codes include <code>de_DE</code>,
     * <code>en_US</code>, <code>es_ES</code>, <code>fr_FR</code>, <code>id_ID</code>,
     * <code>it_IT</code>, <code>ja_JP</code>, <code>ko_KR</code>, <code>pt_BR</code>,
     * <code>zh_CN</code>, <code>zh_TW</code> </p>
     */
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }

    /**
     * <p>The language code value for the language in which the quick response is
     * written. The supported language codes include <code>de_DE</code>,
     * <code>en_US</code>, <code>es_ES</code>, <code>fr_FR</code>, <code>id_ID</code>,
     * <code>it_IT</code>, <code>ja_JP</code>, <code>ko_KR</code>, <code>pt_BR</code>,
     * <code>zh_CN</code>, <code>zh_TW</code> </p>
     */
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>The language code value for the language in which the quick response is
     * written. The supported language codes include <code>de_DE</code>,
     * <code>en_US</code>, <code>es_ES</code>, <code>fr_FR</code>, <code>id_ID</code>,
     * <code>it_IT</code>, <code>ja_JP</code>, <code>ko_KR</code>, <code>pt_BR</code>,
     * <code>zh_CN</code>, <code>zh_TW</code> </p>
     */
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }

    /**
     * <p>The language code value for the language in which the quick response is
     * written. The supported language codes include <code>de_DE</code>,
     * <code>en_US</code>, <code>es_ES</code>, <code>fr_FR</code>, <code>id_ID</code>,
     * <code>it_IT</code>, <code>ja_JP</code>, <code>ko_KR</code>, <code>pt_BR</code>,
     * <code>zh_CN</code>, <code>zh_TW</code> </p>
     */
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }

    /**
     * <p>The language code value for the language in which the quick response is
     * written. The supported language codes include <code>de_DE</code>,
     * <code>en_US</code>, <code>es_ES</code>, <code>fr_FR</code>, <code>id_ID</code>,
     * <code>it_IT</code>, <code>ja_JP</code>, <code>ko_KR</code>, <code>pt_BR</code>,
     * <code>zh_CN</code>, <code>zh_TW</code> </p>
     */
    inline UpdateQuickResponseRequest& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}

    /**
     * <p>The language code value for the language in which the quick response is
     * written. The supported language codes include <code>de_DE</code>,
     * <code>en_US</code>, <code>es_ES</code>, <code>fr_FR</code>, <code>id_ID</code>,
     * <code>it_IT</code>, <code>ja_JP</code>, <code>ko_KR</code>, <code>pt_BR</code>,
     * <code>zh_CN</code>, <code>zh_TW</code> </p>
     */
    inline UpdateQuickResponseRequest& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code value for the language in which the quick response is
     * written. The supported language codes include <code>de_DE</code>,
     * <code>en_US</code>, <code>es_ES</code>, <code>fr_FR</code>, <code>id_ID</code>,
     * <code>it_IT</code>, <code>ja_JP</code>, <code>ko_KR</code>, <code>pt_BR</code>,
     * <code>zh_CN</code>, <code>zh_TW</code> </p>
     */
    inline UpdateQuickResponseRequest& WithLanguage(const char* value) { SetLanguage(value); return *this;}


    /**
     * <p>The name of the quick response.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the quick response.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the quick response.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the quick response.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the quick response.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the quick response.</p>
     */
    inline UpdateQuickResponseRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the quick response.</p>
     */
    inline UpdateQuickResponseRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the quick response.</p>
     */
    inline UpdateQuickResponseRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier of the quick response.</p>
     */
    inline const Aws::String& GetQuickResponseId() const{ return m_quickResponseId; }

    /**
     * <p>The identifier of the quick response.</p>
     */
    inline bool QuickResponseIdHasBeenSet() const { return m_quickResponseIdHasBeenSet; }

    /**
     * <p>The identifier of the quick response.</p>
     */
    inline void SetQuickResponseId(const Aws::String& value) { m_quickResponseIdHasBeenSet = true; m_quickResponseId = value; }

    /**
     * <p>The identifier of the quick response.</p>
     */
    inline void SetQuickResponseId(Aws::String&& value) { m_quickResponseIdHasBeenSet = true; m_quickResponseId = std::move(value); }

    /**
     * <p>The identifier of the quick response.</p>
     */
    inline void SetQuickResponseId(const char* value) { m_quickResponseIdHasBeenSet = true; m_quickResponseId.assign(value); }

    /**
     * <p>The identifier of the quick response.</p>
     */
    inline UpdateQuickResponseRequest& WithQuickResponseId(const Aws::String& value) { SetQuickResponseId(value); return *this;}

    /**
     * <p>The identifier of the quick response.</p>
     */
    inline UpdateQuickResponseRequest& WithQuickResponseId(Aws::String&& value) { SetQuickResponseId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the quick response.</p>
     */
    inline UpdateQuickResponseRequest& WithQuickResponseId(const char* value) { SetQuickResponseId(value); return *this;}


    /**
     * <p>Whether to remove the description from the quick response.</p>
     */
    inline bool GetRemoveDescription() const{ return m_removeDescription; }

    /**
     * <p>Whether to remove the description from the quick response.</p>
     */
    inline bool RemoveDescriptionHasBeenSet() const { return m_removeDescriptionHasBeenSet; }

    /**
     * <p>Whether to remove the description from the quick response.</p>
     */
    inline void SetRemoveDescription(bool value) { m_removeDescriptionHasBeenSet = true; m_removeDescription = value; }

    /**
     * <p>Whether to remove the description from the quick response.</p>
     */
    inline UpdateQuickResponseRequest& WithRemoveDescription(bool value) { SetRemoveDescription(value); return *this;}


    /**
     * <p>Whether to remove the grouping configuration of the quick response.</p>
     */
    inline bool GetRemoveGroupingConfiguration() const{ return m_removeGroupingConfiguration; }

    /**
     * <p>Whether to remove the grouping configuration of the quick response.</p>
     */
    inline bool RemoveGroupingConfigurationHasBeenSet() const { return m_removeGroupingConfigurationHasBeenSet; }

    /**
     * <p>Whether to remove the grouping configuration of the quick response.</p>
     */
    inline void SetRemoveGroupingConfiguration(bool value) { m_removeGroupingConfigurationHasBeenSet = true; m_removeGroupingConfiguration = value; }

    /**
     * <p>Whether to remove the grouping configuration of the quick response.</p>
     */
    inline UpdateQuickResponseRequest& WithRemoveGroupingConfiguration(bool value) { SetRemoveGroupingConfiguration(value); return *this;}


    /**
     * <p>Whether to remove the shortcut key of the quick response.</p>
     */
    inline bool GetRemoveShortcutKey() const{ return m_removeShortcutKey; }

    /**
     * <p>Whether to remove the shortcut key of the quick response.</p>
     */
    inline bool RemoveShortcutKeyHasBeenSet() const { return m_removeShortcutKeyHasBeenSet; }

    /**
     * <p>Whether to remove the shortcut key of the quick response.</p>
     */
    inline void SetRemoveShortcutKey(bool value) { m_removeShortcutKeyHasBeenSet = true; m_removeShortcutKey = value; }

    /**
     * <p>Whether to remove the shortcut key of the quick response.</p>
     */
    inline UpdateQuickResponseRequest& WithRemoveShortcutKey(bool value) { SetRemoveShortcutKey(value); return *this;}


    /**
     * <p>The shortcut key of the quick response. The value should be unique across the
     * knowledge base.</p>
     */
    inline const Aws::String& GetShortcutKey() const{ return m_shortcutKey; }

    /**
     * <p>The shortcut key of the quick response. The value should be unique across the
     * knowledge base.</p>
     */
    inline bool ShortcutKeyHasBeenSet() const { return m_shortcutKeyHasBeenSet; }

    /**
     * <p>The shortcut key of the quick response. The value should be unique across the
     * knowledge base.</p>
     */
    inline void SetShortcutKey(const Aws::String& value) { m_shortcutKeyHasBeenSet = true; m_shortcutKey = value; }

    /**
     * <p>The shortcut key of the quick response. The value should be unique across the
     * knowledge base.</p>
     */
    inline void SetShortcutKey(Aws::String&& value) { m_shortcutKeyHasBeenSet = true; m_shortcutKey = std::move(value); }

    /**
     * <p>The shortcut key of the quick response. The value should be unique across the
     * knowledge base.</p>
     */
    inline void SetShortcutKey(const char* value) { m_shortcutKeyHasBeenSet = true; m_shortcutKey.assign(value); }

    /**
     * <p>The shortcut key of the quick response. The value should be unique across the
     * knowledge base.</p>
     */
    inline UpdateQuickResponseRequest& WithShortcutKey(const Aws::String& value) { SetShortcutKey(value); return *this;}

    /**
     * <p>The shortcut key of the quick response. The value should be unique across the
     * knowledge base.</p>
     */
    inline UpdateQuickResponseRequest& WithShortcutKey(Aws::String&& value) { SetShortcutKey(std::move(value)); return *this;}

    /**
     * <p>The shortcut key of the quick response. The value should be unique across the
     * knowledge base.</p>
     */
    inline UpdateQuickResponseRequest& WithShortcutKey(const char* value) { SetShortcutKey(value); return *this;}

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
} // namespace ConnectWisdomService
} // namespace Aws
