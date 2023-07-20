/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securitylake/model/HttpMethod.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>The configurations for HTTPS subscriber notification.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/HttpsNotificationConfiguration">AWS
   * API Reference</a></p>
   */
  class HttpsNotificationConfiguration
  {
  public:
    AWS_SECURITYLAKE_API HttpsNotificationConfiguration();
    AWS_SECURITYLAKE_API HttpsNotificationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API HttpsNotificationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key name for the notification subscription.</p>
     */
    inline const Aws::String& GetAuthorizationApiKeyName() const{ return m_authorizationApiKeyName; }

    /**
     * <p>The key name for the notification subscription.</p>
     */
    inline bool AuthorizationApiKeyNameHasBeenSet() const { return m_authorizationApiKeyNameHasBeenSet; }

    /**
     * <p>The key name for the notification subscription.</p>
     */
    inline void SetAuthorizationApiKeyName(const Aws::String& value) { m_authorizationApiKeyNameHasBeenSet = true; m_authorizationApiKeyName = value; }

    /**
     * <p>The key name for the notification subscription.</p>
     */
    inline void SetAuthorizationApiKeyName(Aws::String&& value) { m_authorizationApiKeyNameHasBeenSet = true; m_authorizationApiKeyName = std::move(value); }

    /**
     * <p>The key name for the notification subscription.</p>
     */
    inline void SetAuthorizationApiKeyName(const char* value) { m_authorizationApiKeyNameHasBeenSet = true; m_authorizationApiKeyName.assign(value); }

    /**
     * <p>The key name for the notification subscription.</p>
     */
    inline HttpsNotificationConfiguration& WithAuthorizationApiKeyName(const Aws::String& value) { SetAuthorizationApiKeyName(value); return *this;}

    /**
     * <p>The key name for the notification subscription.</p>
     */
    inline HttpsNotificationConfiguration& WithAuthorizationApiKeyName(Aws::String&& value) { SetAuthorizationApiKeyName(std::move(value)); return *this;}

    /**
     * <p>The key name for the notification subscription.</p>
     */
    inline HttpsNotificationConfiguration& WithAuthorizationApiKeyName(const char* value) { SetAuthorizationApiKeyName(value); return *this;}


    /**
     * <p>The key value for the notification subscription.</p>
     */
    inline const Aws::String& GetAuthorizationApiKeyValue() const{ return m_authorizationApiKeyValue; }

    /**
     * <p>The key value for the notification subscription.</p>
     */
    inline bool AuthorizationApiKeyValueHasBeenSet() const { return m_authorizationApiKeyValueHasBeenSet; }

    /**
     * <p>The key value for the notification subscription.</p>
     */
    inline void SetAuthorizationApiKeyValue(const Aws::String& value) { m_authorizationApiKeyValueHasBeenSet = true; m_authorizationApiKeyValue = value; }

    /**
     * <p>The key value for the notification subscription.</p>
     */
    inline void SetAuthorizationApiKeyValue(Aws::String&& value) { m_authorizationApiKeyValueHasBeenSet = true; m_authorizationApiKeyValue = std::move(value); }

    /**
     * <p>The key value for the notification subscription.</p>
     */
    inline void SetAuthorizationApiKeyValue(const char* value) { m_authorizationApiKeyValueHasBeenSet = true; m_authorizationApiKeyValue.assign(value); }

    /**
     * <p>The key value for the notification subscription.</p>
     */
    inline HttpsNotificationConfiguration& WithAuthorizationApiKeyValue(const Aws::String& value) { SetAuthorizationApiKeyValue(value); return *this;}

    /**
     * <p>The key value for the notification subscription.</p>
     */
    inline HttpsNotificationConfiguration& WithAuthorizationApiKeyValue(Aws::String&& value) { SetAuthorizationApiKeyValue(std::move(value)); return *this;}

    /**
     * <p>The key value for the notification subscription.</p>
     */
    inline HttpsNotificationConfiguration& WithAuthorizationApiKeyValue(const char* value) { SetAuthorizationApiKeyValue(value); return *this;}


    /**
     * <p>The subscription endpoint in Security Lake. If you prefer notification with
     * an HTTPs endpoint, populate this field.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The subscription endpoint in Security Lake. If you prefer notification with
     * an HTTPs endpoint, populate this field.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The subscription endpoint in Security Lake. If you prefer notification with
     * an HTTPs endpoint, populate this field.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The subscription endpoint in Security Lake. If you prefer notification with
     * an HTTPs endpoint, populate this field.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The subscription endpoint in Security Lake. If you prefer notification with
     * an HTTPs endpoint, populate this field.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The subscription endpoint in Security Lake. If you prefer notification with
     * an HTTPs endpoint, populate this field.</p>
     */
    inline HttpsNotificationConfiguration& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The subscription endpoint in Security Lake. If you prefer notification with
     * an HTTPs endpoint, populate this field.</p>
     */
    inline HttpsNotificationConfiguration& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The subscription endpoint in Security Lake. If you prefer notification with
     * an HTTPs endpoint, populate this field.</p>
     */
    inline HttpsNotificationConfiguration& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The HTTPS method used for the notification subscription.</p>
     */
    inline const HttpMethod& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>The HTTPS method used for the notification subscription.</p>
     */
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }

    /**
     * <p>The HTTPS method used for the notification subscription.</p>
     */
    inline void SetHttpMethod(const HttpMethod& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>The HTTPS method used for the notification subscription.</p>
     */
    inline void SetHttpMethod(HttpMethod&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::move(value); }

    /**
     * <p>The HTTPS method used for the notification subscription.</p>
     */
    inline HttpsNotificationConfiguration& WithHttpMethod(const HttpMethod& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>The HTTPS method used for the notification subscription.</p>
     */
    inline HttpsNotificationConfiguration& WithHttpMethod(HttpMethod&& value) { SetHttpMethod(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the EventBridge API destinations IAM role
     * that you created. For more information about ARNs and how to use them in
     * policies, see <a
     * href="https://docs.aws.amazon.com//security-lake/latest/userguide/subscriber-data-access.html">Managing
     * data access</a> and <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/security-iam-awsmanpol.html">Amazon
     * Web Services Managed Policies</a> in the <i>Amazon Security Lake User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetTargetRoleArn() const{ return m_targetRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the EventBridge API destinations IAM role
     * that you created. For more information about ARNs and how to use them in
     * policies, see <a
     * href="https://docs.aws.amazon.com//security-lake/latest/userguide/subscriber-data-access.html">Managing
     * data access</a> and <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/security-iam-awsmanpol.html">Amazon
     * Web Services Managed Policies</a> in the <i>Amazon Security Lake User
     * Guide</i>.</p>
     */
    inline bool TargetRoleArnHasBeenSet() const { return m_targetRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the EventBridge API destinations IAM role
     * that you created. For more information about ARNs and how to use them in
     * policies, see <a
     * href="https://docs.aws.amazon.com//security-lake/latest/userguide/subscriber-data-access.html">Managing
     * data access</a> and <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/security-iam-awsmanpol.html">Amazon
     * Web Services Managed Policies</a> in the <i>Amazon Security Lake User
     * Guide</i>.</p>
     */
    inline void SetTargetRoleArn(const Aws::String& value) { m_targetRoleArnHasBeenSet = true; m_targetRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the EventBridge API destinations IAM role
     * that you created. For more information about ARNs and how to use them in
     * policies, see <a
     * href="https://docs.aws.amazon.com//security-lake/latest/userguide/subscriber-data-access.html">Managing
     * data access</a> and <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/security-iam-awsmanpol.html">Amazon
     * Web Services Managed Policies</a> in the <i>Amazon Security Lake User
     * Guide</i>.</p>
     */
    inline void SetTargetRoleArn(Aws::String&& value) { m_targetRoleArnHasBeenSet = true; m_targetRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the EventBridge API destinations IAM role
     * that you created. For more information about ARNs and how to use them in
     * policies, see <a
     * href="https://docs.aws.amazon.com//security-lake/latest/userguide/subscriber-data-access.html">Managing
     * data access</a> and <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/security-iam-awsmanpol.html">Amazon
     * Web Services Managed Policies</a> in the <i>Amazon Security Lake User
     * Guide</i>.</p>
     */
    inline void SetTargetRoleArn(const char* value) { m_targetRoleArnHasBeenSet = true; m_targetRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the EventBridge API destinations IAM role
     * that you created. For more information about ARNs and how to use them in
     * policies, see <a
     * href="https://docs.aws.amazon.com//security-lake/latest/userguide/subscriber-data-access.html">Managing
     * data access</a> and <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/security-iam-awsmanpol.html">Amazon
     * Web Services Managed Policies</a> in the <i>Amazon Security Lake User
     * Guide</i>.</p>
     */
    inline HttpsNotificationConfiguration& WithTargetRoleArn(const Aws::String& value) { SetTargetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the EventBridge API destinations IAM role
     * that you created. For more information about ARNs and how to use them in
     * policies, see <a
     * href="https://docs.aws.amazon.com//security-lake/latest/userguide/subscriber-data-access.html">Managing
     * data access</a> and <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/security-iam-awsmanpol.html">Amazon
     * Web Services Managed Policies</a> in the <i>Amazon Security Lake User
     * Guide</i>.</p>
     */
    inline HttpsNotificationConfiguration& WithTargetRoleArn(Aws::String&& value) { SetTargetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the EventBridge API destinations IAM role
     * that you created. For more information about ARNs and how to use them in
     * policies, see <a
     * href="https://docs.aws.amazon.com//security-lake/latest/userguide/subscriber-data-access.html">Managing
     * data access</a> and <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/security-iam-awsmanpol.html">Amazon
     * Web Services Managed Policies</a> in the <i>Amazon Security Lake User
     * Guide</i>.</p>
     */
    inline HttpsNotificationConfiguration& WithTargetRoleArn(const char* value) { SetTargetRoleArn(value); return *this;}

  private:

    Aws::String m_authorizationApiKeyName;
    bool m_authorizationApiKeyNameHasBeenSet = false;

    Aws::String m_authorizationApiKeyValue;
    bool m_authorizationApiKeyValueHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    HttpMethod m_httpMethod;
    bool m_httpMethodHasBeenSet = false;

    Aws::String m_targetRoleArn;
    bool m_targetRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
