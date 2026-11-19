/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/AggregationResult.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {
/**
 * <p>Information about get customer account statistics response.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/GetCustomerAccountStatisticsResponse">AWS
 * API Reference</a></p>
 */
class GetCustomerAccountStatisticsResult {
 public:
  AWS_PARTNERCENTRALSELLING_API GetCustomerAccountStatisticsResult() = default;
  AWS_PARTNERCENTRALSELLING_API GetCustomerAccountStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALSELLING_API GetCustomerAccountStatisticsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The total number of customer accounts that match the filter.</p>
   */
  inline int GetTotalCount() const { return m_totalCount; }
  inline void SetTotalCount(int value) {
    m_totalCountHasBeenSet = true;
    m_totalCount = value;
  }
  inline GetCustomerAccountStatisticsResult& WithTotalCount(int value) {
    SetTotalCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The results of the aggregations, in the order that you requested them.</p>
   */
  inline const Aws::Vector<AggregationResult>& GetAggregations() const { return m_aggregations; }
  template <typename AggregationsT = Aws::Vector<AggregationResult>>
  void SetAggregations(AggregationsT&& value) {
    m_aggregationsHasBeenSet = true;
    m_aggregations = std::forward<AggregationsT>(value);
  }
  template <typename AggregationsT = Aws::Vector<AggregationResult>>
  GetCustomerAccountStatisticsResult& WithAggregations(AggregationsT&& value) {
    SetAggregations(std::forward<AggregationsT>(value));
    return *this;
  }
  template <typename AggregationsT = AggregationResult>
  GetCustomerAccountStatisticsResult& AddAggregations(AggregationsT&& value) {
    m_aggregationsHasBeenSet = true;
    m_aggregations.emplace_back(std::forward<AggregationsT>(value));
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
  GetCustomerAccountStatisticsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  int m_totalCount{0};

  Aws::Vector<AggregationResult> m_aggregations;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_totalCountHasBeenSet = false;
  bool m_aggregationsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
