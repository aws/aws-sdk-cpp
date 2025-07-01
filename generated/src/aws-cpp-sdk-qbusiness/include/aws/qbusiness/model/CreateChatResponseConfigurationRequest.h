/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/ResponseConfigurationType.h>
#include <aws/qbusiness/model/ResponseConfiguration.h>
#include <aws/qbusiness/model/Tag.h>
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
  class CreateChatResponseConfigurationRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API CreateChatResponseConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateChatResponseConfiguration"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the Amazon Q Business application for which to
     * create the new chat response configuration.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    CreateChatResponseConfigurationRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable name for the new chat response configuration, making it
     * easier to identify and manage among multiple configurations.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    CreateChatResponseConfigurationRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure idempotency of the request.
     * This helps prevent the same configuration from being created multiple times if
     * retries occur.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateChatResponseConfigurationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of response configuration settings that define how Amazon Q
     * Business will generate and format responses to user queries in chat
     * interactions.</p>
     */
    inline const Aws::Map<ResponseConfigurationType, ResponseConfiguration>& GetResponseConfigurations() const { return m_responseConfigurations; }
    inline bool ResponseConfigurationsHasBeenSet() const { return m_responseConfigurationsHasBeenSet; }
    template<typename ResponseConfigurationsT = Aws::Map<ResponseConfigurationType, ResponseConfiguration>>
    void SetResponseConfigurations(ResponseConfigurationsT&& value) { m_responseConfigurationsHasBeenSet = true; m_responseConfigurations = std::forward<ResponseConfigurationsT>(value); }
    template<typename ResponseConfigurationsT = Aws::Map<ResponseConfigurationType, ResponseConfiguration>>
    CreateChatResponseConfigurationRequest& WithResponseConfigurations(ResponseConfigurationsT&& value) { SetResponseConfigurations(std::forward<ResponseConfigurationsT>(value)); return *this;}
    inline CreateChatResponseConfigurationRequest& AddResponseConfigurations(ResponseConfigurationType key, ResponseConfiguration value) {
      m_responseConfigurationsHasBeenSet = true; m_responseConfigurations.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs to apply as tags to the new chat response
     * configuration, enabling categorization and management of resources across Amazon
     * Web Services services.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateChatResponseConfigurationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateChatResponseConfigurationRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Map<ResponseConfigurationType, ResponseConfiguration> m_responseConfigurations;
    bool m_responseConfigurationsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
