/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/verifiedpermissions/model/CognitoGroupConfiguration.h>
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
   * Permissions.</p> <p>This data type part of a <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_Configuration.html">Configuration</a>
   * structure that is used as a parameter to <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_CreateIdentitySource.html">CreateIdentitySource</a>.</p>
   * <p>Example:<code>"CognitoUserPoolConfiguration":{"UserPoolArn":"arn:aws:cognito-idp:us-east-1:123456789012:userpool/us-east-1_1a2b3c4d5","ClientIds":
   * ["a1b2c3d4e5f6g7h8i9j0kalbmc"],"groupConfiguration": {"groupEntityType":
   * "MyCorp::Group"}}</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/CognitoUserPoolConfiguration">AWS
   * API Reference</a></p>
   */
  class CognitoUserPoolConfiguration
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API CognitoUserPoolConfiguration() = default;
    AWS_VERIFIEDPERMISSIONS_API CognitoUserPoolConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API CognitoUserPoolConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool that contains the
     * identities to be authorized.</p> <p>Example: <code>"UserPoolArn":
     * "arn:aws:cognito-idp:us-east-1:123456789012:userpool/us-east-1_1a2b3c4d5"</code>
     * </p>
     */
    inline const Aws::String& GetUserPoolArn() const { return m_userPoolArn; }
    inline bool UserPoolArnHasBeenSet() const { return m_userPoolArnHasBeenSet; }
    template<typename UserPoolArnT = Aws::String>
    void SetUserPoolArn(UserPoolArnT&& value) { m_userPoolArnHasBeenSet = true; m_userPoolArn = std::forward<UserPoolArnT>(value); }
    template<typename UserPoolArnT = Aws::String>
    CognitoUserPoolConfiguration& WithUserPoolArn(UserPoolArnT&& value) { SetUserPoolArn(std::forward<UserPoolArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique application client IDs that are associated with the specified
     * Amazon Cognito user pool.</p> <p>Example: <code>"ClientIds":
     * ["&amp;ExampleCogClientId;"]</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetClientIds() const { return m_clientIds; }
    inline bool ClientIdsHasBeenSet() const { return m_clientIdsHasBeenSet; }
    template<typename ClientIdsT = Aws::Vector<Aws::String>>
    void SetClientIds(ClientIdsT&& value) { m_clientIdsHasBeenSet = true; m_clientIds = std::forward<ClientIdsT>(value); }
    template<typename ClientIdsT = Aws::Vector<Aws::String>>
    CognitoUserPoolConfiguration& WithClientIds(ClientIdsT&& value) { SetClientIds(std::forward<ClientIdsT>(value)); return *this;}
    template<typename ClientIdsT = Aws::String>
    CognitoUserPoolConfiguration& AddClientIds(ClientIdsT&& value) { m_clientIdsHasBeenSet = true; m_clientIds.emplace_back(std::forward<ClientIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of entity that a policy store maps to groups from an Amazon Cognito
     * user pool identity source.</p>
     */
    inline const CognitoGroupConfiguration& GetGroupConfiguration() const { return m_groupConfiguration; }
    inline bool GroupConfigurationHasBeenSet() const { return m_groupConfigurationHasBeenSet; }
    template<typename GroupConfigurationT = CognitoGroupConfiguration>
    void SetGroupConfiguration(GroupConfigurationT&& value) { m_groupConfigurationHasBeenSet = true; m_groupConfiguration = std::forward<GroupConfigurationT>(value); }
    template<typename GroupConfigurationT = CognitoGroupConfiguration>
    CognitoUserPoolConfiguration& WithGroupConfiguration(GroupConfigurationT&& value) { SetGroupConfiguration(std::forward<GroupConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userPoolArn;
    bool m_userPoolArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_clientIds;
    bool m_clientIdsHasBeenSet = false;

    CognitoGroupConfiguration m_groupConfiguration;
    bool m_groupConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
