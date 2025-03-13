/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MTurk
{
namespace Model
{

  /**
   * <p> This data structure is returned multiple times for each result specified in
   * the Review Policy. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ReviewResultDetail">AWS
   * API Reference</a></p>
   */
  class ReviewResultDetail
  {
  public:
    AWS_MTURK_API ReviewResultDetail() = default;
    AWS_MTURK_API ReviewResultDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API ReviewResultDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A unique identifier of the Review action result. </p>
     */
    inline const Aws::String& GetActionId() const { return m_actionId; }
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }
    template<typename ActionIdT = Aws::String>
    void SetActionId(ActionIdT&& value) { m_actionIdHasBeenSet = true; m_actionId = std::forward<ActionIdT>(value); }
    template<typename ActionIdT = Aws::String>
    ReviewResultDetail& WithActionId(ActionIdT&& value) { SetActionId(std::forward<ActionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HITID or AssignmentId about which this result was taken. Note that
     * HIT-level Review Policies will often emit results about both the HIT itself and
     * its Assignments, while Assignment-level review policies generally only emit
     * results about the Assignment itself. </p>
     */
    inline const Aws::String& GetSubjectId() const { return m_subjectId; }
    inline bool SubjectIdHasBeenSet() const { return m_subjectIdHasBeenSet; }
    template<typename SubjectIdT = Aws::String>
    void SetSubjectId(SubjectIdT&& value) { m_subjectIdHasBeenSet = true; m_subjectId = std::forward<SubjectIdT>(value); }
    template<typename SubjectIdT = Aws::String>
    ReviewResultDetail& WithSubjectId(SubjectIdT&& value) { SetSubjectId(std::forward<SubjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the object from the SubjectId field.</p>
     */
    inline const Aws::String& GetSubjectType() const { return m_subjectType; }
    inline bool SubjectTypeHasBeenSet() const { return m_subjectTypeHasBeenSet; }
    template<typename SubjectTypeT = Aws::String>
    void SetSubjectType(SubjectTypeT&& value) { m_subjectTypeHasBeenSet = true; m_subjectType = std::forward<SubjectTypeT>(value); }
    template<typename SubjectTypeT = Aws::String>
    ReviewResultDetail& WithSubjectType(SubjectTypeT&& value) { SetSubjectType(std::forward<SubjectTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the QuestionId the result is describing. Depending on whether the
     * TargetType is a HIT or Assignment this results could specify multiple values. If
     * TargetType is HIT and QuestionId is absent, then the result describes results of
     * the HIT, including the HIT agreement score. If ObjectType is Assignment and
     * QuestionId is absent, then the result describes the Worker's performance on the
     * HIT. </p>
     */
    inline const Aws::String& GetQuestionId() const { return m_questionId; }
    inline bool QuestionIdHasBeenSet() const { return m_questionIdHasBeenSet; }
    template<typename QuestionIdT = Aws::String>
    void SetQuestionId(QuestionIdT&& value) { m_questionIdHasBeenSet = true; m_questionId = std::forward<QuestionIdT>(value); }
    template<typename QuestionIdT = Aws::String>
    ReviewResultDetail& WithQuestionId(QuestionIdT&& value) { SetQuestionId(std::forward<QuestionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Key identifies the particular piece of reviewed information. </p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    ReviewResultDetail& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The values of Key provided by the review policies you have selected. </p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    ReviewResultDetail& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

    Aws::String m_subjectId;
    bool m_subjectIdHasBeenSet = false;

    Aws::String m_subjectType;
    bool m_subjectTypeHasBeenSet = false;

    Aws::String m_questionId;
    bool m_questionIdHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
