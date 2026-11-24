/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CapacityReservationDetail.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {
class DescribeCapacityReservationResult {
 public:
  AWS_SAGEMAKER_API DescribeCapacityReservationResult() = default;
  AWS_SAGEMAKER_API DescribeCapacityReservationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API DescribeCapacityReservationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Details about the SageMaker Capacity Reservation.</p>
   */
  inline const CapacityReservationDetail& GetCapacityReservation() const { return m_capacityReservation; }
  template <typename CapacityReservationT = CapacityReservationDetail>
  void SetCapacityReservation(CapacityReservationT&& value) {
    m_capacityReservationHasBeenSet = true;
    m_capacityReservation = std::forward<CapacityReservationT>(value);
  }
  template <typename CapacityReservationT = CapacityReservationDetail>
  DescribeCapacityReservationResult& WithCapacityReservation(CapacityReservationT&& value) {
    SetCapacityReservation(std::forward<CapacityReservationT>(value));
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
  DescribeCapacityReservationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  CapacityReservationDetail m_capacityReservation;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_capacityReservationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
