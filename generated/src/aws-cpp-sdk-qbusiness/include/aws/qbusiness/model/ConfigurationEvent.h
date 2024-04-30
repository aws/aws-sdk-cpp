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
    AWS_QBUSINESS_API ConfigurationEvent();
    AWS_QBUSINESS_API ConfigurationEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ConfigurationEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline const ChatMode& GetChatMode() const{ return m_chatMode; }

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
    inline bool ChatModeHasBeenSet() const { return m_chatModeHasBeenSet; }

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
    inline void SetChatMode(const ChatMode& value) { m_chatModeHasBeenSet = true; m_chatMode = value; }

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
    inline void SetChatMode(ChatMode&& value) { m_chatModeHasBeenSet = true; m_chatMode = std::move(value); }

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
    inline ConfigurationEvent& WithChatMode(const ChatMode& value) { SetChatMode(value); return *this;}

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
    inline ConfigurationEvent& WithChatMode(ChatMode&& value) { SetChatMode(std::move(value)); return *this;}


    
    inline const ChatModeConfiguration& GetChatModeConfiguration() const{ return m_chatModeConfiguration; }

    
    inline bool ChatModeConfigurationHasBeenSet() const { return m_chatModeConfigurationHasBeenSet; }

    
    inline void SetChatModeConfiguration(const ChatModeConfiguration& value) { m_chatModeConfigurationHasBeenSet = true; m_chatModeConfiguration = value; }

    
    inline void SetChatModeConfiguration(ChatModeConfiguration&& value) { m_chatModeConfigurationHasBeenSet = true; m_chatModeConfiguration = std::move(value); }

    
    inline ConfigurationEvent& WithChatModeConfiguration(const ChatModeConfiguration& value) { SetChatModeConfiguration(value); return *this;}

    
    inline ConfigurationEvent& WithChatModeConfiguration(ChatModeConfiguration&& value) { SetChatModeConfiguration(std::move(value)); return *this;}


    
    inline const AttributeFilter& GetAttributeFilter() const{ return m_attributeFilter; }

    
    inline bool AttributeFilterHasBeenSet() const { return m_attributeFilterHasBeenSet; }

    
    inline void SetAttributeFilter(const AttributeFilter& value) { m_attributeFilterHasBeenSet = true; m_attributeFilter = value; }

    
    inline void SetAttributeFilter(AttributeFilter&& value) { m_attributeFilterHasBeenSet = true; m_attributeFilter = std::move(value); }

    
    inline ConfigurationEvent& WithAttributeFilter(const AttributeFilter& value) { SetAttributeFilter(value); return *this;}

    
    inline ConfigurationEvent& WithAttributeFilter(AttributeFilter&& value) { SetAttributeFilter(std::move(value)); return *this;}

  private:

    ChatMode m_chatMode;
    bool m_chatModeHasBeenSet = false;

    ChatModeConfiguration m_chatModeConfiguration;
    bool m_chatModeConfigurationHasBeenSet = false;

    AttributeFilter m_attributeFilter;
    bool m_attributeFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
