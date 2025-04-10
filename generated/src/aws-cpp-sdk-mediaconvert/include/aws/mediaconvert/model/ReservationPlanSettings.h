﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Commitment.h>
#include <aws/mediaconvert/model/RenewalType.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ReservationPlanSettings">AWS
   * API Reference</a></p>
   */
  class ReservationPlanSettings
  {
  public:
    AWS_MEDIACONVERT_API ReservationPlanSettings() = default;
    AWS_MEDIACONVERT_API ReservationPlanSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API ReservationPlanSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The length of the term of your reserved queue pricing plan commitment.
     */
    inline Commitment GetCommitment() const { return m_commitment; }
    inline bool CommitmentHasBeenSet() const { return m_commitmentHasBeenSet; }
    inline void SetCommitment(Commitment value) { m_commitmentHasBeenSet = true; m_commitment = value; }
    inline ReservationPlanSettings& WithCommitment(Commitment value) { SetCommitment(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies whether the term of your reserved queue pricing plan is automatically
     * extended (AUTO_RENEW) or expires (EXPIRE) at the end of the term. When your term
     * is auto renewed, you extend your commitment by 12 months from the auto renew
     * date. You can cancel this commitment.
     */
    inline RenewalType GetRenewalType() const { return m_renewalType; }
    inline bool RenewalTypeHasBeenSet() const { return m_renewalTypeHasBeenSet; }
    inline void SetRenewalType(RenewalType value) { m_renewalTypeHasBeenSet = true; m_renewalType = value; }
    inline ReservationPlanSettings& WithRenewalType(RenewalType value) { SetRenewalType(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the number of reserved transcode slots (RTS) for this queue. The
     * number of RTS determines how many jobs the queue can process in parallel; each
     * RTS can process one job at a time. You can't decrease the number of RTS in your
     * reserved queue. You can increase the number of RTS by extending your existing
     * commitment with a new 12-month commitment for the larger number. The new
     * commitment begins when you purchase the additional capacity. You can't cancel
     * your commitment or revert to your original commitment after you increase the
     * capacity.
     */
    inline int GetReservedSlots() const { return m_reservedSlots; }
    inline bool ReservedSlotsHasBeenSet() const { return m_reservedSlotsHasBeenSet; }
    inline void SetReservedSlots(int value) { m_reservedSlotsHasBeenSet = true; m_reservedSlots = value; }
    inline ReservationPlanSettings& WithReservedSlots(int value) { SetReservedSlots(value); return *this;}
    ///@}
  private:

    Commitment m_commitment{Commitment::NOT_SET};
    bool m_commitmentHasBeenSet = false;

    RenewalType m_renewalType{RenewalType::NOT_SET};
    bool m_renewalTypeHasBeenSet = false;

    int m_reservedSlots{0};
    bool m_reservedSlotsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
