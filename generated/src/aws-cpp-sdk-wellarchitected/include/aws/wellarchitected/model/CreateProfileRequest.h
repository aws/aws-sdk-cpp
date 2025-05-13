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
    AWS_WELLARCHITECTED_API CreateProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProfile"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Name of the profile.</p>
     */
    inline const Aws::String& GetProfileName() const { return m_profileName; }
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
    template<typename ProfileNameT = Aws::String>
    void SetProfileName(ProfileNameT&& value) { m_profileNameHasBeenSet = true; m_profileName = std::forward<ProfileNameT>(value); }
    template<typename ProfileNameT = Aws::String>
    CreateProfileRequest& WithProfileName(ProfileNameT&& value) { SetProfileName(std::forward<ProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The profile description.</p>
     */
    inline const Aws::String& GetProfileDescription() const { return m_profileDescription; }
    inline bool ProfileDescriptionHasBeenSet() const { return m_profileDescriptionHasBeenSet; }
    template<typename ProfileDescriptionT = Aws::String>
    void SetProfileDescription(ProfileDescriptionT&& value) { m_profileDescriptionHasBeenSet = true; m_profileDescription = std::forward<ProfileDescriptionT>(value); }
    template<typename ProfileDescriptionT = Aws::String>
    CreateProfileRequest& WithProfileDescription(ProfileDescriptionT&& value) { SetProfileDescription(std::forward<ProfileDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The profile questions.</p>
     */
    inline const Aws::Vector<ProfileQuestionUpdate>& GetProfileQuestions() const { return m_profileQuestions; }
    inline bool ProfileQuestionsHasBeenSet() const { return m_profileQuestionsHasBeenSet; }
    template<typename ProfileQuestionsT = Aws::Vector<ProfileQuestionUpdate>>
    void SetProfileQuestions(ProfileQuestionsT&& value) { m_profileQuestionsHasBeenSet = true; m_profileQuestions = std::forward<ProfileQuestionsT>(value); }
    template<typename ProfileQuestionsT = Aws::Vector<ProfileQuestionUpdate>>
    CreateProfileRequest& WithProfileQuestions(ProfileQuestionsT&& value) { SetProfileQuestions(std::forward<ProfileQuestionsT>(value)); return *this;}
    template<typename ProfileQuestionsT = ProfileQuestionUpdate>
    CreateProfileRequest& AddProfileQuestions(ProfileQuestionsT&& value) { m_profileQuestionsHasBeenSet = true; m_profileQuestions.emplace_back(std::forward<ProfileQuestionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateProfileRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateProfileRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateProfileRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;

    Aws::String m_profileDescription;
    bool m_profileDescriptionHasBeenSet = false;

    Aws::Vector<ProfileQuestionUpdate> m_profileQuestions;
    bool m_profileQuestionsHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
