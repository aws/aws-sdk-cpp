/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mturk-requester/model/ReviewActionStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p> Both the AssignmentReviewReport and the HITReviewReport elements contains
   * the ReviewActionDetail data structure. This structure is returned multiple times
   * for each action specified in the Review Policy. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ReviewActionDetail">AWS
   * API Reference</a></p>
   */
  class ReviewActionDetail
  {
  public:
    AWS_MTURK_API ReviewActionDetail() = default;
    AWS_MTURK_API ReviewActionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API ReviewActionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the action.</p>
     */
    inline const Aws::String& GetActionId() const { return m_actionId; }
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }
    template<typename ActionIdT = Aws::String>
    void SetActionId(ActionIdT&& value) { m_actionIdHasBeenSet = true; m_actionId = std::forward<ActionIdT>(value); }
    template<typename ActionIdT = Aws::String>
    ReviewActionDetail& WithActionId(ActionIdT&& value) { SetActionId(std::forward<ActionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The nature of the action itself. The Review Policy is responsible for
     * examining the HIT and Assignments, emitting results, and deciding which other
     * actions will be necessary. </p>
     */
    inline const Aws::String& GetActionName() const { return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    template<typename ActionNameT = Aws::String>
    void SetActionName(ActionNameT&& value) { m_actionNameHasBeenSet = true; m_actionName = std::forward<ActionNameT>(value); }
    template<typename ActionNameT = Aws::String>
    ReviewActionDetail& WithActionName(ActionNameT&& value) { SetActionName(std::forward<ActionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The specific HITId or AssignmentID targeted by the action.</p>
     */
    inline const Aws::String& GetTargetId() const { return m_targetId; }
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
    template<typename TargetIdT = Aws::String>
    void SetTargetId(TargetIdT&& value) { m_targetIdHasBeenSet = true; m_targetId = std::forward<TargetIdT>(value); }
    template<typename TargetIdT = Aws::String>
    ReviewActionDetail& WithTargetId(TargetIdT&& value) { SetTargetId(std::forward<TargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of object in TargetId.</p>
     */
    inline const Aws::String& GetTargetType() const { return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    template<typename TargetTypeT = Aws::String>
    void SetTargetType(TargetTypeT&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::forward<TargetTypeT>(value); }
    template<typename TargetTypeT = Aws::String>
    ReviewActionDetail& WithTargetType(TargetTypeT&& value) { SetTargetType(std::forward<TargetTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current disposition of the action: INTENDED, SUCCEEDED, FAILED, or
     * CANCELLED. </p>
     */
    inline ReviewActionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ReviewActionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ReviewActionDetail& WithStatus(ReviewActionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date when the action was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompleteTime() const { return m_completeTime; }
    inline bool CompleteTimeHasBeenSet() const { return m_completeTimeHasBeenSet; }
    template<typename CompleteTimeT = Aws::Utils::DateTime>
    void SetCompleteTime(CompleteTimeT&& value) { m_completeTimeHasBeenSet = true; m_completeTime = std::forward<CompleteTimeT>(value); }
    template<typename CompleteTimeT = Aws::Utils::DateTime>
    ReviewActionDetail& WithCompleteTime(CompleteTimeT&& value) { SetCompleteTime(std::forward<CompleteTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the outcome of the review.</p>
     */
    inline const Aws::String& GetResult() const { return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    template<typename ResultT = Aws::String>
    void SetResult(ResultT&& value) { m_resultHasBeenSet = true; m_result = std::forward<ResultT>(value); }
    template<typename ResultT = Aws::String>
    ReviewActionDetail& WithResult(ResultT&& value) { SetResult(std::forward<ResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Present only when the Results have a FAILED Status.</p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    ReviewActionDetail& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;

    Aws::String m_targetType;
    bool m_targetTypeHasBeenSet = false;

    ReviewActionStatus m_status{ReviewActionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_completeTime{};
    bool m_completeTimeHasBeenSet = false;

    Aws::String m_result;
    bool m_resultHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
