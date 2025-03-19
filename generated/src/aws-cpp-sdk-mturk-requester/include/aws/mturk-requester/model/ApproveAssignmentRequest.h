/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class ApproveAssignmentRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API ApproveAssignmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ApproveAssignment"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The ID of the assignment. The assignment must correspond to a HIT created by
     * the Requester. </p>
     */
    inline const Aws::String& GetAssignmentId() const { return m_assignmentId; }
    inline bool AssignmentIdHasBeenSet() const { return m_assignmentIdHasBeenSet; }
    template<typename AssignmentIdT = Aws::String>
    void SetAssignmentId(AssignmentIdT&& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = std::forward<AssignmentIdT>(value); }
    template<typename AssignmentIdT = Aws::String>
    ApproveAssignmentRequest& WithAssignmentId(AssignmentIdT&& value) { SetAssignmentId(std::forward<AssignmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A message for the Worker, which the Worker can see in the Status section of
     * the web site. </p>
     */
    inline const Aws::String& GetRequesterFeedback() const { return m_requesterFeedback; }
    inline bool RequesterFeedbackHasBeenSet() const { return m_requesterFeedbackHasBeenSet; }
    template<typename RequesterFeedbackT = Aws::String>
    void SetRequesterFeedback(RequesterFeedbackT&& value) { m_requesterFeedbackHasBeenSet = true; m_requesterFeedback = std::forward<RequesterFeedbackT>(value); }
    template<typename RequesterFeedbackT = Aws::String>
    ApproveAssignmentRequest& WithRequesterFeedback(RequesterFeedbackT&& value) { SetRequesterFeedback(std::forward<RequesterFeedbackT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A flag indicating that an assignment should be approved even if it was
     * previously rejected. Defaults to <code>False</code>. </p>
     */
    inline bool GetOverrideRejection() const { return m_overrideRejection; }
    inline bool OverrideRejectionHasBeenSet() const { return m_overrideRejectionHasBeenSet; }
    inline void SetOverrideRejection(bool value) { m_overrideRejectionHasBeenSet = true; m_overrideRejection = value; }
    inline ApproveAssignmentRequest& WithOverrideRejection(bool value) { SetOverrideRejection(value); return *this;}
    ///@}
  private:

    Aws::String m_assignmentId;
    bool m_assignmentIdHasBeenSet = false;

    Aws::String m_requesterFeedback;
    bool m_requesterFeedbackHasBeenSet = false;

    bool m_overrideRejection{false};
    bool m_overrideRejectionHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
