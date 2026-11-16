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
#include <aws/sagemaker/model/InferenceRouterStatus.h>
#include <aws/sagemaker/model/RoutingTarget.h>

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
class DescribeInferenceRouterResult {
 public:
  AWS_SAGEMAKER_API DescribeInferenceRouterResult() = default;
  AWS_SAGEMAKER_API DescribeInferenceRouterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API DescribeInferenceRouterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the inference router.</p>
   */
  inline const Aws::String& GetInferenceRouterName() const { return m_inferenceRouterName; }
  template <typename InferenceRouterNameT = Aws::String>
  void SetInferenceRouterName(InferenceRouterNameT&& value) {
    m_inferenceRouterNameHasBeenSet = true;
    m_inferenceRouterName = std::forward<InferenceRouterNameT>(value);
  }
  template <typename InferenceRouterNameT = Aws::String>
  DescribeInferenceRouterResult& WithInferenceRouterName(InferenceRouterNameT&& value) {
    SetInferenceRouterName(std::forward<InferenceRouterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the inference router.</p>
   */
  inline const Aws::String& GetInferenceRouterArn() const { return m_inferenceRouterArn; }
  template <typename InferenceRouterArnT = Aws::String>
  void SetInferenceRouterArn(InferenceRouterArnT&& value) {
    m_inferenceRouterArnHasBeenSet = true;
    m_inferenceRouterArn = std::forward<InferenceRouterArnT>(value);
  }
  template <typename InferenceRouterArnT = Aws::String>
  DescribeInferenceRouterResult& WithInferenceRouterArn(InferenceRouterArnT&& value) {
    SetInferenceRouterArn(std::forward<InferenceRouterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The routing targets of the inference router. Each destination includes its
   * <code>RoutingStatus</code>. You can send these routing targets back in an
   * <code>UpdateInferenceRouter</code> request without changes.</p>
   */
  inline const Aws::Vector<RoutingTarget>& GetRoutingTargets() const { return m_routingTargets; }
  template <typename RoutingTargetsT = Aws::Vector<RoutingTarget>>
  void SetRoutingTargets(RoutingTargetsT&& value) {
    m_routingTargetsHasBeenSet = true;
    m_routingTargets = std::forward<RoutingTargetsT>(value);
  }
  template <typename RoutingTargetsT = Aws::Vector<RoutingTarget>>
  DescribeInferenceRouterResult& WithRoutingTargets(RoutingTargetsT&& value) {
    SetRoutingTargets(std::forward<RoutingTargetsT>(value));
    return *this;
  }
  template <typename RoutingTargetsT = RoutingTarget>
  DescribeInferenceRouterResult& AddRoutingTargets(RoutingTargetsT&& value) {
    m_routingTargetsHasBeenSet = true;
    m_routingTargets.emplace_back(std::forward<RoutingTargetsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the inference router.</p>
   */
  inline InferenceRouterStatus GetStatus() const { return m_status; }
  inline void SetStatus(InferenceRouterStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeInferenceRouterResult& WithStatus(InferenceRouterStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the status is <code>Failed</code>, the reason that the inference router
   * failed.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  DescribeInferenceRouterResult& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the inference router was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  DescribeInferenceRouterResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the inference router was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  DescribeInferenceRouterResult& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
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
  DescribeInferenceRouterResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_inferenceRouterName;

  Aws::String m_inferenceRouterArn;

  Aws::Vector<RoutingTarget> m_routingTargets;

  InferenceRouterStatus m_status{InferenceRouterStatus::NOT_SET};

  Aws::String m_statusReason;

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_inferenceRouterNameHasBeenSet = false;
  bool m_inferenceRouterArnHasBeenSet = false;
  bool m_routingTargetsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
