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
   * Permissions.</p> <p>This data type is used as a field that is part of an <a
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
    AWS_VERIFIEDPERMISSIONS_API CognitoUserPoolConfiguration();
    AWS_VERIFIEDPERMISSIONS_API CognitoUserPoolConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API CognitoUserPoolConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool that contains the
     * identities to be authorized.</p> <p>Example: <code>"UserPoolArn":
     * "arn:aws:cognito-idp:us-east-1:123456789012:userpool/us-east-1_1a2b3c4d5"</code>
     * </p>
     */
    inline const Aws::String& GetUserPoolArn() const{ return m_userPoolArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool that contains the
     * identities to be authorized.</p> <p>Example: <code>"UserPoolArn":
     * "arn:aws:cognito-idp:us-east-1:123456789012:userpool/us-east-1_1a2b3c4d5"</code>
     * </p>
     */
    inline bool UserPoolArnHasBeenSet() const { return m_userPoolArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool that contains the
     * identities to be authorized.</p> <p>Example: <code>"UserPoolArn":
     * "arn:aws:cognito-idp:us-east-1:123456789012:userpool/us-east-1_1a2b3c4d5"</code>
     * </p>
     */
    inline void SetUserPoolArn(const Aws::String& value) { m_userPoolArnHasBeenSet = true; m_userPoolArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool that contains the
     * identities to be authorized.</p> <p>Example: <code>"UserPoolArn":
     * "arn:aws:cognito-idp:us-east-1:123456789012:userpool/us-east-1_1a2b3c4d5"</code>
     * </p>
     */
    inline void SetUserPoolArn(Aws::String&& value) { m_userPoolArnHasBeenSet = true; m_userPoolArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool that contains the
     * identities to be authorized.</p> <p>Example: <code>"UserPoolArn":
     * "arn:aws:cognito-idp:us-east-1:123456789012:userpool/us-east-1_1a2b3c4d5"</code>
     * </p>
     */
    inline void SetUserPoolArn(const char* value) { m_userPoolArnHasBeenSet = true; m_userPoolArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool that contains the
     * identities to be authorized.</p> <p>Example: <code>"UserPoolArn":
     * "arn:aws:cognito-idp:us-east-1:123456789012:userpool/us-east-1_1a2b3c4d5"</code>
     * </p>
     */
    inline CognitoUserPoolConfiguration& WithUserPoolArn(const Aws::String& value) { SetUserPoolArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool that contains the
     * identities to be authorized.</p> <p>Example: <code>"UserPoolArn":
     * "arn:aws:cognito-idp:us-east-1:123456789012:userpool/us-east-1_1a2b3c4d5"</code>
     * </p>
     */
    inline CognitoUserPoolConfiguration& WithUserPoolArn(Aws::String&& value) { SetUserPoolArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool that contains the
     * identities to be authorized.</p> <p>Example: <code>"UserPoolArn":
     * "arn:aws:cognito-idp:us-east-1:123456789012:userpool/us-east-1_1a2b3c4d5"</code>
     * </p>
     */
    inline CognitoUserPoolConfiguration& WithUserPoolArn(const char* value) { SetUserPoolArn(value); return *this;}


    /**
     * <p>The unique application client IDs that are associated with the specified
     * Amazon Cognito user pool.</p> <p>Example: <code>"ClientIds":
     * ["&amp;ExampleCogClientId;"]</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetClientIds() const{ return m_clientIds; }

    /**
     * <p>The unique application client IDs that are associated with the specified
     * Amazon Cognito user pool.</p> <p>Example: <code>"ClientIds":
     * ["&amp;ExampleCogClientId;"]</code> </p>
     */
    inline bool ClientIdsHasBeenSet() const { return m_clientIdsHasBeenSet; }

    /**
     * <p>The unique application client IDs that are associated with the specified
     * Amazon Cognito user pool.</p> <p>Example: <code>"ClientIds":
     * ["&amp;ExampleCogClientId;"]</code> </p>
     */
    inline void SetClientIds(const Aws::Vector<Aws::String>& value) { m_clientIdsHasBeenSet = true; m_clientIds = value; }

    /**
     * <p>The unique application client IDs that are associated with the specified
     * Amazon Cognito user pool.</p> <p>Example: <code>"ClientIds":
     * ["&amp;ExampleCogClientId;"]</code> </p>
     */
    inline void SetClientIds(Aws::Vector<Aws::String>&& value) { m_clientIdsHasBeenSet = true; m_clientIds = std::move(value); }

    /**
     * <p>The unique application client IDs that are associated with the specified
     * Amazon Cognito user pool.</p> <p>Example: <code>"ClientIds":
     * ["&amp;ExampleCogClientId;"]</code> </p>
     */
    inline CognitoUserPoolConfiguration& WithClientIds(const Aws::Vector<Aws::String>& value) { SetClientIds(value); return *this;}

    /**
     * <p>The unique application client IDs that are associated with the specified
     * Amazon Cognito user pool.</p> <p>Example: <code>"ClientIds":
     * ["&amp;ExampleCogClientId;"]</code> </p>
     */
    inline CognitoUserPoolConfiguration& WithClientIds(Aws::Vector<Aws::String>&& value) { SetClientIds(std::move(value)); return *this;}

    /**
     * <p>The unique application client IDs that are associated with the specified
     * Amazon Cognito user pool.</p> <p>Example: <code>"ClientIds":
     * ["&amp;ExampleCogClientId;"]</code> </p>
     */
    inline CognitoUserPoolConfiguration& AddClientIds(const Aws::String& value) { m_clientIdsHasBeenSet = true; m_clientIds.push_back(value); return *this; }

    /**
     * <p>The unique application client IDs that are associated with the specified
     * Amazon Cognito user pool.</p> <p>Example: <code>"ClientIds":
     * ["&amp;ExampleCogClientId;"]</code> </p>
     */
    inline CognitoUserPoolConfiguration& AddClientIds(Aws::String&& value) { m_clientIdsHasBeenSet = true; m_clientIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The unique application client IDs that are associated with the specified
     * Amazon Cognito user pool.</p> <p>Example: <code>"ClientIds":
     * ["&amp;ExampleCogClientId;"]</code> </p>
     */
    inline CognitoUserPoolConfiguration& AddClientIds(const char* value) { m_clientIdsHasBeenSet = true; m_clientIds.push_back(value); return *this; }


    /**
     * <p>The type of entity that a policy store maps to groups from an Amazon Cognito
     * user pool identity source.</p>
     */
    inline const CognitoGroupConfiguration& GetGroupConfiguration() const{ return m_groupConfiguration; }

    /**
     * <p>The type of entity that a policy store maps to groups from an Amazon Cognito
     * user pool identity source.</p>
     */
    inline bool GroupConfigurationHasBeenSet() const { return m_groupConfigurationHasBeenSet; }

    /**
     * <p>The type of entity that a policy store maps to groups from an Amazon Cognito
     * user pool identity source.</p>
     */
    inline void SetGroupConfiguration(const CognitoGroupConfiguration& value) { m_groupConfigurationHasBeenSet = true; m_groupConfiguration = value; }

    /**
     * <p>The type of entity that a policy store maps to groups from an Amazon Cognito
     * user pool identity source.</p>
     */
    inline void SetGroupConfiguration(CognitoGroupConfiguration&& value) { m_groupConfigurationHasBeenSet = true; m_groupConfiguration = std::move(value); }

    /**
     * <p>The type of entity that a policy store maps to groups from an Amazon Cognito
     * user pool identity source.</p>
     */
    inline CognitoUserPoolConfiguration& WithGroupConfiguration(const CognitoGroupConfiguration& value) { SetGroupConfiguration(value); return *this;}

    /**
     * <p>The type of entity that a policy store maps to groups from an Amazon Cognito
     * user pool identity source.</p>
     */
    inline CognitoUserPoolConfiguration& WithGroupConfiguration(CognitoGroupConfiguration&& value) { SetGroupConfiguration(std::move(value)); return *this;}

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
