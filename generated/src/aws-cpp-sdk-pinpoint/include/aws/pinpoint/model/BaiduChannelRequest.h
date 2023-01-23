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
   * <p>Specifies the status and settings of the Baidu (Baidu Cloud Push) channel for
   * an application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/BaiduChannelRequest">AWS
   * API Reference</a></p>
   */
  class BaiduChannelRequest
  {
  public:
    AWS_PINPOINT_API BaiduChannelRequest();
    AWS_PINPOINT_API BaiduChannelRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API BaiduChannelRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The API key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline const Aws::String& GetApiKey() const{ return m_apiKey; }

    /**
     * <p>The API key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }

    /**
     * <p>The API key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline void SetApiKey(const Aws::String& value) { m_apiKeyHasBeenSet = true; m_apiKey = value; }

    /**
     * <p>The API key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline void SetApiKey(Aws::String&& value) { m_apiKeyHasBeenSet = true; m_apiKey = std::move(value); }

    /**
     * <p>The API key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline void SetApiKey(const char* value) { m_apiKeyHasBeenSet = true; m_apiKey.assign(value); }

    /**
     * <p>The API key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline BaiduChannelRequest& WithApiKey(const Aws::String& value) { SetApiKey(value); return *this;}

    /**
     * <p>The API key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline BaiduChannelRequest& WithApiKey(Aws::String&& value) { SetApiKey(std::move(value)); return *this;}

    /**
     * <p>The API key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline BaiduChannelRequest& WithApiKey(const char* value) { SetApiKey(value); return *this;}


    /**
     * <p>Specifies whether to enable the Baidu channel for the application.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether to enable the Baidu channel for the application.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether to enable the Baidu channel for the application.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether to enable the Baidu channel for the application.</p>
     */
    inline BaiduChannelRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The secret key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline const Aws::String& GetSecretKey() const{ return m_secretKey; }

    /**
     * <p>The secret key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline bool SecretKeyHasBeenSet() const { return m_secretKeyHasBeenSet; }

    /**
     * <p>The secret key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline void SetSecretKey(const Aws::String& value) { m_secretKeyHasBeenSet = true; m_secretKey = value; }

    /**
     * <p>The secret key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline void SetSecretKey(Aws::String&& value) { m_secretKeyHasBeenSet = true; m_secretKey = std::move(value); }

    /**
     * <p>The secret key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline void SetSecretKey(const char* value) { m_secretKeyHasBeenSet = true; m_secretKey.assign(value); }

    /**
     * <p>The secret key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline BaiduChannelRequest& WithSecretKey(const Aws::String& value) { SetSecretKey(value); return *this;}

    /**
     * <p>The secret key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline BaiduChannelRequest& WithSecretKey(Aws::String&& value) { SetSecretKey(std::move(value)); return *this;}

    /**
     * <p>The secret key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline BaiduChannelRequest& WithSecretKey(const char* value) { SetSecretKey(value); return *this;}

  private:

    Aws::String m_apiKey;
    bool m_apiKeyHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_secretKey;
    bool m_secretKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
