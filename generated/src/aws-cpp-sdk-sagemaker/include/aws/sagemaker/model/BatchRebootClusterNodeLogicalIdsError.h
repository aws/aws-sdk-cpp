/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/BatchRebootClusterNodesErrorCode.h>

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
 * <p>Represents an error encountered when rebooting a node (identified by its
 * logical node ID) from a SageMaker HyperPod cluster.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/BatchRebootClusterNodeLogicalIdsError">AWS
 * API Reference</a></p>
 */
class BatchRebootClusterNodeLogicalIdsError {
 public:
  AWS_SAGEMAKER_API BatchRebootClusterNodeLogicalIdsError() = default;
  AWS_SAGEMAKER_API BatchRebootClusterNodeLogicalIdsError(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API BatchRebootClusterNodeLogicalIdsError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The logical node ID of the node that encountered an error during the reboot
   * operation.</p>
   */
  inline const Aws::String& GetNodeLogicalId() const { return m_nodeLogicalId; }
  inline bool NodeLogicalIdHasBeenSet() const { return m_nodeLogicalIdHasBeenSet; }
  template <typename NodeLogicalIdT = Aws::String>
  void SetNodeLogicalId(NodeLogicalIdT&& value) {
    m_nodeLogicalIdHasBeenSet = true;
    m_nodeLogicalId = std::forward<NodeLogicalIdT>(value);
  }
  template <typename NodeLogicalIdT = Aws::String>
  BatchRebootClusterNodeLogicalIdsError& WithNodeLogicalId(NodeLogicalIdT&& value) {
    SetNodeLogicalId(std::forward<NodeLogicalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error code associated with the error encountered when rebooting a node by
   * logical node ID.</p> <p>Possible values:</p> <ul> <li> <p>
   * <code>InstanceIdNotFound</code>: The node does not exist in the specified
   * cluster.</p> </li> <li> <p> <code>InvalidInstanceStatus</code>: The node is in a
   * state that does not allow rebooting. Wait for the node to finish any ongoing
   * changes before retrying.</p> </li> <li> <p> <code>InstanceIdInUse</code>:
   * Another operation is already in progress for this node. Wait for the operation
   * to complete before retrying.</p> </li> <li> <p>
   * <code>InternalServerError</code>: An internal error occurred while processing
   * this node.</p> </li> </ul>
   */
  inline BatchRebootClusterNodesErrorCode GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  inline void SetErrorCode(BatchRebootClusterNodesErrorCode value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = value;
  }
  inline BatchRebootClusterNodeLogicalIdsError& WithErrorCode(BatchRebootClusterNodesErrorCode value) {
    SetErrorCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable message describing the error encountered when rebooting a
   * node by logical node ID.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  BatchRebootClusterNodeLogicalIdsError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nodeLogicalId;
  bool m_nodeLogicalIdHasBeenSet = false;

  BatchRebootClusterNodesErrorCode m_errorCode{BatchRebootClusterNodesErrorCode::NOT_SET};
  bool m_errorCodeHasBeenSet = false;

  Aws::String m_message;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
