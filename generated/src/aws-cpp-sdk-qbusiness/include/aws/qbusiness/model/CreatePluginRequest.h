/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/PluginType.h>
#include <aws/qbusiness/model/PluginAuthConfiguration.h>
#include <aws/qbusiness/model/CustomPluginConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class CreatePluginRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API CreatePluginRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePlugin"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the application that will contain the plugin.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    CreatePluginRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A the name for your plugin.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    CreatePluginRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of plugin you want to create.</p>
     */
    inline PluginType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(PluginType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreatePluginRequest& WithType(PluginType value) { SetType(value); return *this;}
    ///@}

    ///@{
    
    inline const PluginAuthConfiguration& GetAuthConfiguration() const { return m_authConfiguration; }
    inline bool AuthConfigurationHasBeenSet() const { return m_authConfigurationHasBeenSet; }
    template<typename AuthConfigurationT = PluginAuthConfiguration>
    void SetAuthConfiguration(AuthConfigurationT&& value) { m_authConfigurationHasBeenSet = true; m_authConfiguration = std::forward<AuthConfigurationT>(value); }
    template<typename AuthConfigurationT = PluginAuthConfiguration>
    CreatePluginRequest& WithAuthConfiguration(AuthConfigurationT&& value) { SetAuthConfiguration(std::forward<AuthConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source URL used for plugin configuration.</p>
     */
    inline const Aws::String& GetServerUrl() const { return m_serverUrl; }
    inline bool ServerUrlHasBeenSet() const { return m_serverUrlHasBeenSet; }
    template<typename ServerUrlT = Aws::String>
    void SetServerUrl(ServerUrlT&& value) { m_serverUrlHasBeenSet = true; m_serverUrl = std::forward<ServerUrlT>(value); }
    template<typename ServerUrlT = Aws::String>
    CreatePluginRequest& WithServerUrl(ServerUrlT&& value) { SetServerUrl(std::forward<ServerUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configuration for a custom plugin.</p>
     */
    inline const CustomPluginConfiguration& GetCustomPluginConfiguration() const { return m_customPluginConfiguration; }
    inline bool CustomPluginConfigurationHasBeenSet() const { return m_customPluginConfigurationHasBeenSet; }
    template<typename CustomPluginConfigurationT = CustomPluginConfiguration>
    void SetCustomPluginConfiguration(CustomPluginConfigurationT&& value) { m_customPluginConfigurationHasBeenSet = true; m_customPluginConfiguration = std::forward<CustomPluginConfigurationT>(value); }
    template<typename CustomPluginConfigurationT = CustomPluginConfiguration>
    CreatePluginRequest& WithCustomPluginConfiguration(CustomPluginConfigurationT&& value) { SetCustomPluginConfiguration(std::forward<CustomPluginConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that identify or categorize the data source
     * connector. You can also use tags to help control access to the data source
     * connector. Tag keys and values can consist of Unicode letters, digits, white
     * space, and any of the following symbols: _ . : / = + - @.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreatePluginRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreatePluginRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * Business plugin.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreatePluginRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    PluginType m_type{PluginType::NOT_SET};
    bool m_typeHasBeenSet = false;

    PluginAuthConfiguration m_authConfiguration;
    bool m_authConfigurationHasBeenSet = false;

    Aws::String m_serverUrl;
    bool m_serverUrlHasBeenSet = false;

    CustomPluginConfiguration m_customPluginConfiguration;
    bool m_customPluginConfigurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
