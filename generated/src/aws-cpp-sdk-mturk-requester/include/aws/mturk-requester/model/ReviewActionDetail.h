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
    AWS_MTURK_API ReviewActionDetail();
    AWS_MTURK_API ReviewActionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API ReviewActionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the action.</p>
     */
    inline const Aws::String& GetActionId() const{ return m_actionId; }
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }
    inline void SetActionId(const Aws::String& value) { m_actionIdHasBeenSet = true; m_actionId = value; }
    inline void SetActionId(Aws::String&& value) { m_actionIdHasBeenSet = true; m_actionId = std::move(value); }
    inline void SetActionId(const char* value) { m_actionIdHasBeenSet = true; m_actionId.assign(value); }
    inline ReviewActionDetail& WithActionId(const Aws::String& value) { SetActionId(value); return *this;}
    inline ReviewActionDetail& WithActionId(Aws::String&& value) { SetActionId(std::move(value)); return *this;}
    inline ReviewActionDetail& WithActionId(const char* value) { SetActionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The nature of the action itself. The Review Policy is responsible for
     * examining the HIT and Assignments, emitting results, and deciding which other
     * actions will be necessary. </p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }
    inline ReviewActionDetail& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}
    inline ReviewActionDetail& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}
    inline ReviewActionDetail& WithActionName(const char* value) { SetActionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The specific HITId or AssignmentID targeted by the action.</p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }
    inline ReviewActionDetail& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}
    inline ReviewActionDetail& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}
    inline ReviewActionDetail& WithTargetId(const char* value) { SetTargetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of object in TargetId.</p>
     */
    inline const Aws::String& GetTargetType() const{ return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(const Aws::String& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline void SetTargetType(Aws::String&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }
    inline void SetTargetType(const char* value) { m_targetTypeHasBeenSet = true; m_targetType.assign(value); }
    inline ReviewActionDetail& WithTargetType(const Aws::String& value) { SetTargetType(value); return *this;}
    inline ReviewActionDetail& WithTargetType(Aws::String&& value) { SetTargetType(std::move(value)); return *this;}
    inline ReviewActionDetail& WithTargetType(const char* value) { SetTargetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current disposition of the action: INTENDED, SUCCEEDED, FAILED, or
     * CANCELLED. </p>
     */
    inline const ReviewActionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ReviewActionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ReviewActionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ReviewActionDetail& WithStatus(const ReviewActionStatus& value) { SetStatus(value); return *this;}
    inline ReviewActionDetail& WithStatus(ReviewActionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date when the action was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompleteTime() const{ return m_completeTime; }
    inline bool CompleteTimeHasBeenSet() const { return m_completeTimeHasBeenSet; }
    inline void SetCompleteTime(const Aws::Utils::DateTime& value) { m_completeTimeHasBeenSet = true; m_completeTime = value; }
    inline void SetCompleteTime(Aws::Utils::DateTime&& value) { m_completeTimeHasBeenSet = true; m_completeTime = std::move(value); }
    inline ReviewActionDetail& WithCompleteTime(const Aws::Utils::DateTime& value) { SetCompleteTime(value); return *this;}
    inline ReviewActionDetail& WithCompleteTime(Aws::Utils::DateTime&& value) { SetCompleteTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the outcome of the review.</p>
     */
    inline const Aws::String& GetResult() const{ return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    inline void SetResult(const Aws::String& value) { m_resultHasBeenSet = true; m_result = value; }
    inline void SetResult(Aws::String&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }
    inline void SetResult(const char* value) { m_resultHasBeenSet = true; m_result.assign(value); }
    inline ReviewActionDetail& WithResult(const Aws::String& value) { SetResult(value); return *this;}
    inline ReviewActionDetail& WithResult(Aws::String&& value) { SetResult(std::move(value)); return *this;}
    inline ReviewActionDetail& WithResult(const char* value) { SetResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Present only when the Results have a FAILED Status.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }
    inline ReviewActionDetail& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}
    inline ReviewActionDetail& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}
    inline ReviewActionDetail& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}
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

    ReviewActionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_completeTime;
    bool m_completeTimeHasBeenSet = false;

    Aws::String m_result;
    bool m_resultHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
