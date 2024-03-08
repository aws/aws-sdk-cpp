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
    AWS_SNS_API CreatePlatformEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePlatformEndpoint"; }

    AWS_SNS_API Aws::String SerializePayload() const override;

  protected:
    AWS_SNS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p> <code>PlatformApplicationArn</code> returned from CreatePlatformApplication
     * is used to create a an endpoint.</p>
     */
    inline const Aws::String& GetPlatformApplicationArn() const{ return m_platformApplicationArn; }

    /**
     * <p> <code>PlatformApplicationArn</code> returned from CreatePlatformApplication
     * is used to create a an endpoint.</p>
     */
    inline bool PlatformApplicationArnHasBeenSet() const { return m_platformApplicationArnHasBeenSet; }

    /**
     * <p> <code>PlatformApplicationArn</code> returned from CreatePlatformApplication
     * is used to create a an endpoint.</p>
     */
    inline void SetPlatformApplicationArn(const Aws::String& value) { m_platformApplicationArnHasBeenSet = true; m_platformApplicationArn = value; }

    /**
     * <p> <code>PlatformApplicationArn</code> returned from CreatePlatformApplication
     * is used to create a an endpoint.</p>
     */
    inline void SetPlatformApplicationArn(Aws::String&& value) { m_platformApplicationArnHasBeenSet = true; m_platformApplicationArn = std::move(value); }

    /**
     * <p> <code>PlatformApplicationArn</code> returned from CreatePlatformApplication
     * is used to create a an endpoint.</p>
     */
    inline void SetPlatformApplicationArn(const char* value) { m_platformApplicationArnHasBeenSet = true; m_platformApplicationArn.assign(value); }

    /**
     * <p> <code>PlatformApplicationArn</code> returned from CreatePlatformApplication
     * is used to create a an endpoint.</p>
     */
    inline CreatePlatformEndpointRequest& WithPlatformApplicationArn(const Aws::String& value) { SetPlatformApplicationArn(value); return *this;}

    /**
     * <p> <code>PlatformApplicationArn</code> returned from CreatePlatformApplication
     * is used to create a an endpoint.</p>
     */
    inline CreatePlatformEndpointRequest& WithPlatformApplicationArn(Aws::String&& value) { SetPlatformApplicationArn(std::move(value)); return *this;}

    /**
     * <p> <code>PlatformApplicationArn</code> returned from CreatePlatformApplication
     * is used to create a an endpoint.</p>
     */
    inline CreatePlatformEndpointRequest& WithPlatformApplicationArn(const char* value) { SetPlatformApplicationArn(value); return *this;}


    /**
     * <p>Unique identifier created by the notification service for an app on a device.
     * The specific name for Token will vary, depending on which notification service
     * is being used. For example, when using APNS as the notification service, you
     * need the device token. Alternatively, when using GCM (Firebase Cloud Messaging)
     * or ADM, the device token equivalent is called the registration ID.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * <p>Unique identifier created by the notification service for an app on a device.
     * The specific name for Token will vary, depending on which notification service
     * is being used. For example, when using APNS as the notification service, you
     * need the device token. Alternatively, when using GCM (Firebase Cloud Messaging)
     * or ADM, the device token equivalent is called the registration ID.</p>
     */
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }

    /**
     * <p>Unique identifier created by the notification service for an app on a device.
     * The specific name for Token will vary, depending on which notification service
     * is being used. For example, when using APNS as the notification service, you
     * need the device token. Alternatively, when using GCM (Firebase Cloud Messaging)
     * or ADM, the device token equivalent is called the registration ID.</p>
     */
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * <p>Unique identifier created by the notification service for an app on a device.
     * The specific name for Token will vary, depending on which notification service
     * is being used. For example, when using APNS as the notification service, you
     * need the device token. Alternatively, when using GCM (Firebase Cloud Messaging)
     * or ADM, the device token equivalent is called the registration ID.</p>
     */
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }

    /**
     * <p>Unique identifier created by the notification service for an app on a device.
     * The specific name for Token will vary, depending on which notification service
     * is being used. For example, when using APNS as the notification service, you
     * need the device token. Alternatively, when using GCM (Firebase Cloud Messaging)
     * or ADM, the device token equivalent is called the registration ID.</p>
     */
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }

    /**
     * <p>Unique identifier created by the notification service for an app on a device.
     * The specific name for Token will vary, depending on which notification service
     * is being used. For example, when using APNS as the notification service, you
     * need the device token. Alternatively, when using GCM (Firebase Cloud Messaging)
     * or ADM, the device token equivalent is called the registration ID.</p>
     */
    inline CreatePlatformEndpointRequest& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * <p>Unique identifier created by the notification service for an app on a device.
     * The specific name for Token will vary, depending on which notification service
     * is being used. For example, when using APNS as the notification service, you
     * need the device token. Alternatively, when using GCM (Firebase Cloud Messaging)
     * or ADM, the device token equivalent is called the registration ID.</p>
     */
    inline CreatePlatformEndpointRequest& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}

    /**
     * <p>Unique identifier created by the notification service for an app on a device.
     * The specific name for Token will vary, depending on which notification service
     * is being used. For example, when using APNS as the notification service, you
     * need the device token. Alternatively, when using GCM (Firebase Cloud Messaging)
     * or ADM, the device token equivalent is called the registration ID.</p>
     */
    inline CreatePlatformEndpointRequest& WithToken(const char* value) { SetToken(value); return *this;}


    /**
     * <p>Arbitrary user data to associate with the endpoint. Amazon SNS does not use
     * this data. The data must be in UTF-8 format and less than 2KB.</p>
     */
    inline const Aws::String& GetCustomUserData() const{ return m_customUserData; }

    /**
     * <p>Arbitrary user data to associate with the endpoint. Amazon SNS does not use
     * this data. The data must be in UTF-8 format and less than 2KB.</p>
     */
    inline bool CustomUserDataHasBeenSet() const { return m_customUserDataHasBeenSet; }

    /**
     * <p>Arbitrary user data to associate with the endpoint. Amazon SNS does not use
     * this data. The data must be in UTF-8 format and less than 2KB.</p>
     */
    inline void SetCustomUserData(const Aws::String& value) { m_customUserDataHasBeenSet = true; m_customUserData = value; }

    /**
     * <p>Arbitrary user data to associate with the endpoint. Amazon SNS does not use
     * this data. The data must be in UTF-8 format and less than 2KB.</p>
     */
    inline void SetCustomUserData(Aws::String&& value) { m_customUserDataHasBeenSet = true; m_customUserData = std::move(value); }

    /**
     * <p>Arbitrary user data to associate with the endpoint. Amazon SNS does not use
     * this data. The data must be in UTF-8 format and less than 2KB.</p>
     */
    inline void SetCustomUserData(const char* value) { m_customUserDataHasBeenSet = true; m_customUserData.assign(value); }

    /**
     * <p>Arbitrary user data to associate with the endpoint. Amazon SNS does not use
     * this data. The data must be in UTF-8 format and less than 2KB.</p>
     */
    inline CreatePlatformEndpointRequest& WithCustomUserData(const Aws::String& value) { SetCustomUserData(value); return *this;}

    /**
     * <p>Arbitrary user data to associate with the endpoint. Amazon SNS does not use
     * this data. The data must be in UTF-8 format and less than 2KB.</p>
     */
    inline CreatePlatformEndpointRequest& WithCustomUserData(Aws::String&& value) { SetCustomUserData(std::move(value)); return *this;}

    /**
     * <p>Arbitrary user data to associate with the endpoint. Amazon SNS does not use
     * this data. The data must be in UTF-8 format and less than 2KB.</p>
     */
    inline CreatePlatformEndpointRequest& WithCustomUserData(const char* value) { SetCustomUserData(value); return *this;}


    /**
     * <p>For a list of attributes, see <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_SetEndpointAttributes.html">
     * <code>SetEndpointAttributes</code> </a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>For a list of attributes, see <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_SetEndpointAttributes.html">
     * <code>SetEndpointAttributes</code> </a>.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>For a list of attributes, see <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_SetEndpointAttributes.html">
     * <code>SetEndpointAttributes</code> </a>.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>For a list of attributes, see <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_SetEndpointAttributes.html">
     * <code>SetEndpointAttributes</code> </a>.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>For a list of attributes, see <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_SetEndpointAttributes.html">
     * <code>SetEndpointAttributes</code> </a>.</p>
     */
    inline CreatePlatformEndpointRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>For a list of attributes, see <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_SetEndpointAttributes.html">
     * <code>SetEndpointAttributes</code> </a>.</p>
     */
    inline CreatePlatformEndpointRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>For a list of attributes, see <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_SetEndpointAttributes.html">
     * <code>SetEndpointAttributes</code> </a>.</p>
     */
    inline CreatePlatformEndpointRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>For a list of attributes, see <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_SetEndpointAttributes.html">
     * <code>SetEndpointAttributes</code> </a>.</p>
     */
    inline CreatePlatformEndpointRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>For a list of attributes, see <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_SetEndpointAttributes.html">
     * <code>SetEndpointAttributes</code> </a>.</p>
     */
    inline CreatePlatformEndpointRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>For a list of attributes, see <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_SetEndpointAttributes.html">
     * <code>SetEndpointAttributes</code> </a>.</p>
     */
    inline CreatePlatformEndpointRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>For a list of attributes, see <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_SetEndpointAttributes.html">
     * <code>SetEndpointAttributes</code> </a>.</p>
     */
    inline CreatePlatformEndpointRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>For a list of attributes, see <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_SetEndpointAttributes.html">
     * <code>SetEndpointAttributes</code> </a>.</p>
     */
    inline CreatePlatformEndpointRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>For a list of attributes, see <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_SetEndpointAttributes.html">
     * <code>SetEndpointAttributes</code> </a>.</p>
     */
    inline CreatePlatformEndpointRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

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
