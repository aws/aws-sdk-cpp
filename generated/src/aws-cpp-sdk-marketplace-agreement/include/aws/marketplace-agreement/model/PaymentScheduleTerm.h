/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-agreement/model/ScheduleItem.h>
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
namespace AgreementService
{
namespace Model
{

  /**
   * <p>Defines an installment-based pricing model where customers are charged a
   * fixed price on different dates during the agreement validity period. This is
   * used most commonly for flexible payment schedule pricing.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/PaymentScheduleTerm">AWS
   * API Reference</a></p>
   */
  class PaymentScheduleTerm
  {
  public:
    AWS_AGREEMENTSERVICE_API PaymentScheduleTerm();
    AWS_AGREEMENTSERVICE_API PaymentScheduleTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API PaymentScheduleTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the currency for the prices mentioned in the term. </p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>Defines the currency for the prices mentioned in the term. </p>
     */
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }

    /**
     * <p>Defines the currency for the prices mentioned in the term. </p>
     */
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * <p>Defines the currency for the prices mentioned in the term. </p>
     */
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }

    /**
     * <p>Defines the currency for the prices mentioned in the term. </p>
     */
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }

    /**
     * <p>Defines the currency for the prices mentioned in the term. </p>
     */
    inline PaymentScheduleTerm& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>Defines the currency for the prices mentioned in the term. </p>
     */
    inline PaymentScheduleTerm& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}

    /**
     * <p>Defines the currency for the prices mentioned in the term. </p>
     */
    inline PaymentScheduleTerm& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}


    /**
     * <p>List of the payment schedule where each element defines one installment of
     * payment. It contains the information necessary for calculating the price.</p>
     */
    inline const Aws::Vector<ScheduleItem>& GetSchedule() const{ return m_schedule; }

    /**
     * <p>List of the payment schedule where each element defines one installment of
     * payment. It contains the information necessary for calculating the price.</p>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p>List of the payment schedule where each element defines one installment of
     * payment. It contains the information necessary for calculating the price.</p>
     */
    inline void SetSchedule(const Aws::Vector<ScheduleItem>& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>List of the payment schedule where each element defines one installment of
     * payment. It contains the information necessary for calculating the price.</p>
     */
    inline void SetSchedule(Aws::Vector<ScheduleItem>&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>List of the payment schedule where each element defines one installment of
     * payment. It contains the information necessary for calculating the price.</p>
     */
    inline PaymentScheduleTerm& WithSchedule(const Aws::Vector<ScheduleItem>& value) { SetSchedule(value); return *this;}

    /**
     * <p>List of the payment schedule where each element defines one installment of
     * payment. It contains the information necessary for calculating the price.</p>
     */
    inline PaymentScheduleTerm& WithSchedule(Aws::Vector<ScheduleItem>&& value) { SetSchedule(std::move(value)); return *this;}

    /**
     * <p>List of the payment schedule where each element defines one installment of
     * payment. It contains the information necessary for calculating the price.</p>
     */
    inline PaymentScheduleTerm& AddSchedule(const ScheduleItem& value) { m_scheduleHasBeenSet = true; m_schedule.push_back(value); return *this; }

    /**
     * <p>List of the payment schedule where each element defines one installment of
     * payment. It contains the information necessary for calculating the price.</p>
     */
    inline PaymentScheduleTerm& AddSchedule(ScheduleItem&& value) { m_scheduleHasBeenSet = true; m_schedule.push_back(std::move(value)); return *this; }


    /**
     * <p>Type of the term.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>Type of the term.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Type of the term.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Type of the term.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Type of the term.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>Type of the term.</p>
     */
    inline PaymentScheduleTerm& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>Type of the term.</p>
     */
    inline PaymentScheduleTerm& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>Type of the term.</p>
     */
    inline PaymentScheduleTerm& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    Aws::Vector<ScheduleItem> m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
