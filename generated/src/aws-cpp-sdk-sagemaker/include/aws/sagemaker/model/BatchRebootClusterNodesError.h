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
 * <p>Represents an error encountered when rebooting a node from a SageMaker
 * HyperPod cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/BatchRebootClusterNodesError">AWS
 * API Reference</a></p>
 */
class BatchRebootClusterNodesError {
 public:
  AWS_SAGEMAKER_API BatchRebootClusterNodesError() = default;
  AWS_SAGEMAKER_API BatchRebootClusterNodesError(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API BatchRebootClusterNodesError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The EC2 instance ID of the node that encountered an error during the reboot
   * operation.</p>
   */
  inline const Aws::String& GetNodeId() const { return m_nodeId; }
  inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }
  template <typename NodeIdT = Aws::String>
  void SetNodeId(NodeIdT&& value) {
    m_nodeIdHasBeenSet = true;
    m_nodeId = std::forward<NodeIdT>(value);
  }
  template <typename NodeIdT = Aws::String>
  BatchRebootClusterNodesError& WithNodeId(NodeIdT&& value) {
    SetNodeId(std::forward<NodeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error code associated with the error encountered when rebooting a
   * node.</p> <p>Possible values:</p> <ul> <li> <p> <code>InstanceIdNotFound</code>:
   * The instance does not exist in the specified cluster.</p> </li> <li> <p>
   * <code>InvalidInstanceStatus</code>: The instance is in a state that does not
   * allow rebooting. Wait for the instance to finish any ongoing changes before
   * retrying.</p> </li> <li> <p> <code>InstanceIdInUse</code>: Another operation is
   * already in progress for this node. Wait for the operation to complete before
   * retrying.</p> </li> <li> <p> <code>InternalServerError</code>: An internal error
   * occurred while processing this node.</p> </li> </ul>
   */
  inline BatchRebootClusterNodesErrorCode GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  inline void SetErrorCode(BatchRebootClusterNodesErrorCode value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = value;
  }
  inline BatchRebootClusterNodesError& WithErrorCode(BatchRebootClusterNodesErrorCode value) {
    SetErrorCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable message describing the error encountered when rebooting a
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
  BatchRebootClusterNodesError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nodeId;

  BatchRebootClusterNodesErrorCode m_errorCode{BatchRebootClusterNodesErrorCode::NOT_SET};

  Aws::String m_message;
  bool m_nodeIdHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
