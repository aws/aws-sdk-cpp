/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/BlockedPhrasesConfigurationUpdate.h>
#include <aws/qbusiness/model/ResponseScope.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_QBUSINESS_API UpdateChatControlsConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateChatControlsConfiguration"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the application for which the chat controls are
     * configured.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of the application for which the chat controls are
     * configured.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The identifier of the application for which the chat controls are
     * configured.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The identifier of the application for which the chat controls are
     * configured.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The identifier of the application for which the chat controls are
     * configured.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The identifier of the application for which the chat controls are
     * configured.</p>
     */
    inline UpdateChatControlsConfigurationRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of the application for which the chat controls are
     * configured.</p>
     */
    inline UpdateChatControlsConfigurationRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the application for which the chat controls are
     * configured.</p>
     */
    inline UpdateChatControlsConfigurationRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The phrases blocked from chat by your chat control configuration.</p>
     */
    inline const BlockedPhrasesConfigurationUpdate& GetBlockedPhrasesConfigurationUpdate() const{ return m_blockedPhrasesConfigurationUpdate; }

    /**
     * <p>The phrases blocked from chat by your chat control configuration.</p>
     */
    inline bool BlockedPhrasesConfigurationUpdateHasBeenSet() const { return m_blockedPhrasesConfigurationUpdateHasBeenSet; }

    /**
     * <p>The phrases blocked from chat by your chat control configuration.</p>
     */
    inline void SetBlockedPhrasesConfigurationUpdate(const BlockedPhrasesConfigurationUpdate& value) { m_blockedPhrasesConfigurationUpdateHasBeenSet = true; m_blockedPhrasesConfigurationUpdate = value; }

    /**
     * <p>The phrases blocked from chat by your chat control configuration.</p>
     */
    inline void SetBlockedPhrasesConfigurationUpdate(BlockedPhrasesConfigurationUpdate&& value) { m_blockedPhrasesConfigurationUpdateHasBeenSet = true; m_blockedPhrasesConfigurationUpdate = std::move(value); }

    /**
     * <p>The phrases blocked from chat by your chat control configuration.</p>
     */
    inline UpdateChatControlsConfigurationRequest& WithBlockedPhrasesConfigurationUpdate(const BlockedPhrasesConfigurationUpdate& value) { SetBlockedPhrasesConfigurationUpdate(value); return *this;}

    /**
     * <p>The phrases blocked from chat by your chat control configuration.</p>
     */
    inline UpdateChatControlsConfigurationRequest& WithBlockedPhrasesConfigurationUpdate(BlockedPhrasesConfigurationUpdate&& value) { SetBlockedPhrasesConfigurationUpdate(std::move(value)); return *this;}


    /**
     * <p>A token that you provide to identify the request to update a Amazon Q
     * application chat configuration.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that you provide to identify the request to update a Amazon Q
     * application chat configuration.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that you provide to identify the request to update a Amazon Q
     * application chat configuration.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that you provide to identify the request to update a Amazon Q
     * application chat configuration.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that you provide to identify the request to update a Amazon Q
     * application chat configuration.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that you provide to identify the request to update a Amazon Q
     * application chat configuration.</p>
     */
    inline UpdateChatControlsConfigurationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that you provide to identify the request to update a Amazon Q
     * application chat configuration.</p>
     */
    inline UpdateChatControlsConfigurationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that you provide to identify the request to update a Amazon Q
     * application chat configuration.</p>
     */
    inline UpdateChatControlsConfigurationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The response scope configured for your application. This determines whether
     * your application uses its retrieval augmented generation (RAG) system to
     * generate answers only from your enterprise data, or also uses the large language
     * models (LLM) knowledge to respons to end user questions in chat.</p>
     */
    inline const ResponseScope& GetResponseScope() const{ return m_responseScope; }

    /**
     * <p>The response scope configured for your application. This determines whether
     * your application uses its retrieval augmented generation (RAG) system to
     * generate answers only from your enterprise data, or also uses the large language
     * models (LLM) knowledge to respons to end user questions in chat.</p>
     */
    inline bool ResponseScopeHasBeenSet() const { return m_responseScopeHasBeenSet; }

    /**
     * <p>The response scope configured for your application. This determines whether
     * your application uses its retrieval augmented generation (RAG) system to
     * generate answers only from your enterprise data, or also uses the large language
     * models (LLM) knowledge to respons to end user questions in chat.</p>
     */
    inline void SetResponseScope(const ResponseScope& value) { m_responseScopeHasBeenSet = true; m_responseScope = value; }

    /**
     * <p>The response scope configured for your application. This determines whether
     * your application uses its retrieval augmented generation (RAG) system to
     * generate answers only from your enterprise data, or also uses the large language
     * models (LLM) knowledge to respons to end user questions in chat.</p>
     */
    inline void SetResponseScope(ResponseScope&& value) { m_responseScopeHasBeenSet = true; m_responseScope = std::move(value); }

    /**
     * <p>The response scope configured for your application. This determines whether
     * your application uses its retrieval augmented generation (RAG) system to
     * generate answers only from your enterprise data, or also uses the large language
     * models (LLM) knowledge to respons to end user questions in chat.</p>
     */
    inline UpdateChatControlsConfigurationRequest& WithResponseScope(const ResponseScope& value) { SetResponseScope(value); return *this;}

    /**
     * <p>The response scope configured for your application. This determines whether
     * your application uses its retrieval augmented generation (RAG) system to
     * generate answers only from your enterprise data, or also uses the large language
     * models (LLM) knowledge to respons to end user questions in chat.</p>
     */
    inline UpdateChatControlsConfigurationRequest& WithResponseScope(ResponseScope&& value) { SetResponseScope(std::move(value)); return *this;}


    /**
     * <p>The configured topic specific chat controls you want to update.</p>
     */
    inline const Aws::Vector<TopicConfiguration>& GetTopicConfigurationsToCreateOrUpdate() const{ return m_topicConfigurationsToCreateOrUpdate; }

    /**
     * <p>The configured topic specific chat controls you want to update.</p>
     */
    inline bool TopicConfigurationsToCreateOrUpdateHasBeenSet() const { return m_topicConfigurationsToCreateOrUpdateHasBeenSet; }

    /**
     * <p>The configured topic specific chat controls you want to update.</p>
     */
    inline void SetTopicConfigurationsToCreateOrUpdate(const Aws::Vector<TopicConfiguration>& value) { m_topicConfigurationsToCreateOrUpdateHasBeenSet = true; m_topicConfigurationsToCreateOrUpdate = value; }

    /**
     * <p>The configured topic specific chat controls you want to update.</p>
     */
    inline void SetTopicConfigurationsToCreateOrUpdate(Aws::Vector<TopicConfiguration>&& value) { m_topicConfigurationsToCreateOrUpdateHasBeenSet = true; m_topicConfigurationsToCreateOrUpdate = std::move(value); }

    /**
     * <p>The configured topic specific chat controls you want to update.</p>
     */
    inline UpdateChatControlsConfigurationRequest& WithTopicConfigurationsToCreateOrUpdate(const Aws::Vector<TopicConfiguration>& value) { SetTopicConfigurationsToCreateOrUpdate(value); return *this;}

    /**
     * <p>The configured topic specific chat controls you want to update.</p>
     */
    inline UpdateChatControlsConfigurationRequest& WithTopicConfigurationsToCreateOrUpdate(Aws::Vector<TopicConfiguration>&& value) { SetTopicConfigurationsToCreateOrUpdate(std::move(value)); return *this;}

    /**
     * <p>The configured topic specific chat controls you want to update.</p>
     */
    inline UpdateChatControlsConfigurationRequest& AddTopicConfigurationsToCreateOrUpdate(const TopicConfiguration& value) { m_topicConfigurationsToCreateOrUpdateHasBeenSet = true; m_topicConfigurationsToCreateOrUpdate.push_back(value); return *this; }

    /**
     * <p>The configured topic specific chat controls you want to update.</p>
     */
    inline UpdateChatControlsConfigurationRequest& AddTopicConfigurationsToCreateOrUpdate(TopicConfiguration&& value) { m_topicConfigurationsToCreateOrUpdateHasBeenSet = true; m_topicConfigurationsToCreateOrUpdate.push_back(std::move(value)); return *this; }


    /**
     * <p>The configured topic specific chat controls you want to delete.</p>
     */
    inline const Aws::Vector<TopicConfiguration>& GetTopicConfigurationsToDelete() const{ return m_topicConfigurationsToDelete; }

    /**
     * <p>The configured topic specific chat controls you want to delete.</p>
     */
    inline bool TopicConfigurationsToDeleteHasBeenSet() const { return m_topicConfigurationsToDeleteHasBeenSet; }

    /**
     * <p>The configured topic specific chat controls you want to delete.</p>
     */
    inline void SetTopicConfigurationsToDelete(const Aws::Vector<TopicConfiguration>& value) { m_topicConfigurationsToDeleteHasBeenSet = true; m_topicConfigurationsToDelete = value; }

    /**
     * <p>The configured topic specific chat controls you want to delete.</p>
     */
    inline void SetTopicConfigurationsToDelete(Aws::Vector<TopicConfiguration>&& value) { m_topicConfigurationsToDeleteHasBeenSet = true; m_topicConfigurationsToDelete = std::move(value); }

    /**
     * <p>The configured topic specific chat controls you want to delete.</p>
     */
    inline UpdateChatControlsConfigurationRequest& WithTopicConfigurationsToDelete(const Aws::Vector<TopicConfiguration>& value) { SetTopicConfigurationsToDelete(value); return *this;}

    /**
     * <p>The configured topic specific chat controls you want to delete.</p>
     */
    inline UpdateChatControlsConfigurationRequest& WithTopicConfigurationsToDelete(Aws::Vector<TopicConfiguration>&& value) { SetTopicConfigurationsToDelete(std::move(value)); return *this;}

    /**
     * <p>The configured topic specific chat controls you want to delete.</p>
     */
    inline UpdateChatControlsConfigurationRequest& AddTopicConfigurationsToDelete(const TopicConfiguration& value) { m_topicConfigurationsToDeleteHasBeenSet = true; m_topicConfigurationsToDelete.push_back(value); return *this; }

    /**
     * <p>The configured topic specific chat controls you want to delete.</p>
     */
    inline UpdateChatControlsConfigurationRequest& AddTopicConfigurationsToDelete(TopicConfiguration&& value) { m_topicConfigurationsToDeleteHasBeenSet = true; m_topicConfigurationsToDelete.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    BlockedPhrasesConfigurationUpdate m_blockedPhrasesConfigurationUpdate;
    bool m_blockedPhrasesConfigurationUpdateHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    ResponseScope m_responseScope;
    bool m_responseScopeHasBeenSet = false;

    Aws::Vector<TopicConfiguration> m_topicConfigurationsToCreateOrUpdate;
    bool m_topicConfigurationsToCreateOrUpdateHasBeenSet = false;

    Aws::Vector<TopicConfiguration> m_topicConfigurationsToDelete;
    bool m_topicConfigurationsToDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
