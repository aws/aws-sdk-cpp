/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ExtensionDetails.h>
#include <aws/sagemaker/model/ExtensionHealth.h>
#include <aws/sagemaker/model/ExtensionNodeSummary.h>

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
class DescribeClusterExtensionResult {
 public:
  AWS_SAGEMAKER_API DescribeClusterExtensionResult() = default;
  AWS_SAGEMAKER_API DescribeClusterExtensionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API DescribeClusterExtensionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The details of the extension.</p>
   */
  inline const ExtensionDetails& GetExtensionDetails() const { return m_extensionDetails; }
  template <typename ExtensionDetailsT = ExtensionDetails>
  void SetExtensionDetails(ExtensionDetailsT&& value) {
    m_extensionDetailsHasBeenSet = true;
    m_extensionDetails = std::forward<ExtensionDetailsT>(value);
  }
  template <typename ExtensionDetailsT = ExtensionDetails>
  DescribeClusterExtensionResult& WithExtensionDetails(ExtensionDetailsT&& value) {
    SetExtensionDetails(std::forward<ExtensionDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of how many nodes in your cluster the extension targets, and how
   * many of them run the extension's current version and configuration.</p>
   */
  inline const ExtensionNodeSummary& GetNodeSummary() const { return m_nodeSummary; }
  template <typename NodeSummaryT = ExtensionNodeSummary>
  void SetNodeSummary(NodeSummaryT&& value) {
    m_nodeSummaryHasBeenSet = true;
    m_nodeSummary = std::forward<NodeSummaryT>(value);
  }
  template <typename NodeSummaryT = ExtensionNodeSummary>
  DescribeClusterExtensionResult& WithNodeSummary(NodeSummaryT&& value) {
    SetNodeSummary(std::forward<NodeSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The problems that affect the extension on the cluster's nodes, grouped by
   * cause, with the number of nodes that each problem affects. Use it to find out
   * why <code>ActiveCount</code> is lower than <code>TotalCount</code>, or why the
   * status is <code>Degraded</code>, <code>CreateFailed</code>, or
   * <code>UpdateFailed</code>. SageMaker HyperPod omits <code>Health</code> when no
   * node has a problem. Nodes where SageMaker HyperPod hasn't finished installing or
   * updating the extension aren't counted in any issue, unless an earlier attempt
   * failed on them.</p>
   */
  inline const ExtensionHealth& GetHealth() const { return m_health; }
  template <typename HealthT = ExtensionHealth>
  void SetHealth(HealthT&& value) {
    m_healthHasBeenSet = true;
    m_health = std::forward<HealthT>(value);
  }
  template <typename HealthT = ExtensionHealth>
  DescribeClusterExtensionResult& WithHealth(HealthT&& value) {
    SetHealth(std::forward<HealthT>(value));
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
  DescribeClusterExtensionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ExtensionDetails m_extensionDetails;

  ExtensionNodeSummary m_nodeSummary;

  ExtensionHealth m_health;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_extensionDetailsHasBeenSet = false;
  bool m_nodeSummaryHasBeenSet = false;
  bool m_healthHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
