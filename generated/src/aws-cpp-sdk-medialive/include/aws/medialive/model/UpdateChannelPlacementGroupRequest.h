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
    AWS_MEDIALIVE_API UpdateChannelPlacementGroupRequest();

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
    inline const Aws::String& GetChannelPlacementGroupId() const{ return m_channelPlacementGroupId; }
    inline bool ChannelPlacementGroupIdHasBeenSet() const { return m_channelPlacementGroupIdHasBeenSet; }
    inline void SetChannelPlacementGroupId(const Aws::String& value) { m_channelPlacementGroupIdHasBeenSet = true; m_channelPlacementGroupId = value; }
    inline void SetChannelPlacementGroupId(Aws::String&& value) { m_channelPlacementGroupIdHasBeenSet = true; m_channelPlacementGroupId = std::move(value); }
    inline void SetChannelPlacementGroupId(const char* value) { m_channelPlacementGroupIdHasBeenSet = true; m_channelPlacementGroupId.assign(value); }
    inline UpdateChannelPlacementGroupRequest& WithChannelPlacementGroupId(const Aws::String& value) { SetChannelPlacementGroupId(value); return *this;}
    inline UpdateChannelPlacementGroupRequest& WithChannelPlacementGroupId(Aws::String&& value) { SetChannelPlacementGroupId(std::move(value)); return *this;}
    inline UpdateChannelPlacementGroupRequest& WithChannelPlacementGroupId(const char* value) { SetChannelPlacementGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the cluster.
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }
    inline UpdateChannelPlacementGroupRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline UpdateChannelPlacementGroupRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline UpdateChannelPlacementGroupRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * Include this parameter only if you want to change the current name of the
     * ChannelPlacementGroup. Specify a name that is unique in the Cluster. You can't
     * change the name. Names are case-sensitive.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateChannelPlacementGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateChannelPlacementGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateChannelPlacementGroupRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * Include this parameter only if you want to change the list of Nodes that are
     * associated with the ChannelPlacementGroup.
     */
    inline const Aws::Vector<Aws::String>& GetNodes() const{ return m_nodes; }
    inline bool NodesHasBeenSet() const { return m_nodesHasBeenSet; }
    inline void SetNodes(const Aws::Vector<Aws::String>& value) { m_nodesHasBeenSet = true; m_nodes = value; }
    inline void SetNodes(Aws::Vector<Aws::String>&& value) { m_nodesHasBeenSet = true; m_nodes = std::move(value); }
    inline UpdateChannelPlacementGroupRequest& WithNodes(const Aws::Vector<Aws::String>& value) { SetNodes(value); return *this;}
    inline UpdateChannelPlacementGroupRequest& WithNodes(Aws::Vector<Aws::String>&& value) { SetNodes(std::move(value)); return *this;}
    inline UpdateChannelPlacementGroupRequest& AddNodes(const Aws::String& value) { m_nodesHasBeenSet = true; m_nodes.push_back(value); return *this; }
    inline UpdateChannelPlacementGroupRequest& AddNodes(Aws::String&& value) { m_nodesHasBeenSet = true; m_nodes.push_back(std::move(value)); return *this; }
    inline UpdateChannelPlacementGroupRequest& AddNodes(const char* value) { m_nodesHasBeenSet = true; m_nodes.push_back(value); return *this; }
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
