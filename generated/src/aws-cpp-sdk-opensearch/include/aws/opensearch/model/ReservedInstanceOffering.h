/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/OpenSearchPartitionInstanceType.h>
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
   * <p>Details of an OpenSearch Reserved Instance offering.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ReservedInstanceOffering">AWS
   * API Reference</a></p>
   */
  class ReservedInstanceOffering
  {
  public:
    AWS_OPENSEARCHSERVICE_API ReservedInstanceOffering();
    AWS_OPENSEARCHSERVICE_API ReservedInstanceOffering(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API ReservedInstanceOffering& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the Reserved Instance offering.</p>
     */
    inline const Aws::String& GetReservedInstanceOfferingId() const{ return m_reservedInstanceOfferingId; }

    /**
     * <p>The unique identifier of the Reserved Instance offering.</p>
     */
    inline bool ReservedInstanceOfferingIdHasBeenSet() const { return m_reservedInstanceOfferingIdHasBeenSet; }

    /**
     * <p>The unique identifier of the Reserved Instance offering.</p>
     */
    inline void SetReservedInstanceOfferingId(const Aws::String& value) { m_reservedInstanceOfferingIdHasBeenSet = true; m_reservedInstanceOfferingId = value; }

    /**
     * <p>The unique identifier of the Reserved Instance offering.</p>
     */
    inline void SetReservedInstanceOfferingId(Aws::String&& value) { m_reservedInstanceOfferingIdHasBeenSet = true; m_reservedInstanceOfferingId = std::move(value); }

    /**
     * <p>The unique identifier of the Reserved Instance offering.</p>
     */
    inline void SetReservedInstanceOfferingId(const char* value) { m_reservedInstanceOfferingIdHasBeenSet = true; m_reservedInstanceOfferingId.assign(value); }

    /**
     * <p>The unique identifier of the Reserved Instance offering.</p>
     */
    inline ReservedInstanceOffering& WithReservedInstanceOfferingId(const Aws::String& value) { SetReservedInstanceOfferingId(value); return *this;}

    /**
     * <p>The unique identifier of the Reserved Instance offering.</p>
     */
    inline ReservedInstanceOffering& WithReservedInstanceOfferingId(Aws::String&& value) { SetReservedInstanceOfferingId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Reserved Instance offering.</p>
     */
    inline ReservedInstanceOffering& WithReservedInstanceOfferingId(const char* value) { SetReservedInstanceOfferingId(value); return *this;}


    /**
     * <p>The OpenSearch instance type offered by the Reserved Instance offering.</p>
     */
    inline const OpenSearchPartitionInstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The OpenSearch instance type offered by the Reserved Instance offering.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The OpenSearch instance type offered by the Reserved Instance offering.</p>
     */
    inline void SetInstanceType(const OpenSearchPartitionInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The OpenSearch instance type offered by the Reserved Instance offering.</p>
     */
    inline void SetInstanceType(OpenSearchPartitionInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The OpenSearch instance type offered by the Reserved Instance offering.</p>
     */
    inline ReservedInstanceOffering& WithInstanceType(const OpenSearchPartitionInstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The OpenSearch instance type offered by the Reserved Instance offering.</p>
     */
    inline ReservedInstanceOffering& WithInstanceType(OpenSearchPartitionInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The duration, in seconds, for which the offering will reserve the OpenSearch
     * instance.</p>
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * <p>The duration, in seconds, for which the offering will reserve the OpenSearch
     * instance.</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>The duration, in seconds, for which the offering will reserve the OpenSearch
     * instance.</p>
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The duration, in seconds, for which the offering will reserve the OpenSearch
     * instance.</p>
     */
    inline ReservedInstanceOffering& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * <p>The upfront fixed charge you will pay to purchase the specific Reserved
     * Instance offering.</p>
     */
    inline double GetFixedPrice() const{ return m_fixedPrice; }

    /**
     * <p>The upfront fixed charge you will pay to purchase the specific Reserved
     * Instance offering.</p>
     */
    inline bool FixedPriceHasBeenSet() const { return m_fixedPriceHasBeenSet; }

    /**
     * <p>The upfront fixed charge you will pay to purchase the specific Reserved
     * Instance offering.</p>
     */
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }

    /**
     * <p>The upfront fixed charge you will pay to purchase the specific Reserved
     * Instance offering.</p>
     */
    inline ReservedInstanceOffering& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}


    /**
     * <p>The hourly rate at which you're charged for the domain using this Reserved
     * Instance.</p>
     */
    inline double GetUsagePrice() const{ return m_usagePrice; }

    /**
     * <p>The hourly rate at which you're charged for the domain using this Reserved
     * Instance.</p>
     */
    inline bool UsagePriceHasBeenSet() const { return m_usagePriceHasBeenSet; }

    /**
     * <p>The hourly rate at which you're charged for the domain using this Reserved
     * Instance.</p>
     */
    inline void SetUsagePrice(double value) { m_usagePriceHasBeenSet = true; m_usagePrice = value; }

    /**
     * <p>The hourly rate at which you're charged for the domain using this Reserved
     * Instance.</p>
     */
    inline ReservedInstanceOffering& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}


    /**
     * <p>The currency code for the Reserved Instance offering.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>The currency code for the Reserved Instance offering.</p>
     */
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }

    /**
     * <p>The currency code for the Reserved Instance offering.</p>
     */
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * <p>The currency code for the Reserved Instance offering.</p>
     */
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }

    /**
     * <p>The currency code for the Reserved Instance offering.</p>
     */
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }

    /**
     * <p>The currency code for the Reserved Instance offering.</p>
     */
    inline ReservedInstanceOffering& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>The currency code for the Reserved Instance offering.</p>
     */
    inline ReservedInstanceOffering& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}

    /**
     * <p>The currency code for the Reserved Instance offering.</p>
     */
    inline ReservedInstanceOffering& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}


    /**
     * <p>Payment option for the Reserved Instance offering</p>
     */
    inline const ReservedInstancePaymentOption& GetPaymentOption() const{ return m_paymentOption; }

    /**
     * <p>Payment option for the Reserved Instance offering</p>
     */
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }

    /**
     * <p>Payment option for the Reserved Instance offering</p>
     */
    inline void SetPaymentOption(const ReservedInstancePaymentOption& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }

    /**
     * <p>Payment option for the Reserved Instance offering</p>
     */
    inline void SetPaymentOption(ReservedInstancePaymentOption&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }

    /**
     * <p>Payment option for the Reserved Instance offering</p>
     */
    inline ReservedInstanceOffering& WithPaymentOption(const ReservedInstancePaymentOption& value) { SetPaymentOption(value); return *this;}

    /**
     * <p>Payment option for the Reserved Instance offering</p>
     */
    inline ReservedInstanceOffering& WithPaymentOption(ReservedInstancePaymentOption&& value) { SetPaymentOption(std::move(value)); return *this;}


    /**
     * <p>The recurring charge to your account, regardless of whether you creates any
     * domains using the offering.</p>
     */
    inline const Aws::Vector<RecurringCharge>& GetRecurringCharges() const{ return m_recurringCharges; }

    /**
     * <p>The recurring charge to your account, regardless of whether you creates any
     * domains using the offering.</p>
     */
    inline bool RecurringChargesHasBeenSet() const { return m_recurringChargesHasBeenSet; }

    /**
     * <p>The recurring charge to your account, regardless of whether you creates any
     * domains using the offering.</p>
     */
    inline void SetRecurringCharges(const Aws::Vector<RecurringCharge>& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = value; }

    /**
     * <p>The recurring charge to your account, regardless of whether you creates any
     * domains using the offering.</p>
     */
    inline void SetRecurringCharges(Aws::Vector<RecurringCharge>&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = std::move(value); }

    /**
     * <p>The recurring charge to your account, regardless of whether you creates any
     * domains using the offering.</p>
     */
    inline ReservedInstanceOffering& WithRecurringCharges(const Aws::Vector<RecurringCharge>& value) { SetRecurringCharges(value); return *this;}

    /**
     * <p>The recurring charge to your account, regardless of whether you creates any
     * domains using the offering.</p>
     */
    inline ReservedInstanceOffering& WithRecurringCharges(Aws::Vector<RecurringCharge>&& value) { SetRecurringCharges(std::move(value)); return *this;}

    /**
     * <p>The recurring charge to your account, regardless of whether you creates any
     * domains using the offering.</p>
     */
    inline ReservedInstanceOffering& AddRecurringCharges(const RecurringCharge& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(value); return *this; }

    /**
     * <p>The recurring charge to your account, regardless of whether you creates any
     * domains using the offering.</p>
     */
    inline ReservedInstanceOffering& AddRecurringCharges(RecurringCharge&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_reservedInstanceOfferingId;
    bool m_reservedInstanceOfferingIdHasBeenSet = false;

    OpenSearchPartitionInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_duration;
    bool m_durationHasBeenSet = false;

    double m_fixedPrice;
    bool m_fixedPriceHasBeenSet = false;

    double m_usagePrice;
    bool m_usagePriceHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    ReservedInstancePaymentOption m_paymentOption;
    bool m_paymentOptionHasBeenSet = false;

    Aws::Vector<RecurringCharge> m_recurringCharges;
    bool m_recurringChargesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
