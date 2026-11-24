/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/MoveClusterNodesErrorCode.h>

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
 * <p>Describes why a node, identified by its instance ID, could not be moved in a
 * <code>MoveClusterNodes</code> request. Contains the instance ID, an error code,
 * and an error message.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MoveClusterNodesError">AWS
 * API Reference</a></p>
 */
class MoveClusterNodesError {
 public:
  AWS_SAGEMAKER_API MoveClusterNodesError() = default;
  AWS_SAGEMAKER_API MoveClusterNodesError(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API MoveClusterNodesError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The error code associated with the error encountered when moving the node.
   * The error code is one of the following values:</p> <ul> <li> <p>
   * <code>NodeIdNotFound</code>: The node does not exist in the source instance
   * group.</p> </li> <li> <p> <code>InvalidNodeStatus</code>: The node is not in a
   * state that allows the move. For example, the node is not <code>Running</code>,
   * is not in a subnet of the target instance group, or has an attached Amazon EBS
   * volume that you must detach first.</p> </li> <li> <p> <code>NodeIdInUse</code>:
   * Another operation is already in progress for this node. Wait for the operation
   * to complete before retrying.</p> </li> <li> <p>
   * <code>NodeInstanceTypeMismatch</code>: The target instance group does not
   * support the node's instance type.</p> </li> </ul>
   */
  inline MoveClusterNodesErrorCode GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(MoveClusterNodesErrorCode value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline MoveClusterNodesError& WithCode(MoveClusterNodesErrorCode value) {
    SetCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable message describing the error encountered when moving the
   * node.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  MoveClusterNodesError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instance ID of the node that could not be moved.</p>
   */
  inline const Aws::String& GetNodeId() const { return m_nodeId; }
  inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }
  template <typename NodeIdT = Aws::String>
  void SetNodeId(NodeIdT&& value) {
    m_nodeIdHasBeenSet = true;
    m_nodeId = std::forward<NodeIdT>(value);
  }
  template <typename NodeIdT = Aws::String>
  MoveClusterNodesError& WithNodeId(NodeIdT&& value) {
    SetNodeId(std::forward<NodeIdT>(value));
    return *this;
  }
  ///@}
 private:
  MoveClusterNodesErrorCode m_code{MoveClusterNodesErrorCode::NOT_SET};

  Aws::String m_message;

  Aws::String m_nodeId;
  bool m_codeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
  bool m_nodeIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
