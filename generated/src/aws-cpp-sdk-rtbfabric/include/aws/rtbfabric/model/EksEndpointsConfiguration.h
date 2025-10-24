/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {

/**
 * <p>Describes the configuration of an Amazon Elastic Kubernetes Service
 * endpoint.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/EksEndpointsConfiguration">AWS
 * API Reference</a></p>
 */
class EksEndpointsConfiguration {
 public:
  AWS_RTBFABRIC_API EksEndpointsConfiguration() = default;
  AWS_RTBFABRIC_API EksEndpointsConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API EksEndpointsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the endpoint resource.</p>
   */
  inline const Aws::String& GetEndpointsResourceName() const { return m_endpointsResourceName; }
  inline bool EndpointsResourceNameHasBeenSet() const { return m_endpointsResourceNameHasBeenSet; }
  template <typename EndpointsResourceNameT = Aws::String>
  void SetEndpointsResourceName(EndpointsResourceNameT&& value) {
    m_endpointsResourceNameHasBeenSet = true;
    m_endpointsResourceName = std::forward<EndpointsResourceNameT>(value);
  }
  template <typename EndpointsResourceNameT = Aws::String>
  EksEndpointsConfiguration& WithEndpointsResourceName(EndpointsResourceNameT&& value) {
    SetEndpointsResourceName(std::forward<EndpointsResourceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The namespace of the endpoint resource.</p>
   */
  inline const Aws::String& GetEndpointsResourceNamespace() const { return m_endpointsResourceNamespace; }
  inline bool EndpointsResourceNamespaceHasBeenSet() const { return m_endpointsResourceNamespaceHasBeenSet; }
  template <typename EndpointsResourceNamespaceT = Aws::String>
  void SetEndpointsResourceNamespace(EndpointsResourceNamespaceT&& value) {
    m_endpointsResourceNamespaceHasBeenSet = true;
    m_endpointsResourceNamespace = std::forward<EndpointsResourceNamespaceT>(value);
  }
  template <typename EndpointsResourceNamespaceT = Aws::String>
  EksEndpointsConfiguration& WithEndpointsResourceNamespace(EndpointsResourceNamespaceT&& value) {
    SetEndpointsResourceNamespace(std::forward<EndpointsResourceNamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URI of the cluster API server endpoint.</p>
   */
  inline const Aws::String& GetClusterApiServerEndpointUri() const { return m_clusterApiServerEndpointUri; }
  inline bool ClusterApiServerEndpointUriHasBeenSet() const { return m_clusterApiServerEndpointUriHasBeenSet; }
  template <typename ClusterApiServerEndpointUriT = Aws::String>
  void SetClusterApiServerEndpointUri(ClusterApiServerEndpointUriT&& value) {
    m_clusterApiServerEndpointUriHasBeenSet = true;
    m_clusterApiServerEndpointUri = std::forward<ClusterApiServerEndpointUriT>(value);
  }
  template <typename ClusterApiServerEndpointUriT = Aws::String>
  EksEndpointsConfiguration& WithClusterApiServerEndpointUri(ClusterApiServerEndpointUriT&& value) {
    SetClusterApiServerEndpointUri(std::forward<ClusterApiServerEndpointUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CA certificate chain of the cluster API server.</p>
   */
  inline const Aws::String& GetClusterApiServerCaCertificateChain() const { return m_clusterApiServerCaCertificateChain; }
  inline bool ClusterApiServerCaCertificateChainHasBeenSet() const { return m_clusterApiServerCaCertificateChainHasBeenSet; }
  template <typename ClusterApiServerCaCertificateChainT = Aws::String>
  void SetClusterApiServerCaCertificateChain(ClusterApiServerCaCertificateChainT&& value) {
    m_clusterApiServerCaCertificateChainHasBeenSet = true;
    m_clusterApiServerCaCertificateChain = std::forward<ClusterApiServerCaCertificateChainT>(value);
  }
  template <typename ClusterApiServerCaCertificateChainT = Aws::String>
  EksEndpointsConfiguration& WithClusterApiServerCaCertificateChain(ClusterApiServerCaCertificateChainT&& value) {
    SetClusterApiServerCaCertificateChain(std::forward<ClusterApiServerCaCertificateChainT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the cluster.</p>
   */
  inline const Aws::String& GetClusterName() const { return m_clusterName; }
  inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
  template <typename ClusterNameT = Aws::String>
  void SetClusterName(ClusterNameT&& value) {
    m_clusterNameHasBeenSet = true;
    m_clusterName = std::forward<ClusterNameT>(value);
  }
  template <typename ClusterNameT = Aws::String>
  EksEndpointsConfiguration& WithClusterName(ClusterNameT&& value) {
    SetClusterName(std::forward<ClusterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The role ARN for the cluster.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  EksEndpointsConfiguration& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_endpointsResourceName;
  bool m_endpointsResourceNameHasBeenSet = false;

  Aws::String m_endpointsResourceNamespace;
  bool m_endpointsResourceNamespaceHasBeenSet = false;

  Aws::String m_clusterApiServerEndpointUri;
  bool m_clusterApiServerEndpointUriHasBeenSet = false;

  Aws::String m_clusterApiServerCaCertificateChain;
  bool m_clusterApiServerCaCertificateChainHasBeenSet = false;

  Aws::String m_clusterName;
  bool m_clusterNameHasBeenSet = false;

  Aws::String m_roleArn;
  bool m_roleArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
