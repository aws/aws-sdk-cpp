/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/DurationUnits.h>
#include <aws/mediaconnect/model/PriceUnits.h>
#include <aws/mediaconnect/model/ReservationState.h>
#include <aws/mediaconnect/model/ResourceSpecification.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * <p> A pricing agreement for a discounted rate for a specific outbound bandwidth
   * that your MediaConnect account will use each month over a specific time period.
   * The discounted rate in the reservation applies to outbound bandwidth for all
   * flows from your account until your account reaches the amount of bandwidth in
   * your reservation. If you use more outbound bandwidth than the agreed upon amount
   * in a single month, the overage is charged at the on-demand rate.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/Reservation">AWS
   * API Reference</a></p>
   */
  class Reservation
  {
  public:
    AWS_MEDIACONNECT_API Reservation() = default;
    AWS_MEDIACONNECT_API Reservation(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Reservation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The type of currency that is used for billing. The currencyCode used for
     * your reservation is US dollars.</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    Reservation& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The length of time that this reservation is active. MediaConnect defines
     * this value in the offering.</p>
     */
    inline int GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline Reservation& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unit of measurement for the duration of the reservation. MediaConnect
     * defines this value in the offering.</p>
     */
    inline DurationUnits GetDurationUnits() const { return m_durationUnits; }
    inline bool DurationUnitsHasBeenSet() const { return m_durationUnitsHasBeenSet; }
    inline void SetDurationUnits(DurationUnits value) { m_durationUnitsHasBeenSet = true; m_durationUnits = value; }
    inline Reservation& WithDurationUnits(DurationUnits value) { SetDurationUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The day and time that this reservation expires. This value is calculated
     * based on the start date and time that you set and the offering's duration.</p>
     */
    inline const Aws::String& GetEnd() const { return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    template<typename EndT = Aws::String>
    void SetEnd(EndT&& value) { m_endHasBeenSet = true; m_end = std::forward<EndT>(value); }
    template<typename EndT = Aws::String>
    Reservation& WithEnd(EndT&& value) { SetEnd(std::forward<EndT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) that MediaConnect assigns to the
     * offering.</p>
     */
    inline const Aws::String& GetOfferingArn() const { return m_offeringArn; }
    inline bool OfferingArnHasBeenSet() const { return m_offeringArnHasBeenSet; }
    template<typename OfferingArnT = Aws::String>
    void SetOfferingArn(OfferingArnT&& value) { m_offeringArnHasBeenSet = true; m_offeringArn = std::forward<OfferingArnT>(value); }
    template<typename OfferingArnT = Aws::String>
    Reservation& WithOfferingArn(OfferingArnT&& value) { SetOfferingArn(std::forward<OfferingArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the offering. MediaConnect defines this value in the
     * offering.</p>
     */
    inline const Aws::String& GetOfferingDescription() const { return m_offeringDescription; }
    inline bool OfferingDescriptionHasBeenSet() const { return m_offeringDescriptionHasBeenSet; }
    template<typename OfferingDescriptionT = Aws::String>
    void SetOfferingDescription(OfferingDescriptionT&& value) { m_offeringDescriptionHasBeenSet = true; m_offeringDescription = std::forward<OfferingDescriptionT>(value); }
    template<typename OfferingDescriptionT = Aws::String>
    Reservation& WithOfferingDescription(OfferingDescriptionT&& value) { SetOfferingDescription(std::forward<OfferingDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The cost of a single unit. This value, in combination with priceUnits, makes
     * up the rate. MediaConnect defines this value in the offering.</p>
     */
    inline const Aws::String& GetPricePerUnit() const { return m_pricePerUnit; }
    inline bool PricePerUnitHasBeenSet() const { return m_pricePerUnitHasBeenSet; }
    template<typename PricePerUnitT = Aws::String>
    void SetPricePerUnit(PricePerUnitT&& value) { m_pricePerUnitHasBeenSet = true; m_pricePerUnit = std::forward<PricePerUnitT>(value); }
    template<typename PricePerUnitT = Aws::String>
    Reservation& WithPricePerUnit(PricePerUnitT&& value) { SetPricePerUnit(std::forward<PricePerUnitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unit of measurement that is used for billing. This value, in combination
     * with pricePerUnit, makes up the rate. MediaConnect defines this value in the
     * offering.</p>
     */
    inline PriceUnits GetPriceUnits() const { return m_priceUnits; }
    inline bool PriceUnitsHasBeenSet() const { return m_priceUnitsHasBeenSet; }
    inline void SetPriceUnits(PriceUnits value) { m_priceUnitsHasBeenSet = true; m_priceUnits = value; }
    inline Reservation& WithPriceUnits(PriceUnits value) { SetPriceUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) that MediaConnect assigns to the reservation
     * when you purchase an offering.</p>
     */
    inline const Aws::String& GetReservationArn() const { return m_reservationArn; }
    inline bool ReservationArnHasBeenSet() const { return m_reservationArnHasBeenSet; }
    template<typename ReservationArnT = Aws::String>
    void SetReservationArn(ReservationArnT&& value) { m_reservationArnHasBeenSet = true; m_reservationArn = std::forward<ReservationArnT>(value); }
    template<typename ReservationArnT = Aws::String>
    Reservation& WithReservationArn(ReservationArnT&& value) { SetReservationArn(std::forward<ReservationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name that you assigned to the reservation when you purchased the
     * offering.</p>
     */
    inline const Aws::String& GetReservationName() const { return m_reservationName; }
    inline bool ReservationNameHasBeenSet() const { return m_reservationNameHasBeenSet; }
    template<typename ReservationNameT = Aws::String>
    void SetReservationName(ReservationNameT&& value) { m_reservationNameHasBeenSet = true; m_reservationName = std::forward<ReservationNameT>(value); }
    template<typename ReservationNameT = Aws::String>
    Reservation& WithReservationName(ReservationNameT&& value) { SetReservationName(std::forward<ReservationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of your reservation.</p>
     */
    inline ReservationState GetReservationState() const { return m_reservationState; }
    inline bool ReservationStateHasBeenSet() const { return m_reservationStateHasBeenSet; }
    inline void SetReservationState(ReservationState value) { m_reservationStateHasBeenSet = true; m_reservationState = value; }
    inline Reservation& WithReservationState(ReservationState value) { SetReservationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A definition of the amount of outbound bandwidth that you would be reserving
     * if you purchase the offering. MediaConnect defines the values that make up the
     * resourceSpecification in the offering.</p>
     */
    inline const ResourceSpecification& GetResourceSpecification() const { return m_resourceSpecification; }
    inline bool ResourceSpecificationHasBeenSet() const { return m_resourceSpecificationHasBeenSet; }
    template<typename ResourceSpecificationT = ResourceSpecification>
    void SetResourceSpecification(ResourceSpecificationT&& value) { m_resourceSpecificationHasBeenSet = true; m_resourceSpecification = std::forward<ResourceSpecificationT>(value); }
    template<typename ResourceSpecificationT = ResourceSpecification>
    Reservation& WithResourceSpecification(ResourceSpecificationT&& value) { SetResourceSpecification(std::forward<ResourceSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The day and time that the reservation becomes active. You set this value
     * when you purchase the offering.</p>
     */
    inline const Aws::String& GetStart() const { return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    template<typename StartT = Aws::String>
    void SetStart(StartT&& value) { m_startHasBeenSet = true; m_start = std::forward<StartT>(value); }
    template<typename StartT = Aws::String>
    Reservation& WithStart(StartT&& value) { SetStart(std::forward<StartT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    int m_duration{0};
    bool m_durationHasBeenSet = false;

    DurationUnits m_durationUnits{DurationUnits::NOT_SET};
    bool m_durationUnitsHasBeenSet = false;

    Aws::String m_end;
    bool m_endHasBeenSet = false;

    Aws::String m_offeringArn;
    bool m_offeringArnHasBeenSet = false;

    Aws::String m_offeringDescription;
    bool m_offeringDescriptionHasBeenSet = false;

    Aws::String m_pricePerUnit;
    bool m_pricePerUnitHasBeenSet = false;

    PriceUnits m_priceUnits{PriceUnits::NOT_SET};
    bool m_priceUnitsHasBeenSet = false;

    Aws::String m_reservationArn;
    bool m_reservationArnHasBeenSet = false;

    Aws::String m_reservationName;
    bool m_reservationNameHasBeenSet = false;

    ReservationState m_reservationState{ReservationState::NOT_SET};
    bool m_reservationStateHasBeenSet = false;

    ResourceSpecification m_resourceSpecification;
    bool m_resourceSpecificationHasBeenSet = false;

    Aws::String m_start;
    bool m_startHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
