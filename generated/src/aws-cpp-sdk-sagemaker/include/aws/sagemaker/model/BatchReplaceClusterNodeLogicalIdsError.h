/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/BatchReplaceClusterNodesErrorCode.h>

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
 * <p>Represents an error encountered when replacing a node (identified by its
 * logical node ID) in a SageMaker HyperPod cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/BatchReplaceClusterNodeLogicalIdsError">AWS
 * API Reference</a></p>
 */
class BatchReplaceClusterNodeLogicalIdsError {
 public:
  AWS_SAGEMAKER_API BatchReplaceClusterNodeLogicalIdsError() = default;
  AWS_SAGEMAKER_API BatchReplaceClusterNodeLogicalIdsError(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API BatchReplaceClusterNodeLogicalIdsError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The logical node ID of the node that encountered an error during the
   * replacement operation.</p>
   */
  inline const Aws::String& GetNodeLogicalId() const { return m_nodeLogicalId; }
  inline bool NodeLogicalIdHasBeenSet() const { return m_nodeLogicalIdHasBeenSet; }
  template <typename NodeLogicalIdT = Aws::String>
  void SetNodeLogicalId(NodeLogicalIdT&& value) {
    m_nodeLogicalIdHasBeenSet = true;
    m_nodeLogicalId = std::forward<NodeLogicalIdT>(value);
  }
  template <typename NodeLogicalIdT = Aws::String>
  BatchReplaceClusterNodeLogicalIdsError& WithNodeLogicalId(NodeLogicalIdT&& value) {
    SetNodeLogicalId(std::forward<NodeLogicalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error code associated with the error encountered when replacing a node by
   * logical node ID.</p> <p>Possible values:</p> <ul> <li> <p>
   * <code>InstanceIdNotFound</code>: The node does not exist in the specified
   * cluster.</p> </li> <li> <p> <code>InvalidInstanceStatus</code>: The node is in a
   * state that does not allow replacement. Wait for the node to finish any ongoing
   * changes before retrying.</p> </li> <li> <p> <code>InstanceIdInUse</code>:
   * Another operation is already in progress for this node. Wait for the operation
   * to complete before retrying.</p> </li> <li> <p>
   * <code>InternalServerError</code>: An internal error occurred while processing
   * this node.</p> </li> </ul>
   */
  inline BatchReplaceClusterNodesErrorCode GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  inline void SetErrorCode(BatchReplaceClusterNodesErrorCode value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = value;
  }
  inline BatchReplaceClusterNodeLogicalIdsError& WithErrorCode(BatchReplaceClusterNodesErrorCode value) {
    SetErrorCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable message describing the error encountered when replacing a
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
  BatchReplaceClusterNodeLogicalIdsError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nodeLogicalId;
  bool m_nodeLogicalIdHasBeenSet = false;

  BatchReplaceClusterNodesErrorCode m_errorCode{BatchReplaceClusterNodesErrorCode::NOT_SET};
  bool m_errorCodeHasBeenSet = false;

  Aws::String m_message;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
