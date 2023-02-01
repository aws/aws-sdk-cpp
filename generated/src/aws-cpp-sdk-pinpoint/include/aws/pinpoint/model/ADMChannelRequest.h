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
   * <p>Specifies the status and settings of the ADM (Amazon Device Messaging)
   * channel for an application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ADMChannelRequest">AWS
   * API Reference</a></p>
   */
  class ADMChannelRequest
  {
  public:
    AWS_PINPOINT_API ADMChannelRequest();
    AWS_PINPOINT_API ADMChannelRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API ADMChannelRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Client ID that you received from Amazon to send messages by using
     * ADM.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The Client ID that you received from Amazon to send messages by using
     * ADM.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>The Client ID that you received from Amazon to send messages by using
     * ADM.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The Client ID that you received from Amazon to send messages by using
     * ADM.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The Client ID that you received from Amazon to send messages by using
     * ADM.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The Client ID that you received from Amazon to send messages by using
     * ADM.</p>
     */
    inline ADMChannelRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The Client ID that you received from Amazon to send messages by using
     * ADM.</p>
     */
    inline ADMChannelRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The Client ID that you received from Amazon to send messages by using
     * ADM.</p>
     */
    inline ADMChannelRequest& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>The Client Secret that you received from Amazon to send messages by using
     * ADM.</p>
     */
    inline const Aws::String& GetClientSecret() const{ return m_clientSecret; }

    /**
     * <p>The Client Secret that you received from Amazon to send messages by using
     * ADM.</p>
     */
    inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }

    /**
     * <p>The Client Secret that you received from Amazon to send messages by using
     * ADM.</p>
     */
    inline void SetClientSecret(const Aws::String& value) { m_clientSecretHasBeenSet = true; m_clientSecret = value; }

    /**
     * <p>The Client Secret that you received from Amazon to send messages by using
     * ADM.</p>
     */
    inline void SetClientSecret(Aws::String&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::move(value); }

    /**
     * <p>The Client Secret that you received from Amazon to send messages by using
     * ADM.</p>
     */
    inline void SetClientSecret(const char* value) { m_clientSecretHasBeenSet = true; m_clientSecret.assign(value); }

    /**
     * <p>The Client Secret that you received from Amazon to send messages by using
     * ADM.</p>
     */
    inline ADMChannelRequest& WithClientSecret(const Aws::String& value) { SetClientSecret(value); return *this;}

    /**
     * <p>The Client Secret that you received from Amazon to send messages by using
     * ADM.</p>
     */
    inline ADMChannelRequest& WithClientSecret(Aws::String&& value) { SetClientSecret(std::move(value)); return *this;}

    /**
     * <p>The Client Secret that you received from Amazon to send messages by using
     * ADM.</p>
     */
    inline ADMChannelRequest& WithClientSecret(const char* value) { SetClientSecret(value); return *this;}


    /**
     * <p>Specifies whether to enable the ADM channel for the application.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether to enable the ADM channel for the application.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether to enable the ADM channel for the application.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether to enable the ADM channel for the application.</p>
     */
    inline ADMChannelRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_clientSecret;
    bool m_clientSecretHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
