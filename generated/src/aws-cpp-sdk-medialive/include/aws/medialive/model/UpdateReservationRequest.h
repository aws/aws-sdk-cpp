/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/RenewalSettings.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * Request to update a reservation<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateReservationRequest">AWS
   * API Reference</a></p>
   */
  class UpdateReservationRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API UpdateReservationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateReservation"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * Name of the reservation
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateReservationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    UpdateReservationRequest& WithRenewalSettings(RenewalSettingsT&& value) { SetRenewalSettings(std::forward<RenewalSettingsT>(value)); return *this;}
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
    UpdateReservationRequest& WithReservationId(ReservationIdT&& value) { SetReservationId(std::forward<ReservationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RenewalSettings m_renewalSettings;
    bool m_renewalSettingsHasBeenSet = false;

    Aws::String m_reservationId;
    bool m_reservationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
