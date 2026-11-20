/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/GlobalInferenceGatewayMemberStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>Summary information about an in-cluster inference gateway in a global
 * inference gateway, including its status.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/GlobalInferenceGatewayMemberSummary">AWS
 * API Reference</a></p>
 */
class GlobalInferenceGatewayMemberSummary {
 public:
  AWS_SAGEMAKER_API GlobalInferenceGatewayMemberSummary() = default;
  AWS_SAGEMAKER_API GlobalInferenceGatewayMemberSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API GlobalInferenceGatewayMemberSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the <code>InferenceGatewayConfig</code> resource that defines the
   * in-cluster inference gateway.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GlobalInferenceGatewayMemberSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Kubernetes namespace of the in-cluster inference gateway.</p>
   */
  inline const Aws::String& GetNamespace() const { return m_namespace; }
  inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
  template <typename NamespaceT = Aws::String>
  void SetNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace = std::forward<NamespaceT>(value);
  }
  template <typename NamespaceT = Aws::String>
  GlobalInferenceGatewayMemberSummary& WithNamespace(NamespaceT&& value) {
    SetNamespace(std::forward<NamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the SageMaker HyperPod cluster that runs
   * the in-cluster inference gateway.</p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  GlobalInferenceGatewayMemberSummary& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the in-cluster inference gateway in the global inference
   * gateway. This status describes the membership in the global inference gateway,
   * not the health of the in-cluster inference gateway.</p>
   */
  inline GlobalInferenceGatewayMemberStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(GlobalInferenceGatewayMemberStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GlobalInferenceGatewayMemberSummary& WithStatus(GlobalInferenceGatewayMemberStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason that adding or removing the in-cluster inference gateway failed.
   * This value is set only when the status is <code>FAILED</code>.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  GlobalInferenceGatewayMemberSummary& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_namespace;

  Aws::String m_clusterArn;

  GlobalInferenceGatewayMemberStatus m_status{GlobalInferenceGatewayMemberStatus::NOT_SET};

  Aws::String m_failureReason;
  bool m_nameHasBeenSet = false;
  bool m_namespaceHasBeenSet = false;
  bool m_clusterArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
