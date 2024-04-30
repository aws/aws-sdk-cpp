/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/PluginType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qbusiness/model/ActionReviewPayloadField.h>
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
   * <p>An output event that Amazon Q Business returns to an user who wants to
   * perform a plugin action during a streaming chat conversation. It contains
   * information about the selected action with a list of possible user input fields,
   * some pre-populated by Amazon Q Business. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ActionReviewEvent">AWS
   * API Reference</a></p>
   */
  class ActionReviewEvent
  {
  public:
    AWS_QBUSINESS_API ActionReviewEvent();
    AWS_QBUSINESS_API ActionReviewEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ActionReviewEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the conversation with which the action review event is
     * associated.</p>
     */
    inline const Aws::String& GetConversationId() const{ return m_conversationId; }

    /**
     * <p>The identifier of the conversation with which the action review event is
     * associated.</p>
     */
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }

    /**
     * <p>The identifier of the conversation with which the action review event is
     * associated.</p>
     */
    inline void SetConversationId(const Aws::String& value) { m_conversationIdHasBeenSet = true; m_conversationId = value; }

    /**
     * <p>The identifier of the conversation with which the action review event is
     * associated.</p>
     */
    inline void SetConversationId(Aws::String&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::move(value); }

    /**
     * <p>The identifier of the conversation with which the action review event is
     * associated.</p>
     */
    inline void SetConversationId(const char* value) { m_conversationIdHasBeenSet = true; m_conversationId.assign(value); }

    /**
     * <p>The identifier of the conversation with which the action review event is
     * associated.</p>
     */
    inline ActionReviewEvent& WithConversationId(const Aws::String& value) { SetConversationId(value); return *this;}

    /**
     * <p>The identifier of the conversation with which the action review event is
     * associated.</p>
     */
    inline ActionReviewEvent& WithConversationId(Aws::String&& value) { SetConversationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the conversation with which the action review event is
     * associated.</p>
     */
    inline ActionReviewEvent& WithConversationId(const char* value) { SetConversationId(value); return *this;}


    /**
     * <p>The identifier of the conversation with which the plugin action is
     * associated.</p>
     */
    inline const Aws::String& GetUserMessageId() const{ return m_userMessageId; }

    /**
     * <p>The identifier of the conversation with which the plugin action is
     * associated.</p>
     */
    inline bool UserMessageIdHasBeenSet() const { return m_userMessageIdHasBeenSet; }

    /**
     * <p>The identifier of the conversation with which the plugin action is
     * associated.</p>
     */
    inline void SetUserMessageId(const Aws::String& value) { m_userMessageIdHasBeenSet = true; m_userMessageId = value; }

    /**
     * <p>The identifier of the conversation with which the plugin action is
     * associated.</p>
     */
    inline void SetUserMessageId(Aws::String&& value) { m_userMessageIdHasBeenSet = true; m_userMessageId = std::move(value); }

    /**
     * <p>The identifier of the conversation with which the plugin action is
     * associated.</p>
     */
    inline void SetUserMessageId(const char* value) { m_userMessageIdHasBeenSet = true; m_userMessageId.assign(value); }

    /**
     * <p>The identifier of the conversation with which the plugin action is
     * associated.</p>
     */
    inline ActionReviewEvent& WithUserMessageId(const Aws::String& value) { SetUserMessageId(value); return *this;}

    /**
     * <p>The identifier of the conversation with which the plugin action is
     * associated.</p>
     */
    inline ActionReviewEvent& WithUserMessageId(Aws::String&& value) { SetUserMessageId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the conversation with which the plugin action is
     * associated.</p>
     */
    inline ActionReviewEvent& WithUserMessageId(const char* value) { SetUserMessageId(value); return *this;}


    /**
     * <p>The identifier of an Amazon Q Business AI generated associated with the
     * action review event.</p>
     */
    inline const Aws::String& GetSystemMessageId() const{ return m_systemMessageId; }

    /**
     * <p>The identifier of an Amazon Q Business AI generated associated with the
     * action review event.</p>
     */
    inline bool SystemMessageIdHasBeenSet() const { return m_systemMessageIdHasBeenSet; }

    /**
     * <p>The identifier of an Amazon Q Business AI generated associated with the
     * action review event.</p>
     */
    inline void SetSystemMessageId(const Aws::String& value) { m_systemMessageIdHasBeenSet = true; m_systemMessageId = value; }

    /**
     * <p>The identifier of an Amazon Q Business AI generated associated with the
     * action review event.</p>
     */
    inline void SetSystemMessageId(Aws::String&& value) { m_systemMessageIdHasBeenSet = true; m_systemMessageId = std::move(value); }

    /**
     * <p>The identifier of an Amazon Q Business AI generated associated with the
     * action review event.</p>
     */
    inline void SetSystemMessageId(const char* value) { m_systemMessageIdHasBeenSet = true; m_systemMessageId.assign(value); }

    /**
     * <p>The identifier of an Amazon Q Business AI generated associated with the
     * action review event.</p>
     */
    inline ActionReviewEvent& WithSystemMessageId(const Aws::String& value) { SetSystemMessageId(value); return *this;}

    /**
     * <p>The identifier of an Amazon Q Business AI generated associated with the
     * action review event.</p>
     */
    inline ActionReviewEvent& WithSystemMessageId(Aws::String&& value) { SetSystemMessageId(std::move(value)); return *this;}

    /**
     * <p>The identifier of an Amazon Q Business AI generated associated with the
     * action review event.</p>
     */
    inline ActionReviewEvent& WithSystemMessageId(const char* value) { SetSystemMessageId(value); return *this;}


    /**
     * <p>The identifier of the plugin associated with the action review event.</p>
     */
    inline const Aws::String& GetPluginId() const{ return m_pluginId; }

    /**
     * <p>The identifier of the plugin associated with the action review event.</p>
     */
    inline bool PluginIdHasBeenSet() const { return m_pluginIdHasBeenSet; }

    /**
     * <p>The identifier of the plugin associated with the action review event.</p>
     */
    inline void SetPluginId(const Aws::String& value) { m_pluginIdHasBeenSet = true; m_pluginId = value; }

    /**
     * <p>The identifier of the plugin associated with the action review event.</p>
     */
    inline void SetPluginId(Aws::String&& value) { m_pluginIdHasBeenSet = true; m_pluginId = std::move(value); }

    /**
     * <p>The identifier of the plugin associated with the action review event.</p>
     */
    inline void SetPluginId(const char* value) { m_pluginIdHasBeenSet = true; m_pluginId.assign(value); }

    /**
     * <p>The identifier of the plugin associated with the action review event.</p>
     */
    inline ActionReviewEvent& WithPluginId(const Aws::String& value) { SetPluginId(value); return *this;}

    /**
     * <p>The identifier of the plugin associated with the action review event.</p>
     */
    inline ActionReviewEvent& WithPluginId(Aws::String&& value) { SetPluginId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the plugin associated with the action review event.</p>
     */
    inline ActionReviewEvent& WithPluginId(const char* value) { SetPluginId(value); return *this;}


    /**
     * <p>The type of plugin.</p>
     */
    inline const PluginType& GetPluginType() const{ return m_pluginType; }

    /**
     * <p>The type of plugin.</p>
     */
    inline bool PluginTypeHasBeenSet() const { return m_pluginTypeHasBeenSet; }

    /**
     * <p>The type of plugin.</p>
     */
    inline void SetPluginType(const PluginType& value) { m_pluginTypeHasBeenSet = true; m_pluginType = value; }

    /**
     * <p>The type of plugin.</p>
     */
    inline void SetPluginType(PluginType&& value) { m_pluginTypeHasBeenSet = true; m_pluginType = std::move(value); }

    /**
     * <p>The type of plugin.</p>
     */
    inline ActionReviewEvent& WithPluginType(const PluginType& value) { SetPluginType(value); return *this;}

    /**
     * <p>The type of plugin.</p>
     */
    inline ActionReviewEvent& WithPluginType(PluginType&& value) { SetPluginType(std::move(value)); return *this;}


    /**
     * <p>Field values that an end user needs to provide to Amazon Q Business for
     * Amazon Q Business to perform the requested plugin action.</p>
     */
    inline const Aws::Map<Aws::String, ActionReviewPayloadField>& GetPayload() const{ return m_payload; }

    /**
     * <p>Field values that an end user needs to provide to Amazon Q Business for
     * Amazon Q Business to perform the requested plugin action.</p>
     */
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }

    /**
     * <p>Field values that an end user needs to provide to Amazon Q Business for
     * Amazon Q Business to perform the requested plugin action.</p>
     */
    inline void SetPayload(const Aws::Map<Aws::String, ActionReviewPayloadField>& value) { m_payloadHasBeenSet = true; m_payload = value; }

    /**
     * <p>Field values that an end user needs to provide to Amazon Q Business for
     * Amazon Q Business to perform the requested plugin action.</p>
     */
    inline void SetPayload(Aws::Map<Aws::String, ActionReviewPayloadField>&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }

    /**
     * <p>Field values that an end user needs to provide to Amazon Q Business for
     * Amazon Q Business to perform the requested plugin action.</p>
     */
    inline ActionReviewEvent& WithPayload(const Aws::Map<Aws::String, ActionReviewPayloadField>& value) { SetPayload(value); return *this;}

    /**
     * <p>Field values that an end user needs to provide to Amazon Q Business for
     * Amazon Q Business to perform the requested plugin action.</p>
     */
    inline ActionReviewEvent& WithPayload(Aws::Map<Aws::String, ActionReviewPayloadField>&& value) { SetPayload(std::move(value)); return *this;}

    /**
     * <p>Field values that an end user needs to provide to Amazon Q Business for
     * Amazon Q Business to perform the requested plugin action.</p>
     */
    inline ActionReviewEvent& AddPayload(const Aws::String& key, const ActionReviewPayloadField& value) { m_payloadHasBeenSet = true; m_payload.emplace(key, value); return *this; }

    /**
     * <p>Field values that an end user needs to provide to Amazon Q Business for
     * Amazon Q Business to perform the requested plugin action.</p>
     */
    inline ActionReviewEvent& AddPayload(Aws::String&& key, const ActionReviewPayloadField& value) { m_payloadHasBeenSet = true; m_payload.emplace(std::move(key), value); return *this; }

    /**
     * <p>Field values that an end user needs to provide to Amazon Q Business for
     * Amazon Q Business to perform the requested plugin action.</p>
     */
    inline ActionReviewEvent& AddPayload(const Aws::String& key, ActionReviewPayloadField&& value) { m_payloadHasBeenSet = true; m_payload.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Field values that an end user needs to provide to Amazon Q Business for
     * Amazon Q Business to perform the requested plugin action.</p>
     */
    inline ActionReviewEvent& AddPayload(Aws::String&& key, ActionReviewPayloadField&& value) { m_payloadHasBeenSet = true; m_payload.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Field values that an end user needs to provide to Amazon Q Business for
     * Amazon Q Business to perform the requested plugin action.</p>
     */
    inline ActionReviewEvent& AddPayload(const char* key, ActionReviewPayloadField&& value) { m_payloadHasBeenSet = true; m_payload.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Field values that an end user needs to provide to Amazon Q Business for
     * Amazon Q Business to perform the requested plugin action.</p>
     */
    inline ActionReviewEvent& AddPayload(const char* key, const ActionReviewPayloadField& value) { m_payloadHasBeenSet = true; m_payload.emplace(key, value); return *this; }


    /**
     * <p>A string used to retain information about the hierarchical contexts within an
     * action review event payload.</p>
     */
    inline const Aws::String& GetPayloadFieldNameSeparator() const{ return m_payloadFieldNameSeparator; }

    /**
     * <p>A string used to retain information about the hierarchical contexts within an
     * action review event payload.</p>
     */
    inline bool PayloadFieldNameSeparatorHasBeenSet() const { return m_payloadFieldNameSeparatorHasBeenSet; }

    /**
     * <p>A string used to retain information about the hierarchical contexts within an
     * action review event payload.</p>
     */
    inline void SetPayloadFieldNameSeparator(const Aws::String& value) { m_payloadFieldNameSeparatorHasBeenSet = true; m_payloadFieldNameSeparator = value; }

    /**
     * <p>A string used to retain information about the hierarchical contexts within an
     * action review event payload.</p>
     */
    inline void SetPayloadFieldNameSeparator(Aws::String&& value) { m_payloadFieldNameSeparatorHasBeenSet = true; m_payloadFieldNameSeparator = std::move(value); }

    /**
     * <p>A string used to retain information about the hierarchical contexts within an
     * action review event payload.</p>
     */
    inline void SetPayloadFieldNameSeparator(const char* value) { m_payloadFieldNameSeparatorHasBeenSet = true; m_payloadFieldNameSeparator.assign(value); }

    /**
     * <p>A string used to retain information about the hierarchical contexts within an
     * action review event payload.</p>
     */
    inline ActionReviewEvent& WithPayloadFieldNameSeparator(const Aws::String& value) { SetPayloadFieldNameSeparator(value); return *this;}

    /**
     * <p>A string used to retain information about the hierarchical contexts within an
     * action review event payload.</p>
     */
    inline ActionReviewEvent& WithPayloadFieldNameSeparator(Aws::String&& value) { SetPayloadFieldNameSeparator(std::move(value)); return *this;}

    /**
     * <p>A string used to retain information about the hierarchical contexts within an
     * action review event payload.</p>
     */
    inline ActionReviewEvent& WithPayloadFieldNameSeparator(const char* value) { SetPayloadFieldNameSeparator(value); return *this;}

  private:

    Aws::String m_conversationId;
    bool m_conversationIdHasBeenSet = false;

    Aws::String m_userMessageId;
    bool m_userMessageIdHasBeenSet = false;

    Aws::String m_systemMessageId;
    bool m_systemMessageIdHasBeenSet = false;

    Aws::String m_pluginId;
    bool m_pluginIdHasBeenSet = false;

    PluginType m_pluginType;
    bool m_pluginTypeHasBeenSet = false;

    Aws::Map<Aws::String, ActionReviewPayloadField> m_payload;
    bool m_payloadHasBeenSet = false;

    Aws::String m_payloadFieldNameSeparator;
    bool m_payloadFieldNameSeparatorHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
