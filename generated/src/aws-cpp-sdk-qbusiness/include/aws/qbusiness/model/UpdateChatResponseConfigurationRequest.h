/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qbusiness/model/ResponseConfigurationType.h>
#include <aws/qbusiness/model/ResponseConfiguration.h>
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
  class UpdateChatResponseConfigurationRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API UpdateChatResponseConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateChatResponseConfiguration"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the Amazon Q Business application containing the
     * chat response configuration to update.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    UpdateChatResponseConfigurationRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the chat response configuration to update within the
     * specified application.</p>
     */
    inline const Aws::String& GetChatResponseConfigurationId() const { return m_chatResponseConfigurationId; }
    inline bool ChatResponseConfigurationIdHasBeenSet() const { return m_chatResponseConfigurationIdHasBeenSet; }
    template<typename ChatResponseConfigurationIdT = Aws::String>
    void SetChatResponseConfigurationId(ChatResponseConfigurationIdT&& value) { m_chatResponseConfigurationIdHasBeenSet = true; m_chatResponseConfigurationId = std::forward<ChatResponseConfigurationIdT>(value); }
    template<typename ChatResponseConfigurationIdT = Aws::String>
    UpdateChatResponseConfigurationRequest& WithChatResponseConfigurationId(ChatResponseConfigurationIdT&& value) { SetChatResponseConfigurationId(std::forward<ChatResponseConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new human-readable name to assign to the chat response configuration,
     * making it easier to identify among multiple configurations.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    UpdateChatResponseConfigurationRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated collection of response configuration settings that define how
     * Amazon Q Business generates and formats responses to user queries.</p>
     */
    inline const Aws::Map<ResponseConfigurationType, ResponseConfiguration>& GetResponseConfigurations() const { return m_responseConfigurations; }
    inline bool ResponseConfigurationsHasBeenSet() const { return m_responseConfigurationsHasBeenSet; }
    template<typename ResponseConfigurationsT = Aws::Map<ResponseConfigurationType, ResponseConfiguration>>
    void SetResponseConfigurations(ResponseConfigurationsT&& value) { m_responseConfigurationsHasBeenSet = true; m_responseConfigurations = std::forward<ResponseConfigurationsT>(value); }
    template<typename ResponseConfigurationsT = Aws::Map<ResponseConfigurationType, ResponseConfiguration>>
    UpdateChatResponseConfigurationRequest& WithResponseConfigurations(ResponseConfigurationsT&& value) { SetResponseConfigurations(std::forward<ResponseConfigurationsT>(value)); return *this;}
    inline UpdateChatResponseConfigurationRequest& AddResponseConfigurations(ResponseConfigurationType key, ResponseConfiguration value) {
      m_responseConfigurationsHasBeenSet = true; m_responseConfigurations.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure idempotency of the request.
     * This helps prevent the same update from being processed multiple times if
     * retries occur.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateChatResponseConfigurationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_chatResponseConfigurationId;
    bool m_chatResponseConfigurationIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Map<ResponseConfigurationType, ResponseConfiguration> m_responseConfigurations;
    bool m_responseConfigurationsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
