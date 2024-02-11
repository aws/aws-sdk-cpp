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
    AWS_PINPOINT_API GCMChannelRequest();
    AWS_PINPOINT_API GCMChannelRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API GCMChannelRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Web API Key, also referred to as an <i>API_KEY</i> or <i>server key</i>,
     * that you received from Google to communicate with Google services.</p>
     */
    inline const Aws::String& GetApiKey() const{ return m_apiKey; }

    /**
     * <p>The Web API Key, also referred to as an <i>API_KEY</i> or <i>server key</i>,
     * that you received from Google to communicate with Google services.</p>
     */
    inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }

    /**
     * <p>The Web API Key, also referred to as an <i>API_KEY</i> or <i>server key</i>,
     * that you received from Google to communicate with Google services.</p>
     */
    inline void SetApiKey(const Aws::String& value) { m_apiKeyHasBeenSet = true; m_apiKey = value; }

    /**
     * <p>The Web API Key, also referred to as an <i>API_KEY</i> or <i>server key</i>,
     * that you received from Google to communicate with Google services.</p>
     */
    inline void SetApiKey(Aws::String&& value) { m_apiKeyHasBeenSet = true; m_apiKey = std::move(value); }

    /**
     * <p>The Web API Key, also referred to as an <i>API_KEY</i> or <i>server key</i>,
     * that you received from Google to communicate with Google services.</p>
     */
    inline void SetApiKey(const char* value) { m_apiKeyHasBeenSet = true; m_apiKey.assign(value); }

    /**
     * <p>The Web API Key, also referred to as an <i>API_KEY</i> or <i>server key</i>,
     * that you received from Google to communicate with Google services.</p>
     */
    inline GCMChannelRequest& WithApiKey(const Aws::String& value) { SetApiKey(value); return *this;}

    /**
     * <p>The Web API Key, also referred to as an <i>API_KEY</i> or <i>server key</i>,
     * that you received from Google to communicate with Google services.</p>
     */
    inline GCMChannelRequest& WithApiKey(Aws::String&& value) { SetApiKey(std::move(value)); return *this;}

    /**
     * <p>The Web API Key, also referred to as an <i>API_KEY</i> or <i>server key</i>,
     * that you received from Google to communicate with Google services.</p>
     */
    inline GCMChannelRequest& WithApiKey(const char* value) { SetApiKey(value); return *this;}


    /**
     * <p>The default authentication method used for GCM. Values are either "TOKEN" or
     * "KEY". Defaults to "KEY".</p>
     */
    inline const Aws::String& GetDefaultAuthenticationMethod() const{ return m_defaultAuthenticationMethod; }

    /**
     * <p>The default authentication method used for GCM. Values are either "TOKEN" or
     * "KEY". Defaults to "KEY".</p>
     */
    inline bool DefaultAuthenticationMethodHasBeenSet() const { return m_defaultAuthenticationMethodHasBeenSet; }

    /**
     * <p>The default authentication method used for GCM. Values are either "TOKEN" or
     * "KEY". Defaults to "KEY".</p>
     */
    inline void SetDefaultAuthenticationMethod(const Aws::String& value) { m_defaultAuthenticationMethodHasBeenSet = true; m_defaultAuthenticationMethod = value; }

    /**
     * <p>The default authentication method used for GCM. Values are either "TOKEN" or
     * "KEY". Defaults to "KEY".</p>
     */
    inline void SetDefaultAuthenticationMethod(Aws::String&& value) { m_defaultAuthenticationMethodHasBeenSet = true; m_defaultAuthenticationMethod = std::move(value); }

    /**
     * <p>The default authentication method used for GCM. Values are either "TOKEN" or
     * "KEY". Defaults to "KEY".</p>
     */
    inline void SetDefaultAuthenticationMethod(const char* value) { m_defaultAuthenticationMethodHasBeenSet = true; m_defaultAuthenticationMethod.assign(value); }

    /**
     * <p>The default authentication method used for GCM. Values are either "TOKEN" or
     * "KEY". Defaults to "KEY".</p>
     */
    inline GCMChannelRequest& WithDefaultAuthenticationMethod(const Aws::String& value) { SetDefaultAuthenticationMethod(value); return *this;}

    /**
     * <p>The default authentication method used for GCM. Values are either "TOKEN" or
     * "KEY". Defaults to "KEY".</p>
     */
    inline GCMChannelRequest& WithDefaultAuthenticationMethod(Aws::String&& value) { SetDefaultAuthenticationMethod(std::move(value)); return *this;}

    /**
     * <p>The default authentication method used for GCM. Values are either "TOKEN" or
     * "KEY". Defaults to "KEY".</p>
     */
    inline GCMChannelRequest& WithDefaultAuthenticationMethod(const char* value) { SetDefaultAuthenticationMethod(value); return *this;}


    /**
     * <p>Specifies whether to enable the GCM channel for the application.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether to enable the GCM channel for the application.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether to enable the GCM channel for the application.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether to enable the GCM channel for the application.</p>
     */
    inline GCMChannelRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The contents of the JSON file provided by Google during registration in order
     * to generate an access token for authentication. For more information see <a
     * href="https://firebase.google.com/docs/cloud-messaging/migrate-v1">Migrate from
     * legacy FCM APIs to HTTP v1</a>.</p>
     */
    inline const Aws::String& GetServiceJson() const{ return m_serviceJson; }

    /**
     * <p>The contents of the JSON file provided by Google during registration in order
     * to generate an access token for authentication. For more information see <a
     * href="https://firebase.google.com/docs/cloud-messaging/migrate-v1">Migrate from
     * legacy FCM APIs to HTTP v1</a>.</p>
     */
    inline bool ServiceJsonHasBeenSet() const { return m_serviceJsonHasBeenSet; }

    /**
     * <p>The contents of the JSON file provided by Google during registration in order
     * to generate an access token for authentication. For more information see <a
     * href="https://firebase.google.com/docs/cloud-messaging/migrate-v1">Migrate from
     * legacy FCM APIs to HTTP v1</a>.</p>
     */
    inline void SetServiceJson(const Aws::String& value) { m_serviceJsonHasBeenSet = true; m_serviceJson = value; }

    /**
     * <p>The contents of the JSON file provided by Google during registration in order
     * to generate an access token for authentication. For more information see <a
     * href="https://firebase.google.com/docs/cloud-messaging/migrate-v1">Migrate from
     * legacy FCM APIs to HTTP v1</a>.</p>
     */
    inline void SetServiceJson(Aws::String&& value) { m_serviceJsonHasBeenSet = true; m_serviceJson = std::move(value); }

    /**
     * <p>The contents of the JSON file provided by Google during registration in order
     * to generate an access token for authentication. For more information see <a
     * href="https://firebase.google.com/docs/cloud-messaging/migrate-v1">Migrate from
     * legacy FCM APIs to HTTP v1</a>.</p>
     */
    inline void SetServiceJson(const char* value) { m_serviceJsonHasBeenSet = true; m_serviceJson.assign(value); }

    /**
     * <p>The contents of the JSON file provided by Google during registration in order
     * to generate an access token for authentication. For more information see <a
     * href="https://firebase.google.com/docs/cloud-messaging/migrate-v1">Migrate from
     * legacy FCM APIs to HTTP v1</a>.</p>
     */
    inline GCMChannelRequest& WithServiceJson(const Aws::String& value) { SetServiceJson(value); return *this;}

    /**
     * <p>The contents of the JSON file provided by Google during registration in order
     * to generate an access token for authentication. For more information see <a
     * href="https://firebase.google.com/docs/cloud-messaging/migrate-v1">Migrate from
     * legacy FCM APIs to HTTP v1</a>.</p>
     */
    inline GCMChannelRequest& WithServiceJson(Aws::String&& value) { SetServiceJson(std::move(value)); return *this;}

    /**
     * <p>The contents of the JSON file provided by Google during registration in order
     * to generate an access token for authentication. For more information see <a
     * href="https://firebase.google.com/docs/cloud-messaging/migrate-v1">Migrate from
     * legacy FCM APIs to HTTP v1</a>.</p>
     */
    inline GCMChannelRequest& WithServiceJson(const char* value) { SetServiceJson(value); return *this;}

  private:

    Aws::String m_apiKey;
    bool m_apiKeyHasBeenSet = false;

    Aws::String m_defaultAuthenticationMethod;
    bool m_defaultAuthenticationMethodHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_serviceJson;
    bool m_serviceJsonHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
