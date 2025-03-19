/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/Reservation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaConnect
{
namespace Model
{
  class DescribeReservationResult
  {
  public:
    AWS_MEDIACONNECT_API DescribeReservationResult() = default;
    AWS_MEDIACONNECT_API DescribeReservationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API DescribeReservationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A pricing agreement for a discounted rate for a specific outbound bandwidth
     * that your MediaConnect account will use each month over a specific time period.
     * The discounted rate in the reservation applies to outbound bandwidth for all
     * flows from your account until your account reaches the amount of bandwidth in
     * your reservation. If you use more outbound bandwidth than the agreed upon amount
     * in a single month, the overage is charged at the on-demand rate. </p>
     */
    inline const Reservation& GetReservation() const { return m_reservation; }
    template<typename ReservationT = Reservation>
    void SetReservation(ReservationT&& value) { m_reservationHasBeenSet = true; m_reservation = std::forward<ReservationT>(value); }
    template<typename ReservationT = Reservation>
    DescribeReservationResult& WithReservation(ReservationT&& value) { SetReservation(std::forward<ReservationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeReservationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Reservation m_reservation;
    bool m_reservationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
