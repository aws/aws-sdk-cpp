/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
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
namespace SocialMessaging
{
namespace Model
{

  /**
   * <p>Contains the <code>accessToken</code> provided by Meta during
   * signup.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/WhatsAppSignupCallback">AWS
   * API Reference</a></p>
   */
  class WhatsAppSignupCallback
  {
  public:
    AWS_SOCIALMESSAGING_API WhatsAppSignupCallback() = default;
    AWS_SOCIALMESSAGING_API WhatsAppSignupCallback(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API WhatsAppSignupCallback& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The access token for your WhatsApp Business Account. The
     * <code>accessToken</code> value is provided by Meta.</p>
     */
    inline const Aws::String& GetAccessToken() const { return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    template<typename AccessTokenT = Aws::String>
    void SetAccessToken(AccessTokenT&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::forward<AccessTokenT>(value); }
    template<typename AccessTokenT = Aws::String>
    WhatsAppSignupCallback& WithAccessToken(AccessTokenT&& value) { SetAccessToken(std::forward<AccessTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL where WhatsApp will send callback notifications for this account.</p>
     */
    inline const Aws::String& GetCallbackUrl() const { return m_callbackUrl; }
    inline bool CallbackUrlHasBeenSet() const { return m_callbackUrlHasBeenSet; }
    template<typename CallbackUrlT = Aws::String>
    void SetCallbackUrl(CallbackUrlT&& value) { m_callbackUrlHasBeenSet = true; m_callbackUrl = std::forward<CallbackUrlT>(value); }
    template<typename CallbackUrlT = Aws::String>
    WhatsAppSignupCallback& WithCallbackUrl(CallbackUrlT&& value) { SetCallbackUrl(std::forward<CallbackUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    Aws::String m_callbackUrl;
    bool m_callbackUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
