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
    AWS_MEDIACONNECT_API DescribeReservationResult();
    AWS_MEDIACONNECT_API DescribeReservationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API DescribeReservationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Reservation& GetReservation() const{ return m_reservation; }

    
    inline void SetReservation(const Reservation& value) { m_reservation = value; }

    
    inline void SetReservation(Reservation&& value) { m_reservation = std::move(value); }

    
    inline DescribeReservationResult& WithReservation(const Reservation& value) { SetReservation(value); return *this;}

    
    inline DescribeReservationResult& WithReservation(Reservation&& value) { SetReservation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeReservationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeReservationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeReservationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Reservation m_reservation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
