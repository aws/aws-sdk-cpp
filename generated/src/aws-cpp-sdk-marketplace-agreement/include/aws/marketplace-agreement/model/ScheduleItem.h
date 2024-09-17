/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
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
namespace AgreementService
{
namespace Model
{

  /**
   * <p>An individual installment of the payment that includes the date and amount of
   * the charge.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/ScheduleItem">AWS
   * API Reference</a></p>
   */
  class ScheduleItem
  {
  public:
    AWS_AGREEMENTSERVICE_API ScheduleItem();
    AWS_AGREEMENTSERVICE_API ScheduleItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API ScheduleItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The price that the customer would pay on the scheduled date (chargeDate).</p>
     */
    inline const Aws::String& GetChargeAmount() const{ return m_chargeAmount; }
    inline bool ChargeAmountHasBeenSet() const { return m_chargeAmountHasBeenSet; }
    inline void SetChargeAmount(const Aws::String& value) { m_chargeAmountHasBeenSet = true; m_chargeAmount = value; }
    inline void SetChargeAmount(Aws::String&& value) { m_chargeAmountHasBeenSet = true; m_chargeAmount = std::move(value); }
    inline void SetChargeAmount(const char* value) { m_chargeAmountHasBeenSet = true; m_chargeAmount.assign(value); }
    inline ScheduleItem& WithChargeAmount(const Aws::String& value) { SetChargeAmount(value); return *this;}
    inline ScheduleItem& WithChargeAmount(Aws::String&& value) { SetChargeAmount(std::move(value)); return *this;}
    inline ScheduleItem& WithChargeAmount(const char* value) { SetChargeAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the customer would pay the price defined in this payment
     * schedule term. Invoices are generated on the date provided.</p>
     */
    inline const Aws::Utils::DateTime& GetChargeDate() const{ return m_chargeDate; }
    inline bool ChargeDateHasBeenSet() const { return m_chargeDateHasBeenSet; }
    inline void SetChargeDate(const Aws::Utils::DateTime& value) { m_chargeDateHasBeenSet = true; m_chargeDate = value; }
    inline void SetChargeDate(Aws::Utils::DateTime&& value) { m_chargeDateHasBeenSet = true; m_chargeDate = std::move(value); }
    inline ScheduleItem& WithChargeDate(const Aws::Utils::DateTime& value) { SetChargeDate(value); return *this;}
    inline ScheduleItem& WithChargeDate(Aws::Utils::DateTime&& value) { SetChargeDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_chargeAmount;
    bool m_chargeAmountHasBeenSet = false;

    Aws::Utils::DateTime m_chargeDate;
    bool m_chargeDateHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
