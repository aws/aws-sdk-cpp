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
    AWS_SAGEMAKER_API CognitoMemberDefinition();
    AWS_SAGEMAKER_API CognitoMemberDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CognitoMemberDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An identifier for a user pool. The user pool must be in the same region as
     * the service that you are calling.</p>
     */
    inline const Aws::String& GetUserPool() const{ return m_userPool; }
    inline bool UserPoolHasBeenSet() const { return m_userPoolHasBeenSet; }
    inline void SetUserPool(const Aws::String& value) { m_userPoolHasBeenSet = true; m_userPool = value; }
    inline void SetUserPool(Aws::String&& value) { m_userPoolHasBeenSet = true; m_userPool = std::move(value); }
    inline void SetUserPool(const char* value) { m_userPoolHasBeenSet = true; m_userPool.assign(value); }
    inline CognitoMemberDefinition& WithUserPool(const Aws::String& value) { SetUserPool(value); return *this;}
    inline CognitoMemberDefinition& WithUserPool(Aws::String&& value) { SetUserPool(std::move(value)); return *this;}
    inline CognitoMemberDefinition& WithUserPool(const char* value) { SetUserPool(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier for a user group.</p>
     */
    inline const Aws::String& GetUserGroup() const{ return m_userGroup; }
    inline bool UserGroupHasBeenSet() const { return m_userGroupHasBeenSet; }
    inline void SetUserGroup(const Aws::String& value) { m_userGroupHasBeenSet = true; m_userGroup = value; }
    inline void SetUserGroup(Aws::String&& value) { m_userGroupHasBeenSet = true; m_userGroup = std::move(value); }
    inline void SetUserGroup(const char* value) { m_userGroupHasBeenSet = true; m_userGroup.assign(value); }
    inline CognitoMemberDefinition& WithUserGroup(const Aws::String& value) { SetUserGroup(value); return *this;}
    inline CognitoMemberDefinition& WithUserGroup(Aws::String&& value) { SetUserGroup(std::move(value)); return *this;}
    inline CognitoMemberDefinition& WithUserGroup(const char* value) { SetUserGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier for an application client. You must create the app client ID
     * using Amazon Cognito.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline CognitoMemberDefinition& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline CognitoMemberDefinition& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline CognitoMemberDefinition& WithClientId(const char* value) { SetClientId(value); return *this;}
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
