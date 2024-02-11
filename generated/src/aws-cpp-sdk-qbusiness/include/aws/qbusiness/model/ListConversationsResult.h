/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/Conversation.h>
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
  class ListConversationsResult
  {
  public:
    AWS_QBUSINESS_API ListConversationsResult();
    AWS_QBUSINESS_API ListConversationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API ListConversationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of summary information on the configuration of one or more Amazon Q
     * web experiences.</p>
     */
    inline const Aws::Vector<Conversation>& GetConversations() const{ return m_conversations; }

    /**
     * <p>An array of summary information on the configuration of one or more Amazon Q
     * web experiences.</p>
     */
    inline void SetConversations(const Aws::Vector<Conversation>& value) { m_conversations = value; }

    /**
     * <p>An array of summary information on the configuration of one or more Amazon Q
     * web experiences.</p>
     */
    inline void SetConversations(Aws::Vector<Conversation>&& value) { m_conversations = std::move(value); }

    /**
     * <p>An array of summary information on the configuration of one or more Amazon Q
     * web experiences.</p>
     */
    inline ListConversationsResult& WithConversations(const Aws::Vector<Conversation>& value) { SetConversations(value); return *this;}

    /**
     * <p>An array of summary information on the configuration of one or more Amazon Q
     * web experiences.</p>
     */
    inline ListConversationsResult& WithConversations(Aws::Vector<Conversation>&& value) { SetConversations(std::move(value)); return *this;}

    /**
     * <p>An array of summary information on the configuration of one or more Amazon Q
     * web experiences.</p>
     */
    inline ListConversationsResult& AddConversations(const Conversation& value) { m_conversations.push_back(value); return *this; }

    /**
     * <p>An array of summary information on the configuration of one or more Amazon Q
     * web experiences.</p>
     */
    inline ListConversationsResult& AddConversations(Conversation&& value) { m_conversations.push_back(std::move(value)); return *this; }


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
    inline ListConversationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Q returns this token, which you can use
     * in a later request to list the next set of messages.</p>
     */
    inline ListConversationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Q returns this token, which you can use
     * in a later request to list the next set of messages.</p>
     */
    inline ListConversationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListConversationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListConversationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListConversationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Conversation> m_conversations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
