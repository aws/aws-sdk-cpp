﻿/**
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
    AWS_SAGEMAKER_API CreateUserProfileRequest();

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
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline CreateUserProfileRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline CreateUserProfileRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline CreateUserProfileRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the UserProfile. This value is not case sensitive.</p>
     */
    inline const Aws::String& GetUserProfileName() const{ return m_userProfileName; }
    inline bool UserProfileNameHasBeenSet() const { return m_userProfileNameHasBeenSet; }
    inline void SetUserProfileName(const Aws::String& value) { m_userProfileNameHasBeenSet = true; m_userProfileName = value; }
    inline void SetUserProfileName(Aws::String&& value) { m_userProfileNameHasBeenSet = true; m_userProfileName = std::move(value); }
    inline void SetUserProfileName(const char* value) { m_userProfileNameHasBeenSet = true; m_userProfileName.assign(value); }
    inline CreateUserProfileRequest& WithUserProfileName(const Aws::String& value) { SetUserProfileName(value); return *this;}
    inline CreateUserProfileRequest& WithUserProfileName(Aws::String&& value) { SetUserProfileName(std::move(value)); return *this;}
    inline CreateUserProfileRequest& WithUserProfileName(const char* value) { SetUserProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A specifier for the type of value specified in SingleSignOnUserValue.
     * Currently, the only supported value is "UserName". If the Domain's AuthMode is
     * IAM Identity Center, this field is required. If the Domain's AuthMode is not IAM
     * Identity Center, this field cannot be specified. </p>
     */
    inline const Aws::String& GetSingleSignOnUserIdentifier() const{ return m_singleSignOnUserIdentifier; }
    inline bool SingleSignOnUserIdentifierHasBeenSet() const { return m_singleSignOnUserIdentifierHasBeenSet; }
    inline void SetSingleSignOnUserIdentifier(const Aws::String& value) { m_singleSignOnUserIdentifierHasBeenSet = true; m_singleSignOnUserIdentifier = value; }
    inline void SetSingleSignOnUserIdentifier(Aws::String&& value) { m_singleSignOnUserIdentifierHasBeenSet = true; m_singleSignOnUserIdentifier = std::move(value); }
    inline void SetSingleSignOnUserIdentifier(const char* value) { m_singleSignOnUserIdentifierHasBeenSet = true; m_singleSignOnUserIdentifier.assign(value); }
    inline CreateUserProfileRequest& WithSingleSignOnUserIdentifier(const Aws::String& value) { SetSingleSignOnUserIdentifier(value); return *this;}
    inline CreateUserProfileRequest& WithSingleSignOnUserIdentifier(Aws::String&& value) { SetSingleSignOnUserIdentifier(std::move(value)); return *this;}
    inline CreateUserProfileRequest& WithSingleSignOnUserIdentifier(const char* value) { SetSingleSignOnUserIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username of the associated Amazon Web Services Single Sign-On User for
     * this UserProfile. If the Domain's AuthMode is IAM Identity Center, this field is
     * required, and must match a valid username of a user in your directory. If the
     * Domain's AuthMode is not IAM Identity Center, this field cannot be specified.
     * </p>
     */
    inline const Aws::String& GetSingleSignOnUserValue() const{ return m_singleSignOnUserValue; }
    inline bool SingleSignOnUserValueHasBeenSet() const { return m_singleSignOnUserValueHasBeenSet; }
    inline void SetSingleSignOnUserValue(const Aws::String& value) { m_singleSignOnUserValueHasBeenSet = true; m_singleSignOnUserValue = value; }
    inline void SetSingleSignOnUserValue(Aws::String&& value) { m_singleSignOnUserValueHasBeenSet = true; m_singleSignOnUserValue = std::move(value); }
    inline void SetSingleSignOnUserValue(const char* value) { m_singleSignOnUserValueHasBeenSet = true; m_singleSignOnUserValue.assign(value); }
    inline CreateUserProfileRequest& WithSingleSignOnUserValue(const Aws::String& value) { SetSingleSignOnUserValue(value); return *this;}
    inline CreateUserProfileRequest& WithSingleSignOnUserValue(Aws::String&& value) { SetSingleSignOnUserValue(std::move(value)); return *this;}
    inline CreateUserProfileRequest& WithSingleSignOnUserValue(const char* value) { SetSingleSignOnUserValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p> <p>Tags that you specify for the User Profile are also added to
     * all Apps that the User Profile launches.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateUserProfileRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateUserProfileRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateUserProfileRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateUserProfileRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A collection of settings.</p>
     */
    inline const UserSettings& GetUserSettings() const{ return m_userSettings; }
    inline bool UserSettingsHasBeenSet() const { return m_userSettingsHasBeenSet; }
    inline void SetUserSettings(const UserSettings& value) { m_userSettingsHasBeenSet = true; m_userSettings = value; }
    inline void SetUserSettings(UserSettings&& value) { m_userSettingsHasBeenSet = true; m_userSettings = std::move(value); }
    inline CreateUserProfileRequest& WithUserSettings(const UserSettings& value) { SetUserSettings(value); return *this;}
    inline CreateUserProfileRequest& WithUserSettings(UserSettings&& value) { SetUserSettings(std::move(value)); return *this;}
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
