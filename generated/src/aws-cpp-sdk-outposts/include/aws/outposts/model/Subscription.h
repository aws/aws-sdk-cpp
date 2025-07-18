/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/SubscriptionType.h>
#include <aws/outposts/model/SubscriptionStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Outposts
{
namespace Model
{

  /**
   * <p>Provides information about your Amazon Web Services Outposts
   * subscriptions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/Subscription">AWS
   * API Reference</a></p>
   */
  class Subscription
  {
  public:
    AWS_OUTPOSTS_API Subscription() = default;
    AWS_OUTPOSTS_API Subscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Subscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the subscription that appears on the Amazon Web Services Billing
     * Center console.</p>
     */
    inline const Aws::String& GetSubscriptionId() const { return m_subscriptionId; }
    inline bool SubscriptionIdHasBeenSet() const { return m_subscriptionIdHasBeenSet; }
    template<typename SubscriptionIdT = Aws::String>
    void SetSubscriptionId(SubscriptionIdT&& value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId = std::forward<SubscriptionIdT>(value); }
    template<typename SubscriptionIdT = Aws::String>
    Subscription& WithSubscriptionId(SubscriptionIdT&& value) { SetSubscriptionId(std::forward<SubscriptionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of subscription which can be one of the following:</p> <ul> <li> <p>
     * <b>ORIGINAL</b> - The first order on the Amazon Web Services Outposts.</p> </li>
     * <li> <p> <b>RENEWAL</b> - Renewal requests, both month to month and longer
     * term.</p> </li> <li> <p> <b>CAPACITY_INCREASE</b> - Capacity scaling orders.</p>
     * </li> </ul>
     */
    inline SubscriptionType GetSubscriptionType() const { return m_subscriptionType; }
    inline bool SubscriptionTypeHasBeenSet() const { return m_subscriptionTypeHasBeenSet; }
    inline void SetSubscriptionType(SubscriptionType value) { m_subscriptionTypeHasBeenSet = true; m_subscriptionType = value; }
    inline Subscription& WithSubscriptionType(SubscriptionType value) { SetSubscriptionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of subscription which can be one of the following:</p> <ul> <li>
     * <p> <b>INACTIVE</b> - Subscription requests that are inactive.</p> </li> <li>
     * <p> <b>ACTIVE</b> - Subscription requests that are in progress and have an end
     * date in the future.</p> </li> <li> <p> <b>CANCELLED</b> - Subscription requests
     * that are cancelled.</p> </li> </ul>
     */
    inline SubscriptionStatus GetSubscriptionStatus() const { return m_subscriptionStatus; }
    inline bool SubscriptionStatusHasBeenSet() const { return m_subscriptionStatusHasBeenSet; }
    inline void SetSubscriptionStatus(SubscriptionStatus value) { m_subscriptionStatusHasBeenSet = true; m_subscriptionStatus = value; }
    inline Subscription& WithSubscriptionStatus(SubscriptionStatus value) { SetSubscriptionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order ID for your subscription.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrderIds() const { return m_orderIds; }
    inline bool OrderIdsHasBeenSet() const { return m_orderIdsHasBeenSet; }
    template<typename OrderIdsT = Aws::Vector<Aws::String>>
    void SetOrderIds(OrderIdsT&& value) { m_orderIdsHasBeenSet = true; m_orderIds = std::forward<OrderIdsT>(value); }
    template<typename OrderIdsT = Aws::Vector<Aws::String>>
    Subscription& WithOrderIds(OrderIdsT&& value) { SetOrderIds(std::forward<OrderIdsT>(value)); return *this;}
    template<typename OrderIdsT = Aws::String>
    Subscription& AddOrderIds(OrderIdsT&& value) { m_orderIdsHasBeenSet = true; m_orderIds.emplace_back(std::forward<OrderIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date your subscription starts.</p>
     */
    inline const Aws::Utils::DateTime& GetBeginDate() const { return m_beginDate; }
    inline bool BeginDateHasBeenSet() const { return m_beginDateHasBeenSet; }
    template<typename BeginDateT = Aws::Utils::DateTime>
    void SetBeginDate(BeginDateT&& value) { m_beginDateHasBeenSet = true; m_beginDate = std::forward<BeginDateT>(value); }
    template<typename BeginDateT = Aws::Utils::DateTime>
    Subscription& WithBeginDate(BeginDateT&& value) { SetBeginDate(std::forward<BeginDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date your subscription ends.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    template<typename EndDateT = Aws::Utils::DateTime>
    void SetEndDate(EndDateT&& value) { m_endDateHasBeenSet = true; m_endDate = std::forward<EndDateT>(value); }
    template<typename EndDateT = Aws::Utils::DateTime>
    Subscription& WithEndDate(EndDateT&& value) { SetEndDate(std::forward<EndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount you are billed each month in the subscription period.</p>
     */
    inline double GetMonthlyRecurringPrice() const { return m_monthlyRecurringPrice; }
    inline bool MonthlyRecurringPriceHasBeenSet() const { return m_monthlyRecurringPriceHasBeenSet; }
    inline void SetMonthlyRecurringPrice(double value) { m_monthlyRecurringPriceHasBeenSet = true; m_monthlyRecurringPrice = value; }
    inline Subscription& WithMonthlyRecurringPrice(double value) { SetMonthlyRecurringPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount billed when the subscription is created. This is a one-time
     * charge.</p>
     */
    inline double GetUpfrontPrice() const { return m_upfrontPrice; }
    inline bool UpfrontPriceHasBeenSet() const { return m_upfrontPriceHasBeenSet; }
    inline void SetUpfrontPrice(double value) { m_upfrontPriceHasBeenSet = true; m_upfrontPrice = value; }
    inline Subscription& WithUpfrontPrice(double value) { SetUpfrontPrice(value); return *this;}
    ///@}
  private:

    Aws::String m_subscriptionId;
    bool m_subscriptionIdHasBeenSet = false;

    SubscriptionType m_subscriptionType{SubscriptionType::NOT_SET};
    bool m_subscriptionTypeHasBeenSet = false;

    SubscriptionStatus m_subscriptionStatus{SubscriptionStatus::NOT_SET};
    bool m_subscriptionStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_orderIds;
    bool m_orderIdsHasBeenSet = false;

    Aws::Utils::DateTime m_beginDate{};
    bool m_beginDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate{};
    bool m_endDateHasBeenSet = false;

    double m_monthlyRecurringPrice{0.0};
    bool m_monthlyRecurringPriceHasBeenSet = false;

    double m_upfrontPrice{0.0};
    bool m_upfrontPriceHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
