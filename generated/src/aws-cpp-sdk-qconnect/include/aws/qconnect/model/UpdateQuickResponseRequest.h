/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/QuickResponseDataProvider.h>
#include <aws/qconnect/model/GroupingConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_QCONNECT_API UpdateQuickResponseRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQuickResponse"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the knowledge base. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    UpdateQuickResponseRequest& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the quick response.</p>
     */
    inline const Aws::String& GetQuickResponseId() const { return m_quickResponseId; }
    inline bool QuickResponseIdHasBeenSet() const { return m_quickResponseIdHasBeenSet; }
    template<typename QuickResponseIdT = Aws::String>
    void SetQuickResponseId(QuickResponseIdT&& value) { m_quickResponseIdHasBeenSet = true; m_quickResponseId = std::forward<QuickResponseIdT>(value); }
    template<typename QuickResponseIdT = Aws::String>
    UpdateQuickResponseRequest& WithQuickResponseId(QuickResponseIdT&& value) { SetQuickResponseId(std::forward<QuickResponseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the quick response.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateQuickResponseRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated content of the quick response.</p>
     */
    inline const QuickResponseDataProvider& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = QuickResponseDataProvider>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = QuickResponseDataProvider>
    UpdateQuickResponseRequest& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The media type of the quick response content.</p> <ul> <li> <p>Use
     * <code>application/x.quickresponse;format=plain</code> for quick response written
     * in plain text.</p> </li> <li> <p>Use
     * <code>application/x.quickresponse;format=markdown</code> for quick response
     * written in richtext.</p> </li> </ul>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    UpdateQuickResponseRequest& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated grouping configuration of the quick response.</p>
     */
    inline const GroupingConfiguration& GetGroupingConfiguration() const { return m_groupingConfiguration; }
    inline bool GroupingConfigurationHasBeenSet() const { return m_groupingConfigurationHasBeenSet; }
    template<typename GroupingConfigurationT = GroupingConfiguration>
    void SetGroupingConfiguration(GroupingConfigurationT&& value) { m_groupingConfigurationHasBeenSet = true; m_groupingConfiguration = std::forward<GroupingConfigurationT>(value); }
    template<typename GroupingConfigurationT = GroupingConfiguration>
    UpdateQuickResponseRequest& WithGroupingConfiguration(GroupingConfigurationT&& value) { SetGroupingConfiguration(std::forward<GroupingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to remove the grouping configuration of the quick response.</p>
     */
    inline bool GetRemoveGroupingConfiguration() const { return m_removeGroupingConfiguration; }
    inline bool RemoveGroupingConfigurationHasBeenSet() const { return m_removeGroupingConfigurationHasBeenSet; }
    inline void SetRemoveGroupingConfiguration(bool value) { m_removeGroupingConfigurationHasBeenSet = true; m_removeGroupingConfiguration = value; }
    inline UpdateQuickResponseRequest& WithRemoveGroupingConfiguration(bool value) { SetRemoveGroupingConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated description of the quick response.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateQuickResponseRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to remove the description from the quick response.</p>
     */
    inline bool GetRemoveDescription() const { return m_removeDescription; }
    inline bool RemoveDescriptionHasBeenSet() const { return m_removeDescriptionHasBeenSet; }
    inline void SetRemoveDescription(bool value) { m_removeDescriptionHasBeenSet = true; m_removeDescription = value; }
    inline UpdateQuickResponseRequest& WithRemoveDescription(bool value) { SetRemoveDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shortcut key of the quick response. The value should be unique across the
     * knowledge base.</p>
     */
    inline const Aws::String& GetShortcutKey() const { return m_shortcutKey; }
    inline bool ShortcutKeyHasBeenSet() const { return m_shortcutKeyHasBeenSet; }
    template<typename ShortcutKeyT = Aws::String>
    void SetShortcutKey(ShortcutKeyT&& value) { m_shortcutKeyHasBeenSet = true; m_shortcutKey = std::forward<ShortcutKeyT>(value); }
    template<typename ShortcutKeyT = Aws::String>
    UpdateQuickResponseRequest& WithShortcutKey(ShortcutKeyT&& value) { SetShortcutKey(std::forward<ShortcutKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to remove the shortcut key of the quick response.</p>
     */
    inline bool GetRemoveShortcutKey() const { return m_removeShortcutKey; }
    inline bool RemoveShortcutKeyHasBeenSet() const { return m_removeShortcutKeyHasBeenSet; }
    inline void SetRemoveShortcutKey(bool value) { m_removeShortcutKeyHasBeenSet = true; m_removeShortcutKey = value; }
    inline UpdateQuickResponseRequest& WithRemoveShortcutKey(bool value) { SetRemoveShortcutKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the quick response is active. </p>
     */
    inline bool GetIsActive() const { return m_isActive; }
    inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }
    inline void SetIsActive(bool value) { m_isActiveHasBeenSet = true; m_isActive = value; }
    inline UpdateQuickResponseRequest& WithIsActive(bool value) { SetIsActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Connect contact channels this quick response applies to. The
     * supported contact channel types include <code>Chat</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetChannels() const { return m_channels; }
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }
    template<typename ChannelsT = Aws::Vector<Aws::String>>
    void SetChannels(ChannelsT&& value) { m_channelsHasBeenSet = true; m_channels = std::forward<ChannelsT>(value); }
    template<typename ChannelsT = Aws::Vector<Aws::String>>
    UpdateQuickResponseRequest& WithChannels(ChannelsT&& value) { SetChannels(std::forward<ChannelsT>(value)); return *this;}
    template<typename ChannelsT = Aws::String>
    UpdateQuickResponseRequest& AddChannels(ChannelsT&& value) { m_channelsHasBeenSet = true; m_channels.emplace_back(std::forward<ChannelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The language code value for the language in which the quick response is
     * written. The supported language codes include <code>de_DE</code>,
     * <code>en_US</code>, <code>es_ES</code>, <code>fr_FR</code>, <code>id_ID</code>,
     * <code>it_IT</code>, <code>ja_JP</code>, <code>ko_KR</code>, <code>pt_BR</code>,
     * <code>zh_CN</code>, <code>zh_TW</code> </p>
     */
    inline const Aws::String& GetLanguage() const { return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    template<typename LanguageT = Aws::String>
    void SetLanguage(LanguageT&& value) { m_languageHasBeenSet = true; m_language = std::forward<LanguageT>(value); }
    template<typename LanguageT = Aws::String>
    UpdateQuickResponseRequest& WithLanguage(LanguageT&& value) { SetLanguage(std::forward<LanguageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_quickResponseId;
    bool m_quickResponseIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    QuickResponseDataProvider m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    GroupingConfiguration m_groupingConfiguration;
    bool m_groupingConfigurationHasBeenSet = false;

    bool m_removeGroupingConfiguration{false};
    bool m_removeGroupingConfigurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_removeDescription{false};
    bool m_removeDescriptionHasBeenSet = false;

    Aws::String m_shortcutKey;
    bool m_shortcutKeyHasBeenSet = false;

    bool m_removeShortcutKey{false};
    bool m_removeShortcutKeyHasBeenSet = false;

    bool m_isActive{false};
    bool m_isActiveHasBeenSet = false;

    Aws::Vector<Aws::String> m_channels;
    bool m_channelsHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
