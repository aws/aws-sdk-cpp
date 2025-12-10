/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/model/Metric.h>
#include <aws/monitoring/model/ResponseMetadata.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatch {
namespace Model {
class ListMetricsResult {
 public:
  AWS_CLOUDWATCH_API ListMetricsResult() = default;
  AWS_CLOUDWATCH_API ListMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_CLOUDWATCH_API ListMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The metrics that match your request. </p>
   */
  inline const Aws::Vector<Metric>& GetMetrics() const { return m_metrics; }
  template <typename MetricsT = Aws::Vector<Metric>>
  void SetMetrics(MetricsT&& value) {
    m_metricsHasBeenSet = true;
    m_metrics = std::forward<MetricsT>(value);
  }
  template <typename MetricsT = Aws::Vector<Metric>>
  ListMetricsResult& WithMetrics(MetricsT&& value) {
    SetMetrics(std::forward<MetricsT>(value));
    return *this;
  }
  template <typename MetricsT = Metric>
  ListMetricsResult& AddMetrics(MetricsT&& value) {
    m_metricsHasBeenSet = true;
    m_metrics.emplace_back(std::forward<MetricsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token that marks the start of the next batch of returned results. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListMetricsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If you are using this operation in a monitoring account, this array contains
   * the account IDs of the source accounts where the metrics in the returned data
   * are from.</p> <p>This field is a 1:1 mapping between each metric that is
   * returned and the ID of the owning account.</p>
   */
  inline const Aws::Vector<Aws::String>& GetOwningAccounts() const { return m_owningAccounts; }
  template <typename OwningAccountsT = Aws::Vector<Aws::String>>
  void SetOwningAccounts(OwningAccountsT&& value) {
    m_owningAccountsHasBeenSet = true;
    m_owningAccounts = std::forward<OwningAccountsT>(value);
  }
  template <typename OwningAccountsT = Aws::Vector<Aws::String>>
  ListMetricsResult& WithOwningAccounts(OwningAccountsT&& value) {
    SetOwningAccounts(std::forward<OwningAccountsT>(value));
    return *this;
  }
  template <typename OwningAccountsT = Aws::String>
  ListMetricsResult& AddOwningAccounts(OwningAccountsT&& value) {
    m_owningAccountsHasBeenSet = true;
    m_owningAccounts.emplace_back(std::forward<OwningAccountsT>(value));
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
  ListMetricsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  ListMetricsResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Metric> m_metrics;

  Aws::String m_nextToken;

  Aws::Vector<Aws::String> m_owningAccounts;

  Aws::String m_requestId;

  ResponseMetadata m_responseMetadata;
  bool m_metricsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_owningAccountsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
