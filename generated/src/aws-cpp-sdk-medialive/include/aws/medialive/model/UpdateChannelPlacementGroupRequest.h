/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * A request to update the channel placement group<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateChannelPlacementGroupRequest">AWS
   * API Reference</a></p>
   */
  class UpdateChannelPlacementGroupRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API UpdateChannelPlacementGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateChannelPlacementGroup"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The ID of the channel placement group.
     */
    inline const Aws::String& GetChannelPlacementGroupId() const { return m_channelPlacementGroupId; }
    inline bool ChannelPlacementGroupIdHasBeenSet() const { return m_channelPlacementGroupIdHasBeenSet; }
    template<typename ChannelPlacementGroupIdT = Aws::String>
    void SetChannelPlacementGroupId(ChannelPlacementGroupIdT&& value) { m_channelPlacementGroupIdHasBeenSet = true; m_channelPlacementGroupId = std::forward<ChannelPlacementGroupIdT>(value); }
    template<typename ChannelPlacementGroupIdT = Aws::String>
    UpdateChannelPlacementGroupRequest& WithChannelPlacementGroupId(ChannelPlacementGroupIdT&& value) { SetChannelPlacementGroupId(std::forward<ChannelPlacementGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the cluster.
     */
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    UpdateChannelPlacementGroupRequest& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Include this parameter only if you want to change the current name of the
     * ChannelPlacementGroup. Specify a name that is unique in the Cluster. You can't
     * change the name. Names are case-sensitive.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateChannelPlacementGroupRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Include this parameter only if you want to change the list of Nodes that are
     * associated with the ChannelPlacementGroup.
     */
    inline const Aws::Vector<Aws::String>& GetNodes() const { return m_nodes; }
    inline bool NodesHasBeenSet() const { return m_nodesHasBeenSet; }
    template<typename NodesT = Aws::Vector<Aws::String>>
    void SetNodes(NodesT&& value) { m_nodesHasBeenSet = true; m_nodes = std::forward<NodesT>(value); }
    template<typename NodesT = Aws::Vector<Aws::String>>
    UpdateChannelPlacementGroupRequest& WithNodes(NodesT&& value) { SetNodes(std::forward<NodesT>(value)); return *this;}
    template<typename NodesT = Aws::String>
    UpdateChannelPlacementGroupRequest& AddNodes(NodesT&& value) { m_nodesHasBeenSet = true; m_nodes.emplace_back(std::forward<NodesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_channelPlacementGroupId;
    bool m_channelPlacementGroupIdHasBeenSet = false;

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_nodes;
    bool m_nodesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
