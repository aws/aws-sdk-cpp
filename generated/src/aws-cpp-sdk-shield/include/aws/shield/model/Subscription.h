/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/shield/model/AutoRenew.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/shield/model/ProactiveEngagementStatus.h>
#include <aws/shield/model/SubscriptionLimits.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/shield/model/Limit.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>Information about the Shield Advanced subscription for an
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/Subscription">AWS
   * API Reference</a></p>
   */
  class Subscription
  {
  public:
    AWS_SHIELD_API Subscription() = default;
    AWS_SHIELD_API Subscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Subscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start time of the subscription, in Unix time in seconds. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    Subscription& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time your subscription will end.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    Subscription& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length, in seconds, of the Shield Advanced subscription for the
     * account.</p>
     */
    inline long long GetTimeCommitmentInSeconds() const { return m_timeCommitmentInSeconds; }
    inline bool TimeCommitmentInSecondsHasBeenSet() const { return m_timeCommitmentInSecondsHasBeenSet; }
    inline void SetTimeCommitmentInSeconds(long long value) { m_timeCommitmentInSecondsHasBeenSet = true; m_timeCommitmentInSeconds = value; }
    inline Subscription& WithTimeCommitmentInSeconds(long long value) { SetTimeCommitmentInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>ENABLED</code>, the subscription will be automatically renewed at
     * the end of the existing subscription period.</p> <p>When you initally create a
     * subscription, <code>AutoRenew</code> is set to <code>ENABLED</code>. You can
     * change this by submitting an <code>UpdateSubscription</code> request. If the
     * <code>UpdateSubscription</code> request does not included a value for
     * <code>AutoRenew</code>, the existing value for <code>AutoRenew</code> remains
     * unchanged.</p>
     */
    inline AutoRenew GetAutoRenew() const { return m_autoRenew; }
    inline bool AutoRenewHasBeenSet() const { return m_autoRenewHasBeenSet; }
    inline void SetAutoRenew(AutoRenew value) { m_autoRenewHasBeenSet = true; m_autoRenew = value; }
    inline Subscription& WithAutoRenew(AutoRenew value) { SetAutoRenew(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how many protections of a given type you can create.</p>
     */
    inline const Aws::Vector<Limit>& GetLimits() const { return m_limits; }
    inline bool LimitsHasBeenSet() const { return m_limitsHasBeenSet; }
    template<typename LimitsT = Aws::Vector<Limit>>
    void SetLimits(LimitsT&& value) { m_limitsHasBeenSet = true; m_limits = std::forward<LimitsT>(value); }
    template<typename LimitsT = Aws::Vector<Limit>>
    Subscription& WithLimits(LimitsT&& value) { SetLimits(std::forward<LimitsT>(value)); return *this;}
    template<typename LimitsT = Limit>
    Subscription& AddLimits(LimitsT&& value) { m_limitsHasBeenSet = true; m_limits.emplace_back(std::forward<LimitsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>ENABLED</code>, the Shield Response Team (SRT) will use email and
     * phone to notify contacts about escalations to the SRT and to initiate proactive
     * customer support.</p> <p>If <code>PENDING</code>, you have requested proactive
     * engagement and the request is pending. The status changes to
     * <code>ENABLED</code> when your request is fully processed.</p> <p>If
     * <code>DISABLED</code>, the SRT will not proactively notify contacts about
     * escalations or to initiate proactive customer support. </p>
     */
    inline ProactiveEngagementStatus GetProactiveEngagementStatus() const { return m_proactiveEngagementStatus; }
    inline bool ProactiveEngagementStatusHasBeenSet() const { return m_proactiveEngagementStatusHasBeenSet; }
    inline void SetProactiveEngagementStatus(ProactiveEngagementStatus value) { m_proactiveEngagementStatusHasBeenSet = true; m_proactiveEngagementStatus = value; }
    inline Subscription& WithProactiveEngagementStatus(ProactiveEngagementStatus value) { SetProactiveEngagementStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limits settings for your subscription. </p>
     */
    inline const SubscriptionLimits& GetSubscriptionLimits() const { return m_subscriptionLimits; }
    inline bool SubscriptionLimitsHasBeenSet() const { return m_subscriptionLimitsHasBeenSet; }
    template<typename SubscriptionLimitsT = SubscriptionLimits>
    void SetSubscriptionLimits(SubscriptionLimitsT&& value) { m_subscriptionLimitsHasBeenSet = true; m_subscriptionLimits = std::forward<SubscriptionLimitsT>(value); }
    template<typename SubscriptionLimitsT = SubscriptionLimits>
    Subscription& WithSubscriptionLimits(SubscriptionLimitsT&& value) { SetSubscriptionLimits(std::forward<SubscriptionLimitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the subscription.</p>
     */
    inline const Aws::String& GetSubscriptionArn() const { return m_subscriptionArn; }
    inline bool SubscriptionArnHasBeenSet() const { return m_subscriptionArnHasBeenSet; }
    template<typename SubscriptionArnT = Aws::String>
    void SetSubscriptionArn(SubscriptionArnT&& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = std::forward<SubscriptionArnT>(value); }
    template<typename SubscriptionArnT = Aws::String>
    Subscription& WithSubscriptionArn(SubscriptionArnT&& value) { SetSubscriptionArn(std::forward<SubscriptionArnT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    long long m_timeCommitmentInSeconds{0};
    bool m_timeCommitmentInSecondsHasBeenSet = false;

    AutoRenew m_autoRenew{AutoRenew::NOT_SET};
    bool m_autoRenewHasBeenSet = false;

    Aws::Vector<Limit> m_limits;
    bool m_limitsHasBeenSet = false;

    ProactiveEngagementStatus m_proactiveEngagementStatus{ProactiveEngagementStatus::NOT_SET};
    bool m_proactiveEngagementStatusHasBeenSet = false;

    SubscriptionLimits m_subscriptionLimits;
    bool m_subscriptionLimitsHasBeenSet = false;

    Aws::String m_subscriptionArn;
    bool m_subscriptionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
