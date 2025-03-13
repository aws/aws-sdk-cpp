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
  class SendBonusRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API SendBonusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendBonus"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Worker being paid the bonus.</p>
     */
    inline const Aws::String& GetWorkerId() const { return m_workerId; }
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }
    template<typename WorkerIdT = Aws::String>
    void SetWorkerId(WorkerIdT&& value) { m_workerIdHasBeenSet = true; m_workerId = std::forward<WorkerIdT>(value); }
    template<typename WorkerIdT = Aws::String>
    SendBonusRequest& WithWorkerId(WorkerIdT&& value) { SetWorkerId(std::forward<WorkerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Bonus amount is a US Dollar amount specified using a string (for
     * example, "5" represents $5.00 USD and "101.42" represents $101.42 USD). Do not
     * include currency symbols or currency codes. </p>
     */
    inline const Aws::String& GetBonusAmount() const { return m_bonusAmount; }
    inline bool BonusAmountHasBeenSet() const { return m_bonusAmountHasBeenSet; }
    template<typename BonusAmountT = Aws::String>
    void SetBonusAmount(BonusAmountT&& value) { m_bonusAmountHasBeenSet = true; m_bonusAmount = std::forward<BonusAmountT>(value); }
    template<typename BonusAmountT = Aws::String>
    SendBonusRequest& WithBonusAmount(BonusAmountT&& value) { SetBonusAmount(std::forward<BonusAmountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the assignment for which this bonus is paid.</p>
     */
    inline const Aws::String& GetAssignmentId() const { return m_assignmentId; }
    inline bool AssignmentIdHasBeenSet() const { return m_assignmentIdHasBeenSet; }
    template<typename AssignmentIdT = Aws::String>
    void SetAssignmentId(AssignmentIdT&& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = std::forward<AssignmentIdT>(value); }
    template<typename AssignmentIdT = Aws::String>
    SendBonusRequest& WithAssignmentId(AssignmentIdT&& value) { SetAssignmentId(std::forward<AssignmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that explains the reason for the bonus payment. The Worker
     * receiving the bonus can see this message.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    SendBonusRequest& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for this request, which allows you to retry the call on
     * error without granting multiple bonuses. This is useful in cases such as network
     * timeouts where it is unclear whether or not the call succeeded on the server. If
     * the bonus already exists in the system from a previous call using the same
     * UniqueRequestToken, subsequent calls will return an error with a message
     * containing the request ID.</p>
     */
    inline const Aws::String& GetUniqueRequestToken() const { return m_uniqueRequestToken; }
    inline bool UniqueRequestTokenHasBeenSet() const { return m_uniqueRequestTokenHasBeenSet; }
    template<typename UniqueRequestTokenT = Aws::String>
    void SetUniqueRequestToken(UniqueRequestTokenT&& value) { m_uniqueRequestTokenHasBeenSet = true; m_uniqueRequestToken = std::forward<UniqueRequestTokenT>(value); }
    template<typename UniqueRequestTokenT = Aws::String>
    SendBonusRequest& WithUniqueRequestToken(UniqueRequestTokenT&& value) { SetUniqueRequestToken(std::forward<UniqueRequestTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet = false;

    Aws::String m_bonusAmount;
    bool m_bonusAmountHasBeenSet = false;

    Aws::String m_assignmentId;
    bool m_assignmentIdHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_uniqueRequestToken;
    bool m_uniqueRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
