/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-incidents/model/EmptyChatChannel.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>The Chatbot chat channel used for collaboration during an
   * incident.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ChatChannel">AWS
   * API Reference</a></p>
   */
  class ChatChannel
  {
  public:
    AWS_SSMINCIDENTS_API ChatChannel() = default;
    AWS_SSMINCIDENTS_API ChatChannel(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API ChatChannel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon SNS targets that Chatbot uses to notify the chat channel of
     * updates to an incident. You can also make updates to the incident through the
     * chat channel by using the Amazon SNS topics. </p>
     */
    inline const Aws::Vector<Aws::String>& GetChatbotSns() const { return m_chatbotSns; }
    inline bool ChatbotSnsHasBeenSet() const { return m_chatbotSnsHasBeenSet; }
    template<typename ChatbotSnsT = Aws::Vector<Aws::String>>
    void SetChatbotSns(ChatbotSnsT&& value) { m_chatbotSnsHasBeenSet = true; m_chatbotSns = std::forward<ChatbotSnsT>(value); }
    template<typename ChatbotSnsT = Aws::Vector<Aws::String>>
    ChatChannel& WithChatbotSns(ChatbotSnsT&& value) { SetChatbotSns(std::forward<ChatbotSnsT>(value)); return *this;}
    template<typename ChatbotSnsT = Aws::String>
    ChatChannel& AddChatbotSns(ChatbotSnsT&& value) { m_chatbotSnsHasBeenSet = true; m_chatbotSns.emplace_back(std::forward<ChatbotSnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Used to remove the chat channel from an incident record or response plan.</p>
     */
    inline const EmptyChatChannel& GetEmpty() const { return m_empty; }
    inline bool EmptyHasBeenSet() const { return m_emptyHasBeenSet; }
    template<typename EmptyT = EmptyChatChannel>
    void SetEmpty(EmptyT&& value) { m_emptyHasBeenSet = true; m_empty = std::forward<EmptyT>(value); }
    template<typename EmptyT = EmptyChatChannel>
    ChatChannel& WithEmpty(EmptyT&& value) { SetEmpty(std::forward<EmptyT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_chatbotSns;
    bool m_chatbotSnsHasBeenSet = false;

    EmptyChatChannel m_empty;
    bool m_emptyHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
