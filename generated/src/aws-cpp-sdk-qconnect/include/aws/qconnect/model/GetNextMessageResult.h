/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/ConversationState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/MessageOutput.h>
#include <aws/qconnect/model/MessageType.h>
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
    AWS_QCONNECT_API GetNextMessageResult();
    AWS_QCONNECT_API GetNextMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API GetNextMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The conversation data stored on an Amazon Q in Connect Session.</p>
     */
    inline const Aws::Vector<RuntimeSessionData>& GetConversationSessionData() const{ return m_conversationSessionData; }
    inline void SetConversationSessionData(const Aws::Vector<RuntimeSessionData>& value) { m_conversationSessionData = value; }
    inline void SetConversationSessionData(Aws::Vector<RuntimeSessionData>&& value) { m_conversationSessionData = std::move(value); }
    inline GetNextMessageResult& WithConversationSessionData(const Aws::Vector<RuntimeSessionData>& value) { SetConversationSessionData(value); return *this;}
    inline GetNextMessageResult& WithConversationSessionData(Aws::Vector<RuntimeSessionData>&& value) { SetConversationSessionData(std::move(value)); return *this;}
    inline GetNextMessageResult& AddConversationSessionData(const RuntimeSessionData& value) { m_conversationSessionData.push_back(value); return *this; }
    inline GetNextMessageResult& AddConversationSessionData(RuntimeSessionData&& value) { m_conversationSessionData.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state of current conversation.</p>
     */
    inline const ConversationState& GetConversationState() const{ return m_conversationState; }
    inline void SetConversationState(const ConversationState& value) { m_conversationState = value; }
    inline void SetConversationState(ConversationState&& value) { m_conversationState = std::move(value); }
    inline GetNextMessageResult& WithConversationState(const ConversationState& value) { SetConversationState(value); return *this;}
    inline GetNextMessageResult& WithConversationState(ConversationState&& value) { SetConversationState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next message.</p>
     */
    inline const Aws::String& GetNextMessageToken() const{ return m_nextMessageToken; }
    inline void SetNextMessageToken(const Aws::String& value) { m_nextMessageToken = value; }
    inline void SetNextMessageToken(Aws::String&& value) { m_nextMessageToken = std::move(value); }
    inline void SetNextMessageToken(const char* value) { m_nextMessageToken.assign(value); }
    inline GetNextMessageResult& WithNextMessageToken(const Aws::String& value) { SetNextMessageToken(value); return *this;}
    inline GetNextMessageResult& WithNextMessageToken(Aws::String&& value) { SetNextMessageToken(std::move(value)); return *this;}
    inline GetNextMessageResult& WithNextMessageToken(const char* value) { SetNextMessageToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the submitted message.</p>
     */
    inline const Aws::String& GetRequestMessageId() const{ return m_requestMessageId; }
    inline void SetRequestMessageId(const Aws::String& value) { m_requestMessageId = value; }
    inline void SetRequestMessageId(Aws::String&& value) { m_requestMessageId = std::move(value); }
    inline void SetRequestMessageId(const char* value) { m_requestMessageId.assign(value); }
    inline GetNextMessageResult& WithRequestMessageId(const Aws::String& value) { SetRequestMessageId(value); return *this;}
    inline GetNextMessageResult& WithRequestMessageId(Aws::String&& value) { SetRequestMessageId(std::move(value)); return *this;}
    inline GetNextMessageResult& WithRequestMessageId(const char* value) { SetRequestMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message response to the requested message.</p>
     */
    inline const MessageOutput& GetResponse() const{ return m_response; }
    inline void SetResponse(const MessageOutput& value) { m_response = value; }
    inline void SetResponse(MessageOutput&& value) { m_response = std::move(value); }
    inline GetNextMessageResult& WithResponse(const MessageOutput& value) { SetResponse(value); return *this;}
    inline GetNextMessageResult& WithResponse(MessageOutput&& value) { SetResponse(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of message response.</p>
     */
    inline const MessageType& GetType() const{ return m_type; }
    inline void SetType(const MessageType& value) { m_type = value; }
    inline void SetType(MessageType&& value) { m_type = std::move(value); }
    inline GetNextMessageResult& WithType(const MessageType& value) { SetType(value); return *this;}
    inline GetNextMessageResult& WithType(MessageType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetNextMessageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetNextMessageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetNextMessageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RuntimeSessionData> m_conversationSessionData;

    ConversationState m_conversationState;

    Aws::String m_nextMessageToken;

    Aws::String m_requestMessageId;

    MessageOutput m_response;

    MessageType m_type;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
