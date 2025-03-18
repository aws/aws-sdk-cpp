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
    AWS_QBUSINESS_API ActionReviewEvent() = default;
    AWS_QBUSINESS_API ActionReviewEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ActionReviewEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the conversation with which the action review event is
     * associated.</p>
     */
    inline const Aws::String& GetConversationId() const { return m_conversationId; }
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }
    template<typename ConversationIdT = Aws::String>
    void SetConversationId(ConversationIdT&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::forward<ConversationIdT>(value); }
    template<typename ConversationIdT = Aws::String>
    ActionReviewEvent& WithConversationId(ConversationIdT&& value) { SetConversationId(std::forward<ConversationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the conversation with which the plugin action is
     * associated.</p>
     */
    inline const Aws::String& GetUserMessageId() const { return m_userMessageId; }
    inline bool UserMessageIdHasBeenSet() const { return m_userMessageIdHasBeenSet; }
    template<typename UserMessageIdT = Aws::String>
    void SetUserMessageId(UserMessageIdT&& value) { m_userMessageIdHasBeenSet = true; m_userMessageId = std::forward<UserMessageIdT>(value); }
    template<typename UserMessageIdT = Aws::String>
    ActionReviewEvent& WithUserMessageId(UserMessageIdT&& value) { SetUserMessageId(std::forward<UserMessageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of an Amazon Q Business AI generated associated with the
     * action review event.</p>
     */
    inline const Aws::String& GetSystemMessageId() const { return m_systemMessageId; }
    inline bool SystemMessageIdHasBeenSet() const { return m_systemMessageIdHasBeenSet; }
    template<typename SystemMessageIdT = Aws::String>
    void SetSystemMessageId(SystemMessageIdT&& value) { m_systemMessageIdHasBeenSet = true; m_systemMessageId = std::forward<SystemMessageIdT>(value); }
    template<typename SystemMessageIdT = Aws::String>
    ActionReviewEvent& WithSystemMessageId(SystemMessageIdT&& value) { SetSystemMessageId(std::forward<SystemMessageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the plugin associated with the action review event.</p>
     */
    inline const Aws::String& GetPluginId() const { return m_pluginId; }
    inline bool PluginIdHasBeenSet() const { return m_pluginIdHasBeenSet; }
    template<typename PluginIdT = Aws::String>
    void SetPluginId(PluginIdT&& value) { m_pluginIdHasBeenSet = true; m_pluginId = std::forward<PluginIdT>(value); }
    template<typename PluginIdT = Aws::String>
    ActionReviewEvent& WithPluginId(PluginIdT&& value) { SetPluginId(std::forward<PluginIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of plugin.</p>
     */
    inline PluginType GetPluginType() const { return m_pluginType; }
    inline bool PluginTypeHasBeenSet() const { return m_pluginTypeHasBeenSet; }
    inline void SetPluginType(PluginType value) { m_pluginTypeHasBeenSet = true; m_pluginType = value; }
    inline ActionReviewEvent& WithPluginType(PluginType value) { SetPluginType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Field values that an end user needs to provide to Amazon Q Business for
     * Amazon Q Business to perform the requested plugin action.</p>
     */
    inline const Aws::Map<Aws::String, ActionReviewPayloadField>& GetPayload() const { return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    template<typename PayloadT = Aws::Map<Aws::String, ActionReviewPayloadField>>
    void SetPayload(PayloadT&& value) { m_payloadHasBeenSet = true; m_payload = std::forward<PayloadT>(value); }
    template<typename PayloadT = Aws::Map<Aws::String, ActionReviewPayloadField>>
    ActionReviewEvent& WithPayload(PayloadT&& value) { SetPayload(std::forward<PayloadT>(value)); return *this;}
    template<typename PayloadKeyT = Aws::String, typename PayloadValueT = ActionReviewPayloadField>
    ActionReviewEvent& AddPayload(PayloadKeyT&& key, PayloadValueT&& value) {
      m_payloadHasBeenSet = true; m_payload.emplace(std::forward<PayloadKeyT>(key), std::forward<PayloadValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A string used to retain information about the hierarchical contexts within an
     * action review event payload.</p>
     */
    inline const Aws::String& GetPayloadFieldNameSeparator() const { return m_payloadFieldNameSeparator; }
    inline bool PayloadFieldNameSeparatorHasBeenSet() const { return m_payloadFieldNameSeparatorHasBeenSet; }
    template<typename PayloadFieldNameSeparatorT = Aws::String>
    void SetPayloadFieldNameSeparator(PayloadFieldNameSeparatorT&& value) { m_payloadFieldNameSeparatorHasBeenSet = true; m_payloadFieldNameSeparator = std::forward<PayloadFieldNameSeparatorT>(value); }
    template<typename PayloadFieldNameSeparatorT = Aws::String>
    ActionReviewEvent& WithPayloadFieldNameSeparator(PayloadFieldNameSeparatorT&& value) { SetPayloadFieldNameSeparator(std::forward<PayloadFieldNameSeparatorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_conversationId;
    bool m_conversationIdHasBeenSet = false;

    Aws::String m_userMessageId;
    bool m_userMessageIdHasBeenSet = false;

    Aws::String m_systemMessageId;
    bool m_systemMessageIdHasBeenSet = false;

    Aws::String m_pluginId;
    bool m_pluginIdHasBeenSet = false;

    PluginType m_pluginType{PluginType::NOT_SET};
    bool m_pluginTypeHasBeenSet = false;

    Aws::Map<Aws::String, ActionReviewPayloadField> m_payload;
    bool m_payloadHasBeenSet = false;

    Aws::String m_payloadFieldNameSeparator;
    bool m_payloadFieldNameSeparatorHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
