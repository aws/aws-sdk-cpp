/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
 * <p>An in-cluster inference gateway, identified by the SageMaker HyperPod cluster
 * that runs it (<code>ClusterArn</code>), its Kubernetes namespace
 * (<code>Namespace</code>), and the name of the
 * <code>InferenceGatewayConfig</code> resource that defines it
 * (<code>Name</code>).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/GlobalInferenceGatewayMember">AWS
 * API Reference</a></p>
 */
class GlobalInferenceGatewayMember {
 public:
  AWS_SAGEMAKER_API GlobalInferenceGatewayMember() = default;
  AWS_SAGEMAKER_API GlobalInferenceGatewayMember(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API GlobalInferenceGatewayMember& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  GlobalInferenceGatewayMember& WithName(NameT&& value) {
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
  GlobalInferenceGatewayMember& WithNamespace(NamespaceT&& value) {
    SetNamespace(std::forward<NamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the SageMaker HyperPod cluster that runs
   * the in-cluster inference gateway. The cluster must be in the same account and
   * partition as the global inference gateway. It can be in a different Region, but
   * not in an opt-in Region.</p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  GlobalInferenceGatewayMember& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_namespace;

  Aws::String m_clusterArn;
  bool m_nameHasBeenSet = false;
  bool m_namespaceHasBeenSet = false;
  bool m_clusterArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
