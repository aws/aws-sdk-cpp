/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/IamIdentity.h>
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
   * <p>Information about the user who created or modified a SageMaker
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UserContext">AWS
   * API Reference</a></p>
   */
  class UserContext
  {
  public:
    AWS_SAGEMAKER_API UserContext() = default;
    AWS_SAGEMAKER_API UserContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API UserContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user's profile.</p>
     */
    inline const Aws::String& GetUserProfileArn() const { return m_userProfileArn; }
    inline bool UserProfileArnHasBeenSet() const { return m_userProfileArnHasBeenSet; }
    template<typename UserProfileArnT = Aws::String>
    void SetUserProfileArn(UserProfileArnT&& value) { m_userProfileArnHasBeenSet = true; m_userProfileArn = std::forward<UserProfileArnT>(value); }
    template<typename UserProfileArnT = Aws::String>
    UserContext& WithUserProfileArn(UserProfileArnT&& value) { SetUserProfileArn(std::forward<UserProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user's profile.</p>
     */
    inline const Aws::String& GetUserProfileName() const { return m_userProfileName; }
    inline bool UserProfileNameHasBeenSet() const { return m_userProfileNameHasBeenSet; }
    template<typename UserProfileNameT = Aws::String>
    void SetUserProfileName(UserProfileNameT&& value) { m_userProfileNameHasBeenSet = true; m_userProfileName = std::forward<UserProfileNameT>(value); }
    template<typename UserProfileNameT = Aws::String>
    UserContext& WithUserProfileName(UserProfileNameT&& value) { SetUserProfileName(std::forward<UserProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain associated with the user.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    UserContext& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM Identity details associated with the user. These details are
     * associated with model package groups, model packages, and project entities
     * only.</p>
     */
    inline const IamIdentity& GetIamIdentity() const { return m_iamIdentity; }
    inline bool IamIdentityHasBeenSet() const { return m_iamIdentityHasBeenSet; }
    template<typename IamIdentityT = IamIdentity>
    void SetIamIdentity(IamIdentityT&& value) { m_iamIdentityHasBeenSet = true; m_iamIdentity = std::forward<IamIdentityT>(value); }
    template<typename IamIdentityT = IamIdentity>
    UserContext& WithIamIdentity(IamIdentityT&& value) { SetIamIdentity(std::forward<IamIdentityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userProfileArn;
    bool m_userProfileArnHasBeenSet = false;

    Aws::String m_userProfileName;
    bool m_userProfileNameHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    IamIdentity m_iamIdentity;
    bool m_iamIdentityHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
