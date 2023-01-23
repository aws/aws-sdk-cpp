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
    AWS_WELLARCHITECTED_API QuestionDifference();
    AWS_WELLARCHITECTED_API QuestionDifference(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API QuestionDifference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetQuestionId() const{ return m_questionId; }

    
    inline bool QuestionIdHasBeenSet() const { return m_questionIdHasBeenSet; }

    
    inline void SetQuestionId(const Aws::String& value) { m_questionIdHasBeenSet = true; m_questionId = value; }

    
    inline void SetQuestionId(Aws::String&& value) { m_questionIdHasBeenSet = true; m_questionId = std::move(value); }

    
    inline void SetQuestionId(const char* value) { m_questionIdHasBeenSet = true; m_questionId.assign(value); }

    
    inline QuestionDifference& WithQuestionId(const Aws::String& value) { SetQuestionId(value); return *this;}

    
    inline QuestionDifference& WithQuestionId(Aws::String&& value) { SetQuestionId(std::move(value)); return *this;}

    
    inline QuestionDifference& WithQuestionId(const char* value) { SetQuestionId(value); return *this;}


    
    inline const Aws::String& GetQuestionTitle() const{ return m_questionTitle; }

    
    inline bool QuestionTitleHasBeenSet() const { return m_questionTitleHasBeenSet; }

    
    inline void SetQuestionTitle(const Aws::String& value) { m_questionTitleHasBeenSet = true; m_questionTitle = value; }

    
    inline void SetQuestionTitle(Aws::String&& value) { m_questionTitleHasBeenSet = true; m_questionTitle = std::move(value); }

    
    inline void SetQuestionTitle(const char* value) { m_questionTitleHasBeenSet = true; m_questionTitle.assign(value); }

    
    inline QuestionDifference& WithQuestionTitle(const Aws::String& value) { SetQuestionTitle(value); return *this;}

    
    inline QuestionDifference& WithQuestionTitle(Aws::String&& value) { SetQuestionTitle(std::move(value)); return *this;}

    
    inline QuestionDifference& WithQuestionTitle(const char* value) { SetQuestionTitle(value); return *this;}


    /**
     * <p>Indicates the type of change to the question.</p>
     */
    inline const DifferenceStatus& GetDifferenceStatus() const{ return m_differenceStatus; }

    /**
     * <p>Indicates the type of change to the question.</p>
     */
    inline bool DifferenceStatusHasBeenSet() const { return m_differenceStatusHasBeenSet; }

    /**
     * <p>Indicates the type of change to the question.</p>
     */
    inline void SetDifferenceStatus(const DifferenceStatus& value) { m_differenceStatusHasBeenSet = true; m_differenceStatus = value; }

    /**
     * <p>Indicates the type of change to the question.</p>
     */
    inline void SetDifferenceStatus(DifferenceStatus&& value) { m_differenceStatusHasBeenSet = true; m_differenceStatus = std::move(value); }

    /**
     * <p>Indicates the type of change to the question.</p>
     */
    inline QuestionDifference& WithDifferenceStatus(const DifferenceStatus& value) { SetDifferenceStatus(value); return *this;}

    /**
     * <p>Indicates the type of change to the question.</p>
     */
    inline QuestionDifference& WithDifferenceStatus(DifferenceStatus&& value) { SetDifferenceStatus(std::move(value)); return *this;}

  private:

    Aws::String m_questionId;
    bool m_questionIdHasBeenSet = false;

    Aws::String m_questionTitle;
    bool m_questionTitleHasBeenSet = false;

    DifferenceStatus m_differenceStatus;
    bool m_differenceStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
