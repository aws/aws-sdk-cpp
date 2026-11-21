/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CapacityReservationInstanceUsage.h>

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
class GetCapacityReservationUsageResult {
 public:
  AWS_SAGEMAKER_API GetCapacityReservationUsageResult() = default;
  AWS_SAGEMAKER_API GetCapacityReservationUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API GetCapacityReservationUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the SageMaker Capacity Reservation. The ID is the last part of the
   * ARN and starts with <code>smcr-</code>.</p>
   */
  inline const Aws::String& GetSMCapacityReservationId() const { return m_sMCapacityReservationId; }
  template <typename SMCapacityReservationIdT = Aws::String>
  void SetSMCapacityReservationId(SMCapacityReservationIdT&& value) {
    m_sMCapacityReservationIdHasBeenSet = true;
    m_sMCapacityReservationId = std::forward<SMCapacityReservationIdT>(value);
  }
  template <typename SMCapacityReservationIdT = Aws::String>
  GetCapacityReservationUsageResult& WithSMCapacityReservationId(SMCapacityReservationIdT&& value) {
    SetSMCapacityReservationId(std::forward<SMCapacityReservationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of instances in the SageMaker Capacity Reservation.</p>
   */
  inline int GetTotalInstanceCount() const { return m_totalInstanceCount; }
  inline void SetTotalInstanceCount(int value) {
    m_totalInstanceCountHasBeenSet = true;
    m_totalInstanceCount = value;
  }
  inline GetCapacityReservationUsageResult& WithTotalInstanceCount(int value) {
    SetTotalInstanceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of instances in the SageMaker Capacity Reservation that are not in
   * use.</p>
   */
  inline int GetAvailableInstanceCount() const { return m_availableInstanceCount; }
  inline void SetAvailableInstanceCount(int value) {
    m_availableInstanceCountHasBeenSet = true;
    m_availableInstanceCount = value;
  }
  inline GetCapacityReservationUsageResult& WithAvailableInstanceCount(int value) {
    SetAvailableInstanceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when SageMaker AI last refreshed the usage counts in this
   * response.</p>
   */
  inline const Aws::Utils::DateTime& GetLastRefreshTime() const { return m_lastRefreshTime; }
  template <typename LastRefreshTimeT = Aws::Utils::DateTime>
  void SetLastRefreshTime(LastRefreshTimeT&& value) {
    m_lastRefreshTimeHasBeenSet = true;
    m_lastRefreshTime = std::forward<LastRefreshTimeT>(value);
  }
  template <typename LastRefreshTimeT = Aws::Utils::DateTime>
  GetCapacityReservationUsageResult& WithLastRefreshTime(LastRefreshTimeT&& value) {
    SetLastRefreshTime(std::forward<LastRefreshTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instance usage for each account that uses instances from the SageMaker
   * Capacity Reservation, sorted by account ID. Each account appears at most once
   * across all pages. The list is empty when no instances are in use.</p>
   */
  inline const Aws::Vector<CapacityReservationInstanceUsage>& GetInstanceUsageSet() const { return m_instanceUsageSet; }
  template <typename InstanceUsageSetT = Aws::Vector<CapacityReservationInstanceUsage>>
  void SetInstanceUsageSet(InstanceUsageSetT&& value) {
    m_instanceUsageSetHasBeenSet = true;
    m_instanceUsageSet = std::forward<InstanceUsageSetT>(value);
  }
  template <typename InstanceUsageSetT = Aws::Vector<CapacityReservationInstanceUsage>>
  GetCapacityReservationUsageResult& WithInstanceUsageSet(InstanceUsageSetT&& value) {
    SetInstanceUsageSet(std::forward<InstanceUsageSetT>(value));
    return *this;
  }
  template <typename InstanceUsageSetT = CapacityReservationInstanceUsage>
  GetCapacityReservationUsageResult& AddInstanceUsageSet(InstanceUsageSetT&& value) {
    m_instanceUsageSetHasBeenSet = true;
    m_instanceUsageSet.emplace_back(std::forward<InstanceUsageSetT>(value));
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
  GetCapacityReservationUsageResult& WithNextToken(NextTokenT&& value) {
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
  GetCapacityReservationUsageResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_sMCapacityReservationId;

  int m_totalInstanceCount{0};

  int m_availableInstanceCount{0};

  Aws::Utils::DateTime m_lastRefreshTime{};

  Aws::Vector<CapacityReservationInstanceUsage> m_instanceUsageSet;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_sMCapacityReservationIdHasBeenSet = false;
  bool m_totalInstanceCountHasBeenSet = false;
  bool m_availableInstanceCountHasBeenSet = false;
  bool m_lastRefreshTimeHasBeenSet = false;
  bool m_instanceUsageSetHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
