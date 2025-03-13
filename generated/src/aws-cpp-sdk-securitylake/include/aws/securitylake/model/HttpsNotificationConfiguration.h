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
   * <p>The configurations used for HTTPS subscriber notification.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/HttpsNotificationConfiguration">AWS
   * API Reference</a></p>
   */
  class HttpsNotificationConfiguration
  {
  public:
    AWS_SECURITYLAKE_API HttpsNotificationConfiguration() = default;
    AWS_SECURITYLAKE_API HttpsNotificationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API HttpsNotificationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key name for the notification subscription.</p>
     */
    inline const Aws::String& GetAuthorizationApiKeyName() const { return m_authorizationApiKeyName; }
    inline bool AuthorizationApiKeyNameHasBeenSet() const { return m_authorizationApiKeyNameHasBeenSet; }
    template<typename AuthorizationApiKeyNameT = Aws::String>
    void SetAuthorizationApiKeyName(AuthorizationApiKeyNameT&& value) { m_authorizationApiKeyNameHasBeenSet = true; m_authorizationApiKeyName = std::forward<AuthorizationApiKeyNameT>(value); }
    template<typename AuthorizationApiKeyNameT = Aws::String>
    HttpsNotificationConfiguration& WithAuthorizationApiKeyName(AuthorizationApiKeyNameT&& value) { SetAuthorizationApiKeyName(std::forward<AuthorizationApiKeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key value for the notification subscription.</p>
     */
    inline const Aws::String& GetAuthorizationApiKeyValue() const { return m_authorizationApiKeyValue; }
    inline bool AuthorizationApiKeyValueHasBeenSet() const { return m_authorizationApiKeyValueHasBeenSet; }
    template<typename AuthorizationApiKeyValueT = Aws::String>
    void SetAuthorizationApiKeyValue(AuthorizationApiKeyValueT&& value) { m_authorizationApiKeyValueHasBeenSet = true; m_authorizationApiKeyValue = std::forward<AuthorizationApiKeyValueT>(value); }
    template<typename AuthorizationApiKeyValueT = Aws::String>
    HttpsNotificationConfiguration& WithAuthorizationApiKeyValue(AuthorizationApiKeyValueT&& value) { SetAuthorizationApiKeyValue(std::forward<AuthorizationApiKeyValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscription endpoint in Security Lake. If you prefer notification with
     * an HTTPs endpoint, populate this field.</p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    HttpsNotificationConfiguration& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTPS method used for the notification subscription.</p>
     */
    inline HttpMethod GetHttpMethod() const { return m_httpMethod; }
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }
    inline void SetHttpMethod(HttpMethod value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }
    inline HttpsNotificationConfiguration& WithHttpMethod(HttpMethod value) { SetHttpMethod(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetTargetRoleArn() const { return m_targetRoleArn; }
    inline bool TargetRoleArnHasBeenSet() const { return m_targetRoleArnHasBeenSet; }
    template<typename TargetRoleArnT = Aws::String>
    void SetTargetRoleArn(TargetRoleArnT&& value) { m_targetRoleArnHasBeenSet = true; m_targetRoleArn = std::forward<TargetRoleArnT>(value); }
    template<typename TargetRoleArnT = Aws::String>
    HttpsNotificationConfiguration& WithTargetRoleArn(TargetRoleArnT&& value) { SetTargetRoleArn(std::forward<TargetRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authorizationApiKeyName;
    bool m_authorizationApiKeyNameHasBeenSet = false;

    Aws::String m_authorizationApiKeyValue;
    bool m_authorizationApiKeyValueHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    HttpMethod m_httpMethod{HttpMethod::NOT_SET};
    bool m_httpMethodHasBeenSet = false;

    Aws::String m_targetRoleArn;
    bool m_targetRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
