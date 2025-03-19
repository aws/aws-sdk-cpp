/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Commitment.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mediaconvert/model/RenewalType.h>
#include <aws/mediaconvert/model/ReservationPlanStatus.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Details about the pricing plan for your reserved queue. Required for reserved
   * queues and not applicable to on-demand queues.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ReservationPlan">AWS
   * API Reference</a></p>
   */
  class ReservationPlan
  {
  public:
    AWS_MEDIACONVERT_API ReservationPlan() = default;
    AWS_MEDIACONVERT_API ReservationPlan(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API ReservationPlan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The length of the term of your reserved queue pricing plan commitment.
     */
    inline Commitment GetCommitment() const { return m_commitment; }
    inline bool CommitmentHasBeenSet() const { return m_commitmentHasBeenSet; }
    inline void SetCommitment(Commitment value) { m_commitmentHasBeenSet = true; m_commitment = value; }
    inline ReservationPlan& WithCommitment(Commitment value) { SetCommitment(value); return *this;}
    ///@}

    ///@{
    /**
     * The timestamp in epoch seconds for when the current pricing plan term for this
     * reserved queue expires.
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
    inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
    template<typename ExpiresAtT = Aws::Utils::DateTime>
    void SetExpiresAt(ExpiresAtT&& value) { m_expiresAtHasBeenSet = true; m_expiresAt = std::forward<ExpiresAtT>(value); }
    template<typename ExpiresAtT = Aws::Utils::DateTime>
    ReservationPlan& WithExpiresAt(ExpiresAtT&& value) { SetExpiresAt(std::forward<ExpiresAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The timestamp in epoch seconds for when you set up the current pricing plan for
     * this reserved queue.
     */
    inline const Aws::Utils::DateTime& GetPurchasedAt() const { return m_purchasedAt; }
    inline bool PurchasedAtHasBeenSet() const { return m_purchasedAtHasBeenSet; }
    template<typename PurchasedAtT = Aws::Utils::DateTime>
    void SetPurchasedAt(PurchasedAtT&& value) { m_purchasedAtHasBeenSet = true; m_purchasedAt = std::forward<PurchasedAtT>(value); }
    template<typename PurchasedAtT = Aws::Utils::DateTime>
    ReservationPlan& WithPurchasedAt(PurchasedAtT&& value) { SetPurchasedAt(std::forward<PurchasedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies whether the term of your reserved queue pricing plan is automatically
     * extended (AUTO_RENEW) or expires (EXPIRE) at the end of the term.
     */
    inline RenewalType GetRenewalType() const { return m_renewalType; }
    inline bool RenewalTypeHasBeenSet() const { return m_renewalTypeHasBeenSet; }
    inline void SetRenewalType(RenewalType value) { m_renewalTypeHasBeenSet = true; m_renewalType = value; }
    inline ReservationPlan& WithRenewalType(RenewalType value) { SetRenewalType(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the number of reserved transcode slots (RTS) for this queue. The
     * number of RTS determines how many jobs the queue can process in parallel; each
     * RTS can process one job at a time. When you increase this number, you extend
     * your existing commitment with a new 12-month commitment for a larger number of
     * RTS. The new commitment begins when you purchase the additional capacity. You
     * can't decrease the number of RTS in your reserved queue.
     */
    inline int GetReservedSlots() const { return m_reservedSlots; }
    inline bool ReservedSlotsHasBeenSet() const { return m_reservedSlotsHasBeenSet; }
    inline void SetReservedSlots(int value) { m_reservedSlotsHasBeenSet = true; m_reservedSlots = value; }
    inline ReservationPlan& WithReservedSlots(int value) { SetReservedSlots(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies whether the pricing plan for your reserved queue is ACTIVE or EXPIRED.
     */
    inline ReservationPlanStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ReservationPlanStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ReservationPlan& WithStatus(ReservationPlanStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Commitment m_commitment{Commitment::NOT_SET};
    bool m_commitmentHasBeenSet = false;

    Aws::Utils::DateTime m_expiresAt{};
    bool m_expiresAtHasBeenSet = false;

    Aws::Utils::DateTime m_purchasedAt{};
    bool m_purchasedAtHasBeenSet = false;

    RenewalType m_renewalType{RenewalType::NOT_SET};
    bool m_renewalTypeHasBeenSet = false;

    int m_reservedSlots{0};
    bool m_reservedSlotsHasBeenSet = false;

    ReservationPlanStatus m_status{ReservationPlanStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
