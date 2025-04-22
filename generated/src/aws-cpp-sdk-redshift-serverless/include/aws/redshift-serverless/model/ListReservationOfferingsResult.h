/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/model/ReservationOffering.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class ListReservationOfferingsResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ListReservationOfferingsResult() = default;
    AWS_REDSHIFTSERVERLESS_API ListReservationOfferingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API ListReservationOfferingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to use when requesting the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReservationOfferingsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The returned list of reservation offerings.</p>
     */
    inline const Aws::Vector<ReservationOffering>& GetReservationOfferingsList() const { return m_reservationOfferingsList; }
    template<typename ReservationOfferingsListT = Aws::Vector<ReservationOffering>>
    void SetReservationOfferingsList(ReservationOfferingsListT&& value) { m_reservationOfferingsListHasBeenSet = true; m_reservationOfferingsList = std::forward<ReservationOfferingsListT>(value); }
    template<typename ReservationOfferingsListT = Aws::Vector<ReservationOffering>>
    ListReservationOfferingsResult& WithReservationOfferingsList(ReservationOfferingsListT&& value) { SetReservationOfferingsList(std::forward<ReservationOfferingsListT>(value)); return *this;}
    template<typename ReservationOfferingsListT = ReservationOffering>
    ListReservationOfferingsResult& AddReservationOfferingsList(ReservationOfferingsListT&& value) { m_reservationOfferingsListHasBeenSet = true; m_reservationOfferingsList.emplace_back(std::forward<ReservationOfferingsListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListReservationOfferingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ReservationOffering> m_reservationOfferingsList;
    bool m_reservationOfferingsListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
