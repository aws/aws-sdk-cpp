/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the status and settings of the GCM channel for an application. This
   * channel enables Amazon Pinpoint to send push notifications through the Firebase
   * Cloud Messaging (FCM), formerly Google Cloud Messaging (GCM),
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GCMChannelRequest">AWS
   * API Reference</a></p>
   */
  class GCMChannelRequest
  {
  public:
    AWS_PINPOINT_API GCMChannelRequest() = default;
    AWS_PINPOINT_API GCMChannelRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API GCMChannelRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Web API Key, also referred to as an <i>API_KEY</i> or <i>server key</i>,
     * that you received from Google to communicate with Google services.</p>
     */
    inline const Aws::String& GetApiKey() const { return m_apiKey; }
    inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }
    template<typename ApiKeyT = Aws::String>
    void SetApiKey(ApiKeyT&& value) { m_apiKeyHasBeenSet = true; m_apiKey = std::forward<ApiKeyT>(value); }
    template<typename ApiKeyT = Aws::String>
    GCMChannelRequest& WithApiKey(ApiKeyT&& value) { SetApiKey(std::forward<ApiKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default authentication method used for GCM. Values are either "TOKEN" or
     * "KEY". Defaults to "KEY".</p>
     */
    inline const Aws::String& GetDefaultAuthenticationMethod() const { return m_defaultAuthenticationMethod; }
    inline bool DefaultAuthenticationMethodHasBeenSet() const { return m_defaultAuthenticationMethodHasBeenSet; }
    template<typename DefaultAuthenticationMethodT = Aws::String>
    void SetDefaultAuthenticationMethod(DefaultAuthenticationMethodT&& value) { m_defaultAuthenticationMethodHasBeenSet = true; m_defaultAuthenticationMethod = std::forward<DefaultAuthenticationMethodT>(value); }
    template<typename DefaultAuthenticationMethodT = Aws::String>
    GCMChannelRequest& WithDefaultAuthenticationMethod(DefaultAuthenticationMethodT&& value) { SetDefaultAuthenticationMethod(std::forward<DefaultAuthenticationMethodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable the GCM channel for the application.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline GCMChannelRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contents of the JSON file provided by Google during registration in order
     * to generate an access token for authentication. For more information see <a
     * href="https://firebase.google.com/docs/cloud-messaging/migrate-v1">Migrate from
     * legacy FCM APIs to HTTP v1</a>.</p>
     */
    inline const Aws::String& GetServiceJson() const { return m_serviceJson; }
    inline bool ServiceJsonHasBeenSet() const { return m_serviceJsonHasBeenSet; }
    template<typename ServiceJsonT = Aws::String>
    void SetServiceJson(ServiceJsonT&& value) { m_serviceJsonHasBeenSet = true; m_serviceJson = std::forward<ServiceJsonT>(value); }
    template<typename ServiceJsonT = Aws::String>
    GCMChannelRequest& WithServiceJson(ServiceJsonT&& value) { SetServiceJson(std::forward<ServiceJsonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiKey;
    bool m_apiKeyHasBeenSet = false;

    Aws::String m_defaultAuthenticationMethod;
    bool m_defaultAuthenticationMethodHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_serviceJson;
    bool m_serviceJsonHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
