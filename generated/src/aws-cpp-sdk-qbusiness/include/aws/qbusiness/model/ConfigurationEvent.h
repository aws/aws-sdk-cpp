/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/ChatMode.h>
#include <aws/qbusiness/model/ChatModeConfiguration.h>
#include <aws/qbusiness/model/AttributeFilter.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QBusiness
{
namespace Model
{

  /**
   * <p>A configuration event activated by an end user request to select a specific
   * chat mode.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ConfigurationEvent">AWS
   * API Reference</a></p>
   */
  class ConfigurationEvent
  {
  public:
    AWS_QBUSINESS_API ConfigurationEvent() = default;
    AWS_QBUSINESS_API ConfigurationEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ConfigurationEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The chat modes available to an Amazon Q Business end user.</p> <ul> <li> <p>
     * <code>RETRIEVAL_MODE</code> - The default chat mode for an Amazon Q Business
     * application. When this mode is enabled, Amazon Q Business generates responses
     * only from data sources connected to an Amazon Q Business application.</p> </li>
     * <li> <p> <code>CREATOR_MODE</code> - By selecting this mode, users can choose to
     * generate responses only from the LLM knowledge, without consulting connected
     * data sources, for a chat request.</p> </li> <li> <p> <code>PLUGIN_MODE</code> -
     * By selecting this mode, users can choose to use plugins in chat.</p> </li> </ul>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/guardrails.html">Admin
     * controls and guardrails</a>, <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/plugins.html">Plugins</a>,
     * and <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/using-web-experience.html#chat-source-scope">Conversation
     * settings</a>.</p>
     */
    inline ChatMode GetChatMode() const { return m_chatMode; }
    inline bool ChatModeHasBeenSet() const { return m_chatModeHasBeenSet; }
    inline void SetChatMode(ChatMode value) { m_chatModeHasBeenSet = true; m_chatMode = value; }
    inline ConfigurationEvent& WithChatMode(ChatMode value) { SetChatMode(value); return *this;}
    ///@}

    ///@{
    
    inline const ChatModeConfiguration& GetChatModeConfiguration() const { return m_chatModeConfiguration; }
    inline bool ChatModeConfigurationHasBeenSet() const { return m_chatModeConfigurationHasBeenSet; }
    template<typename ChatModeConfigurationT = ChatModeConfiguration>
    void SetChatModeConfiguration(ChatModeConfigurationT&& value) { m_chatModeConfigurationHasBeenSet = true; m_chatModeConfiguration = std::forward<ChatModeConfigurationT>(value); }
    template<typename ChatModeConfigurationT = ChatModeConfiguration>
    ConfigurationEvent& WithChatModeConfiguration(ChatModeConfigurationT&& value) { SetChatModeConfiguration(std::forward<ChatModeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AttributeFilter& GetAttributeFilter() const { return m_attributeFilter; }
    inline bool AttributeFilterHasBeenSet() const { return m_attributeFilterHasBeenSet; }
    template<typename AttributeFilterT = AttributeFilter>
    void SetAttributeFilter(AttributeFilterT&& value) { m_attributeFilterHasBeenSet = true; m_attributeFilter = std::forward<AttributeFilterT>(value); }
    template<typename AttributeFilterT = AttributeFilter>
    ConfigurationEvent& WithAttributeFilter(AttributeFilterT&& value) { SetAttributeFilter(std::forward<AttributeFilterT>(value)); return *this;}
    ///@}
  private:

    ChatMode m_chatMode{ChatMode::NOT_SET};
    bool m_chatModeHasBeenSet = false;

    ChatModeConfiguration m_chatModeConfiguration;
    bool m_chatModeConfigurationHasBeenSet = false;

    AttributeFilter m_attributeFilter;
    bool m_attributeFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
