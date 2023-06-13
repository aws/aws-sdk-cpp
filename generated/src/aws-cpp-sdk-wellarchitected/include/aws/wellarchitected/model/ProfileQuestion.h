/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/ProfileChoice.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>A profile question.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ProfileQuestion">AWS
   * API Reference</a></p>
   */
  class ProfileQuestion
  {
  public:
    AWS_WELLARCHITECTED_API ProfileQuestion();
    AWS_WELLARCHITECTED_API ProfileQuestion(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ProfileQuestion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetQuestionId() const{ return m_questionId; }

    
    inline bool QuestionIdHasBeenSet() const { return m_questionIdHasBeenSet; }

    
    inline void SetQuestionId(const Aws::String& value) { m_questionIdHasBeenSet = true; m_questionId = value; }

    
    inline void SetQuestionId(Aws::String&& value) { m_questionIdHasBeenSet = true; m_questionId = std::move(value); }

    
    inline void SetQuestionId(const char* value) { m_questionIdHasBeenSet = true; m_questionId.assign(value); }

    
    inline ProfileQuestion& WithQuestionId(const Aws::String& value) { SetQuestionId(value); return *this;}

    
    inline ProfileQuestion& WithQuestionId(Aws::String&& value) { SetQuestionId(std::move(value)); return *this;}

    
    inline ProfileQuestion& WithQuestionId(const char* value) { SetQuestionId(value); return *this;}


    
    inline const Aws::String& GetQuestionTitle() const{ return m_questionTitle; }

    
    inline bool QuestionTitleHasBeenSet() const { return m_questionTitleHasBeenSet; }

    
    inline void SetQuestionTitle(const Aws::String& value) { m_questionTitleHasBeenSet = true; m_questionTitle = value; }

    
    inline void SetQuestionTitle(Aws::String&& value) { m_questionTitleHasBeenSet = true; m_questionTitle = std::move(value); }

    
    inline void SetQuestionTitle(const char* value) { m_questionTitleHasBeenSet = true; m_questionTitle.assign(value); }

    
    inline ProfileQuestion& WithQuestionTitle(const Aws::String& value) { SetQuestionTitle(value); return *this;}

    
    inline ProfileQuestion& WithQuestionTitle(Aws::String&& value) { SetQuestionTitle(std::move(value)); return *this;}

    
    inline ProfileQuestion& WithQuestionTitle(const char* value) { SetQuestionTitle(value); return *this;}


    
    inline const Aws::String& GetQuestionDescription() const{ return m_questionDescription; }

    
    inline bool QuestionDescriptionHasBeenSet() const { return m_questionDescriptionHasBeenSet; }

    
    inline void SetQuestionDescription(const Aws::String& value) { m_questionDescriptionHasBeenSet = true; m_questionDescription = value; }

    
    inline void SetQuestionDescription(Aws::String&& value) { m_questionDescriptionHasBeenSet = true; m_questionDescription = std::move(value); }

    
    inline void SetQuestionDescription(const char* value) { m_questionDescriptionHasBeenSet = true; m_questionDescription.assign(value); }

    
    inline ProfileQuestion& WithQuestionDescription(const Aws::String& value) { SetQuestionDescription(value); return *this;}

    
    inline ProfileQuestion& WithQuestionDescription(Aws::String&& value) { SetQuestionDescription(std::move(value)); return *this;}

    
    inline ProfileQuestion& WithQuestionDescription(const char* value) { SetQuestionDescription(value); return *this;}


    /**
     * <p>The question choices.</p>
     */
    inline const Aws::Vector<ProfileChoice>& GetQuestionChoices() const{ return m_questionChoices; }

    /**
     * <p>The question choices.</p>
     */
    inline bool QuestionChoicesHasBeenSet() const { return m_questionChoicesHasBeenSet; }

    /**
     * <p>The question choices.</p>
     */
    inline void SetQuestionChoices(const Aws::Vector<ProfileChoice>& value) { m_questionChoicesHasBeenSet = true; m_questionChoices = value; }

    /**
     * <p>The question choices.</p>
     */
    inline void SetQuestionChoices(Aws::Vector<ProfileChoice>&& value) { m_questionChoicesHasBeenSet = true; m_questionChoices = std::move(value); }

    /**
     * <p>The question choices.</p>
     */
    inline ProfileQuestion& WithQuestionChoices(const Aws::Vector<ProfileChoice>& value) { SetQuestionChoices(value); return *this;}

    /**
     * <p>The question choices.</p>
     */
    inline ProfileQuestion& WithQuestionChoices(Aws::Vector<ProfileChoice>&& value) { SetQuestionChoices(std::move(value)); return *this;}

    /**
     * <p>The question choices.</p>
     */
    inline ProfileQuestion& AddQuestionChoices(const ProfileChoice& value) { m_questionChoicesHasBeenSet = true; m_questionChoices.push_back(value); return *this; }

    /**
     * <p>The question choices.</p>
     */
    inline ProfileQuestion& AddQuestionChoices(ProfileChoice&& value) { m_questionChoicesHasBeenSet = true; m_questionChoices.push_back(std::move(value)); return *this; }


    /**
     * <p>The selected choices.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSelectedChoiceIds() const{ return m_selectedChoiceIds; }

    /**
     * <p>The selected choices.</p>
     */
    inline bool SelectedChoiceIdsHasBeenSet() const { return m_selectedChoiceIdsHasBeenSet; }

    /**
     * <p>The selected choices.</p>
     */
    inline void SetSelectedChoiceIds(const Aws::Vector<Aws::String>& value) { m_selectedChoiceIdsHasBeenSet = true; m_selectedChoiceIds = value; }

    /**
     * <p>The selected choices.</p>
     */
    inline void SetSelectedChoiceIds(Aws::Vector<Aws::String>&& value) { m_selectedChoiceIdsHasBeenSet = true; m_selectedChoiceIds = std::move(value); }

    /**
     * <p>The selected choices.</p>
     */
    inline ProfileQuestion& WithSelectedChoiceIds(const Aws::Vector<Aws::String>& value) { SetSelectedChoiceIds(value); return *this;}

    /**
     * <p>The selected choices.</p>
     */
    inline ProfileQuestion& WithSelectedChoiceIds(Aws::Vector<Aws::String>&& value) { SetSelectedChoiceIds(std::move(value)); return *this;}

    /**
     * <p>The selected choices.</p>
     */
    inline ProfileQuestion& AddSelectedChoiceIds(const Aws::String& value) { m_selectedChoiceIdsHasBeenSet = true; m_selectedChoiceIds.push_back(value); return *this; }

    /**
     * <p>The selected choices.</p>
     */
    inline ProfileQuestion& AddSelectedChoiceIds(Aws::String&& value) { m_selectedChoiceIdsHasBeenSet = true; m_selectedChoiceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The selected choices.</p>
     */
    inline ProfileQuestion& AddSelectedChoiceIds(const char* value) { m_selectedChoiceIdsHasBeenSet = true; m_selectedChoiceIds.push_back(value); return *this; }


    /**
     * <p>The minimum number of selected choices.</p>
     */
    inline int GetMinSelectedChoices() const{ return m_minSelectedChoices; }

    /**
     * <p>The minimum number of selected choices.</p>
     */
    inline bool MinSelectedChoicesHasBeenSet() const { return m_minSelectedChoicesHasBeenSet; }

    /**
     * <p>The minimum number of selected choices.</p>
     */
    inline void SetMinSelectedChoices(int value) { m_minSelectedChoicesHasBeenSet = true; m_minSelectedChoices = value; }

    /**
     * <p>The minimum number of selected choices.</p>
     */
    inline ProfileQuestion& WithMinSelectedChoices(int value) { SetMinSelectedChoices(value); return *this;}


    /**
     * <p>The maximum number of selected choices.</p>
     */
    inline int GetMaxSelectedChoices() const{ return m_maxSelectedChoices; }

    /**
     * <p>The maximum number of selected choices.</p>
     */
    inline bool MaxSelectedChoicesHasBeenSet() const { return m_maxSelectedChoicesHasBeenSet; }

    /**
     * <p>The maximum number of selected choices.</p>
     */
    inline void SetMaxSelectedChoices(int value) { m_maxSelectedChoicesHasBeenSet = true; m_maxSelectedChoices = value; }

    /**
     * <p>The maximum number of selected choices.</p>
     */
    inline ProfileQuestion& WithMaxSelectedChoices(int value) { SetMaxSelectedChoices(value); return *this;}

  private:

    Aws::String m_questionId;
    bool m_questionIdHasBeenSet = false;

    Aws::String m_questionTitle;
    bool m_questionTitleHasBeenSet = false;

    Aws::String m_questionDescription;
    bool m_questionDescriptionHasBeenSet = false;

    Aws::Vector<ProfileChoice> m_questionChoices;
    bool m_questionChoicesHasBeenSet = false;

    Aws::Vector<Aws::String> m_selectedChoiceIds;
    bool m_selectedChoiceIdsHasBeenSet = false;

    int m_minSelectedChoices;
    bool m_minSelectedChoicesHasBeenSet = false;

    int m_maxSelectedChoices;
    bool m_maxSelectedChoicesHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
