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
    AWS_PINPOINT_API BaiduChannelRequest() = default;
    AWS_PINPOINT_API BaiduChannelRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API BaiduChannelRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The API key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline const Aws::String& GetApiKey() const { return m_apiKey; }
    inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }
    template<typename ApiKeyT = Aws::String>
    void SetApiKey(ApiKeyT&& value) { m_apiKeyHasBeenSet = true; m_apiKey = std::forward<ApiKeyT>(value); }
    template<typename ApiKeyT = Aws::String>
    BaiduChannelRequest& WithApiKey(ApiKeyT&& value) { SetApiKey(std::forward<ApiKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable the Baidu channel for the application.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline BaiduChannelRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secret key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline const Aws::String& GetSecretKey() const { return m_secretKey; }
    inline bool SecretKeyHasBeenSet() const { return m_secretKeyHasBeenSet; }
    template<typename SecretKeyT = Aws::String>
    void SetSecretKey(SecretKeyT&& value) { m_secretKeyHasBeenSet = true; m_secretKey = std::forward<SecretKeyT>(value); }
    template<typename SecretKeyT = Aws::String>
    BaiduChannelRequest& WithSecretKey(SecretKeyT&& value) { SetSecretKey(std::forward<SecretKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiKey;
    bool m_apiKeyHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_secretKey;
    bool m_secretKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
