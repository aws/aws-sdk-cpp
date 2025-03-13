/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CognitoMemberDefinition.h>
#include <aws/sagemaker/model/OidcMemberDefinition.h>
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
   * <p>Defines an Amazon Cognito or your own OIDC IdP user group that is part of a
   * work team.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MemberDefinition">AWS
   * API Reference</a></p>
   */
  class MemberDefinition
  {
  public:
    AWS_SAGEMAKER_API MemberDefinition() = default;
    AWS_SAGEMAKER_API MemberDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MemberDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Cognito user group that is part of the work team.</p>
     */
    inline const CognitoMemberDefinition& GetCognitoMemberDefinition() const { return m_cognitoMemberDefinition; }
    inline bool CognitoMemberDefinitionHasBeenSet() const { return m_cognitoMemberDefinitionHasBeenSet; }
    template<typename CognitoMemberDefinitionT = CognitoMemberDefinition>
    void SetCognitoMemberDefinition(CognitoMemberDefinitionT&& value) { m_cognitoMemberDefinitionHasBeenSet = true; m_cognitoMemberDefinition = std::forward<CognitoMemberDefinitionT>(value); }
    template<typename CognitoMemberDefinitionT = CognitoMemberDefinition>
    MemberDefinition& WithCognitoMemberDefinition(CognitoMemberDefinitionT&& value) { SetCognitoMemberDefinition(std::forward<CognitoMemberDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list user groups that exist in your OIDC Identity Provider (IdP). One to
     * ten groups can be used to create a single private work team. When you add a user
     * group to the list of <code>Groups</code>, you can add that user group to one or
     * more private work teams. If you add a user group to a private work team, all
     * workers in that user group are added to the work team.</p>
     */
    inline const OidcMemberDefinition& GetOidcMemberDefinition() const { return m_oidcMemberDefinition; }
    inline bool OidcMemberDefinitionHasBeenSet() const { return m_oidcMemberDefinitionHasBeenSet; }
    template<typename OidcMemberDefinitionT = OidcMemberDefinition>
    void SetOidcMemberDefinition(OidcMemberDefinitionT&& value) { m_oidcMemberDefinitionHasBeenSet = true; m_oidcMemberDefinition = std::forward<OidcMemberDefinitionT>(value); }
    template<typename OidcMemberDefinitionT = OidcMemberDefinition>
    MemberDefinition& WithOidcMemberDefinition(OidcMemberDefinitionT&& value) { SetOidcMemberDefinition(std::forward<OidcMemberDefinitionT>(value)); return *this;}
    ///@}
  private:

    CognitoMemberDefinition m_cognitoMemberDefinition;
    bool m_cognitoMemberDefinitionHasBeenSet = false;

    OidcMemberDefinition m_oidcMemberDefinition;
    bool m_oidcMemberDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
