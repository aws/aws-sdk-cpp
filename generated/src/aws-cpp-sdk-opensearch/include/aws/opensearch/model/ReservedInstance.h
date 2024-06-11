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
    AWS_OPENSEARCHSERVICE_API ReservedInstance();
    AWS_OPENSEARCHSERVICE_API ReservedInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API ReservedInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The customer-specified identifier to track this reservation.</p>
     */
    inline const Aws::String& GetReservationName() const{ return m_reservationName; }
    inline bool ReservationNameHasBeenSet() const { return m_reservationNameHasBeenSet; }
    inline void SetReservationName(const Aws::String& value) { m_reservationNameHasBeenSet = true; m_reservationName = value; }
    inline void SetReservationName(Aws::String&& value) { m_reservationNameHasBeenSet = true; m_reservationName = std::move(value); }
    inline void SetReservationName(const char* value) { m_reservationNameHasBeenSet = true; m_reservationName.assign(value); }
    inline ReservedInstance& WithReservationName(const Aws::String& value) { SetReservationName(value); return *this;}
    inline ReservedInstance& WithReservationName(Aws::String&& value) { SetReservationName(std::move(value)); return *this;}
    inline ReservedInstance& WithReservationName(const char* value) { SetReservationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline const Aws::String& GetReservedInstanceId() const{ return m_reservedInstanceId; }
    inline bool ReservedInstanceIdHasBeenSet() const { return m_reservedInstanceIdHasBeenSet; }
    inline void SetReservedInstanceId(const Aws::String& value) { m_reservedInstanceIdHasBeenSet = true; m_reservedInstanceId = value; }
    inline void SetReservedInstanceId(Aws::String&& value) { m_reservedInstanceIdHasBeenSet = true; m_reservedInstanceId = std::move(value); }
    inline void SetReservedInstanceId(const char* value) { m_reservedInstanceIdHasBeenSet = true; m_reservedInstanceId.assign(value); }
    inline ReservedInstance& WithReservedInstanceId(const Aws::String& value) { SetReservedInstanceId(value); return *this;}
    inline ReservedInstance& WithReservedInstanceId(Aws::String&& value) { SetReservedInstanceId(std::move(value)); return *this;}
    inline ReservedInstance& WithReservedInstanceId(const char* value) { SetReservedInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the billing subscription.</p>
     */
    inline long long GetBillingSubscriptionId() const{ return m_billingSubscriptionId; }
    inline bool BillingSubscriptionIdHasBeenSet() const { return m_billingSubscriptionIdHasBeenSet; }
    inline void SetBillingSubscriptionId(long long value) { m_billingSubscriptionIdHasBeenSet = true; m_billingSubscriptionId = value; }
    inline ReservedInstance& WithBillingSubscriptionId(long long value) { SetBillingSubscriptionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Reserved Instance offering.</p>
     */
    inline const Aws::String& GetReservedInstanceOfferingId() const{ return m_reservedInstanceOfferingId; }
    inline bool ReservedInstanceOfferingIdHasBeenSet() const { return m_reservedInstanceOfferingIdHasBeenSet; }
    inline void SetReservedInstanceOfferingId(const Aws::String& value) { m_reservedInstanceOfferingIdHasBeenSet = true; m_reservedInstanceOfferingId = value; }
    inline void SetReservedInstanceOfferingId(Aws::String&& value) { m_reservedInstanceOfferingIdHasBeenSet = true; m_reservedInstanceOfferingId = std::move(value); }
    inline void SetReservedInstanceOfferingId(const char* value) { m_reservedInstanceOfferingIdHasBeenSet = true; m_reservedInstanceOfferingId.assign(value); }
    inline ReservedInstance& WithReservedInstanceOfferingId(const Aws::String& value) { SetReservedInstanceOfferingId(value); return *this;}
    inline ReservedInstance& WithReservedInstanceOfferingId(Aws::String&& value) { SetReservedInstanceOfferingId(std::move(value)); return *this;}
    inline ReservedInstance& WithReservedInstanceOfferingId(const char* value) { SetReservedInstanceOfferingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OpenSearch instance type offered by theReserved Instance offering.</p>
     */
    inline const OpenSearchPartitionInstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const OpenSearchPartitionInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(OpenSearchPartitionInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline ReservedInstance& WithInstanceType(const OpenSearchPartitionInstanceType& value) { SetInstanceType(value); return *this;}
    inline ReservedInstance& WithInstanceType(OpenSearchPartitionInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the reservation was purchased.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ReservedInstance& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ReservedInstance& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration, in seconds, for which the OpenSearch instance is reserved.</p>
     */
    inline int GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline ReservedInstance& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upfront fixed charge you will paid to purchase the specific Reserved
     * Instance offering.</p>
     */
    inline double GetFixedPrice() const{ return m_fixedPrice; }
    inline bool FixedPriceHasBeenSet() const { return m_fixedPriceHasBeenSet; }
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }
    inline ReservedInstance& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hourly rate at which you're charged for the domain using this Reserved
     * Instance.</p>
     */
    inline double GetUsagePrice() const{ return m_usagePrice; }
    inline bool UsagePriceHasBeenSet() const { return m_usagePriceHasBeenSet; }
    inline void SetUsagePrice(double value) { m_usagePriceHasBeenSet = true; m_usagePrice = value; }
    inline ReservedInstance& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code for the offering.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }
    inline ReservedInstance& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}
    inline ReservedInstance& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}
    inline ReservedInstance& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of OpenSearch instances that have been reserved.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline ReservedInstance& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the Reserved Instance.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline ReservedInstance& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline ReservedInstance& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline ReservedInstance& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment option as defined in the Reserved Instance offering.</p>
     */
    inline const ReservedInstancePaymentOption& GetPaymentOption() const{ return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(const ReservedInstancePaymentOption& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline void SetPaymentOption(ReservedInstancePaymentOption&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }
    inline ReservedInstance& WithPaymentOption(const ReservedInstancePaymentOption& value) { SetPaymentOption(value); return *this;}
    inline ReservedInstance& WithPaymentOption(ReservedInstancePaymentOption&& value) { SetPaymentOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recurring charge to your account, regardless of whether you create any
     * domains using the Reserved Instance offering.</p>
     */
    inline const Aws::Vector<RecurringCharge>& GetRecurringCharges() const{ return m_recurringCharges; }
    inline bool RecurringChargesHasBeenSet() const { return m_recurringChargesHasBeenSet; }
    inline void SetRecurringCharges(const Aws::Vector<RecurringCharge>& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = value; }
    inline void SetRecurringCharges(Aws::Vector<RecurringCharge>&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = std::move(value); }
    inline ReservedInstance& WithRecurringCharges(const Aws::Vector<RecurringCharge>& value) { SetRecurringCharges(value); return *this;}
    inline ReservedInstance& WithRecurringCharges(Aws::Vector<RecurringCharge>&& value) { SetRecurringCharges(std::move(value)); return *this;}
    inline ReservedInstance& AddRecurringCharges(const RecurringCharge& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(value); return *this; }
    inline ReservedInstance& AddRecurringCharges(RecurringCharge&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_reservationName;
    bool m_reservationNameHasBeenSet = false;

    Aws::String m_reservedInstanceId;
    bool m_reservedInstanceIdHasBeenSet = false;

    long long m_billingSubscriptionId;
    bool m_billingSubscriptionIdHasBeenSet = false;

    Aws::String m_reservedInstanceOfferingId;
    bool m_reservedInstanceOfferingIdHasBeenSet = false;

    OpenSearchPartitionInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    int m_duration;
    bool m_durationHasBeenSet = false;

    double m_fixedPrice;
    bool m_fixedPriceHasBeenSet = false;

    double m_usagePrice;
    bool m_usagePriceHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    ReservedInstancePaymentOption m_paymentOption;
    bool m_paymentOptionHasBeenSet = false;

    Aws::Vector<RecurringCharge> m_recurringCharges;
    bool m_recurringChargesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
