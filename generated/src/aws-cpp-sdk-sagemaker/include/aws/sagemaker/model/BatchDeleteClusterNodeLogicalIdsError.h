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
   * <p>Information about an error that occurred when attempting to delete a node
   * identified by its <code>NodeLogicalId</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/BatchDeleteClusterNodeLogicalIdsError">AWS
   * API Reference</a></p>
   */
  class BatchDeleteClusterNodeLogicalIdsError
  {
  public:
    AWS_SAGEMAKER_API BatchDeleteClusterNodeLogicalIdsError() = default;
    AWS_SAGEMAKER_API BatchDeleteClusterNodeLogicalIdsError(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API BatchDeleteClusterNodeLogicalIdsError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error code associated with the failure. Possible values include
     * <code>NodeLogicalIdNotFound</code>, <code>InvalidNodeStatus</code>, and
     * <code>InternalError</code>.</p>
     */
    inline BatchDeleteClusterNodesErrorCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(BatchDeleteClusterNodesErrorCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline BatchDeleteClusterNodeLogicalIdsError& WithCode(BatchDeleteClusterNodesErrorCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive message providing additional details about the error.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    BatchDeleteClusterNodeLogicalIdsError& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>NodeLogicalId</code> of the node that could not be deleted.</p>
     */
    inline const Aws::String& GetNodeLogicalId() const { return m_nodeLogicalId; }
    inline bool NodeLogicalIdHasBeenSet() const { return m_nodeLogicalIdHasBeenSet; }
    template<typename NodeLogicalIdT = Aws::String>
    void SetNodeLogicalId(NodeLogicalIdT&& value) { m_nodeLogicalIdHasBeenSet = true; m_nodeLogicalId = std::forward<NodeLogicalIdT>(value); }
    template<typename NodeLogicalIdT = Aws::String>
    BatchDeleteClusterNodeLogicalIdsError& WithNodeLogicalId(NodeLogicalIdT&& value) { SetNodeLogicalId(std::forward<NodeLogicalIdT>(value)); return *this;}
    ///@}
  private:

    BatchDeleteClusterNodesErrorCode m_code{BatchDeleteClusterNodesErrorCode::NOT_SET};
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_nodeLogicalId;
    bool m_nodeLogicalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
