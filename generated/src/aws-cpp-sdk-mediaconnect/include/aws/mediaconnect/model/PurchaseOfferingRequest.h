/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   */
  class PurchaseOfferingRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API PurchaseOfferingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PurchaseOffering"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the offering.</p>
     */
    inline const Aws::String& GetOfferingArn() const { return m_offeringArn; }
    inline bool OfferingArnHasBeenSet() const { return m_offeringArnHasBeenSet; }
    template<typename OfferingArnT = Aws::String>
    void SetOfferingArn(OfferingArnT&& value) { m_offeringArnHasBeenSet = true; m_offeringArn = std::forward<OfferingArnT>(value); }
    template<typename OfferingArnT = Aws::String>
    PurchaseOfferingRequest& WithOfferingArn(OfferingArnT&& value) { SetOfferingArn(std::forward<OfferingArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name that you want to use for the reservation.</p>
     */
    inline const Aws::String& GetReservationName() const { return m_reservationName; }
    inline bool ReservationNameHasBeenSet() const { return m_reservationNameHasBeenSet; }
    template<typename ReservationNameT = Aws::String>
    void SetReservationName(ReservationNameT&& value) { m_reservationNameHasBeenSet = true; m_reservationName = std::forward<ReservationNameT>(value); }
    template<typename ReservationNameT = Aws::String>
    PurchaseOfferingRequest& WithReservationName(ReservationNameT&& value) { SetReservationName(std::forward<ReservationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time that you want the reservation to begin, in Coordinated
     * Universal Time (UTC). </p> <p>You can specify any date and time between 12:00am
     * on the first day of the current month to the current time on today's date,
     * inclusive. Specify the start in a 24-hour notation. Use the following format:
     * <code>YYYY-MM-DDTHH:mm:SSZ</code>, where <code>T</code> and <code>Z</code> are
     * literal characters. For example, to specify 11:30pm on March 5, 2020, enter
     * <code>2020-03-05T23:30:00Z</code>.</p>
     */
    inline const Aws::String& GetStart() const { return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    template<typename StartT = Aws::String>
    void SetStart(StartT&& value) { m_startHasBeenSet = true; m_start = std::forward<StartT>(value); }
    template<typename StartT = Aws::String>
    PurchaseOfferingRequest& WithStart(StartT&& value) { SetStart(std::forward<StartT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_offeringArn;
    bool m_offeringArnHasBeenSet = false;

    Aws::String m_reservationName;
    bool m_reservationNameHasBeenSet = false;

    Aws::String m_start;
    bool m_startHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
