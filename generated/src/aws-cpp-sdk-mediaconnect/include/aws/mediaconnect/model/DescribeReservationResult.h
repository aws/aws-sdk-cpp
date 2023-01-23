/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/Reservation.h>
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
    AWS_MEDIACONNECT_API DescribeReservationResult();
    AWS_MEDIACONNECT_API DescribeReservationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API DescribeReservationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Reservation& GetReservation() const{ return m_reservation; }

    
    inline void SetReservation(const Reservation& value) { m_reservation = value; }

    
    inline void SetReservation(Reservation&& value) { m_reservation = std::move(value); }

    
    inline DescribeReservationResult& WithReservation(const Reservation& value) { SetReservation(value); return *this;}

    
    inline DescribeReservationResult& WithReservation(Reservation&& value) { SetReservation(std::move(value)); return *this;}

  private:

    Reservation m_reservation;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
