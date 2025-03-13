/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/ProfileTemplateChoice.h>
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
   * <p>A profile template question.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ProfileTemplateQuestion">AWS
   * API Reference</a></p>
   */
  class ProfileTemplateQuestion
  {
  public:
    AWS_WELLARCHITECTED_API ProfileTemplateQuestion() = default;
    AWS_WELLARCHITECTED_API ProfileTemplateQuestion(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ProfileTemplateQuestion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetQuestionId() const { return m_questionId; }
    inline bool QuestionIdHasBeenSet() const { return m_questionIdHasBeenSet; }
    template<typename QuestionIdT = Aws::String>
    void SetQuestionId(QuestionIdT&& value) { m_questionIdHasBeenSet = true; m_questionId = std::forward<QuestionIdT>(value); }
    template<typename QuestionIdT = Aws::String>
    ProfileTemplateQuestion& WithQuestionId(QuestionIdT&& value) { SetQuestionId(std::forward<QuestionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetQuestionTitle() const { return m_questionTitle; }
    inline bool QuestionTitleHasBeenSet() const { return m_questionTitleHasBeenSet; }
    template<typename QuestionTitleT = Aws::String>
    void SetQuestionTitle(QuestionTitleT&& value) { m_questionTitleHasBeenSet = true; m_questionTitle = std::forward<QuestionTitleT>(value); }
    template<typename QuestionTitleT = Aws::String>
    ProfileTemplateQuestion& WithQuestionTitle(QuestionTitleT&& value) { SetQuestionTitle(std::forward<QuestionTitleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetQuestionDescription() const { return m_questionDescription; }
    inline bool QuestionDescriptionHasBeenSet() const { return m_questionDescriptionHasBeenSet; }
    template<typename QuestionDescriptionT = Aws::String>
    void SetQuestionDescription(QuestionDescriptionT&& value) { m_questionDescriptionHasBeenSet = true; m_questionDescription = std::forward<QuestionDescriptionT>(value); }
    template<typename QuestionDescriptionT = Aws::String>
    ProfileTemplateQuestion& WithQuestionDescription(QuestionDescriptionT&& value) { SetQuestionDescription(std::forward<QuestionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The question choices.</p>
     */
    inline const Aws::Vector<ProfileTemplateChoice>& GetQuestionChoices() const { return m_questionChoices; }
    inline bool QuestionChoicesHasBeenSet() const { return m_questionChoicesHasBeenSet; }
    template<typename QuestionChoicesT = Aws::Vector<ProfileTemplateChoice>>
    void SetQuestionChoices(QuestionChoicesT&& value) { m_questionChoicesHasBeenSet = true; m_questionChoices = std::forward<QuestionChoicesT>(value); }
    template<typename QuestionChoicesT = Aws::Vector<ProfileTemplateChoice>>
    ProfileTemplateQuestion& WithQuestionChoices(QuestionChoicesT&& value) { SetQuestionChoices(std::forward<QuestionChoicesT>(value)); return *this;}
    template<typename QuestionChoicesT = ProfileTemplateChoice>
    ProfileTemplateQuestion& AddQuestionChoices(QuestionChoicesT&& value) { m_questionChoicesHasBeenSet = true; m_questionChoices.emplace_back(std::forward<QuestionChoicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The minimum number of choices selected.</p>
     */
    inline int GetMinSelectedChoices() const { return m_minSelectedChoices; }
    inline bool MinSelectedChoicesHasBeenSet() const { return m_minSelectedChoicesHasBeenSet; }
    inline void SetMinSelectedChoices(int value) { m_minSelectedChoicesHasBeenSet = true; m_minSelectedChoices = value; }
    inline ProfileTemplateQuestion& WithMinSelectedChoices(int value) { SetMinSelectedChoices(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of choices selected.</p>
     */
    inline int GetMaxSelectedChoices() const { return m_maxSelectedChoices; }
    inline bool MaxSelectedChoicesHasBeenSet() const { return m_maxSelectedChoicesHasBeenSet; }
    inline void SetMaxSelectedChoices(int value) { m_maxSelectedChoicesHasBeenSet = true; m_maxSelectedChoices = value; }
    inline ProfileTemplateQuestion& WithMaxSelectedChoices(int value) { SetMaxSelectedChoices(value); return *this;}
    ///@}
  private:

    Aws::String m_questionId;
    bool m_questionIdHasBeenSet = false;

    Aws::String m_questionTitle;
    bool m_questionTitleHasBeenSet = false;

    Aws::String m_questionDescription;
    bool m_questionDescriptionHasBeenSet = false;

    Aws::Vector<ProfileTemplateChoice> m_questionChoices;
    bool m_questionChoicesHasBeenSet = false;

    int m_minSelectedChoices{0};
    bool m_minSelectedChoicesHasBeenSet = false;

    int m_maxSelectedChoices{0};
    bool m_maxSelectedChoicesHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
