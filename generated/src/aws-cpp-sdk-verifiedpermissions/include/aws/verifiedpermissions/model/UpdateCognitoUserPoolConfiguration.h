/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/verifiedpermissions/model/UpdateCognitoGroupConfiguration.h>
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
   * <p>Contains configuration details of a Amazon Cognito user pool for use with an
   * identity source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/UpdateCognitoUserPoolConfiguration">AWS
   * API Reference</a></p>
   */
  class UpdateCognitoUserPoolConfiguration
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API UpdateCognitoUserPoolConfiguration() = default;
    AWS_VERIFIEDPERMISSIONS_API UpdateCognitoUserPoolConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API UpdateCognitoUserPoolConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the Amazon Cognito user pool associated with this
     * identity source.</p>
     */
    inline const Aws::String& GetUserPoolArn() const { return m_userPoolArn; }
    inline bool UserPoolArnHasBeenSet() const { return m_userPoolArnHasBeenSet; }
    template<typename UserPoolArnT = Aws::String>
    void SetUserPoolArn(UserPoolArnT&& value) { m_userPoolArnHasBeenSet = true; m_userPoolArn = std::forward<UserPoolArnT>(value); }
    template<typename UserPoolArnT = Aws::String>
    UpdateCognitoUserPoolConfiguration& WithUserPoolArn(UserPoolArnT&& value) { SetUserPoolArn(std::forward<UserPoolArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client ID of an app client that is configured for the specified Amazon
     * Cognito user pool.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClientIds() const { return m_clientIds; }
    inline bool ClientIdsHasBeenSet() const { return m_clientIdsHasBeenSet; }
    template<typename ClientIdsT = Aws::Vector<Aws::String>>
    void SetClientIds(ClientIdsT&& value) { m_clientIdsHasBeenSet = true; m_clientIds = std::forward<ClientIdsT>(value); }
    template<typename ClientIdsT = Aws::Vector<Aws::String>>
    UpdateCognitoUserPoolConfiguration& WithClientIds(ClientIdsT&& value) { SetClientIds(std::forward<ClientIdsT>(value)); return *this;}
    template<typename ClientIdsT = Aws::String>
    UpdateCognitoUserPoolConfiguration& AddClientIds(ClientIdsT&& value) { m_clientIdsHasBeenSet = true; m_clientIds.emplace_back(std::forward<ClientIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration of the user groups from an Amazon Cognito user pool
     * identity source.</p>
     */
    inline const UpdateCognitoGroupConfiguration& GetGroupConfiguration() const { return m_groupConfiguration; }
    inline bool GroupConfigurationHasBeenSet() const { return m_groupConfigurationHasBeenSet; }
    template<typename GroupConfigurationT = UpdateCognitoGroupConfiguration>
    void SetGroupConfiguration(GroupConfigurationT&& value) { m_groupConfigurationHasBeenSet = true; m_groupConfiguration = std::forward<GroupConfigurationT>(value); }
    template<typename GroupConfigurationT = UpdateCognitoGroupConfiguration>
    UpdateCognitoUserPoolConfiguration& WithGroupConfiguration(GroupConfigurationT&& value) { SetGroupConfiguration(std::forward<GroupConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userPoolArn;
    bool m_userPoolArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_clientIds;
    bool m_clientIdsHasBeenSet = false;

    UpdateCognitoGroupConfiguration m_groupConfiguration;
    bool m_groupConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
