/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/PluginAuthConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/PluginType.h>
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
    AWS_QBUSINESS_API CreatePluginRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePlugin"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the application that will contain the plugin.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of the application that will contain the plugin.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The identifier of the application that will contain the plugin.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The identifier of the application that will contain the plugin.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The identifier of the application that will contain the plugin.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The identifier of the application that will contain the plugin.</p>
     */
    inline CreatePluginRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of the application that will contain the plugin.</p>
     */
    inline CreatePluginRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the application that will contain the plugin.</p>
     */
    inline CreatePluginRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    
    inline const PluginAuthConfiguration& GetAuthConfiguration() const{ return m_authConfiguration; }

    
    inline bool AuthConfigurationHasBeenSet() const { return m_authConfigurationHasBeenSet; }

    
    inline void SetAuthConfiguration(const PluginAuthConfiguration& value) { m_authConfigurationHasBeenSet = true; m_authConfiguration = value; }

    
    inline void SetAuthConfiguration(PluginAuthConfiguration&& value) { m_authConfigurationHasBeenSet = true; m_authConfiguration = std::move(value); }

    
    inline CreatePluginRequest& WithAuthConfiguration(const PluginAuthConfiguration& value) { SetAuthConfiguration(value); return *this;}

    
    inline CreatePluginRequest& WithAuthConfiguration(PluginAuthConfiguration&& value) { SetAuthConfiguration(std::move(value)); return *this;}


    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * plugin.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * plugin.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * plugin.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * plugin.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * plugin.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * plugin.</p>
     */
    inline CreatePluginRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * plugin.</p>
     */
    inline CreatePluginRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q
     * plugin.</p>
     */
    inline CreatePluginRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>A the name for your plugin.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>A the name for your plugin.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>A the name for your plugin.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>A the name for your plugin.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>A the name for your plugin.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>A the name for your plugin.</p>
     */
    inline CreatePluginRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>A the name for your plugin.</p>
     */
    inline CreatePluginRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>A the name for your plugin.</p>
     */
    inline CreatePluginRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The source URL used for plugin configuration.</p>
     */
    inline const Aws::String& GetServerUrl() const{ return m_serverUrl; }

    /**
     * <p>The source URL used for plugin configuration.</p>
     */
    inline bool ServerUrlHasBeenSet() const { return m_serverUrlHasBeenSet; }

    /**
     * <p>The source URL used for plugin configuration.</p>
     */
    inline void SetServerUrl(const Aws::String& value) { m_serverUrlHasBeenSet = true; m_serverUrl = value; }

    /**
     * <p>The source URL used for plugin configuration.</p>
     */
    inline void SetServerUrl(Aws::String&& value) { m_serverUrlHasBeenSet = true; m_serverUrl = std::move(value); }

    /**
     * <p>The source URL used for plugin configuration.</p>
     */
    inline void SetServerUrl(const char* value) { m_serverUrlHasBeenSet = true; m_serverUrl.assign(value); }

    /**
     * <p>The source URL used for plugin configuration.</p>
     */
    inline CreatePluginRequest& WithServerUrl(const Aws::String& value) { SetServerUrl(value); return *this;}

    /**
     * <p>The source URL used for plugin configuration.</p>
     */
    inline CreatePluginRequest& WithServerUrl(Aws::String&& value) { SetServerUrl(std::move(value)); return *this;}

    /**
     * <p>The source URL used for plugin configuration.</p>
     */
    inline CreatePluginRequest& WithServerUrl(const char* value) { SetServerUrl(value); return *this;}


    /**
     * <p>A list of key-value pairs that identify or categorize the data source
     * connector. You can also use tags to help control access to the data source
     * connector. Tag keys and values can consist of Unicode letters, digits, white
     * space, and any of the following symbols: _ . : / = + - @.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs that identify or categorize the data source
     * connector. You can also use tags to help control access to the data source
     * connector. Tag keys and values can consist of Unicode letters, digits, white
     * space, and any of the following symbols: _ . : / = + - @.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key-value pairs that identify or categorize the data source
     * connector. You can also use tags to help control access to the data source
     * connector. Tag keys and values can consist of Unicode letters, digits, white
     * space, and any of the following symbols: _ . : / = + - @.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key-value pairs that identify or categorize the data source
     * connector. You can also use tags to help control access to the data source
     * connector. Tag keys and values can consist of Unicode letters, digits, white
     * space, and any of the following symbols: _ . : / = + - @.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs that identify or categorize the data source
     * connector. You can also use tags to help control access to the data source
     * connector. Tag keys and values can consist of Unicode letters, digits, white
     * space, and any of the following symbols: _ . : / = + - @.</p>
     */
    inline CreatePluginRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs that identify or categorize the data source
     * connector. You can also use tags to help control access to the data source
     * connector. Tag keys and values can consist of Unicode letters, digits, white
     * space, and any of the following symbols: _ . : / = + - @.</p>
     */
    inline CreatePluginRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs that identify or categorize the data source
     * connector. You can also use tags to help control access to the data source
     * connector. Tag keys and values can consist of Unicode letters, digits, white
     * space, and any of the following symbols: _ . : / = + - @.</p>
     */
    inline CreatePluginRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of key-value pairs that identify or categorize the data source
     * connector. You can also use tags to help control access to the data source
     * connector. Tag keys and values can consist of Unicode letters, digits, white
     * space, and any of the following symbols: _ . : / = + - @.</p>
     */
    inline CreatePluginRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of plugin you want to create.</p>
     */
    inline const PluginType& GetType() const{ return m_type; }

    /**
     * <p>The type of plugin you want to create.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of plugin you want to create.</p>
     */
    inline void SetType(const PluginType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of plugin you want to create.</p>
     */
    inline void SetType(PluginType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of plugin you want to create.</p>
     */
    inline CreatePluginRequest& WithType(const PluginType& value) { SetType(value); return *this;}

    /**
     * <p>The type of plugin you want to create.</p>
     */
    inline CreatePluginRequest& WithType(PluginType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    PluginAuthConfiguration m_authConfiguration;
    bool m_authConfigurationHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_serverUrl;
    bool m_serverUrlHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    PluginType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
