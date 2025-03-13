/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters required to enable Cognito authentication for an
   * OpenSearch Service domain. For more information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/cognito-auth.html">Configuring
   * Amazon Cognito authentication for OpenSearch Dashboards</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CognitoOptions">AWS
   * API Reference</a></p>
   */
  class CognitoOptions
  {
  public:
    AWS_OPENSEARCHSERVICE_API CognitoOptions() = default;
    AWS_OPENSEARCHSERVICE_API CognitoOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API CognitoOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether to enable or disable Amazon Cognito authentication for OpenSearch
     * Dashboards.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline CognitoOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Cognito user pool ID that you want OpenSearch Service to use for
     * OpenSearch Dashboards authentication.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    CognitoOptions& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Cognito identity pool ID that you want OpenSearch Service to use
     * for OpenSearch Dashboards authentication.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const { return m_identityPoolId; }
    inline bool IdentityPoolIdHasBeenSet() const { return m_identityPoolIdHasBeenSet; }
    template<typename IdentityPoolIdT = Aws::String>
    void SetIdentityPoolId(IdentityPoolIdT&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::forward<IdentityPoolIdT>(value); }
    template<typename IdentityPoolIdT = Aws::String>
    CognitoOptions& WithIdentityPoolId(IdentityPoolIdT&& value) { SetIdentityPoolId(std::forward<IdentityPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>AmazonOpenSearchServiceCognitoAccess</code> role that allows
     * OpenSearch Service to configure your user pool and identity pool.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CognitoOptions& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
