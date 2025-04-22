/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/ReservationOffering.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class GetReservationOfferingResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API GetReservationOfferingResult() = default;
    AWS_REDSHIFTSERVERLESS_API GetReservationOfferingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API GetReservationOfferingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The returned reservation offering. The offering determines the payment
     * schedule for the reservation.</p>
     */
    inline const ReservationOffering& GetReservationOffering() const { return m_reservationOffering; }
    template<typename ReservationOfferingT = ReservationOffering>
    void SetReservationOffering(ReservationOfferingT&& value) { m_reservationOfferingHasBeenSet = true; m_reservationOffering = std::forward<ReservationOfferingT>(value); }
    template<typename ReservationOfferingT = ReservationOffering>
    GetReservationOfferingResult& WithReservationOffering(ReservationOfferingT&& value) { SetReservationOffering(std::forward<ReservationOfferingT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetReservationOfferingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ReservationOffering m_reservationOffering;
    bool m_reservationOfferingHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
