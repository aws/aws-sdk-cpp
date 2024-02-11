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


    /**
     * <p>The profile ARN.</p>
     */
    inline const Aws::String& GetProfileArn() const{ return m_profileArn; }

    /**
     * <p>The profile ARN.</p>
     */
    inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }

    /**
     * <p>The profile ARN.</p>
     */
    inline void SetProfileArn(const Aws::String& value) { m_profileArnHasBeenSet = true; m_profileArn = value; }

    /**
     * <p>The profile ARN.</p>
     */
    inline void SetProfileArn(Aws::String&& value) { m_profileArnHasBeenSet = true; m_profileArn = std::move(value); }

    /**
     * <p>The profile ARN.</p>
     */
    inline void SetProfileArn(const char* value) { m_profileArnHasBeenSet = true; m_profileArn.assign(value); }

    /**
     * <p>The profile ARN.</p>
     */
    inline UpdateProfileRequest& WithProfileArn(const Aws::String& value) { SetProfileArn(value); return *this;}

    /**
     * <p>The profile ARN.</p>
     */
    inline UpdateProfileRequest& WithProfileArn(Aws::String&& value) { SetProfileArn(std::move(value)); return *this;}

    /**
     * <p>The profile ARN.</p>
     */
    inline UpdateProfileRequest& WithProfileArn(const char* value) { SetProfileArn(value); return *this;}


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
    inline UpdateProfileRequest& WithProfileDescription(const Aws::String& value) { SetProfileDescription(value); return *this;}

    /**
     * <p>The profile description.</p>
     */
    inline UpdateProfileRequest& WithProfileDescription(Aws::String&& value) { SetProfileDescription(std::move(value)); return *this;}

    /**
     * <p>The profile description.</p>
     */
    inline UpdateProfileRequest& WithProfileDescription(const char* value) { SetProfileDescription(value); return *this;}


    /**
     * <p>Profile questions.</p>
     */
    inline const Aws::Vector<ProfileQuestionUpdate>& GetProfileQuestions() const{ return m_profileQuestions; }

    /**
     * <p>Profile questions.</p>
     */
    inline bool ProfileQuestionsHasBeenSet() const { return m_profileQuestionsHasBeenSet; }

    /**
     * <p>Profile questions.</p>
     */
    inline void SetProfileQuestions(const Aws::Vector<ProfileQuestionUpdate>& value) { m_profileQuestionsHasBeenSet = true; m_profileQuestions = value; }

    /**
     * <p>Profile questions.</p>
     */
    inline void SetProfileQuestions(Aws::Vector<ProfileQuestionUpdate>&& value) { m_profileQuestionsHasBeenSet = true; m_profileQuestions = std::move(value); }

    /**
     * <p>Profile questions.</p>
     */
    inline UpdateProfileRequest& WithProfileQuestions(const Aws::Vector<ProfileQuestionUpdate>& value) { SetProfileQuestions(value); return *this;}

    /**
     * <p>Profile questions.</p>
     */
    inline UpdateProfileRequest& WithProfileQuestions(Aws::Vector<ProfileQuestionUpdate>&& value) { SetProfileQuestions(std::move(value)); return *this;}

    /**
     * <p>Profile questions.</p>
     */
    inline UpdateProfileRequest& AddProfileQuestions(const ProfileQuestionUpdate& value) { m_profileQuestionsHasBeenSet = true; m_profileQuestions.push_back(value); return *this; }

    /**
     * <p>Profile questions.</p>
     */
    inline UpdateProfileRequest& AddProfileQuestions(ProfileQuestionUpdate&& value) { m_profileQuestionsHasBeenSet = true; m_profileQuestions.push_back(std::move(value)); return *this; }

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
