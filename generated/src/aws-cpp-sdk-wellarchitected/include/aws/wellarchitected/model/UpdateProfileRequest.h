/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/ProfileQuestionUpdate.h>
#include <utility>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   */
  class UpdateProfileRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API UpdateProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProfile"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The profile ARN.</p>
     */
    inline const Aws::String& GetProfileArn() const { return m_profileArn; }
    inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }
    template<typename ProfileArnT = Aws::String>
    void SetProfileArn(ProfileArnT&& value) { m_profileArnHasBeenSet = true; m_profileArn = std::forward<ProfileArnT>(value); }
    template<typename ProfileArnT = Aws::String>
    UpdateProfileRequest& WithProfileArn(ProfileArnT&& value) { SetProfileArn(std::forward<ProfileArnT>(value)); return *this;}
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
    UpdateProfileRequest& WithProfileDescription(ProfileDescriptionT&& value) { SetProfileDescription(std::forward<ProfileDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Profile questions.</p>
     */
    inline const Aws::Vector<ProfileQuestionUpdate>& GetProfileQuestions() const { return m_profileQuestions; }
    inline bool ProfileQuestionsHasBeenSet() const { return m_profileQuestionsHasBeenSet; }
    template<typename ProfileQuestionsT = Aws::Vector<ProfileQuestionUpdate>>
    void SetProfileQuestions(ProfileQuestionsT&& value) { m_profileQuestionsHasBeenSet = true; m_profileQuestions = std::forward<ProfileQuestionsT>(value); }
    template<typename ProfileQuestionsT = Aws::Vector<ProfileQuestionUpdate>>
    UpdateProfileRequest& WithProfileQuestions(ProfileQuestionsT&& value) { SetProfileQuestions(std::forward<ProfileQuestionsT>(value)); return *this;}
    template<typename ProfileQuestionsT = ProfileQuestionUpdate>
    UpdateProfileRequest& AddProfileQuestions(ProfileQuestionsT&& value) { m_profileQuestionsHasBeenSet = true; m_profileQuestions.emplace_back(std::forward<ProfileQuestionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_profileArn;
    bool m_profileArnHasBeenSet = false;

    Aws::String m_profileDescription;
    bool m_profileDescriptionHasBeenSet = false;

    Aws::Vector<ProfileQuestionUpdate> m_profileQuestions;
    bool m_profileQuestionsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
