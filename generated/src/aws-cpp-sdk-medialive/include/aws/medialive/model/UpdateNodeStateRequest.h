/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/UpdateNodeState.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * A request to update the state of a node.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateNodeStateRequest">AWS
   * API Reference</a></p>
   */
  class UpdateNodeStateRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API UpdateNodeStateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNodeState"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The ID of the cluster
     */
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    UpdateNodeStateRequest& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the node.
     */
    inline const Aws::String& GetNodeId() const { return m_nodeId; }
    inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }
    template<typename NodeIdT = Aws::String>
    void SetNodeId(NodeIdT&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::forward<NodeIdT>(value); }
    template<typename NodeIdT = Aws::String>
    UpdateNodeStateRequest& WithNodeId(NodeIdT&& value) { SetNodeId(std::forward<NodeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The state to apply to the Node. Set to ACTIVE (COMMISSIONED) to indicate that
     * the Node is deployable. MediaLive Anywhere will consider this node it needs a
     * Node to run a Channel on, or when it needs a Node to promote from a backup node
     * to an active node. Set to DRAINING to isolate the Node so that MediaLive
     * Anywhere won't use it.
     */
    inline UpdateNodeState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(UpdateNodeState value) { m_stateHasBeenSet = true; m_state = value; }
    inline UpdateNodeStateRequest& WithState(UpdateNodeState value) { SetState(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::String m_nodeId;
    bool m_nodeIdHasBeenSet = false;

    UpdateNodeState m_state{UpdateNodeState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
