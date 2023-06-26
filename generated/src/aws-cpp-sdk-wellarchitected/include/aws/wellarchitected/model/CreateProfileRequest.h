/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/wellarchitected/model/ProfileQuestionUpdate.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   */
  class CreateProfileRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API CreateProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProfile"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    /**
     * <p>Name of the profile.</p>
     */
    inline const Aws::String& GetProfileName() const{ return m_profileName; }

    /**
     * <p>Name of the profile.</p>
     */
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }

    /**
     * <p>Name of the profile.</p>
     */
    inline void SetProfileName(const Aws::String& value) { m_profileNameHasBeenSet = true; m_profileName = value; }

    /**
     * <p>Name of the profile.</p>
     */
    inline void SetProfileName(Aws::String&& value) { m_profileNameHasBeenSet = true; m_profileName = std::move(value); }

    /**
     * <p>Name of the profile.</p>
     */
    inline void SetProfileName(const char* value) { m_profileNameHasBeenSet = true; m_profileName.assign(value); }

    /**
     * <p>Name of the profile.</p>
     */
    inline CreateProfileRequest& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}

    /**
     * <p>Name of the profile.</p>
     */
    inline CreateProfileRequest& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}

    /**
     * <p>Name of the profile.</p>
     */
    inline CreateProfileRequest& WithProfileName(const char* value) { SetProfileName(value); return *this;}


    /**
     * <p>The profile description.</p>
     */
    inline const Aws::String& GetProfileDescription() const{ return m_profileDescription; }

    /**
     * <p>The profile description.</p>
     */
    inline bool ProfileDescriptionHasBeenSet() const { return m_profileDescriptionHasBeenSet; }

    /**
     * <p>The profile description.</p>
     */
    inline void SetProfileDescription(const Aws::String& value) { m_profileDescriptionHasBeenSet = true; m_profileDescription = value; }

    /**
     * <p>The profile description.</p>
     */
    inline void SetProfileDescription(Aws::String&& value) { m_profileDescriptionHasBeenSet = true; m_profileDescription = std::move(value); }

    /**
     * <p>The profile description.</p>
     */
    inline void SetProfileDescription(const char* value) { m_profileDescriptionHasBeenSet = true; m_profileDescription.assign(value); }

    /**
     * <p>The profile description.</p>
     */
    inline CreateProfileRequest& WithProfileDescription(const Aws::String& value) { SetProfileDescription(value); return *this;}

    /**
     * <p>The profile description.</p>
     */
    inline CreateProfileRequest& WithProfileDescription(Aws::String&& value) { SetProfileDescription(std::move(value)); return *this;}

    /**
     * <p>The profile description.</p>
     */
    inline CreateProfileRequest& WithProfileDescription(const char* value) { SetProfileDescription(value); return *this;}


    /**
     * <p>The profile questions.</p>
     */
    inline const Aws::Vector<ProfileQuestionUpdate>& GetProfileQuestions() const{ return m_profileQuestions; }

    /**
     * <p>The profile questions.</p>
     */
    inline bool ProfileQuestionsHasBeenSet() const { return m_profileQuestionsHasBeenSet; }

    /**
     * <p>The profile questions.</p>
     */
    inline void SetProfileQuestions(const Aws::Vector<ProfileQuestionUpdate>& value) { m_profileQuestionsHasBeenSet = true; m_profileQuestions = value; }

    /**
     * <p>The profile questions.</p>
     */
    inline void SetProfileQuestions(Aws::Vector<ProfileQuestionUpdate>&& value) { m_profileQuestionsHasBeenSet = true; m_profileQuestions = std::move(value); }

    /**
     * <p>The profile questions.</p>
     */
    inline CreateProfileRequest& WithProfileQuestions(const Aws::Vector<ProfileQuestionUpdate>& value) { SetProfileQuestions(value); return *this;}

    /**
     * <p>The profile questions.</p>
     */
    inline CreateProfileRequest& WithProfileQuestions(Aws::Vector<ProfileQuestionUpdate>&& value) { SetProfileQuestions(std::move(value)); return *this;}

    /**
     * <p>The profile questions.</p>
     */
    inline CreateProfileRequest& AddProfileQuestions(const ProfileQuestionUpdate& value) { m_profileQuestionsHasBeenSet = true; m_profileQuestions.push_back(value); return *this; }

    /**
     * <p>The profile questions.</p>
     */
    inline CreateProfileRequest& AddProfileQuestions(ProfileQuestionUpdate&& value) { m_profileQuestionsHasBeenSet = true; m_profileQuestions.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline CreateProfileRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline CreateProfileRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline CreateProfileRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The tags assigned to the profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the profile.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the profile.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the profile.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the profile.</p>
     */
    inline CreateProfileRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the profile.</p>
     */
    inline CreateProfileRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the profile.</p>
     */
    inline CreateProfileRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to the profile.</p>
     */
    inline CreateProfileRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the profile.</p>
     */
    inline CreateProfileRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the profile.</p>
     */
    inline CreateProfileRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the profile.</p>
     */
    inline CreateProfileRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the profile.</p>
     */
    inline CreateProfileRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the profile.</p>
     */
    inline CreateProfileRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;

    Aws::String m_profileDescription;
    bool m_profileDescriptionHasBeenSet = false;

    Aws::Vector<ProfileQuestionUpdate> m_profileQuestions;
    bool m_profileQuestionsHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
