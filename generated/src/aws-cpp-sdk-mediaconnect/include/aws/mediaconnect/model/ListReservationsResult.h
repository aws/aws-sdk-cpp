﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListReservationsResult
  {
  public:
    AWS_MEDIACONNECT_API ListReservationsResult();
    AWS_MEDIACONNECT_API ListReservationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API ListReservationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListReservations request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListReservations request a
     * second time and specify the NextToken value.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListReservationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListReservationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListReservationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * A list of all reservations that have been purchased by this account in the
     * current AWS Region.
     */
    inline const Aws::Vector<Reservation>& GetReservations() const{ return m_reservations; }
    inline void SetReservations(const Aws::Vector<Reservation>& value) { m_reservations = value; }
    inline void SetReservations(Aws::Vector<Reservation>&& value) { m_reservations = std::move(value); }
    inline ListReservationsResult& WithReservations(const Aws::Vector<Reservation>& value) { SetReservations(value); return *this;}
    inline ListReservationsResult& WithReservations(Aws::Vector<Reservation>&& value) { SetReservations(std::move(value)); return *this;}
    inline ListReservationsResult& AddReservations(const Reservation& value) { m_reservations.push_back(value); return *this; }
    inline ListReservationsResult& AddReservations(Reservation&& value) { m_reservations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListReservationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListReservationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListReservationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<Reservation> m_reservations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
