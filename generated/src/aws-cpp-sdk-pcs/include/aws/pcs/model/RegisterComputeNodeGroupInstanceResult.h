/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/model/Endpoint.h>
#include <aws/pcs/model/NodeLifecycleActions.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PCS {
namespace Model {
class RegisterComputeNodeGroupInstanceResult {
 public:
  AWS_PCS_API RegisterComputeNodeGroupInstanceResult() = default;
  AWS_PCS_API RegisterComputeNodeGroupInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PCS_API RegisterComputeNodeGroupInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The scheduler node ID for this instance.</p>
   */
  inline const Aws::String& GetNodeID() const { return m_nodeID; }
  template <typename NodeIDT = Aws::String>
  void SetNodeID(NodeIDT&& value) {
    m_nodeIDHasBeenSet = true;
    m_nodeID = std::forward<NodeIDT>(value);
  }
  template <typename NodeIDT = Aws::String>
  RegisterComputeNodeGroupInstanceResult& WithNodeID(NodeIDT&& value) {
    SetNodeID(std::forward<NodeIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For the Slurm scheduler, this is the shared Munge key the scheduler uses to
   * authenticate compute node group instances.</p>
   */
  inline const Aws::String& GetSharedSecret() const { return m_sharedSecret; }
  template <typename SharedSecretT = Aws::String>
  void SetSharedSecret(SharedSecretT&& value) {
    m_sharedSecretHasBeenSet = true;
    m_sharedSecret = std::forward<SharedSecretT>(value);
  }
  template <typename SharedSecretT = Aws::String>
  RegisterComputeNodeGroupInstanceResult& WithSharedSecret(SharedSecretT&& value) {
    SetSharedSecret(std::forward<SharedSecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of endpoints available for interaction with the scheduler.</p>
   */
  inline const Aws::Vector<Endpoint>& GetEndpoints() const { return m_endpoints; }
  template <typename EndpointsT = Aws::Vector<Endpoint>>
  void SetEndpoints(EndpointsT&& value) {
    m_endpointsHasBeenSet = true;
    m_endpoints = std::forward<EndpointsT>(value);
  }
  template <typename EndpointsT = Aws::Vector<Endpoint>>
  RegisterComputeNodeGroupInstanceResult& WithEndpoints(EndpointsT&& value) {
    SetEndpoints(std::forward<EndpointsT>(value));
    return *this;
  }
  template <typename EndpointsT = Endpoint>
  RegisterComputeNodeGroupInstanceResult& AddEndpoints(EndpointsT&& value) {
    m_endpointsHasBeenSet = true;
    m_endpoints.emplace_back(std::forward<EndpointsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the cluster that the compute node registered into.</p>
   */
  inline const Aws::String& GetClusterName() const { return m_clusterName; }
  template <typename ClusterNameT = Aws::String>
  void SetClusterName(ClusterNameT&& value) {
    m_clusterNameHasBeenSet = true;
    m_clusterName = std::forward<ClusterNameT>(value);
  }
  template <typename ClusterNameT = Aws::String>
  RegisterComputeNodeGroupInstanceResult& WithClusterName(ClusterNameT&& value) {
    SetClusterName(std::forward<ClusterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the compute node group that the compute node registered into.</p>
   */
  inline const Aws::String& GetComputeNodeGroupId() const { return m_computeNodeGroupId; }
  template <typename ComputeNodeGroupIdT = Aws::String>
  void SetComputeNodeGroupId(ComputeNodeGroupIdT&& value) {
    m_computeNodeGroupIdHasBeenSet = true;
    m_computeNodeGroupId = std::forward<ComputeNodeGroupIdT>(value);
  }
  template <typename ComputeNodeGroupIdT = Aws::String>
  RegisterComputeNodeGroupInstanceResult& WithComputeNodeGroupId(ComputeNodeGroupIdT&& value) {
    SetComputeNodeGroupId(std::forward<ComputeNodeGroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the compute node group that the compute node registered into.</p>
   */
  inline const Aws::String& GetComputeNodeGroupName() const { return m_computeNodeGroupName; }
  template <typename ComputeNodeGroupNameT = Aws::String>
  void SetComputeNodeGroupName(ComputeNodeGroupNameT&& value) {
    m_computeNodeGroupNameHasBeenSet = true;
    m_computeNodeGroupName = std::forward<ComputeNodeGroupNameT>(value);
  }
  template <typename ComputeNodeGroupNameT = Aws::String>
  RegisterComputeNodeGroupInstanceResult& WithComputeNodeGroupName(ComputeNodeGroupNameT&& value) {
    SetComputeNodeGroupName(std::forward<ComputeNodeGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The node lifecycle actions configured for the node group, including scripts
   * to run when a compute node finishes bootstrapping or becomes ready to accept
   * jobs.</p>
   */
  inline const NodeLifecycleActions& GetNodeLifecycleActions() const { return m_nodeLifecycleActions; }
  template <typename NodeLifecycleActionsT = NodeLifecycleActions>
  void SetNodeLifecycleActions(NodeLifecycleActionsT&& value) {
    m_nodeLifecycleActionsHasBeenSet = true;
    m_nodeLifecycleActions = std::forward<NodeLifecycleActionsT>(value);
  }
  template <typename NodeLifecycleActionsT = NodeLifecycleActions>
  RegisterComputeNodeGroupInstanceResult& WithNodeLifecycleActions(NodeLifecycleActionsT&& value) {
    SetNodeLifecycleActions(std::forward<NodeLifecycleActionsT>(value));
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
  RegisterComputeNodeGroupInstanceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nodeID;

  Aws::String m_sharedSecret;

  Aws::Vector<Endpoint> m_endpoints;

  Aws::String m_clusterName;

  Aws::String m_computeNodeGroupId;

  Aws::String m_computeNodeGroupName;

  NodeLifecycleActions m_nodeLifecycleActions;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nodeIDHasBeenSet = false;
  bool m_sharedSecretHasBeenSet = false;
  bool m_endpointsHasBeenSet = false;
  bool m_clusterNameHasBeenSet = false;
  bool m_computeNodeGroupIdHasBeenSet = false;
  bool m_computeNodeGroupNameHasBeenSet = false;
  bool m_nodeLifecycleActionsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
