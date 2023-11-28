/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/Message.h>
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
namespace QBusiness
{
namespace Model
{
  class ListMessagesResult
  {
  public:
    AWS_QBUSINESS_API ListMessagesResult();
    AWS_QBUSINESS_API ListMessagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API ListMessagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of information on one or more messages.</p>
     */
    inline const Aws::Vector<Message>& GetMessages() const{ return m_messages; }

    /**
     * <p>An array of information on one or more messages.</p>
     */
    inline void SetMessages(const Aws::Vector<Message>& value) { m_messages = value; }

    /**
     * <p>An array of information on one or more messages.</p>
     */
    inline void SetMessages(Aws::Vector<Message>&& value) { m_messages = std::move(value); }

    /**
     * <p>An array of information on one or more messages.</p>
     */
    inline ListMessagesResult& WithMessages(const Aws::Vector<Message>& value) { SetMessages(value); return *this;}

    /**
     * <p>An array of information on one or more messages.</p>
     */
    inline ListMessagesResult& WithMessages(Aws::Vector<Message>&& value) { SetMessages(std::move(value)); return *this;}

    /**
     * <p>An array of information on one or more messages.</p>
     */
    inline ListMessagesResult& AddMessages(const Message& value) { m_messages.push_back(value); return *this; }

    /**
     * <p>An array of information on one or more messages.</p>
     */
    inline ListMessagesResult& AddMessages(Message&& value) { m_messages.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon Q returns this token, which you can use
     * in a later request to list the next set of messages.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Q returns this token, which you can use
     * in a later request to list the next set of messages.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Q returns this token, which you can use
     * in a later request to list the next set of messages.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Q returns this token, which you can use
     * in a later request to list the next set of messages.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Q returns this token, which you can use
     * in a later request to list the next set of messages.</p>
     */
    inline ListMessagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Q returns this token, which you can use
     * in a later request to list the next set of messages.</p>
     */
    inline ListMessagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Q returns this token, which you can use
     * in a later request to list the next set of messages.</p>
     */
    inline ListMessagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListMessagesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListMessagesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListMessagesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Message> m_messages;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
