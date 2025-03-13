/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/OpenSearchPartitionInstanceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/opensearch/model/ReservedInstancePaymentOption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/RecurringCharge.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Details of an OpenSearch Reserved Instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ReservedInstance">AWS
   * API Reference</a></p>
   */
  class ReservedInstance
  {
  public:
    AWS_OPENSEARCHSERVICE_API ReservedInstance() = default;
    AWS_OPENSEARCHSERVICE_API ReservedInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API ReservedInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The customer-specified identifier to track this reservation.</p>
     */
    inline const Aws::String& GetReservationName() const { return m_reservationName; }
    inline bool ReservationNameHasBeenSet() const { return m_reservationNameHasBeenSet; }
    template<typename ReservationNameT = Aws::String>
    void SetReservationName(ReservationNameT&& value) { m_reservationNameHasBeenSet = true; m_reservationName = std::forward<ReservationNameT>(value); }
    template<typename ReservationNameT = Aws::String>
    ReservedInstance& WithReservationName(ReservationNameT&& value) { SetReservationName(std::forward<ReservationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline const Aws::String& GetReservedInstanceId() const { return m_reservedInstanceId; }
    inline bool ReservedInstanceIdHasBeenSet() const { return m_reservedInstanceIdHasBeenSet; }
    template<typename ReservedInstanceIdT = Aws::String>
    void SetReservedInstanceId(ReservedInstanceIdT&& value) { m_reservedInstanceIdHasBeenSet = true; m_reservedInstanceId = std::forward<ReservedInstanceIdT>(value); }
    template<typename ReservedInstanceIdT = Aws::String>
    ReservedInstance& WithReservedInstanceId(ReservedInstanceIdT&& value) { SetReservedInstanceId(std::forward<ReservedInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the billing subscription.</p>
     */
    inline long long GetBillingSubscriptionId() const { return m_billingSubscriptionId; }
    inline bool BillingSubscriptionIdHasBeenSet() const { return m_billingSubscriptionIdHasBeenSet; }
    inline void SetBillingSubscriptionId(long long value) { m_billingSubscriptionIdHasBeenSet = true; m_billingSubscriptionId = value; }
    inline ReservedInstance& WithBillingSubscriptionId(long long value) { SetBillingSubscriptionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Reserved Instance offering.</p>
     */
    inline const Aws::String& GetReservedInstanceOfferingId() const { return m_reservedInstanceOfferingId; }
    inline bool ReservedInstanceOfferingIdHasBeenSet() const { return m_reservedInstanceOfferingIdHasBeenSet; }
    template<typename ReservedInstanceOfferingIdT = Aws::String>
    void SetReservedInstanceOfferingId(ReservedInstanceOfferingIdT&& value) { m_reservedInstanceOfferingIdHasBeenSet = true; m_reservedInstanceOfferingId = std::forward<ReservedInstanceOfferingIdT>(value); }
    template<typename ReservedInstanceOfferingIdT = Aws::String>
    ReservedInstance& WithReservedInstanceOfferingId(ReservedInstanceOfferingIdT&& value) { SetReservedInstanceOfferingId(std::forward<ReservedInstanceOfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OpenSearch instance type offered by theReserved Instance offering.</p>
     */
    inline OpenSearchPartitionInstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(OpenSearchPartitionInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline ReservedInstance& WithInstanceType(OpenSearchPartitionInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the reservation was purchased.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ReservedInstance& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration, in seconds, for which the OpenSearch instance is reserved.</p>
     */
    inline int GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline ReservedInstance& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upfront fixed charge you will paid to purchase the specific Reserved
     * Instance offering.</p>
     */
    inline double GetFixedPrice() const { return m_fixedPrice; }
    inline bool FixedPriceHasBeenSet() const { return m_fixedPriceHasBeenSet; }
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }
    inline ReservedInstance& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hourly rate at which you're charged for the domain using this Reserved
     * Instance.</p>
     */
    inline double GetUsagePrice() const { return m_usagePrice; }
    inline bool UsagePriceHasBeenSet() const { return m_usagePriceHasBeenSet; }
    inline void SetUsagePrice(double value) { m_usagePriceHasBeenSet = true; m_usagePrice = value; }
    inline ReservedInstance& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code for the offering.</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    ReservedInstance& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of OpenSearch instances that have been reserved.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline ReservedInstance& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the Reserved Instance.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    ReservedInstance& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment option as defined in the Reserved Instance offering.</p>
     */
    inline ReservedInstancePaymentOption GetPaymentOption() const { return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(ReservedInstancePaymentOption value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline ReservedInstance& WithPaymentOption(ReservedInstancePaymentOption value) { SetPaymentOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recurring charge to your account, regardless of whether you create any
     * domains using the Reserved Instance offering.</p>
     */
    inline const Aws::Vector<RecurringCharge>& GetRecurringCharges() const { return m_recurringCharges; }
    inline bool RecurringChargesHasBeenSet() const { return m_recurringChargesHasBeenSet; }
    template<typename RecurringChargesT = Aws::Vector<RecurringCharge>>
    void SetRecurringCharges(RecurringChargesT&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = std::forward<RecurringChargesT>(value); }
    template<typename RecurringChargesT = Aws::Vector<RecurringCharge>>
    ReservedInstance& WithRecurringCharges(RecurringChargesT&& value) { SetRecurringCharges(std::forward<RecurringChargesT>(value)); return *this;}
    template<typename RecurringChargesT = RecurringCharge>
    ReservedInstance& AddRecurringCharges(RecurringChargesT&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.emplace_back(std::forward<RecurringChargesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_reservationName;
    bool m_reservationNameHasBeenSet = false;

    Aws::String m_reservedInstanceId;
    bool m_reservedInstanceIdHasBeenSet = false;

    long long m_billingSubscriptionId{0};
    bool m_billingSubscriptionIdHasBeenSet = false;

    Aws::String m_reservedInstanceOfferingId;
    bool m_reservedInstanceOfferingIdHasBeenSet = false;

    OpenSearchPartitionInstanceType m_instanceType{OpenSearchPartitionInstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    int m_duration{0};
    bool m_durationHasBeenSet = false;

    double m_fixedPrice{0.0};
    bool m_fixedPriceHasBeenSet = false;

    double m_usagePrice{0.0};
    bool m_usagePriceHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    ReservedInstancePaymentOption m_paymentOption{ReservedInstancePaymentOption::NOT_SET};
    bool m_paymentOptionHasBeenSet = false;

    Aws::Vector<RecurringCharge> m_recurringCharges;
    bool m_recurringChargesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
