/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Identifies a Amazon Cognito user group. A user group can be used in on or
   * more work teams.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CognitoMemberDefinition">AWS
   * API Reference</a></p>
   */
  class CognitoMemberDefinition
  {
  public:
    AWS_SAGEMAKER_API CognitoMemberDefinition() = default;
    AWS_SAGEMAKER_API CognitoMemberDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CognitoMemberDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An identifier for a user pool. The user pool must be in the same region as
     * the service that you are calling.</p>
     */
    inline const Aws::String& GetUserPool() const { return m_userPool; }
    inline bool UserPoolHasBeenSet() const { return m_userPoolHasBeenSet; }
    template<typename UserPoolT = Aws::String>
    void SetUserPool(UserPoolT&& value) { m_userPoolHasBeenSet = true; m_userPool = std::forward<UserPoolT>(value); }
    template<typename UserPoolT = Aws::String>
    CognitoMemberDefinition& WithUserPool(UserPoolT&& value) { SetUserPool(std::forward<UserPoolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier for a user group.</p>
     */
    inline const Aws::String& GetUserGroup() const { return m_userGroup; }
    inline bool UserGroupHasBeenSet() const { return m_userGroupHasBeenSet; }
    template<typename UserGroupT = Aws::String>
    void SetUserGroup(UserGroupT&& value) { m_userGroupHasBeenSet = true; m_userGroup = std::forward<UserGroupT>(value); }
    template<typename UserGroupT = Aws::String>
    CognitoMemberDefinition& WithUserGroup(UserGroupT&& value) { SetUserGroup(std::forward<UserGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier for an application client. You must create the app client ID
     * using Amazon Cognito.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    CognitoMemberDefinition& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userPool;
    bool m_userPoolHasBeenSet = false;

    Aws::String m_userGroup;
    bool m_userGroupHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
