﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securitylake/model/HttpsMethod.h>
#include <utility>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class CreateSubscriptionNotificationConfigurationRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API CreateSubscriptionNotificationConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSubscriptionNotificationConfiguration"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    /**
     * <p>Create an Amazon Simple Queue Service queue.</p>
     */
    inline bool GetCreateSqs() const{ return m_createSqs; }

    /**
     * <p>Create an Amazon Simple Queue Service queue.</p>
     */
    inline bool CreateSqsHasBeenSet() const { return m_createSqsHasBeenSet; }

    /**
     * <p>Create an Amazon Simple Queue Service queue.</p>
     */
    inline void SetCreateSqs(bool value) { m_createSqsHasBeenSet = true; m_createSqs = value; }

    /**
     * <p>Create an Amazon Simple Queue Service queue.</p>
     */
    inline CreateSubscriptionNotificationConfigurationRequest& WithCreateSqs(bool value) { SetCreateSqs(value); return *this;}


    /**
     * <p>The key name for the notification subscription.</p>
     */
    inline const Aws::String& GetHttpsApiKeyName() const{ return m_httpsApiKeyName; }

    /**
     * <p>The key name for the notification subscription.</p>
     */
    inline bool HttpsApiKeyNameHasBeenSet() const { return m_httpsApiKeyNameHasBeenSet; }

    /**
     * <p>The key name for the notification subscription.</p>
     */
    inline void SetHttpsApiKeyName(const Aws::String& value) { m_httpsApiKeyNameHasBeenSet = true; m_httpsApiKeyName = value; }

    /**
     * <p>The key name for the notification subscription.</p>
     */
    inline void SetHttpsApiKeyName(Aws::String&& value) { m_httpsApiKeyNameHasBeenSet = true; m_httpsApiKeyName = std::move(value); }

    /**
     * <p>The key name for the notification subscription.</p>
     */
    inline void SetHttpsApiKeyName(const char* value) { m_httpsApiKeyNameHasBeenSet = true; m_httpsApiKeyName.assign(value); }

    /**
     * <p>The key name for the notification subscription.</p>
     */
    inline CreateSubscriptionNotificationConfigurationRequest& WithHttpsApiKeyName(const Aws::String& value) { SetHttpsApiKeyName(value); return *this;}

    /**
     * <p>The key name for the notification subscription.</p>
     */
    inline CreateSubscriptionNotificationConfigurationRequest& WithHttpsApiKeyName(Aws::String&& value) { SetHttpsApiKeyName(std::move(value)); return *this;}

    /**
     * <p>The key name for the notification subscription.</p>
     */
    inline CreateSubscriptionNotificationConfigurationRequest& WithHttpsApiKeyName(const char* value) { SetHttpsApiKeyName(value); return *this;}


    /**
     * <p>The key value for the notification subscription.</p>
     */
    inline const Aws::String& GetHttpsApiKeyValue() const{ return m_httpsApiKeyValue; }

    /**
     * <p>The key value for the notification subscription.</p>
     */
    inline bool HttpsApiKeyValueHasBeenSet() const { return m_httpsApiKeyValueHasBeenSet; }

    /**
     * <p>The key value for the notification subscription.</p>
     */
    inline void SetHttpsApiKeyValue(const Aws::String& value) { m_httpsApiKeyValueHasBeenSet = true; m_httpsApiKeyValue = value; }

    /**
     * <p>The key value for the notification subscription.</p>
     */
    inline void SetHttpsApiKeyValue(Aws::String&& value) { m_httpsApiKeyValueHasBeenSet = true; m_httpsApiKeyValue = std::move(value); }

    /**
     * <p>The key value for the notification subscription.</p>
     */
    inline void SetHttpsApiKeyValue(const char* value) { m_httpsApiKeyValueHasBeenSet = true; m_httpsApiKeyValue.assign(value); }

    /**
     * <p>The key value for the notification subscription.</p>
     */
    inline CreateSubscriptionNotificationConfigurationRequest& WithHttpsApiKeyValue(const Aws::String& value) { SetHttpsApiKeyValue(value); return *this;}

    /**
     * <p>The key value for the notification subscription.</p>
     */
    inline CreateSubscriptionNotificationConfigurationRequest& WithHttpsApiKeyValue(Aws::String&& value) { SetHttpsApiKeyValue(std::move(value)); return *this;}

    /**
     * <p>The key value for the notification subscription.</p>
     */
    inline CreateSubscriptionNotificationConfigurationRequest& WithHttpsApiKeyValue(const char* value) { SetHttpsApiKeyValue(value); return *this;}


    /**
     * <p>The HTTPS method used for the notification subscription. </p>
     */
    inline const HttpsMethod& GetHttpsMethod() const{ return m_httpsMethod; }

    /**
     * <p>The HTTPS method used for the notification subscription. </p>
     */
    inline bool HttpsMethodHasBeenSet() const { return m_httpsMethodHasBeenSet; }

    /**
     * <p>The HTTPS method used for the notification subscription. </p>
     */
    inline void SetHttpsMethod(const HttpsMethod& value) { m_httpsMethodHasBeenSet = true; m_httpsMethod = value; }

    /**
     * <p>The HTTPS method used for the notification subscription. </p>
     */
    inline void SetHttpsMethod(HttpsMethod&& value) { m_httpsMethodHasBeenSet = true; m_httpsMethod = std::move(value); }

    /**
     * <p>The HTTPS method used for the notification subscription. </p>
     */
    inline CreateSubscriptionNotificationConfigurationRequest& WithHttpsMethod(const HttpsMethod& value) { SetHttpsMethod(value); return *this;}

    /**
     * <p>The HTTPS method used for the notification subscription. </p>
     */
    inline CreateSubscriptionNotificationConfigurationRequest& WithHttpsMethod(HttpsMethod&& value) { SetHttpsMethod(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the EventBridge API destinations IAM role
     * that you created.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the EventBridge API destinations IAM role
     * that you created.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the EventBridge API destinations IAM role
     * that you created.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the EventBridge API destinations IAM role
     * that you created.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the EventBridge API destinations IAM role
     * that you created.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the EventBridge API destinations IAM role
     * that you created.</p>
     */
    inline CreateSubscriptionNotificationConfigurationRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the EventBridge API destinations IAM role
     * that you created.</p>
     */
    inline CreateSubscriptionNotificationConfigurationRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the EventBridge API destinations IAM role
     * that you created.</p>
     */
    inline CreateSubscriptionNotificationConfigurationRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The subscription endpoint in Security Lake. If you prefer notification with
     * an HTTPs endpoint, populate this field.</p>
     */
    inline const Aws::String& GetSubscriptionEndpoint() const{ return m_subscriptionEndpoint; }

    /**
     * <p>The subscription endpoint in Security Lake. If you prefer notification with
     * an HTTPs endpoint, populate this field.</p>
     */
    inline bool SubscriptionEndpointHasBeenSet() const { return m_subscriptionEndpointHasBeenSet; }

    /**
     * <p>The subscription endpoint in Security Lake. If you prefer notification with
     * an HTTPs endpoint, populate this field.</p>
     */
    inline void SetSubscriptionEndpoint(const Aws::String& value) { m_subscriptionEndpointHasBeenSet = true; m_subscriptionEndpoint = value; }

    /**
     * <p>The subscription endpoint in Security Lake. If you prefer notification with
     * an HTTPs endpoint, populate this field.</p>
     */
    inline void SetSubscriptionEndpoint(Aws::String&& value) { m_subscriptionEndpointHasBeenSet = true; m_subscriptionEndpoint = std::move(value); }

    /**
     * <p>The subscription endpoint in Security Lake. If you prefer notification with
     * an HTTPs endpoint, populate this field.</p>
     */
    inline void SetSubscriptionEndpoint(const char* value) { m_subscriptionEndpointHasBeenSet = true; m_subscriptionEndpoint.assign(value); }

    /**
     * <p>The subscription endpoint in Security Lake. If you prefer notification with
     * an HTTPs endpoint, populate this field.</p>
     */
    inline CreateSubscriptionNotificationConfigurationRequest& WithSubscriptionEndpoint(const Aws::String& value) { SetSubscriptionEndpoint(value); return *this;}

    /**
     * <p>The subscription endpoint in Security Lake. If you prefer notification with
     * an HTTPs endpoint, populate this field.</p>
     */
    inline CreateSubscriptionNotificationConfigurationRequest& WithSubscriptionEndpoint(Aws::String&& value) { SetSubscriptionEndpoint(std::move(value)); return *this;}

    /**
     * <p>The subscription endpoint in Security Lake. If you prefer notification with
     * an HTTPs endpoint, populate this field.</p>
     */
    inline CreateSubscriptionNotificationConfigurationRequest& WithSubscriptionEndpoint(const char* value) { SetSubscriptionEndpoint(value); return *this;}


    /**
     * <p>The subscription ID for the notification subscription/</p>
     */
    inline const Aws::String& GetSubscriptionId() const{ return m_subscriptionId; }

    /**
     * <p>The subscription ID for the notification subscription/</p>
     */
    inline bool SubscriptionIdHasBeenSet() const { return m_subscriptionIdHasBeenSet; }

    /**
     * <p>The subscription ID for the notification subscription/</p>
     */
    inline void SetSubscriptionId(const Aws::String& value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId = value; }

    /**
     * <p>The subscription ID for the notification subscription/</p>
     */
    inline void SetSubscriptionId(Aws::String&& value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId = std::move(value); }

    /**
     * <p>The subscription ID for the notification subscription/</p>
     */
    inline void SetSubscriptionId(const char* value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId.assign(value); }

    /**
     * <p>The subscription ID for the notification subscription/</p>
     */
    inline CreateSubscriptionNotificationConfigurationRequest& WithSubscriptionId(const Aws::String& value) { SetSubscriptionId(value); return *this;}

    /**
     * <p>The subscription ID for the notification subscription/</p>
     */
    inline CreateSubscriptionNotificationConfigurationRequest& WithSubscriptionId(Aws::String&& value) { SetSubscriptionId(std::move(value)); return *this;}

    /**
     * <p>The subscription ID for the notification subscription/</p>
     */
    inline CreateSubscriptionNotificationConfigurationRequest& WithSubscriptionId(const char* value) { SetSubscriptionId(value); return *this;}

  private:

    bool m_createSqs;
    bool m_createSqsHasBeenSet = false;

    Aws::String m_httpsApiKeyName;
    bool m_httpsApiKeyNameHasBeenSet = false;

    Aws::String m_httpsApiKeyValue;
    bool m_httpsApiKeyValueHasBeenSet = false;

    HttpsMethod m_httpsMethod;
    bool m_httpsMethodHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_subscriptionEndpoint;
    bool m_subscriptionEndpointHasBeenSet = false;

    Aws::String m_subscriptionId;
    bool m_subscriptionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
