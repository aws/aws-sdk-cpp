/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
class AttachClusterNodeNetworkInterfaceResult {
 public:
  AWS_SAGEMAKER_API AttachClusterNodeNetworkInterfaceResult() = default;
  AWS_SAGEMAKER_API AttachClusterNodeNetworkInterfaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API AttachClusterNodeNetworkInterfaceResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of your SageMaker HyperPod cluster where the
   * network interface attachment operation was performed. </p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  AttachClusterNodeNetworkInterfaceResult& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The unique identifier of the cluster node where your network interface was
   * attached. </p>
   */
  inline const Aws::String& GetNodeId() const { return m_nodeId; }
  template <typename NodeIdT = Aws::String>
  void SetNodeId(NodeIdT&& value) {
    m_nodeIdHasBeenSet = true;
    m_nodeId = std::forward<NodeIdT>(value);
  }
  template <typename NodeIdT = Aws::String>
  AttachClusterNodeNetworkInterfaceResult& WithNodeId(NodeIdT&& value) {
    SetNodeId(std::forward<NodeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The unique identifier of the elastic network interface (ENI) that was
   * attached. </p>
   */
  inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
  template <typename NetworkInterfaceIdT = Aws::String>
  void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) {
    m_networkInterfaceIdHasBeenSet = true;
    m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value);
  }
  template <typename NetworkInterfaceIdT = Aws::String>
  AttachClusterNodeNetworkInterfaceResult& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) {
    SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The unique identifier of the network interface attachment. Use this value to
   * reference or detach the network interface later. </p>
   */
  inline const Aws::String& GetAttachmentId() const { return m_attachmentId; }
  template <typename AttachmentIdT = Aws::String>
  void SetAttachmentId(AttachmentIdT&& value) {
    m_attachmentIdHasBeenSet = true;
    m_attachmentId = std::forward<AttachmentIdT>(value);
  }
  template <typename AttachmentIdT = Aws::String>
  AttachClusterNodeNetworkInterfaceResult& WithAttachmentId(AttachmentIdT&& value) {
    SetAttachmentId(std::forward<AttachmentIdT>(value));
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
  AttachClusterNodeNetworkInterfaceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_clusterArn;

  Aws::String m_nodeId;

  Aws::String m_networkInterfaceId;

  Aws::String m_attachmentId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_clusterArnHasBeenSet = false;
  bool m_nodeIdHasBeenSet = false;
  bool m_networkInterfaceIdHasBeenSet = false;
  bool m_attachmentIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
