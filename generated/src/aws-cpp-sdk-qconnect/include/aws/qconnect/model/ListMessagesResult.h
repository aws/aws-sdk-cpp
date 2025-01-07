/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/MessageOutput.h>
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
  class ListMessagesResult
  {
  public:
    AWS_QCONNECT_API ListMessagesResult();
    AWS_QCONNECT_API ListMessagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API ListMessagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The message information.</p>
     */
    inline const Aws::Vector<MessageOutput>& GetMessages() const{ return m_messages; }
    inline void SetMessages(const Aws::Vector<MessageOutput>& value) { m_messages = value; }
    inline void SetMessages(Aws::Vector<MessageOutput>&& value) { m_messages = std::move(value); }
    inline ListMessagesResult& WithMessages(const Aws::Vector<MessageOutput>& value) { SetMessages(value); return *this;}
    inline ListMessagesResult& WithMessages(Aws::Vector<MessageOutput>&& value) { SetMessages(std::move(value)); return *this;}
    inline ListMessagesResult& AddMessages(const MessageOutput& value) { m_messages.push_back(value); return *this; }
    inline ListMessagesResult& AddMessages(MessageOutput&& value) { m_messages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListMessagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMessagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMessagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListMessagesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListMessagesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListMessagesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MessageOutput> m_messages;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
