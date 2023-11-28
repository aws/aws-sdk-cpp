/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/BlockedPhrasesConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/ResponseScope.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/TopicConfiguration.h>
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
  class GetChatControlsConfigurationResult
  {
  public:
    AWS_QBUSINESS_API GetChatControlsConfigurationResult();
    AWS_QBUSINESS_API GetChatControlsConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API GetChatControlsConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The phrases blocked from chat by your chat control configuration.</p>
     */
    inline const BlockedPhrasesConfiguration& GetBlockedPhrases() const{ return m_blockedPhrases; }

    /**
     * <p>The phrases blocked from chat by your chat control configuration.</p>
     */
    inline void SetBlockedPhrases(const BlockedPhrasesConfiguration& value) { m_blockedPhrases = value; }

    /**
     * <p>The phrases blocked from chat by your chat control configuration.</p>
     */
    inline void SetBlockedPhrases(BlockedPhrasesConfiguration&& value) { m_blockedPhrases = std::move(value); }

    /**
     * <p>The phrases blocked from chat by your chat control configuration.</p>
     */
    inline GetChatControlsConfigurationResult& WithBlockedPhrases(const BlockedPhrasesConfiguration& value) { SetBlockedPhrases(value); return *this;}

    /**
     * <p>The phrases blocked from chat by your chat control configuration.</p>
     */
    inline GetChatControlsConfigurationResult& WithBlockedPhrases(BlockedPhrasesConfiguration&& value) { SetBlockedPhrases(std::move(value)); return *this;}


    /**
     * <p>If the <code>maxResults</code> response was incomplete because there is more
     * data to retrieve, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of Amazon Q chat controls
     * configured.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the <code>maxResults</code> response was incomplete because there is more
     * data to retrieve, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of Amazon Q chat controls
     * configured.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the <code>maxResults</code> response was incomplete because there is more
     * data to retrieve, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of Amazon Q chat controls
     * configured.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the <code>maxResults</code> response was incomplete because there is more
     * data to retrieve, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of Amazon Q chat controls
     * configured.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the <code>maxResults</code> response was incomplete because there is more
     * data to retrieve, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of Amazon Q chat controls
     * configured.</p>
     */
    inline GetChatControlsConfigurationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the <code>maxResults</code> response was incomplete because there is more
     * data to retrieve, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of Amazon Q chat controls
     * configured.</p>
     */
    inline GetChatControlsConfigurationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the <code>maxResults</code> response was incomplete because there is more
     * data to retrieve, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of Amazon Q chat controls
     * configured.</p>
     */
    inline GetChatControlsConfigurationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The response scope configured for a Amazon Q application. This determines
     * whether your application uses its retrieval augmented generation (RAG) system to
     * generate answers only from your enterprise data, or also uses the large language
     * models (LLM) knowledge to respons to end user questions in chat.</p>
     */
    inline const ResponseScope& GetResponseScope() const{ return m_responseScope; }

    /**
     * <p>The response scope configured for a Amazon Q application. This determines
     * whether your application uses its retrieval augmented generation (RAG) system to
     * generate answers only from your enterprise data, or also uses the large language
     * models (LLM) knowledge to respons to end user questions in chat.</p>
     */
    inline void SetResponseScope(const ResponseScope& value) { m_responseScope = value; }

    /**
     * <p>The response scope configured for a Amazon Q application. This determines
     * whether your application uses its retrieval augmented generation (RAG) system to
     * generate answers only from your enterprise data, or also uses the large language
     * models (LLM) knowledge to respons to end user questions in chat.</p>
     */
    inline void SetResponseScope(ResponseScope&& value) { m_responseScope = std::move(value); }

    /**
     * <p>The response scope configured for a Amazon Q application. This determines
     * whether your application uses its retrieval augmented generation (RAG) system to
     * generate answers only from your enterprise data, or also uses the large language
     * models (LLM) knowledge to respons to end user questions in chat.</p>
     */
    inline GetChatControlsConfigurationResult& WithResponseScope(const ResponseScope& value) { SetResponseScope(value); return *this;}

    /**
     * <p>The response scope configured for a Amazon Q application. This determines
     * whether your application uses its retrieval augmented generation (RAG) system to
     * generate answers only from your enterprise data, or also uses the large language
     * models (LLM) knowledge to respons to end user questions in chat.</p>
     */
    inline GetChatControlsConfigurationResult& WithResponseScope(ResponseScope&& value) { SetResponseScope(std::move(value)); return *this;}


    /**
     * <p>The topic specific controls configured for a Amazon Q application.</p>
     */
    inline const Aws::Vector<TopicConfiguration>& GetTopicConfigurations() const{ return m_topicConfigurations; }

    /**
     * <p>The topic specific controls configured for a Amazon Q application.</p>
     */
    inline void SetTopicConfigurations(const Aws::Vector<TopicConfiguration>& value) { m_topicConfigurations = value; }

    /**
     * <p>The topic specific controls configured for a Amazon Q application.</p>
     */
    inline void SetTopicConfigurations(Aws::Vector<TopicConfiguration>&& value) { m_topicConfigurations = std::move(value); }

    /**
     * <p>The topic specific controls configured for a Amazon Q application.</p>
     */
    inline GetChatControlsConfigurationResult& WithTopicConfigurations(const Aws::Vector<TopicConfiguration>& value) { SetTopicConfigurations(value); return *this;}

    /**
     * <p>The topic specific controls configured for a Amazon Q application.</p>
     */
    inline GetChatControlsConfigurationResult& WithTopicConfigurations(Aws::Vector<TopicConfiguration>&& value) { SetTopicConfigurations(std::move(value)); return *this;}

    /**
     * <p>The topic specific controls configured for a Amazon Q application.</p>
     */
    inline GetChatControlsConfigurationResult& AddTopicConfigurations(const TopicConfiguration& value) { m_topicConfigurations.push_back(value); return *this; }

    /**
     * <p>The topic specific controls configured for a Amazon Q application.</p>
     */
    inline GetChatControlsConfigurationResult& AddTopicConfigurations(TopicConfiguration&& value) { m_topicConfigurations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetChatControlsConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetChatControlsConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetChatControlsConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    BlockedPhrasesConfiguration m_blockedPhrases;

    Aws::String m_nextToken;

    ResponseScope m_responseScope;

    Aws::Vector<TopicConfiguration> m_topicConfigurations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
