/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/UserSettings.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateUserProfileRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateUserProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUserProfile"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the associated Domain.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    CreateUserProfileRequest& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the UserProfile. This value is not case sensitive.</p>
     */
    inline const Aws::String& GetUserProfileName() const { return m_userProfileName; }
    inline bool UserProfileNameHasBeenSet() const { return m_userProfileNameHasBeenSet; }
    template<typename UserProfileNameT = Aws::String>
    void SetUserProfileName(UserProfileNameT&& value) { m_userProfileNameHasBeenSet = true; m_userProfileName = std::forward<UserProfileNameT>(value); }
    template<typename UserProfileNameT = Aws::String>
    CreateUserProfileRequest& WithUserProfileName(UserProfileNameT&& value) { SetUserProfileName(std::forward<UserProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A specifier for the type of value specified in SingleSignOnUserValue.
     * Currently, the only supported value is "UserName". If the Domain's AuthMode is
     * IAM Identity Center, this field is required. If the Domain's AuthMode is not IAM
     * Identity Center, this field cannot be specified. </p>
     */
    inline const Aws::String& GetSingleSignOnUserIdentifier() const { return m_singleSignOnUserIdentifier; }
    inline bool SingleSignOnUserIdentifierHasBeenSet() const { return m_singleSignOnUserIdentifierHasBeenSet; }
    template<typename SingleSignOnUserIdentifierT = Aws::String>
    void SetSingleSignOnUserIdentifier(SingleSignOnUserIdentifierT&& value) { m_singleSignOnUserIdentifierHasBeenSet = true; m_singleSignOnUserIdentifier = std::forward<SingleSignOnUserIdentifierT>(value); }
    template<typename SingleSignOnUserIdentifierT = Aws::String>
    CreateUserProfileRequest& WithSingleSignOnUserIdentifier(SingleSignOnUserIdentifierT&& value) { SetSingleSignOnUserIdentifier(std::forward<SingleSignOnUserIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username of the associated Amazon Web Services Single Sign-On User for
     * this UserProfile. If the Domain's AuthMode is IAM Identity Center, this field is
     * required, and must match a valid username of a user in your directory. If the
     * Domain's AuthMode is not IAM Identity Center, this field cannot be specified.
     * </p>
     */
    inline const Aws::String& GetSingleSignOnUserValue() const { return m_singleSignOnUserValue; }
    inline bool SingleSignOnUserValueHasBeenSet() const { return m_singleSignOnUserValueHasBeenSet; }
    template<typename SingleSignOnUserValueT = Aws::String>
    void SetSingleSignOnUserValue(SingleSignOnUserValueT&& value) { m_singleSignOnUserValueHasBeenSet = true; m_singleSignOnUserValue = std::forward<SingleSignOnUserValueT>(value); }
    template<typename SingleSignOnUserValueT = Aws::String>
    CreateUserProfileRequest& WithSingleSignOnUserValue(SingleSignOnUserValueT&& value) { SetSingleSignOnUserValue(std::forward<SingleSignOnUserValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p> <p>Tags that you specify for the User Profile are also added to
     * all Apps that the User Profile launches.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateUserProfileRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateUserProfileRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A collection of settings.</p>
     */
    inline const UserSettings& GetUserSettings() const { return m_userSettings; }
    inline bool UserSettingsHasBeenSet() const { return m_userSettingsHasBeenSet; }
    template<typename UserSettingsT = UserSettings>
    void SetUserSettings(UserSettingsT&& value) { m_userSettingsHasBeenSet = true; m_userSettings = std::forward<UserSettingsT>(value); }
    template<typename UserSettingsT = UserSettings>
    CreateUserProfileRequest& WithUserSettings(UserSettingsT&& value) { SetUserSettings(std::forward<UserSettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_userProfileName;
    bool m_userProfileNameHasBeenSet = false;

    Aws::String m_singleSignOnUserIdentifier;
    bool m_singleSignOnUserIdentifierHasBeenSet = false;

    Aws::String m_singleSignOnUserValue;
    bool m_singleSignOnUserValueHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    UserSettings m_userSettings;
    bool m_userSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
