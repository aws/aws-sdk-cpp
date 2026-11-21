/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CapacityReservationSummary.h>

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
class ListCapacityReservationsResult {
 public:
  AWS_SAGEMAKER_API ListCapacityReservationsResult() = default;
  AWS_SAGEMAKER_API ListCapacityReservationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API ListCapacityReservationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Summaries of the SageMaker Capacity Reservations in your account.</p>
   */
  inline const Aws::Vector<CapacityReservationSummary>& GetCapacityReservationSummaries() const { return m_capacityReservationSummaries; }
  template <typename CapacityReservationSummariesT = Aws::Vector<CapacityReservationSummary>>
  void SetCapacityReservationSummaries(CapacityReservationSummariesT&& value) {
    m_capacityReservationSummariesHasBeenSet = true;
    m_capacityReservationSummaries = std::forward<CapacityReservationSummariesT>(value);
  }
  template <typename CapacityReservationSummariesT = Aws::Vector<CapacityReservationSummary>>
  ListCapacityReservationsResult& WithCapacityReservationSummaries(CapacityReservationSummariesT&& value) {
    SetCapacityReservationSummaries(std::forward<CapacityReservationSummariesT>(value));
    return *this;
  }
  template <typename CapacityReservationSummariesT = CapacityReservationSummary>
  ListCapacityReservationsResult& AddCapacityReservationSummaries(CapacityReservationSummariesT&& value) {
    m_capacityReservationSummariesHasBeenSet = true;
    m_capacityReservationSummaries.emplace_back(std::forward<CapacityReservationSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the response is truncated, SageMaker AI returns this token. To retrieve
   * the next set of results, use this token in your next request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListCapacityReservationsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListCapacityReservationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<CapacityReservationSummary> m_capacityReservationSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_capacityReservationSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
