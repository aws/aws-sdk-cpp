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
    AWS_SHIELD_API Subscription();
    AWS_SHIELD_API Subscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Subscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start time of the subscription, in Unix time in seconds. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the subscription, in Unix time in seconds. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time of the subscription, in Unix time in seconds. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the subscription, in Unix time in seconds. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time of the subscription, in Unix time in seconds. </p>
     */
    inline Subscription& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time of the subscription, in Unix time in seconds. </p>
     */
    inline Subscription& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The date and time your subscription will end.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The date and time your subscription will end.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The date and time your subscription will end.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The date and time your subscription will end.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The date and time your subscription will end.</p>
     */
    inline Subscription& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The date and time your subscription will end.</p>
     */
    inline Subscription& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The length, in seconds, of the Shield Advanced subscription for the
     * account.</p>
     */
    inline long long GetTimeCommitmentInSeconds() const{ return m_timeCommitmentInSeconds; }

    /**
     * <p>The length, in seconds, of the Shield Advanced subscription for the
     * account.</p>
     */
    inline bool TimeCommitmentInSecondsHasBeenSet() const { return m_timeCommitmentInSecondsHasBeenSet; }

    /**
     * <p>The length, in seconds, of the Shield Advanced subscription for the
     * account.</p>
     */
    inline void SetTimeCommitmentInSeconds(long long value) { m_timeCommitmentInSecondsHasBeenSet = true; m_timeCommitmentInSeconds = value; }

    /**
     * <p>The length, in seconds, of the Shield Advanced subscription for the
     * account.</p>
     */
    inline Subscription& WithTimeCommitmentInSeconds(long long value) { SetTimeCommitmentInSeconds(value); return *this;}


    /**
     * <p>If <code>ENABLED</code>, the subscription will be automatically renewed at
     * the end of the existing subscription period.</p> <p>When you initally create a
     * subscription, <code>AutoRenew</code> is set to <code>ENABLED</code>. You can
     * change this by submitting an <code>UpdateSubscription</code> request. If the
     * <code>UpdateSubscription</code> request does not included a value for
     * <code>AutoRenew</code>, the existing value for <code>AutoRenew</code> remains
     * unchanged.</p>
     */
    inline const AutoRenew& GetAutoRenew() const{ return m_autoRenew; }

    /**
     * <p>If <code>ENABLED</code>, the subscription will be automatically renewed at
     * the end of the existing subscription period.</p> <p>When you initally create a
     * subscription, <code>AutoRenew</code> is set to <code>ENABLED</code>. You can
     * change this by submitting an <code>UpdateSubscription</code> request. If the
     * <code>UpdateSubscription</code> request does not included a value for
     * <code>AutoRenew</code>, the existing value for <code>AutoRenew</code> remains
     * unchanged.</p>
     */
    inline bool AutoRenewHasBeenSet() const { return m_autoRenewHasBeenSet; }

    /**
     * <p>If <code>ENABLED</code>, the subscription will be automatically renewed at
     * the end of the existing subscription period.</p> <p>When you initally create a
     * subscription, <code>AutoRenew</code> is set to <code>ENABLED</code>. You can
     * change this by submitting an <code>UpdateSubscription</code> request. If the
     * <code>UpdateSubscription</code> request does not included a value for
     * <code>AutoRenew</code>, the existing value for <code>AutoRenew</code> remains
     * unchanged.</p>
     */
    inline void SetAutoRenew(const AutoRenew& value) { m_autoRenewHasBeenSet = true; m_autoRenew = value; }

    /**
     * <p>If <code>ENABLED</code>, the subscription will be automatically renewed at
     * the end of the existing subscription period.</p> <p>When you initally create a
     * subscription, <code>AutoRenew</code> is set to <code>ENABLED</code>. You can
     * change this by submitting an <code>UpdateSubscription</code> request. If the
     * <code>UpdateSubscription</code> request does not included a value for
     * <code>AutoRenew</code>, the existing value for <code>AutoRenew</code> remains
     * unchanged.</p>
     */
    inline void SetAutoRenew(AutoRenew&& value) { m_autoRenewHasBeenSet = true; m_autoRenew = std::move(value); }

    /**
     * <p>If <code>ENABLED</code>, the subscription will be automatically renewed at
     * the end of the existing subscription period.</p> <p>When you initally create a
     * subscription, <code>AutoRenew</code> is set to <code>ENABLED</code>. You can
     * change this by submitting an <code>UpdateSubscription</code> request. If the
     * <code>UpdateSubscription</code> request does not included a value for
     * <code>AutoRenew</code>, the existing value for <code>AutoRenew</code> remains
     * unchanged.</p>
     */
    inline Subscription& WithAutoRenew(const AutoRenew& value) { SetAutoRenew(value); return *this;}

    /**
     * <p>If <code>ENABLED</code>, the subscription will be automatically renewed at
     * the end of the existing subscription period.</p> <p>When you initally create a
     * subscription, <code>AutoRenew</code> is set to <code>ENABLED</code>. You can
     * change this by submitting an <code>UpdateSubscription</code> request. If the
     * <code>UpdateSubscription</code> request does not included a value for
     * <code>AutoRenew</code>, the existing value for <code>AutoRenew</code> remains
     * unchanged.</p>
     */
    inline Subscription& WithAutoRenew(AutoRenew&& value) { SetAutoRenew(std::move(value)); return *this;}


    /**
     * <p>Specifies how many protections of a given type you can create.</p>
     */
    inline const Aws::Vector<Limit>& GetLimits() const{ return m_limits; }

    /**
     * <p>Specifies how many protections of a given type you can create.</p>
     */
    inline bool LimitsHasBeenSet() const { return m_limitsHasBeenSet; }

    /**
     * <p>Specifies how many protections of a given type you can create.</p>
     */
    inline void SetLimits(const Aws::Vector<Limit>& value) { m_limitsHasBeenSet = true; m_limits = value; }

    /**
     * <p>Specifies how many protections of a given type you can create.</p>
     */
    inline void SetLimits(Aws::Vector<Limit>&& value) { m_limitsHasBeenSet = true; m_limits = std::move(value); }

    /**
     * <p>Specifies how many protections of a given type you can create.</p>
     */
    inline Subscription& WithLimits(const Aws::Vector<Limit>& value) { SetLimits(value); return *this;}

    /**
     * <p>Specifies how many protections of a given type you can create.</p>
     */
    inline Subscription& WithLimits(Aws::Vector<Limit>&& value) { SetLimits(std::move(value)); return *this;}

    /**
     * <p>Specifies how many protections of a given type you can create.</p>
     */
    inline Subscription& AddLimits(const Limit& value) { m_limitsHasBeenSet = true; m_limits.push_back(value); return *this; }

    /**
     * <p>Specifies how many protections of a given type you can create.</p>
     */
    inline Subscription& AddLimits(Limit&& value) { m_limitsHasBeenSet = true; m_limits.push_back(std::move(value)); return *this; }


    /**
     * <p>If <code>ENABLED</code>, the Shield Response Team (SRT) will use email and
     * phone to notify contacts about escalations to the SRT and to initiate proactive
     * customer support.</p> <p>If <code>PENDING</code>, you have requested proactive
     * engagement and the request is pending. The status changes to
     * <code>ENABLED</code> when your request is fully processed.</p> <p>If
     * <code>DISABLED</code>, the SRT will not proactively notify contacts about
     * escalations or to initiate proactive customer support. </p>
     */
    inline const ProactiveEngagementStatus& GetProactiveEngagementStatus() const{ return m_proactiveEngagementStatus; }

    /**
     * <p>If <code>ENABLED</code>, the Shield Response Team (SRT) will use email and
     * phone to notify contacts about escalations to the SRT and to initiate proactive
     * customer support.</p> <p>If <code>PENDING</code>, you have requested proactive
     * engagement and the request is pending. The status changes to
     * <code>ENABLED</code> when your request is fully processed.</p> <p>If
     * <code>DISABLED</code>, the SRT will not proactively notify contacts about
     * escalations or to initiate proactive customer support. </p>
     */
    inline bool ProactiveEngagementStatusHasBeenSet() const { return m_proactiveEngagementStatusHasBeenSet; }

    /**
     * <p>If <code>ENABLED</code>, the Shield Response Team (SRT) will use email and
     * phone to notify contacts about escalations to the SRT and to initiate proactive
     * customer support.</p> <p>If <code>PENDING</code>, you have requested proactive
     * engagement and the request is pending. The status changes to
     * <code>ENABLED</code> when your request is fully processed.</p> <p>If
     * <code>DISABLED</code>, the SRT will not proactively notify contacts about
     * escalations or to initiate proactive customer support. </p>
     */
    inline void SetProactiveEngagementStatus(const ProactiveEngagementStatus& value) { m_proactiveEngagementStatusHasBeenSet = true; m_proactiveEngagementStatus = value; }

    /**
     * <p>If <code>ENABLED</code>, the Shield Response Team (SRT) will use email and
     * phone to notify contacts about escalations to the SRT and to initiate proactive
     * customer support.</p> <p>If <code>PENDING</code>, you have requested proactive
     * engagement and the request is pending. The status changes to
     * <code>ENABLED</code> when your request is fully processed.</p> <p>If
     * <code>DISABLED</code>, the SRT will not proactively notify contacts about
     * escalations or to initiate proactive customer support. </p>
     */
    inline void SetProactiveEngagementStatus(ProactiveEngagementStatus&& value) { m_proactiveEngagementStatusHasBeenSet = true; m_proactiveEngagementStatus = std::move(value); }

    /**
     * <p>If <code>ENABLED</code>, the Shield Response Team (SRT) will use email and
     * phone to notify contacts about escalations to the SRT and to initiate proactive
     * customer support.</p> <p>If <code>PENDING</code>, you have requested proactive
     * engagement and the request is pending. The status changes to
     * <code>ENABLED</code> when your request is fully processed.</p> <p>If
     * <code>DISABLED</code>, the SRT will not proactively notify contacts about
     * escalations or to initiate proactive customer support. </p>
     */
    inline Subscription& WithProactiveEngagementStatus(const ProactiveEngagementStatus& value) { SetProactiveEngagementStatus(value); return *this;}

    /**
     * <p>If <code>ENABLED</code>, the Shield Response Team (SRT) will use email and
     * phone to notify contacts about escalations to the SRT and to initiate proactive
     * customer support.</p> <p>If <code>PENDING</code>, you have requested proactive
     * engagement and the request is pending. The status changes to
     * <code>ENABLED</code> when your request is fully processed.</p> <p>If
     * <code>DISABLED</code>, the SRT will not proactively notify contacts about
     * escalations or to initiate proactive customer support. </p>
     */
    inline Subscription& WithProactiveEngagementStatus(ProactiveEngagementStatus&& value) { SetProactiveEngagementStatus(std::move(value)); return *this;}


    /**
     * <p>Limits settings for your subscription. </p>
     */
    inline const SubscriptionLimits& GetSubscriptionLimits() const{ return m_subscriptionLimits; }

    /**
     * <p>Limits settings for your subscription. </p>
     */
    inline bool SubscriptionLimitsHasBeenSet() const { return m_subscriptionLimitsHasBeenSet; }

    /**
     * <p>Limits settings for your subscription. </p>
     */
    inline void SetSubscriptionLimits(const SubscriptionLimits& value) { m_subscriptionLimitsHasBeenSet = true; m_subscriptionLimits = value; }

    /**
     * <p>Limits settings for your subscription. </p>
     */
    inline void SetSubscriptionLimits(SubscriptionLimits&& value) { m_subscriptionLimitsHasBeenSet = true; m_subscriptionLimits = std::move(value); }

    /**
     * <p>Limits settings for your subscription. </p>
     */
    inline Subscription& WithSubscriptionLimits(const SubscriptionLimits& value) { SetSubscriptionLimits(value); return *this;}

    /**
     * <p>Limits settings for your subscription. </p>
     */
    inline Subscription& WithSubscriptionLimits(SubscriptionLimits&& value) { SetSubscriptionLimits(std::move(value)); return *this;}


    /**
     * <p>The ARN (Amazon Resource Name) of the subscription.</p>
     */
    inline const Aws::String& GetSubscriptionArn() const{ return m_subscriptionArn; }

    /**
     * <p>The ARN (Amazon Resource Name) of the subscription.</p>
     */
    inline bool SubscriptionArnHasBeenSet() const { return m_subscriptionArnHasBeenSet; }

    /**
     * <p>The ARN (Amazon Resource Name) of the subscription.</p>
     */
    inline void SetSubscriptionArn(const Aws::String& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = value; }

    /**
     * <p>The ARN (Amazon Resource Name) of the subscription.</p>
     */
    inline void SetSubscriptionArn(Aws::String&& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the subscription.</p>
     */
    inline void SetSubscriptionArn(const char* value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the subscription.</p>
     */
    inline Subscription& WithSubscriptionArn(const Aws::String& value) { SetSubscriptionArn(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the subscription.</p>
     */
    inline Subscription& WithSubscriptionArn(Aws::String&& value) { SetSubscriptionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the subscription.</p>
     */
    inline Subscription& WithSubscriptionArn(const char* value) { SetSubscriptionArn(value); return *this;}

  private:

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    long long m_timeCommitmentInSeconds;
    bool m_timeCommitmentInSecondsHasBeenSet = false;

    AutoRenew m_autoRenew;
    bool m_autoRenewHasBeenSet = false;

    Aws::Vector<Limit> m_limits;
    bool m_limitsHasBeenSet = false;

    ProactiveEngagementStatus m_proactiveEngagementStatus;
    bool m_proactiveEngagementStatusHasBeenSet = false;

    SubscriptionLimits m_subscriptionLimits;
    bool m_subscriptionLimitsHasBeenSet = false;

    Aws::String m_subscriptionArn;
    bool m_subscriptionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
