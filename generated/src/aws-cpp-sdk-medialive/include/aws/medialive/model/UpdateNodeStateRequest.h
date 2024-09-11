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
    AWS_MEDIALIVE_API UpdateNodeStateRequest();

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
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }
    inline UpdateNodeStateRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline UpdateNodeStateRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline UpdateNodeStateRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the node.
     */
    inline const Aws::String& GetNodeId() const{ return m_nodeId; }
    inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }
    inline void SetNodeId(const Aws::String& value) { m_nodeIdHasBeenSet = true; m_nodeId = value; }
    inline void SetNodeId(Aws::String&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::move(value); }
    inline void SetNodeId(const char* value) { m_nodeIdHasBeenSet = true; m_nodeId.assign(value); }
    inline UpdateNodeStateRequest& WithNodeId(const Aws::String& value) { SetNodeId(value); return *this;}
    inline UpdateNodeStateRequest& WithNodeId(Aws::String&& value) { SetNodeId(std::move(value)); return *this;}
    inline UpdateNodeStateRequest& WithNodeId(const char* value) { SetNodeId(value); return *this;}
    ///@}

    ///@{
    /**
     * The state to apply to the Node. Set to ACTIVE (COMMISSIONED) to indicate that
     * the Node is deployable. MediaLive Anywhere will consider this node it needs a
     * Node to run a Channel on, or when it needs a Node to promote from a backup node
     * to an active node. Set to DRAINING to isolate the Node so that MediaLive
     * Anywhere won't use it.
     */
    inline const UpdateNodeState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const UpdateNodeState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(UpdateNodeState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline UpdateNodeStateRequest& WithState(const UpdateNodeState& value) { SetState(value); return *this;}
    inline UpdateNodeStateRequest& WithState(UpdateNodeState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::String m_nodeId;
    bool m_nodeIdHasBeenSet = false;

    UpdateNodeState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
