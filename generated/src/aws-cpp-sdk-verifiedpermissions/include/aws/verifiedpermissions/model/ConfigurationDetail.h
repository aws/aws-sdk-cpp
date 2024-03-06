/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/CognitoUserPoolConfigurationDetail.h>
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
   * <p>Contains configuration information about an identity source.</p> <p>This data
   * type is a response parameter to the <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_GetIdentitySource.html">GetIdentitySource</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/ConfigurationDetail">AWS
   * API Reference</a></p>
   */
  class ConfigurationDetail
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API ConfigurationDetail();
    AWS_VERIFIEDPERMISSIONS_API ConfigurationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API ConfigurationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains configuration details of a Amazon Cognito user pool that Verified
     * Permissions can use as a source of authenticated identities as entities. It
     * specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of a Amazon Cognito user pool and one or more
     * application client IDs.</p> <p>Example:
     * <code>"configuration":{"cognitoUserPoolConfiguration":{"userPoolArn":"arn:aws:cognito-idp:us-east-1:123456789012:userpool/us-east-1_1a2b3c4d5","clientIds":
     * ["a1b2c3d4e5f6g7h8i9j0kalbmc"]}}</code> </p>
     */
    inline const CognitoUserPoolConfigurationDetail& GetCognitoUserPoolConfiguration() const{ return m_cognitoUserPoolConfiguration; }

    /**
     * <p>Contains configuration details of a Amazon Cognito user pool that Verified
     * Permissions can use as a source of authenticated identities as entities. It
     * specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of a Amazon Cognito user pool and one or more
     * application client IDs.</p> <p>Example:
     * <code>"configuration":{"cognitoUserPoolConfiguration":{"userPoolArn":"arn:aws:cognito-idp:us-east-1:123456789012:userpool/us-east-1_1a2b3c4d5","clientIds":
     * ["a1b2c3d4e5f6g7h8i9j0kalbmc"]}}</code> </p>
     */
    inline bool CognitoUserPoolConfigurationHasBeenSet() const { return m_cognitoUserPoolConfigurationHasBeenSet; }

    /**
     * <p>Contains configuration details of a Amazon Cognito user pool that Verified
     * Permissions can use as a source of authenticated identities as entities. It
     * specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of a Amazon Cognito user pool and one or more
     * application client IDs.</p> <p>Example:
     * <code>"configuration":{"cognitoUserPoolConfiguration":{"userPoolArn":"arn:aws:cognito-idp:us-east-1:123456789012:userpool/us-east-1_1a2b3c4d5","clientIds":
     * ["a1b2c3d4e5f6g7h8i9j0kalbmc"]}}</code> </p>
     */
    inline void SetCognitoUserPoolConfiguration(const CognitoUserPoolConfigurationDetail& value) { m_cognitoUserPoolConfigurationHasBeenSet = true; m_cognitoUserPoolConfiguration = value; }

    /**
     * <p>Contains configuration details of a Amazon Cognito user pool that Verified
     * Permissions can use as a source of authenticated identities as entities. It
     * specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of a Amazon Cognito user pool and one or more
     * application client IDs.</p> <p>Example:
     * <code>"configuration":{"cognitoUserPoolConfiguration":{"userPoolArn":"arn:aws:cognito-idp:us-east-1:123456789012:userpool/us-east-1_1a2b3c4d5","clientIds":
     * ["a1b2c3d4e5f6g7h8i9j0kalbmc"]}}</code> </p>
     */
    inline void SetCognitoUserPoolConfiguration(CognitoUserPoolConfigurationDetail&& value) { m_cognitoUserPoolConfigurationHasBeenSet = true; m_cognitoUserPoolConfiguration = std::move(value); }

    /**
     * <p>Contains configuration details of a Amazon Cognito user pool that Verified
     * Permissions can use as a source of authenticated identities as entities. It
     * specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of a Amazon Cognito user pool and one or more
     * application client IDs.</p> <p>Example:
     * <code>"configuration":{"cognitoUserPoolConfiguration":{"userPoolArn":"arn:aws:cognito-idp:us-east-1:123456789012:userpool/us-east-1_1a2b3c4d5","clientIds":
     * ["a1b2c3d4e5f6g7h8i9j0kalbmc"]}}</code> </p>
     */
    inline ConfigurationDetail& WithCognitoUserPoolConfiguration(const CognitoUserPoolConfigurationDetail& value) { SetCognitoUserPoolConfiguration(value); return *this;}

    /**
     * <p>Contains configuration details of a Amazon Cognito user pool that Verified
     * Permissions can use as a source of authenticated identities as entities. It
     * specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of a Amazon Cognito user pool and one or more
     * application client IDs.</p> <p>Example:
     * <code>"configuration":{"cognitoUserPoolConfiguration":{"userPoolArn":"arn:aws:cognito-idp:us-east-1:123456789012:userpool/us-east-1_1a2b3c4d5","clientIds":
     * ["a1b2c3d4e5f6g7h8i9j0kalbmc"]}}</code> </p>
     */
    inline ConfigurationDetail& WithCognitoUserPoolConfiguration(CognitoUserPoolConfigurationDetail&& value) { SetCognitoUserPoolConfiguration(std::move(value)); return *this;}

  private:

    CognitoUserPoolConfigurationDetail m_cognitoUserPoolConfiguration;
    bool m_cognitoUserPoolConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
