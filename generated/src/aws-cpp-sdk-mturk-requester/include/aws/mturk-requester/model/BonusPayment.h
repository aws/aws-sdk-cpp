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
    AWS_MTURK_API BonusPayment();
    AWS_MTURK_API BonusPayment(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API BonusPayment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Worker to whom the bonus was paid.</p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }
    inline void SetWorkerId(const Aws::String& value) { m_workerIdHasBeenSet = true; m_workerId = value; }
    inline void SetWorkerId(Aws::String&& value) { m_workerIdHasBeenSet = true; m_workerId = std::move(value); }
    inline void SetWorkerId(const char* value) { m_workerIdHasBeenSet = true; m_workerId.assign(value); }
    inline BonusPayment& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}
    inline BonusPayment& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}
    inline BonusPayment& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetBonusAmount() const{ return m_bonusAmount; }
    inline bool BonusAmountHasBeenSet() const { return m_bonusAmountHasBeenSet; }
    inline void SetBonusAmount(const Aws::String& value) { m_bonusAmountHasBeenSet = true; m_bonusAmount = value; }
    inline void SetBonusAmount(Aws::String&& value) { m_bonusAmountHasBeenSet = true; m_bonusAmount = std::move(value); }
    inline void SetBonusAmount(const char* value) { m_bonusAmountHasBeenSet = true; m_bonusAmount.assign(value); }
    inline BonusPayment& WithBonusAmount(const Aws::String& value) { SetBonusAmount(value); return *this;}
    inline BonusPayment& WithBonusAmount(Aws::String&& value) { SetBonusAmount(std::move(value)); return *this;}
    inline BonusPayment& WithBonusAmount(const char* value) { SetBonusAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the assignment associated with this bonus payment.</p>
     */
    inline const Aws::String& GetAssignmentId() const{ return m_assignmentId; }
    inline bool AssignmentIdHasBeenSet() const { return m_assignmentIdHasBeenSet; }
    inline void SetAssignmentId(const Aws::String& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = value; }
    inline void SetAssignmentId(Aws::String&& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = std::move(value); }
    inline void SetAssignmentId(const char* value) { m_assignmentIdHasBeenSet = true; m_assignmentId.assign(value); }
    inline BonusPayment& WithAssignmentId(const Aws::String& value) { SetAssignmentId(value); return *this;}
    inline BonusPayment& WithAssignmentId(Aws::String&& value) { SetAssignmentId(std::move(value)); return *this;}
    inline BonusPayment& WithAssignmentId(const char* value) { SetAssignmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Reason text given when the bonus was granted, if any.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline BonusPayment& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline BonusPayment& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline BonusPayment& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of when the bonus was granted.</p>
     */
    inline const Aws::Utils::DateTime& GetGrantTime() const{ return m_grantTime; }
    inline bool GrantTimeHasBeenSet() const { return m_grantTimeHasBeenSet; }
    inline void SetGrantTime(const Aws::Utils::DateTime& value) { m_grantTimeHasBeenSet = true; m_grantTime = value; }
    inline void SetGrantTime(Aws::Utils::DateTime&& value) { m_grantTimeHasBeenSet = true; m_grantTime = std::move(value); }
    inline BonusPayment& WithGrantTime(const Aws::Utils::DateTime& value) { SetGrantTime(value); return *this;}
    inline BonusPayment& WithGrantTime(Aws::Utils::DateTime&& value) { SetGrantTime(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_grantTime;
    bool m_grantTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
