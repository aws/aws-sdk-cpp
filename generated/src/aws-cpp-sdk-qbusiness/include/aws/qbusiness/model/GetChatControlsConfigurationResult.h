﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/ResponseScope.h>
#include <aws/qbusiness/model/BlockedPhrasesConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/AppliedCreatorModeConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    ///@{
    /**
     * <p>The response scope configured for a Amazon Q Business application. This
     * determines whether your application uses its retrieval augmented generation
     * (RAG) system to generate answers only from your enterprise data, or also uses
     * the large language models (LLM) knowledge to respons to end user questions in
     * chat.</p>
     */
    inline const ResponseScope& GetResponseScope() const{ return m_responseScope; }
    inline void SetResponseScope(const ResponseScope& value) { m_responseScope = value; }
    inline void SetResponseScope(ResponseScope&& value) { m_responseScope = std::move(value); }
    inline GetChatControlsConfigurationResult& WithResponseScope(const ResponseScope& value) { SetResponseScope(value); return *this;}
    inline GetChatControlsConfigurationResult& WithResponseScope(ResponseScope&& value) { SetResponseScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phrases blocked from chat by your chat control configuration.</p>
     */
    inline const BlockedPhrasesConfiguration& GetBlockedPhrases() const{ return m_blockedPhrases; }
    inline void SetBlockedPhrases(const BlockedPhrasesConfiguration& value) { m_blockedPhrases = value; }
    inline void SetBlockedPhrases(BlockedPhrasesConfiguration&& value) { m_blockedPhrases = std::move(value); }
    inline GetChatControlsConfigurationResult& WithBlockedPhrases(const BlockedPhrasesConfiguration& value) { SetBlockedPhrases(value); return *this;}
    inline GetChatControlsConfigurationResult& WithBlockedPhrases(BlockedPhrasesConfiguration&& value) { SetBlockedPhrases(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The topic specific controls configured for a Amazon Q Business
     * application.</p>
     */
    inline const Aws::Vector<TopicConfiguration>& GetTopicConfigurations() const{ return m_topicConfigurations; }
    inline void SetTopicConfigurations(const Aws::Vector<TopicConfiguration>& value) { m_topicConfigurations = value; }
    inline void SetTopicConfigurations(Aws::Vector<TopicConfiguration>&& value) { m_topicConfigurations = std::move(value); }
    inline GetChatControlsConfigurationResult& WithTopicConfigurations(const Aws::Vector<TopicConfiguration>& value) { SetTopicConfigurations(value); return *this;}
    inline GetChatControlsConfigurationResult& WithTopicConfigurations(Aws::Vector<TopicConfiguration>&& value) { SetTopicConfigurations(std::move(value)); return *this;}
    inline GetChatControlsConfigurationResult& AddTopicConfigurations(const TopicConfiguration& value) { m_topicConfigurations.push_back(value); return *this; }
    inline GetChatControlsConfigurationResult& AddTopicConfigurations(TopicConfiguration&& value) { m_topicConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration details for <code>CREATOR_MODE</code>.</p>
     */
    inline const AppliedCreatorModeConfiguration& GetCreatorModeConfiguration() const{ return m_creatorModeConfiguration; }
    inline void SetCreatorModeConfiguration(const AppliedCreatorModeConfiguration& value) { m_creatorModeConfiguration = value; }
    inline void SetCreatorModeConfiguration(AppliedCreatorModeConfiguration&& value) { m_creatorModeConfiguration = std::move(value); }
    inline GetChatControlsConfigurationResult& WithCreatorModeConfiguration(const AppliedCreatorModeConfiguration& value) { SetCreatorModeConfiguration(value); return *this;}
    inline GetChatControlsConfigurationResult& WithCreatorModeConfiguration(AppliedCreatorModeConfiguration&& value) { SetCreatorModeConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the <code>maxResults</code> response was incomplete because there is more
     * data to retrieve, Amazon Q Business returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of Amazon Q Business
     * chat controls configured.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetChatControlsConfigurationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetChatControlsConfigurationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetChatControlsConfigurationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetChatControlsConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetChatControlsConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetChatControlsConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ResponseScope m_responseScope;

    BlockedPhrasesConfiguration m_blockedPhrases;

    Aws::Vector<TopicConfiguration> m_topicConfigurations;

    AppliedCreatorModeConfiguration m_creatorModeConfiguration;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
