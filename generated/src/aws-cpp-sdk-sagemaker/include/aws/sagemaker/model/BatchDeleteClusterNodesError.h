/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/BatchDeleteClusterNodesErrorCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Represents an error encountered when deleting a node from a SageMaker
   * HyperPod cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/BatchDeleteClusterNodesError">AWS
   * API Reference</a></p>
   */
  class BatchDeleteClusterNodesError
  {
  public:
    AWS_SAGEMAKER_API BatchDeleteClusterNodesError() = default;
    AWS_SAGEMAKER_API BatchDeleteClusterNodesError(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API BatchDeleteClusterNodesError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error code associated with the error encountered when deleting a
     * node.</p> <p>The code provides information about the specific issue encountered,
     * such as the node not being found, the node's status being invalid for deletion,
     * or the node ID being in use by another process.</p>
     */
    inline BatchDeleteClusterNodesErrorCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(BatchDeleteClusterNodesErrorCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline BatchDeleteClusterNodesError& WithCode(BatchDeleteClusterNodesErrorCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message describing the error encountered when deleting a node.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    BatchDeleteClusterNodesError& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the node that encountered an error during the deletion process.</p>
     */
    inline const Aws::String& GetNodeId() const { return m_nodeId; }
    inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }
    template<typename NodeIdT = Aws::String>
    void SetNodeId(NodeIdT&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::forward<NodeIdT>(value); }
    template<typename NodeIdT = Aws::String>
    BatchDeleteClusterNodesError& WithNodeId(NodeIdT&& value) { SetNodeId(std::forward<NodeIdT>(value)); return *this;}
    ///@}
  private:

    BatchDeleteClusterNodesErrorCode m_code{BatchDeleteClusterNodesErrorCode::NOT_SET};
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_nodeId;
    bool m_nodeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
