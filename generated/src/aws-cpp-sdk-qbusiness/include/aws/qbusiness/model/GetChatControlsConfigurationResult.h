/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/ResponseScope.h>
#include <aws/qbusiness/model/AppliedOrchestrationConfiguration.h>
#include <aws/qbusiness/model/BlockedPhrasesConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/AppliedCreatorModeConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/HallucinationReductionConfiguration.h>
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
    AWS_QBUSINESS_API GetChatControlsConfigurationResult() = default;
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
    inline ResponseScope GetResponseScope() const { return m_responseScope; }
    inline void SetResponseScope(ResponseScope value) { m_responseScopeHasBeenSet = true; m_responseScope = value; }
    inline GetChatControlsConfigurationResult& WithResponseScope(ResponseScope value) { SetResponseScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The chat response orchestration settings for your application.</p> 
     * <p>Chat orchestration is optimized to work for English language content. For
     * more details on language support in Amazon Q Business, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/supported-languages.html">Supported
     * languages</a>.</p> 
     */
    inline const AppliedOrchestrationConfiguration& GetOrchestrationConfiguration() const { return m_orchestrationConfiguration; }
    template<typename OrchestrationConfigurationT = AppliedOrchestrationConfiguration>
    void SetOrchestrationConfiguration(OrchestrationConfigurationT&& value) { m_orchestrationConfigurationHasBeenSet = true; m_orchestrationConfiguration = std::forward<OrchestrationConfigurationT>(value); }
    template<typename OrchestrationConfigurationT = AppliedOrchestrationConfiguration>
    GetChatControlsConfigurationResult& WithOrchestrationConfiguration(OrchestrationConfigurationT&& value) { SetOrchestrationConfiguration(std::forward<OrchestrationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phrases blocked from chat by your chat control configuration.</p>
     */
    inline const BlockedPhrasesConfiguration& GetBlockedPhrases() const { return m_blockedPhrases; }
    template<typename BlockedPhrasesT = BlockedPhrasesConfiguration>
    void SetBlockedPhrases(BlockedPhrasesT&& value) { m_blockedPhrasesHasBeenSet = true; m_blockedPhrases = std::forward<BlockedPhrasesT>(value); }
    template<typename BlockedPhrasesT = BlockedPhrasesConfiguration>
    GetChatControlsConfigurationResult& WithBlockedPhrases(BlockedPhrasesT&& value) { SetBlockedPhrases(std::forward<BlockedPhrasesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The topic specific controls configured for a Amazon Q Business
     * application.</p>
     */
    inline const Aws::Vector<TopicConfiguration>& GetTopicConfigurations() const { return m_topicConfigurations; }
    template<typename TopicConfigurationsT = Aws::Vector<TopicConfiguration>>
    void SetTopicConfigurations(TopicConfigurationsT&& value) { m_topicConfigurationsHasBeenSet = true; m_topicConfigurations = std::forward<TopicConfigurationsT>(value); }
    template<typename TopicConfigurationsT = Aws::Vector<TopicConfiguration>>
    GetChatControlsConfigurationResult& WithTopicConfigurations(TopicConfigurationsT&& value) { SetTopicConfigurations(std::forward<TopicConfigurationsT>(value)); return *this;}
    template<typename TopicConfigurationsT = TopicConfiguration>
    GetChatControlsConfigurationResult& AddTopicConfigurations(TopicConfigurationsT&& value) { m_topicConfigurationsHasBeenSet = true; m_topicConfigurations.emplace_back(std::forward<TopicConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration details for <code>CREATOR_MODE</code>.</p>
     */
    inline const AppliedCreatorModeConfiguration& GetCreatorModeConfiguration() const { return m_creatorModeConfiguration; }
    template<typename CreatorModeConfigurationT = AppliedCreatorModeConfiguration>
    void SetCreatorModeConfiguration(CreatorModeConfigurationT&& value) { m_creatorModeConfigurationHasBeenSet = true; m_creatorModeConfiguration = std::forward<CreatorModeConfigurationT>(value); }
    template<typename CreatorModeConfigurationT = AppliedCreatorModeConfiguration>
    GetChatControlsConfigurationResult& WithCreatorModeConfiguration(CreatorModeConfigurationT&& value) { SetCreatorModeConfiguration(std::forward<CreatorModeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the <code>maxResults</code> response was incomplete because there is more
     * data to retrieve, Amazon Q Business returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of Amazon Q Business
     * chat controls configured.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetChatControlsConfigurationResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The hallucination reduction settings for your application.</p>
     */
    inline const HallucinationReductionConfiguration& GetHallucinationReductionConfiguration() const { return m_hallucinationReductionConfiguration; }
    template<typename HallucinationReductionConfigurationT = HallucinationReductionConfiguration>
    void SetHallucinationReductionConfiguration(HallucinationReductionConfigurationT&& value) { m_hallucinationReductionConfigurationHasBeenSet = true; m_hallucinationReductionConfiguration = std::forward<HallucinationReductionConfigurationT>(value); }
    template<typename HallucinationReductionConfigurationT = HallucinationReductionConfiguration>
    GetChatControlsConfigurationResult& WithHallucinationReductionConfiguration(HallucinationReductionConfigurationT&& value) { SetHallucinationReductionConfiguration(std::forward<HallucinationReductionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetChatControlsConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ResponseScope m_responseScope{ResponseScope::NOT_SET};
    bool m_responseScopeHasBeenSet = false;

    AppliedOrchestrationConfiguration m_orchestrationConfiguration;
    bool m_orchestrationConfigurationHasBeenSet = false;

    BlockedPhrasesConfiguration m_blockedPhrases;
    bool m_blockedPhrasesHasBeenSet = false;

    Aws::Vector<TopicConfiguration> m_topicConfigurations;
    bool m_topicConfigurationsHasBeenSet = false;

    AppliedCreatorModeConfiguration m_creatorModeConfiguration;
    bool m_creatorModeConfigurationHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    HallucinationReductionConfiguration m_hallucinationReductionConfiguration;
    bool m_hallucinationReductionConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
