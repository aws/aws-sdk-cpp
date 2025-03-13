/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/DifferenceStatus.h>
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
   * <p>A question difference return object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/QuestionDifference">AWS
   * API Reference</a></p>
   */
  class QuestionDifference
  {
  public:
    AWS_WELLARCHITECTED_API QuestionDifference() = default;
    AWS_WELLARCHITECTED_API QuestionDifference(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API QuestionDifference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetQuestionId() const { return m_questionId; }
    inline bool QuestionIdHasBeenSet() const { return m_questionIdHasBeenSet; }
    template<typename QuestionIdT = Aws::String>
    void SetQuestionId(QuestionIdT&& value) { m_questionIdHasBeenSet = true; m_questionId = std::forward<QuestionIdT>(value); }
    template<typename QuestionIdT = Aws::String>
    QuestionDifference& WithQuestionId(QuestionIdT&& value) { SetQuestionId(std::forward<QuestionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetQuestionTitle() const { return m_questionTitle; }
    inline bool QuestionTitleHasBeenSet() const { return m_questionTitleHasBeenSet; }
    template<typename QuestionTitleT = Aws::String>
    void SetQuestionTitle(QuestionTitleT&& value) { m_questionTitleHasBeenSet = true; m_questionTitle = std::forward<QuestionTitleT>(value); }
    template<typename QuestionTitleT = Aws::String>
    QuestionDifference& WithQuestionTitle(QuestionTitleT&& value) { SetQuestionTitle(std::forward<QuestionTitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the type of change to the question.</p>
     */
    inline DifferenceStatus GetDifferenceStatus() const { return m_differenceStatus; }
    inline bool DifferenceStatusHasBeenSet() const { return m_differenceStatusHasBeenSet; }
    inline void SetDifferenceStatus(DifferenceStatus value) { m_differenceStatusHasBeenSet = true; m_differenceStatus = value; }
    inline QuestionDifference& WithDifferenceStatus(DifferenceStatus value) { SetDifferenceStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_questionId;
    bool m_questionIdHasBeenSet = false;

    Aws::String m_questionTitle;
    bool m_questionTitleHasBeenSet = false;

    DifferenceStatus m_differenceStatus{DifferenceStatus::NOT_SET};
    bool m_differenceStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
