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
    AWS_WELLARCHITECTED_API UpdateProfileRequest();

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
    inline const Aws::String& GetProfileArn() const{ return m_profileArn; }
    inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }
    inline void SetProfileArn(const Aws::String& value) { m_profileArnHasBeenSet = true; m_profileArn = value; }
    inline void SetProfileArn(Aws::String&& value) { m_profileArnHasBeenSet = true; m_profileArn = std::move(value); }
    inline void SetProfileArn(const char* value) { m_profileArnHasBeenSet = true; m_profileArn.assign(value); }
    inline UpdateProfileRequest& WithProfileArn(const Aws::String& value) { SetProfileArn(value); return *this;}
    inline UpdateProfileRequest& WithProfileArn(Aws::String&& value) { SetProfileArn(std::move(value)); return *this;}
    inline UpdateProfileRequest& WithProfileArn(const char* value) { SetProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The profile description.</p>
     */
    inline const Aws::String& GetProfileDescription() const{ return m_profileDescription; }
    inline bool ProfileDescriptionHasBeenSet() const { return m_profileDescriptionHasBeenSet; }
    inline void SetProfileDescription(const Aws::String& value) { m_profileDescriptionHasBeenSet = true; m_profileDescription = value; }
    inline void SetProfileDescription(Aws::String&& value) { m_profileDescriptionHasBeenSet = true; m_profileDescription = std::move(value); }
    inline void SetProfileDescription(const char* value) { m_profileDescriptionHasBeenSet = true; m_profileDescription.assign(value); }
    inline UpdateProfileRequest& WithProfileDescription(const Aws::String& value) { SetProfileDescription(value); return *this;}
    inline UpdateProfileRequest& WithProfileDescription(Aws::String&& value) { SetProfileDescription(std::move(value)); return *this;}
    inline UpdateProfileRequest& WithProfileDescription(const char* value) { SetProfileDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Profile questions.</p>
     */
    inline const Aws::Vector<ProfileQuestionUpdate>& GetProfileQuestions() const{ return m_profileQuestions; }
    inline bool ProfileQuestionsHasBeenSet() const { return m_profileQuestionsHasBeenSet; }
    inline void SetProfileQuestions(const Aws::Vector<ProfileQuestionUpdate>& value) { m_profileQuestionsHasBeenSet = true; m_profileQuestions = value; }
    inline void SetProfileQuestions(Aws::Vector<ProfileQuestionUpdate>&& value) { m_profileQuestionsHasBeenSet = true; m_profileQuestions = std::move(value); }
    inline UpdateProfileRequest& WithProfileQuestions(const Aws::Vector<ProfileQuestionUpdate>& value) { SetProfileQuestions(value); return *this;}
    inline UpdateProfileRequest& WithProfileQuestions(Aws::Vector<ProfileQuestionUpdate>&& value) { SetProfileQuestions(std::move(value)); return *this;}
    inline UpdateProfileRequest& AddProfileQuestions(const ProfileQuestionUpdate& value) { m_profileQuestionsHasBeenSet = true; m_profileQuestions.push_back(value); return *this; }
    inline UpdateProfileRequest& AddProfileQuestions(ProfileQuestionUpdate&& value) { m_profileQuestionsHasBeenSet = true; m_profileQuestions.push_back(std::move(value)); return *this; }
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
