/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An object representing a Bonus payment paid to a Worker.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/BonusPayment">AWS
   * API Reference</a></p>
   */
  class BonusPayment
  {
  public:
    AWS_MTURK_API BonusPayment() = default;
    AWS_MTURK_API BonusPayment(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API BonusPayment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Worker to whom the bonus was paid.</p>
     */
    inline const Aws::String& GetWorkerId() const { return m_workerId; }
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }
    template<typename WorkerIdT = Aws::String>
    void SetWorkerId(WorkerIdT&& value) { m_workerIdHasBeenSet = true; m_workerId = std::forward<WorkerIdT>(value); }
    template<typename WorkerIdT = Aws::String>
    BonusPayment& WithWorkerId(WorkerIdT&& value) { SetWorkerId(std::forward<WorkerIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetBonusAmount() const { return m_bonusAmount; }
    inline bool BonusAmountHasBeenSet() const { return m_bonusAmountHasBeenSet; }
    template<typename BonusAmountT = Aws::String>
    void SetBonusAmount(BonusAmountT&& value) { m_bonusAmountHasBeenSet = true; m_bonusAmount = std::forward<BonusAmountT>(value); }
    template<typename BonusAmountT = Aws::String>
    BonusPayment& WithBonusAmount(BonusAmountT&& value) { SetBonusAmount(std::forward<BonusAmountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the assignment associated with this bonus payment.</p>
     */
    inline const Aws::String& GetAssignmentId() const { return m_assignmentId; }
    inline bool AssignmentIdHasBeenSet() const { return m_assignmentIdHasBeenSet; }
    template<typename AssignmentIdT = Aws::String>
    void SetAssignmentId(AssignmentIdT&& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = std::forward<AssignmentIdT>(value); }
    template<typename AssignmentIdT = Aws::String>
    BonusPayment& WithAssignmentId(AssignmentIdT&& value) { SetAssignmentId(std::forward<AssignmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Reason text given when the bonus was granted, if any.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    BonusPayment& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of when the bonus was granted.</p>
     */
    inline const Aws::Utils::DateTime& GetGrantTime() const { return m_grantTime; }
    inline bool GrantTimeHasBeenSet() const { return m_grantTimeHasBeenSet; }
    template<typename GrantTimeT = Aws::Utils::DateTime>
    void SetGrantTime(GrantTimeT&& value) { m_grantTimeHasBeenSet = true; m_grantTime = std::forward<GrantTimeT>(value); }
    template<typename GrantTimeT = Aws::Utils::DateTime>
    BonusPayment& WithGrantTime(GrantTimeT&& value) { SetGrantTime(std::forward<GrantTimeT>(value)); return *this;}
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

    Aws::Utils::DateTime m_grantTime{};
    bool m_grantTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
