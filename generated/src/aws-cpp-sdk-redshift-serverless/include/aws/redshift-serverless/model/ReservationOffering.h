/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-serverless/model/OfferingType.h>
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
namespace RedshiftServerless
{
namespace Model
{

  /**
   * <p>The class of offering for the reservation. The offering class determines the
   * payment schedule for the reservation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ReservationOffering">AWS
   * API Reference</a></p>
   */
  class ReservationOffering
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ReservationOffering() = default;
    AWS_REDSHIFTSERVERLESS_API ReservationOffering(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API ReservationOffering& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The currency code for the offering.</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    ReservationOffering& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration, in seconds, for which the reservation reserves the RPUs.</p>
     */
    inline int GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline ReservationOffering& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rate you are charged for each hour the reservation is active.</p>
     */
    inline double GetHourlyCharge() const { return m_hourlyCharge; }
    inline bool HourlyChargeHasBeenSet() const { return m_hourlyChargeHasBeenSet; }
    inline void SetHourlyCharge(double value) { m_hourlyChargeHasBeenSet = true; m_hourlyCharge = value; }
    inline ReservationOffering& WithHourlyCharge(double value) { SetHourlyCharge(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offering identifier.</p>
     */
    inline const Aws::String& GetOfferingId() const { return m_offeringId; }
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }
    template<typename OfferingIdT = Aws::String>
    void SetOfferingId(OfferingIdT&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::forward<OfferingIdT>(value); }
    template<typename OfferingIdT = Aws::String>
    ReservationOffering& WithOfferingId(OfferingIdT&& value) { SetOfferingId(std::forward<OfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the payment schedule for the reservation.</p>
     */
    inline OfferingType GetOfferingType() const { return m_offeringType; }
    inline bool OfferingTypeHasBeenSet() const { return m_offeringTypeHasBeenSet; }
    inline void SetOfferingType(OfferingType value) { m_offeringTypeHasBeenSet = true; m_offeringType = value; }
    inline ReservationOffering& WithOfferingType(OfferingType value) { SetOfferingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The up-front price you are charged for the reservation.</p>
     */
    inline double GetUpfrontCharge() const { return m_upfrontCharge; }
    inline bool UpfrontChargeHasBeenSet() const { return m_upfrontChargeHasBeenSet; }
    inline void SetUpfrontCharge(double value) { m_upfrontChargeHasBeenSet = true; m_upfrontCharge = value; }
    inline ReservationOffering& WithUpfrontCharge(double value) { SetUpfrontCharge(value); return *this;}
    ///@}
  private:

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    int m_duration{0};
    bool m_durationHasBeenSet = false;

    double m_hourlyCharge{0.0};
    bool m_hourlyChargeHasBeenSet = false;

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet = false;

    OfferingType m_offeringType{OfferingType::NOT_SET};
    bool m_offeringTypeHasBeenSet = false;

    double m_upfrontCharge{0.0};
    bool m_upfrontChargeHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
