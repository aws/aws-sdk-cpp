/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>An update to a profile question.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ProfileQuestionUpdate">AWS
   * API Reference</a></p>
   */
  class ProfileQuestionUpdate
  {
  public:
    AWS_WELLARCHITECTED_API ProfileQuestionUpdate() = default;
    AWS_WELLARCHITECTED_API ProfileQuestionUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ProfileQuestionUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetQuestionId() const { return m_questionId; }
    inline bool QuestionIdHasBeenSet() const { return m_questionIdHasBeenSet; }
    template<typename QuestionIdT = Aws::String>
    void SetQuestionId(QuestionIdT&& value) { m_questionIdHasBeenSet = true; m_questionId = std::forward<QuestionIdT>(value); }
    template<typename QuestionIdT = Aws::String>
    ProfileQuestionUpdate& WithQuestionId(QuestionIdT&& value) { SetQuestionId(std::forward<QuestionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The selected choices.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSelectedChoiceIds() const { return m_selectedChoiceIds; }
    inline bool SelectedChoiceIdsHasBeenSet() const { return m_selectedChoiceIdsHasBeenSet; }
    template<typename SelectedChoiceIdsT = Aws::Vector<Aws::String>>
    void SetSelectedChoiceIds(SelectedChoiceIdsT&& value) { m_selectedChoiceIdsHasBeenSet = true; m_selectedChoiceIds = std::forward<SelectedChoiceIdsT>(value); }
    template<typename SelectedChoiceIdsT = Aws::Vector<Aws::String>>
    ProfileQuestionUpdate& WithSelectedChoiceIds(SelectedChoiceIdsT&& value) { SetSelectedChoiceIds(std::forward<SelectedChoiceIdsT>(value)); return *this;}
    template<typename SelectedChoiceIdsT = Aws::String>
    ProfileQuestionUpdate& AddSelectedChoiceIds(SelectedChoiceIdsT&& value) { m_selectedChoiceIdsHasBeenSet = true; m_selectedChoiceIds.emplace_back(std::forward<SelectedChoiceIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_questionId;
    bool m_questionIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_selectedChoiceIds;
    bool m_selectedChoiceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
