/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/OfferingDurationUnits.h>
#include <aws/medialive/model/OfferingType.h>
#include <aws/medialive/model/RenewalSettings.h>
#include <aws/medialive/model/ReservationResourceSpecification.h>
#include <aws/medialive/model/ReservationState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Reserved resources available to use<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Reservation">AWS
   * API Reference</a></p>
   */
  class Reservation
  {
  public:
    AWS_MEDIALIVE_API Reservation() = default;
    AWS_MEDIALIVE_API Reservation(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Reservation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Unique reservation ARN, e.g.
     * 'arn:aws:medialive:us-west-2:123456789012:reservation:1234567'
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Reservation& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Number of reserved resources
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline Reservation& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * Currency code for usagePrice and fixedPrice in ISO-4217 format, e.g. 'USD'
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
     * Lease duration, e.g. '12'
     */
    inline int GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline Reservation& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * Units for duration, e.g. 'MONTHS'
     */
    inline OfferingDurationUnits GetDurationUnits() const { return m_durationUnits; }
    inline bool DurationUnitsHasBeenSet() const { return m_durationUnitsHasBeenSet; }
    inline void SetDurationUnits(OfferingDurationUnits value) { m_durationUnitsHasBeenSet = true; m_durationUnits = value; }
    inline Reservation& WithDurationUnits(OfferingDurationUnits value) { SetDurationUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * Reservation UTC end date and time in ISO-8601 format, e.g. '2019-03-01T00:00:00'
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
     * One-time charge for each reserved resource, e.g. '0.0' for a NO_UPFRONT offering
     */
    inline double GetFixedPrice() const { return m_fixedPrice; }
    inline bool FixedPriceHasBeenSet() const { return m_fixedPriceHasBeenSet; }
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }
    inline Reservation& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * User specified reservation name
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Reservation& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Offering description, e.g. 'HD AVC output at 10-20 Mbps, 30 fps, and standard VQ
     * in US West (Oregon)'
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
     * Unique offering ID, e.g. '87654321'
     */
    inline const Aws::String& GetOfferingId() const { return m_offeringId; }
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }
    template<typename OfferingIdT = Aws::String>
    void SetOfferingId(OfferingIdT&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::forward<OfferingIdT>(value); }
    template<typename OfferingIdT = Aws::String>
    Reservation& WithOfferingId(OfferingIdT&& value) { SetOfferingId(std::forward<OfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Offering type, e.g. 'NO_UPFRONT'
     */
    inline OfferingType GetOfferingType() const { return m_offeringType; }
    inline bool OfferingTypeHasBeenSet() const { return m_offeringTypeHasBeenSet; }
    inline void SetOfferingType(OfferingType value) { m_offeringTypeHasBeenSet = true; m_offeringType = value; }
    inline Reservation& WithOfferingType(OfferingType value) { SetOfferingType(value); return *this;}
    ///@}

    ///@{
    /**
     * AWS region, e.g. 'us-west-2'
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    Reservation& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Renewal settings for the reservation
     */
    inline const RenewalSettings& GetRenewalSettings() const { return m_renewalSettings; }
    inline bool RenewalSettingsHasBeenSet() const { return m_renewalSettingsHasBeenSet; }
    template<typename RenewalSettingsT = RenewalSettings>
    void SetRenewalSettings(RenewalSettingsT&& value) { m_renewalSettingsHasBeenSet = true; m_renewalSettings = std::forward<RenewalSettingsT>(value); }
    template<typename RenewalSettingsT = RenewalSettings>
    Reservation& WithRenewalSettings(RenewalSettingsT&& value) { SetRenewalSettings(std::forward<RenewalSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Unique reservation ID, e.g. '1234567'
     */
    inline const Aws::String& GetReservationId() const { return m_reservationId; }
    inline bool ReservationIdHasBeenSet() const { return m_reservationIdHasBeenSet; }
    template<typename ReservationIdT = Aws::String>
    void SetReservationId(ReservationIdT&& value) { m_reservationIdHasBeenSet = true; m_reservationId = std::forward<ReservationIdT>(value); }
    template<typename ReservationIdT = Aws::String>
    Reservation& WithReservationId(ReservationIdT&& value) { SetReservationId(std::forward<ReservationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Resource configuration details
     */
    inline const ReservationResourceSpecification& GetResourceSpecification() const { return m_resourceSpecification; }
    inline bool ResourceSpecificationHasBeenSet() const { return m_resourceSpecificationHasBeenSet; }
    template<typename ResourceSpecificationT = ReservationResourceSpecification>
    void SetResourceSpecification(ResourceSpecificationT&& value) { m_resourceSpecificationHasBeenSet = true; m_resourceSpecification = std::forward<ResourceSpecificationT>(value); }
    template<typename ResourceSpecificationT = ReservationResourceSpecification>
    Reservation& WithResourceSpecification(ResourceSpecificationT&& value) { SetResourceSpecification(std::forward<ResourceSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Reservation UTC start date and time in ISO-8601 format, e.g.
     * '2018-03-01T00:00:00'
     */
    inline const Aws::String& GetStart() const { return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    template<typename StartT = Aws::String>
    void SetStart(StartT&& value) { m_startHasBeenSet = true; m_start = std::forward<StartT>(value); }
    template<typename StartT = Aws::String>
    Reservation& WithStart(StartT&& value) { SetStart(std::forward<StartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Current state of reservation, e.g. 'ACTIVE'
     */
    inline ReservationState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ReservationState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Reservation& WithState(ReservationState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * A collection of key-value pairs
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Reservation& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Reservation& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * Recurring usage charge for each reserved resource, e.g. '157.0'
     */
    inline double GetUsagePrice() const { return m_usagePrice; }
    inline bool UsagePriceHasBeenSet() const { return m_usagePriceHasBeenSet; }
    inline void SetUsagePrice(double value) { m_usagePriceHasBeenSet = true; m_usagePrice = value; }
    inline Reservation& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    int m_count{0};
    bool m_countHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    int m_duration{0};
    bool m_durationHasBeenSet = false;

    OfferingDurationUnits m_durationUnits{OfferingDurationUnits::NOT_SET};
    bool m_durationUnitsHasBeenSet = false;

    Aws::String m_end;
    bool m_endHasBeenSet = false;

    double m_fixedPrice{0.0};
    bool m_fixedPriceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_offeringDescription;
    bool m_offeringDescriptionHasBeenSet = false;

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet = false;

    OfferingType m_offeringType{OfferingType::NOT_SET};
    bool m_offeringTypeHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    RenewalSettings m_renewalSettings;
    bool m_renewalSettingsHasBeenSet = false;

    Aws::String m_reservationId;
    bool m_reservationIdHasBeenSet = false;

    ReservationResourceSpecification m_resourceSpecification;
    bool m_resourceSpecificationHasBeenSet = false;

    Aws::String m_start;
    bool m_startHasBeenSet = false;

    ReservationState m_state{ReservationState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    double m_usagePrice{0.0};
    bool m_usagePriceHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
