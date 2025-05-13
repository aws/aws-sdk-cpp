/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/ResponseScope.h>
#include <aws/qbusiness/model/OrchestrationConfiguration.h>
#include <aws/qbusiness/model/BlockedPhrasesConfigurationUpdate.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/CreatorModeConfiguration.h>
#include <aws/qbusiness/model/HallucinationReductionConfiguration.h>
#include <aws/qbusiness/model/TopicConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class UpdateChatControlsConfigurationRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API UpdateChatControlsConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateChatControlsConfiguration"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the application for which the chat controls are
     * configured.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    UpdateChatControlsConfigurationRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that you provide to identify the request to update a Amazon Q
     * Business application chat configuration.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateChatControlsConfigurationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response scope configured for your application. This determines whether
     * your application uses its retrieval augmented generation (RAG) system to
     * generate answers only from your enterprise data, or also uses the large language
     * models (LLM) knowledge to respons to end user questions in chat.</p>
     */
    inline ResponseScope GetResponseScope() const { return m_responseScope; }
    inline bool ResponseScopeHasBeenSet() const { return m_responseScopeHasBeenSet; }
    inline void SetResponseScope(ResponseScope value) { m_responseScopeHasBeenSet = true; m_responseScope = value; }
    inline UpdateChatControlsConfigurationRequest& WithResponseScope(ResponseScope value) { SetResponseScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The chat response orchestration settings for your application.</p>
     */
    inline const OrchestrationConfiguration& GetOrchestrationConfiguration() const { return m_orchestrationConfiguration; }
    inline bool OrchestrationConfigurationHasBeenSet() const { return m_orchestrationConfigurationHasBeenSet; }
    template<typename OrchestrationConfigurationT = OrchestrationConfiguration>
    void SetOrchestrationConfiguration(OrchestrationConfigurationT&& value) { m_orchestrationConfigurationHasBeenSet = true; m_orchestrationConfiguration = std::forward<OrchestrationConfigurationT>(value); }
    template<typename OrchestrationConfigurationT = OrchestrationConfiguration>
    UpdateChatControlsConfigurationRequest& WithOrchestrationConfiguration(OrchestrationConfigurationT&& value) { SetOrchestrationConfiguration(std::forward<OrchestrationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phrases blocked from chat by your chat control configuration.</p>
     */
    inline const BlockedPhrasesConfigurationUpdate& GetBlockedPhrasesConfigurationUpdate() const { return m_blockedPhrasesConfigurationUpdate; }
    inline bool BlockedPhrasesConfigurationUpdateHasBeenSet() const { return m_blockedPhrasesConfigurationUpdateHasBeenSet; }
    template<typename BlockedPhrasesConfigurationUpdateT = BlockedPhrasesConfigurationUpdate>
    void SetBlockedPhrasesConfigurationUpdate(BlockedPhrasesConfigurationUpdateT&& value) { m_blockedPhrasesConfigurationUpdateHasBeenSet = true; m_blockedPhrasesConfigurationUpdate = std::forward<BlockedPhrasesConfigurationUpdateT>(value); }
    template<typename BlockedPhrasesConfigurationUpdateT = BlockedPhrasesConfigurationUpdate>
    UpdateChatControlsConfigurationRequest& WithBlockedPhrasesConfigurationUpdate(BlockedPhrasesConfigurationUpdateT&& value) { SetBlockedPhrasesConfigurationUpdate(std::forward<BlockedPhrasesConfigurationUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configured topic specific chat controls you want to update.</p>
     */
    inline const Aws::Vector<TopicConfiguration>& GetTopicConfigurationsToCreateOrUpdate() const { return m_topicConfigurationsToCreateOrUpdate; }
    inline bool TopicConfigurationsToCreateOrUpdateHasBeenSet() const { return m_topicConfigurationsToCreateOrUpdateHasBeenSet; }
    template<typename TopicConfigurationsToCreateOrUpdateT = Aws::Vector<TopicConfiguration>>
    void SetTopicConfigurationsToCreateOrUpdate(TopicConfigurationsToCreateOrUpdateT&& value) { m_topicConfigurationsToCreateOrUpdateHasBeenSet = true; m_topicConfigurationsToCreateOrUpdate = std::forward<TopicConfigurationsToCreateOrUpdateT>(value); }
    template<typename TopicConfigurationsToCreateOrUpdateT = Aws::Vector<TopicConfiguration>>
    UpdateChatControlsConfigurationRequest& WithTopicConfigurationsToCreateOrUpdate(TopicConfigurationsToCreateOrUpdateT&& value) { SetTopicConfigurationsToCreateOrUpdate(std::forward<TopicConfigurationsToCreateOrUpdateT>(value)); return *this;}
    template<typename TopicConfigurationsToCreateOrUpdateT = TopicConfiguration>
    UpdateChatControlsConfigurationRequest& AddTopicConfigurationsToCreateOrUpdate(TopicConfigurationsToCreateOrUpdateT&& value) { m_topicConfigurationsToCreateOrUpdateHasBeenSet = true; m_topicConfigurationsToCreateOrUpdate.emplace_back(std::forward<TopicConfigurationsToCreateOrUpdateT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configured topic specific chat controls you want to delete.</p>
     */
    inline const Aws::Vector<TopicConfiguration>& GetTopicConfigurationsToDelete() const { return m_topicConfigurationsToDelete; }
    inline bool TopicConfigurationsToDeleteHasBeenSet() const { return m_topicConfigurationsToDeleteHasBeenSet; }
    template<typename TopicConfigurationsToDeleteT = Aws::Vector<TopicConfiguration>>
    void SetTopicConfigurationsToDelete(TopicConfigurationsToDeleteT&& value) { m_topicConfigurationsToDeleteHasBeenSet = true; m_topicConfigurationsToDelete = std::forward<TopicConfigurationsToDeleteT>(value); }
    template<typename TopicConfigurationsToDeleteT = Aws::Vector<TopicConfiguration>>
    UpdateChatControlsConfigurationRequest& WithTopicConfigurationsToDelete(TopicConfigurationsToDeleteT&& value) { SetTopicConfigurationsToDelete(std::forward<TopicConfigurationsToDeleteT>(value)); return *this;}
    template<typename TopicConfigurationsToDeleteT = TopicConfiguration>
    UpdateChatControlsConfigurationRequest& AddTopicConfigurationsToDelete(TopicConfigurationsToDeleteT&& value) { m_topicConfigurationsToDeleteHasBeenSet = true; m_topicConfigurationsToDelete.emplace_back(std::forward<TopicConfigurationsToDeleteT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration details for <code>CREATOR_MODE</code>.</p>
     */
    inline const CreatorModeConfiguration& GetCreatorModeConfiguration() const { return m_creatorModeConfiguration; }
    inline bool CreatorModeConfigurationHasBeenSet() const { return m_creatorModeConfigurationHasBeenSet; }
    template<typename CreatorModeConfigurationT = CreatorModeConfiguration>
    void SetCreatorModeConfiguration(CreatorModeConfigurationT&& value) { m_creatorModeConfigurationHasBeenSet = true; m_creatorModeConfiguration = std::forward<CreatorModeConfigurationT>(value); }
    template<typename CreatorModeConfigurationT = CreatorModeConfiguration>
    UpdateChatControlsConfigurationRequest& WithCreatorModeConfiguration(CreatorModeConfigurationT&& value) { SetCreatorModeConfiguration(std::forward<CreatorModeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The hallucination reduction settings for your application.</p>
     */
    inline const HallucinationReductionConfiguration& GetHallucinationReductionConfiguration() const { return m_hallucinationReductionConfiguration; }
    inline bool HallucinationReductionConfigurationHasBeenSet() const { return m_hallucinationReductionConfigurationHasBeenSet; }
    template<typename HallucinationReductionConfigurationT = HallucinationReductionConfiguration>
    void SetHallucinationReductionConfiguration(HallucinationReductionConfigurationT&& value) { m_hallucinationReductionConfigurationHasBeenSet = true; m_hallucinationReductionConfiguration = std::forward<HallucinationReductionConfigurationT>(value); }
    template<typename HallucinationReductionConfigurationT = HallucinationReductionConfiguration>
    UpdateChatControlsConfigurationRequest& WithHallucinationReductionConfiguration(HallucinationReductionConfigurationT&& value) { SetHallucinationReductionConfiguration(std::forward<HallucinationReductionConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    ResponseScope m_responseScope{ResponseScope::NOT_SET};
    bool m_responseScopeHasBeenSet = false;

    OrchestrationConfiguration m_orchestrationConfiguration;
    bool m_orchestrationConfigurationHasBeenSet = false;

    BlockedPhrasesConfigurationUpdate m_blockedPhrasesConfigurationUpdate;
    bool m_blockedPhrasesConfigurationUpdateHasBeenSet = false;

    Aws::Vector<TopicConfiguration> m_topicConfigurationsToCreateOrUpdate;
    bool m_topicConfigurationsToCreateOrUpdateHasBeenSet = false;

    Aws::Vector<TopicConfiguration> m_topicConfigurationsToDelete;
    bool m_topicConfigurationsToDeleteHasBeenSet = false;

    CreatorModeConfiguration m_creatorModeConfiguration;
    bool m_creatorModeConfigurationHasBeenSet = false;

    HallucinationReductionConfiguration m_hallucinationReductionConfiguration;
    bool m_hallucinationReductionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
