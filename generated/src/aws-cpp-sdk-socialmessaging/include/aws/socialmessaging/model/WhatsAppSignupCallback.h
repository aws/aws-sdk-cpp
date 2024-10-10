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
    AWS_SOCIALMESSAGING_API WhatsAppSignupCallback();
    AWS_SOCIALMESSAGING_API WhatsAppSignupCallback(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API WhatsAppSignupCallback& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The access token for your WhatsApp Business Account. The
     * <code>accessToken</code> value is provided by Meta.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }
    inline WhatsAppSignupCallback& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}
    inline WhatsAppSignupCallback& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}
    inline WhatsAppSignupCallback& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}
    ///@}
  private:

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
