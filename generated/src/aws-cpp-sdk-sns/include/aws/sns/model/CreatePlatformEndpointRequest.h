/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>Input for CreatePlatformEndpoint action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CreatePlatformEndpointInput">AWS
   * API Reference</a></p>
   */
  class CreatePlatformEndpointRequest : public SNSRequest
  {
  public:
    AWS_SNS_API CreatePlatformEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePlatformEndpoint"; }

    AWS_SNS_API Aws::String SerializePayload() const override;

  protected:
    AWS_SNS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p> <code>PlatformApplicationArn</code> returned from CreatePlatformApplication
     * is used to create a an endpoint.</p>
     */
    inline const Aws::String& GetPlatformApplicationArn() const { return m_platformApplicationArn; }
    inline bool PlatformApplicationArnHasBeenSet() const { return m_platformApplicationArnHasBeenSet; }
    template<typename PlatformApplicationArnT = Aws::String>
    void SetPlatformApplicationArn(PlatformApplicationArnT&& value) { m_platformApplicationArnHasBeenSet = true; m_platformApplicationArn = std::forward<PlatformApplicationArnT>(value); }
    template<typename PlatformApplicationArnT = Aws::String>
    CreatePlatformEndpointRequest& WithPlatformApplicationArn(PlatformApplicationArnT&& value) { SetPlatformApplicationArn(std::forward<PlatformApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier created by the notification service for an app on a device.
     * The specific name for Token will vary, depending on which notification service
     * is being used. For example, when using APNS as the notification service, you
     * need the device token. Alternatively, when using GCM (Firebase Cloud Messaging)
     * or ADM, the device token equivalent is called the registration ID.</p>
     */
    inline const Aws::String& GetToken() const { return m_token; }
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }
    template<typename TokenT = Aws::String>
    void SetToken(TokenT&& value) { m_tokenHasBeenSet = true; m_token = std::forward<TokenT>(value); }
    template<typename TokenT = Aws::String>
    CreatePlatformEndpointRequest& WithToken(TokenT&& value) { SetToken(std::forward<TokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Arbitrary user data to associate with the endpoint. Amazon SNS does not use
     * this data. The data must be in UTF-8 format and less than 2KB.</p>
     */
    inline const Aws::String& GetCustomUserData() const { return m_customUserData; }
    inline bool CustomUserDataHasBeenSet() const { return m_customUserDataHasBeenSet; }
    template<typename CustomUserDataT = Aws::String>
    void SetCustomUserData(CustomUserDataT&& value) { m_customUserDataHasBeenSet = true; m_customUserData = std::forward<CustomUserDataT>(value); }
    template<typename CustomUserDataT = Aws::String>
    CreatePlatformEndpointRequest& WithCustomUserData(CustomUserDataT&& value) { SetCustomUserData(std::forward<CustomUserDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a list of attributes, see <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_SetEndpointAttributes.html">
     * <code>SetEndpointAttributes</code> </a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    CreatePlatformEndpointRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    CreatePlatformEndpointRequest& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_platformApplicationArn;
    bool m_platformApplicationArnHasBeenSet = false;

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;

    Aws::String m_customUserData;
    bool m_customUserDataHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
