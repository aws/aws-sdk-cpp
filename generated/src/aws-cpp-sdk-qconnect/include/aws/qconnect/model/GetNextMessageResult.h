/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/MessageType.h>
#include <aws/qconnect/model/MessageOutput.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/ConversationState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/RuntimeSessionData.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QConnect
{
namespace Model
{
  class GetNextMessageResult
  {
  public:
    AWS_QCONNECT_API GetNextMessageResult() = default;
    AWS_QCONNECT_API GetNextMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API GetNextMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The type of message response.</p>
     */
    inline MessageType GetType() const { return m_type; }
    inline void SetType(MessageType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetNextMessageResult& WithType(MessageType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message response to the requested message.</p>
     */
    inline const MessageOutput& GetResponse() const { return m_response; }
    template<typename ResponseT = MessageOutput>
    void SetResponse(ResponseT&& value) { m_responseHasBeenSet = true; m_response = std::forward<ResponseT>(value); }
    template<typename ResponseT = MessageOutput>
    GetNextMessageResult& WithResponse(ResponseT&& value) { SetResponse(std::forward<ResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the submitted message.</p>
     */
    inline const Aws::String& GetRequestMessageId() const { return m_requestMessageId; }
    template<typename RequestMessageIdT = Aws::String>
    void SetRequestMessageId(RequestMessageIdT&& value) { m_requestMessageIdHasBeenSet = true; m_requestMessageId = std::forward<RequestMessageIdT>(value); }
    template<typename RequestMessageIdT = Aws::String>
    GetNextMessageResult& WithRequestMessageId(RequestMessageIdT&& value) { SetRequestMessageId(std::forward<RequestMessageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of current conversation.</p>
     */
    inline const ConversationState& GetConversationState() const { return m_conversationState; }
    template<typename ConversationStateT = ConversationState>
    void SetConversationState(ConversationStateT&& value) { m_conversationStateHasBeenSet = true; m_conversationState = std::forward<ConversationStateT>(value); }
    template<typename ConversationStateT = ConversationState>
    GetNextMessageResult& WithConversationState(ConversationStateT&& value) { SetConversationState(std::forward<ConversationStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next message.</p>
     */
    inline const Aws::String& GetNextMessageToken() const { return m_nextMessageToken; }
    template<typename NextMessageTokenT = Aws::String>
    void SetNextMessageToken(NextMessageTokenT&& value) { m_nextMessageTokenHasBeenSet = true; m_nextMessageToken = std::forward<NextMessageTokenT>(value); }
    template<typename NextMessageTokenT = Aws::String>
    GetNextMessageResult& WithNextMessageToken(NextMessageTokenT&& value) { SetNextMessageToken(std::forward<NextMessageTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conversation data stored on an Amazon Q in Connect Session.</p>
     */
    inline const Aws::Vector<RuntimeSessionData>& GetConversationSessionData() const { return m_conversationSessionData; }
    template<typename ConversationSessionDataT = Aws::Vector<RuntimeSessionData>>
    void SetConversationSessionData(ConversationSessionDataT&& value) { m_conversationSessionDataHasBeenSet = true; m_conversationSessionData = std::forward<ConversationSessionDataT>(value); }
    template<typename ConversationSessionDataT = Aws::Vector<RuntimeSessionData>>
    GetNextMessageResult& WithConversationSessionData(ConversationSessionDataT&& value) { SetConversationSessionData(std::forward<ConversationSessionDataT>(value)); return *this;}
    template<typename ConversationSessionDataT = RuntimeSessionData>
    GetNextMessageResult& AddConversationSessionData(ConversationSessionDataT&& value) { m_conversationSessionDataHasBeenSet = true; m_conversationSessionData.emplace_back(std::forward<ConversationSessionDataT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetNextMessageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MessageType m_type{MessageType::NOT_SET};
    bool m_typeHasBeenSet = false;

    MessageOutput m_response;
    bool m_responseHasBeenSet = false;

    Aws::String m_requestMessageId;
    bool m_requestMessageIdHasBeenSet = false;

    ConversationState m_conversationState;
    bool m_conversationStateHasBeenSet = false;

    Aws::String m_nextMessageToken;
    bool m_nextMessageTokenHasBeenSet = false;

    Aws::Vector<RuntimeSessionData> m_conversationSessionData;
    bool m_conversationSessionDataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
