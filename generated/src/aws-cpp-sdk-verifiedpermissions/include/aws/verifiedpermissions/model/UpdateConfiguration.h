/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/UpdateCognitoUserPoolConfiguration.h>
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
   * <p>Contains an updated configuration to replace the configuration in an existing
   * identity source.</p>  <p>At this time, the only valid member of this
   * structure is a Amazon Cognito user pool configuration.</p> <p>You must specify a
   * <code>userPoolArn</code>, and optionally, a <code>ClientId</code>.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/UpdateConfiguration">AWS
   * API Reference</a></p>
   */
  class UpdateConfiguration
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API UpdateConfiguration();
    AWS_VERIFIEDPERMISSIONS_API UpdateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API UpdateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains configuration details of a Amazon Cognito user pool.</p>
     */
    inline const UpdateCognitoUserPoolConfiguration& GetCognitoUserPoolConfiguration() const{ return m_cognitoUserPoolConfiguration; }

    /**
     * <p>Contains configuration details of a Amazon Cognito user pool.</p>
     */
    inline bool CognitoUserPoolConfigurationHasBeenSet() const { return m_cognitoUserPoolConfigurationHasBeenSet; }

    /**
     * <p>Contains configuration details of a Amazon Cognito user pool.</p>
     */
    inline void SetCognitoUserPoolConfiguration(const UpdateCognitoUserPoolConfiguration& value) { m_cognitoUserPoolConfigurationHasBeenSet = true; m_cognitoUserPoolConfiguration = value; }

    /**
     * <p>Contains configuration details of a Amazon Cognito user pool.</p>
     */
    inline void SetCognitoUserPoolConfiguration(UpdateCognitoUserPoolConfiguration&& value) { m_cognitoUserPoolConfigurationHasBeenSet = true; m_cognitoUserPoolConfiguration = std::move(value); }

    /**
     * <p>Contains configuration details of a Amazon Cognito user pool.</p>
     */
    inline UpdateConfiguration& WithCognitoUserPoolConfiguration(const UpdateCognitoUserPoolConfiguration& value) { SetCognitoUserPoolConfiguration(value); return *this;}

    /**
     * <p>Contains configuration details of a Amazon Cognito user pool.</p>
     */
    inline UpdateConfiguration& WithCognitoUserPoolConfiguration(UpdateCognitoUserPoolConfiguration&& value) { SetCognitoUserPoolConfiguration(std::move(value)); return *this;}

  private:

    UpdateCognitoUserPoolConfiguration m_cognitoUserPoolConfiguration;
    bool m_cognitoUserPoolConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
