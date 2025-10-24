﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/Reservation.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace RedshiftServerless {
namespace Model {
class GetReservationResult {
 public:
  AWS_REDSHIFTSERVERLESS_API GetReservationResult() = default;
  AWS_REDSHIFTSERVERLESS_API GetReservationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_REDSHIFTSERVERLESS_API GetReservationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The returned reservation object.</p>
   */
  inline const Reservation& GetReservation() const { return m_reservation; }
  template <typename ReservationT = Reservation>
  void SetReservation(ReservationT&& value) {
    m_reservationHasBeenSet = true;
    m_reservation = std::forward<ReservationT>(value);
  }
  template <typename ReservationT = Reservation>
  GetReservationResult& WithReservation(ReservationT&& value) {
    SetReservation(std::forward<ReservationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetReservationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Reservation m_reservation;
  bool m_reservationHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RedshiftServerless
}  // namespace Aws
