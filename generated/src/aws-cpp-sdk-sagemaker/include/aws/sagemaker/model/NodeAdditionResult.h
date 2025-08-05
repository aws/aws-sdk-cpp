/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ClusterInstanceStatus.h>
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
   * <p>Information about a node that was successfully added to the
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/NodeAdditionResult">AWS
   * API Reference</a></p>
   */
  class NodeAdditionResult
  {
  public:
    AWS_SAGEMAKER_API NodeAdditionResult() = default;
    AWS_SAGEMAKER_API NodeAdditionResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API NodeAdditionResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier assigned to the node that can be used to track its
     * provisioning status through the <code>DescribeClusterNode</code> operation.</p>
     */
    inline const Aws::String& GetNodeLogicalId() const { return m_nodeLogicalId; }
    inline bool NodeLogicalIdHasBeenSet() const { return m_nodeLogicalIdHasBeenSet; }
    template<typename NodeLogicalIdT = Aws::String>
    void SetNodeLogicalId(NodeLogicalIdT&& value) { m_nodeLogicalIdHasBeenSet = true; m_nodeLogicalId = std::forward<NodeLogicalIdT>(value); }
    template<typename NodeLogicalIdT = Aws::String>
    NodeAdditionResult& WithNodeLogicalId(NodeLogicalIdT&& value) { SetNodeLogicalId(std::forward<NodeLogicalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the instance group to which the node was added.</p>
     */
    inline const Aws::String& GetInstanceGroupName() const { return m_instanceGroupName; }
    inline bool InstanceGroupNameHasBeenSet() const { return m_instanceGroupNameHasBeenSet; }
    template<typename InstanceGroupNameT = Aws::String>
    void SetInstanceGroupName(InstanceGroupNameT&& value) { m_instanceGroupNameHasBeenSet = true; m_instanceGroupName = std::forward<InstanceGroupNameT>(value); }
    template<typename InstanceGroupNameT = Aws::String>
    NodeAdditionResult& WithInstanceGroupName(InstanceGroupNameT&& value) { SetInstanceGroupName(std::forward<InstanceGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the node. Possible values include <code>Pending</code>,
     * <code>Running</code>, <code>Failed</code>, <code>ShuttingDown</code>,
     * <code>SystemUpdating</code>, <code>DeepHealthCheckInProgress</code>, and
     * <code>NotFound</code>.</p>
     */
    inline ClusterInstanceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ClusterInstanceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline NodeAdditionResult& WithStatus(ClusterInstanceStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_nodeLogicalId;
    bool m_nodeLogicalIdHasBeenSet = false;

    Aws::String m_instanceGroupName;
    bool m_instanceGroupNameHasBeenSet = false;

    ClusterInstanceStatus m_status{ClusterInstanceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
