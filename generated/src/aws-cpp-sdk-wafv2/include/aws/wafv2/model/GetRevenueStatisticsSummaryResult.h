/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/RevenueBreakdown.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace WAFV2 {
namespace Model {
class GetRevenueStatisticsSummaryResult {
 public:
  AWS_WAFV2_API GetRevenueStatisticsSummaryResult() = default;
  AWS_WAFV2_API GetRevenueStatisticsSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WAFV2_API GetRevenueStatisticsSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The revenue breakdown summary for the specified time window and filters.</p>
   */
  inline const RevenueBreakdown& GetRevenueBreakdown() const { return m_revenueBreakdown; }
  template <typename RevenueBreakdownT = RevenueBreakdown>
  void SetRevenueBreakdown(RevenueBreakdownT&& value) {
    m_revenueBreakdownHasBeenSet = true;
    m_revenueBreakdown = std::forward<RevenueBreakdownT>(value);
  }
  template <typename RevenueBreakdownT = RevenueBreakdown>
  GetRevenueStatisticsSummaryResult& WithRevenueBreakdown(RevenueBreakdownT&& value) {
    SetRevenueBreakdown(std::forward<RevenueBreakdownT>(value));
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
  GetRevenueStatisticsSummaryResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  RevenueBreakdown m_revenueBreakdown;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_revenueBreakdownHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
