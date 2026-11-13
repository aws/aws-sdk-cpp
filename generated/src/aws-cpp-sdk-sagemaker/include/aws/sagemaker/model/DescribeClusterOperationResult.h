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
#include <aws/sagemaker/model/ClusterOperationScalingDetails.h>
#include <aws/sagemaker/model/ClusterOperationStatus.h>
#include <aws/sagemaker/model/ClusterOperationType.h>
#include <aws/sagemaker/model/InstanceGroupHealthCheckConfiguration.h>

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
class DescribeClusterOperationResult {
 public:
  AWS_SAGEMAKER_API DescribeClusterOperationResult() = default;
  AWS_SAGEMAKER_API DescribeClusterOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API DescribeClusterOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier (UUID) of the operation.</p>
   */
  inline const Aws::String& GetOperationId() const { return m_operationId; }
  template <typename OperationIdT = Aws::String>
  void SetOperationId(OperationIdT&& value) {
    m_operationIdHasBeenSet = true;
    m_operationId = std::forward<OperationIdT>(value);
  }
  template <typename OperationIdT = Aws::String>
  DescribeClusterOperationResult& WithOperationId(OperationIdT&& value) {
    SetOperationId(std::forward<OperationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the HyperPod cluster associated with the
   * operation.</p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  DescribeClusterOperationResult& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the operation. Valid values are <code>Scaling</code> or
   * <code>DeepHealthCheck</code>.</p>
   */
  inline ClusterOperationType GetType() const { return m_type; }
  inline void SetType(ClusterOperationType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline DescribeClusterOperationResult& WithType(ClusterOperationType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the operation. Valid values are
   * <code>InProgress</code>, <code>Superseded</code>, or <code>Done</code>.</p>
   */
  inline ClusterOperationStatus GetStatus() const { return m_status; }
  inline void SetStatus(ClusterOperationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeClusterOperationResult& WithStatus(ClusterOperationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the operation was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  DescribeClusterOperationResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The per-instance-group scaling details for the operation. This field is
   * populated when the operation <code>Type</code> is <code>Scaling</code>.</p>
   */
  inline const Aws::Vector<ClusterOperationScalingDetails>& GetScalingDetails() const { return m_scalingDetails; }
  template <typename ScalingDetailsT = Aws::Vector<ClusterOperationScalingDetails>>
  void SetScalingDetails(ScalingDetailsT&& value) {
    m_scalingDetailsHasBeenSet = true;
    m_scalingDetails = std::forward<ScalingDetailsT>(value);
  }
  template <typename ScalingDetailsT = Aws::Vector<ClusterOperationScalingDetails>>
  DescribeClusterOperationResult& WithScalingDetails(ScalingDetailsT&& value) {
    SetScalingDetails(std::forward<ScalingDetailsT>(value));
    return *this;
  }
  template <typename ScalingDetailsT = ClusterOperationScalingDetails>
  DescribeClusterOperationResult& AddScalingDetails(ScalingDetailsT&& value) {
    m_scalingDetailsHasBeenSet = true;
    m_scalingDetails.emplace_back(std::forward<ScalingDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The deep health check details for the operation. This field is populated when
   * the operation <code>Type</code> is <code>DeepHealthCheck</code>.</p>
   */
  inline const Aws::Vector<InstanceGroupHealthCheckConfiguration>& GetDeepHealthCheckDetails() const { return m_deepHealthCheckDetails; }
  template <typename DeepHealthCheckDetailsT = Aws::Vector<InstanceGroupHealthCheckConfiguration>>
  void SetDeepHealthCheckDetails(DeepHealthCheckDetailsT&& value) {
    m_deepHealthCheckDetailsHasBeenSet = true;
    m_deepHealthCheckDetails = std::forward<DeepHealthCheckDetailsT>(value);
  }
  template <typename DeepHealthCheckDetailsT = Aws::Vector<InstanceGroupHealthCheckConfiguration>>
  DescribeClusterOperationResult& WithDeepHealthCheckDetails(DeepHealthCheckDetailsT&& value) {
    SetDeepHealthCheckDetails(std::forward<DeepHealthCheckDetailsT>(value));
    return *this;
  }
  template <typename DeepHealthCheckDetailsT = InstanceGroupHealthCheckConfiguration>
  DescribeClusterOperationResult& AddDeepHealthCheckDetails(DeepHealthCheckDetailsT&& value) {
    m_deepHealthCheckDetailsHasBeenSet = true;
    m_deepHealthCheckDetails.emplace_back(std::forward<DeepHealthCheckDetailsT>(value));
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
  DescribeClusterOperationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_operationId;

  Aws::String m_clusterArn;

  ClusterOperationType m_type{ClusterOperationType::NOT_SET};

  ClusterOperationStatus m_status{ClusterOperationStatus::NOT_SET};

  Aws::Utils::DateTime m_creationTime{};

  Aws::Vector<ClusterOperationScalingDetails> m_scalingDetails;

  Aws::Vector<InstanceGroupHealthCheckConfiguration> m_deepHealthCheckDetails;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_operationIdHasBeenSet = false;
  bool m_clusterArnHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_scalingDetailsHasBeenSet = false;
  bool m_deepHealthCheckDetailsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
