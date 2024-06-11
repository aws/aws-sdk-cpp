/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/verifiedpermissions/model/CognitoGroupConfigurationDetail.h>
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
namespace VerifiedPermissions
{
namespace Model
{

  /**
   * <p>The configuration for an identity source that represents a connection to an
   * Amazon Cognito user pool used as an identity provider for Verified
   * Permissions.</p> <p>This data type is used as a field that is part of an <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_ConfigurationDetail.html">ConfigurationDetail</a>
   * structure that is part of the response to <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_GetIdentitySource.html">GetIdentitySource</a>.</p>
   * <p>Example:<code>"CognitoUserPoolConfiguration":{"UserPoolArn":"arn:aws:cognito-idp:us-east-1:123456789012:userpool/us-east-1_1a2b3c4d5","ClientIds":
   * ["a1b2c3d4e5f6g7h8i9j0kalbmc"],"groupConfiguration": {"groupEntityType":
   * "MyCorp::Group"}}</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/CognitoUserPoolConfigurationDetail">AWS
   * API Reference</a></p>
   */
  class CognitoUserPoolConfigurationDetail
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API CognitoUserPoolConfigurationDetail();
    AWS_VERIFIEDPERMISSIONS_API CognitoUserPoolConfigurationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API CognitoUserPoolConfigurationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool that contains the
     * identities to be authorized.</p> <p>Example: <code>"userPoolArn":
     * "arn:aws:cognito-idp:us-east-1:123456789012:userpool/us-east-1_1a2b3c4d5"</code>
     * </p>
     */
    inline const Aws::String& GetUserPoolArn() const{ return m_userPoolArn; }
    inline bool UserPoolArnHasBeenSet() const { return m_userPoolArnHasBeenSet; }
    inline void SetUserPoolArn(const Aws::String& value) { m_userPoolArnHasBeenSet = true; m_userPoolArn = value; }
    inline void SetUserPoolArn(Aws::String&& value) { m_userPoolArnHasBeenSet = true; m_userPoolArn = std::move(value); }
    inline void SetUserPoolArn(const char* value) { m_userPoolArnHasBeenSet = true; m_userPoolArn.assign(value); }
    inline CognitoUserPoolConfigurationDetail& WithUserPoolArn(const Aws::String& value) { SetUserPoolArn(value); return *this;}
    inline CognitoUserPoolConfigurationDetail& WithUserPoolArn(Aws::String&& value) { SetUserPoolArn(std::move(value)); return *this;}
    inline CognitoUserPoolConfigurationDetail& WithUserPoolArn(const char* value) { SetUserPoolArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique application client IDs that are associated with the specified
     * Amazon Cognito user pool.</p> <p>Example: <code>"clientIds":
     * ["&amp;ExampleCogClientId;"]</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetClientIds() const{ return m_clientIds; }
    inline bool ClientIdsHasBeenSet() const { return m_clientIdsHasBeenSet; }
    inline void SetClientIds(const Aws::Vector<Aws::String>& value) { m_clientIdsHasBeenSet = true; m_clientIds = value; }
    inline void SetClientIds(Aws::Vector<Aws::String>&& value) { m_clientIdsHasBeenSet = true; m_clientIds = std::move(value); }
    inline CognitoUserPoolConfigurationDetail& WithClientIds(const Aws::Vector<Aws::String>& value) { SetClientIds(value); return *this;}
    inline CognitoUserPoolConfigurationDetail& WithClientIds(Aws::Vector<Aws::String>&& value) { SetClientIds(std::move(value)); return *this;}
    inline CognitoUserPoolConfigurationDetail& AddClientIds(const Aws::String& value) { m_clientIdsHasBeenSet = true; m_clientIds.push_back(value); return *this; }
    inline CognitoUserPoolConfigurationDetail& AddClientIds(Aws::String&& value) { m_clientIdsHasBeenSet = true; m_clientIds.push_back(std::move(value)); return *this; }
    inline CognitoUserPoolConfigurationDetail& AddClientIds(const char* value) { m_clientIdsHasBeenSet = true; m_clientIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The OpenID Connect (OIDC) <code>issuer</code> ID of the Amazon Cognito user
     * pool that contains the identities to be authorized.</p> <p>Example:
     * <code>"issuer":
     * "https://cognito-idp.us-east-1.amazonaws.com/us-east-1_1a2b3c4d5"</code> </p>
     */
    inline const Aws::String& GetIssuer() const{ return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    inline void SetIssuer(const Aws::String& value) { m_issuerHasBeenSet = true; m_issuer = value; }
    inline void SetIssuer(Aws::String&& value) { m_issuerHasBeenSet = true; m_issuer = std::move(value); }
    inline void SetIssuer(const char* value) { m_issuerHasBeenSet = true; m_issuer.assign(value); }
    inline CognitoUserPoolConfigurationDetail& WithIssuer(const Aws::String& value) { SetIssuer(value); return *this;}
    inline CognitoUserPoolConfigurationDetail& WithIssuer(Aws::String&& value) { SetIssuer(std::move(value)); return *this;}
    inline CognitoUserPoolConfigurationDetail& WithIssuer(const char* value) { SetIssuer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of entity that a policy store maps to groups from an Amazon Cognito
     * user pool identity source.</p>
     */
    inline const CognitoGroupConfigurationDetail& GetGroupConfiguration() const{ return m_groupConfiguration; }
    inline bool GroupConfigurationHasBeenSet() const { return m_groupConfigurationHasBeenSet; }
    inline void SetGroupConfiguration(const CognitoGroupConfigurationDetail& value) { m_groupConfigurationHasBeenSet = true; m_groupConfiguration = value; }
    inline void SetGroupConfiguration(CognitoGroupConfigurationDetail&& value) { m_groupConfigurationHasBeenSet = true; m_groupConfiguration = std::move(value); }
    inline CognitoUserPoolConfigurationDetail& WithGroupConfiguration(const CognitoGroupConfigurationDetail& value) { SetGroupConfiguration(value); return *this;}
    inline CognitoUserPoolConfigurationDetail& WithGroupConfiguration(CognitoGroupConfigurationDetail&& value) { SetGroupConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_userPoolArn;
    bool m_userPoolArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_clientIds;
    bool m_clientIdsHasBeenSet = false;

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;

    CognitoGroupConfigurationDetail m_groupConfiguration;
    bool m_groupConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
