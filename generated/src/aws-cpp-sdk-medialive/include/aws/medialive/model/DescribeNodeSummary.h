/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/NodeConnectionState.h>
#include <aws/medialive/model/NodeRole.h>
#include <aws/medialive/model/NodeState.h>
#include <aws/medialive/model/NodeInterfaceMapping.h>
#include <aws/medialive/model/SdiSourceMapping.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for DescribeNodeSummary<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeNodeSummary">AWS
   * API Reference</a></p>
   */
  class DescribeNodeSummary
  {
  public:
    AWS_MEDIALIVE_API DescribeNodeSummary() = default;
    AWS_MEDIALIVE_API DescribeNodeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API DescribeNodeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ARN of the Node. It is automatically assigned when the Node is created.
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribeNodeSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * An array of IDs. Each ID is one ChannelPlacementGroup that is associated with
     * this Node. Empty if the Node is not yet associated with any groups.
     */
    inline const Aws::Vector<Aws::String>& GetChannelPlacementGroups() const { return m_channelPlacementGroups; }
    inline bool ChannelPlacementGroupsHasBeenSet() const { return m_channelPlacementGroupsHasBeenSet; }
    template<typename ChannelPlacementGroupsT = Aws::Vector<Aws::String>>
    void SetChannelPlacementGroups(ChannelPlacementGroupsT&& value) { m_channelPlacementGroupsHasBeenSet = true; m_channelPlacementGroups = std::forward<ChannelPlacementGroupsT>(value); }
    template<typename ChannelPlacementGroupsT = Aws::Vector<Aws::String>>
    DescribeNodeSummary& WithChannelPlacementGroups(ChannelPlacementGroupsT&& value) { SetChannelPlacementGroups(std::forward<ChannelPlacementGroupsT>(value)); return *this;}
    template<typename ChannelPlacementGroupsT = Aws::String>
    DescribeNodeSummary& AddChannelPlacementGroups(ChannelPlacementGroupsT&& value) { m_channelPlacementGroupsHasBeenSet = true; m_channelPlacementGroups.emplace_back(std::forward<ChannelPlacementGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The ID of the Cluster that the Node belongs to.
     */
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    DescribeNodeSummary& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The current connection state of the Node.
     */
    inline NodeConnectionState GetConnectionState() const { return m_connectionState; }
    inline bool ConnectionStateHasBeenSet() const { return m_connectionStateHasBeenSet; }
    inline void SetConnectionState(NodeConnectionState value) { m_connectionStateHasBeenSet = true; m_connectionState = value; }
    inline DescribeNodeSummary& WithConnectionState(NodeConnectionState value) { SetConnectionState(value); return *this;}
    ///@}

    ///@{
    /**
     * The unique ID of the Node. Unique in the Cluster. The ID is the resource-id
     * portion of the ARN.
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DescribeNodeSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The EC2 ARN of the Instance associated with the Node.
     */
    inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    template<typename InstanceArnT = Aws::String>
    void SetInstanceArn(InstanceArnT&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::forward<InstanceArnT>(value); }
    template<typename InstanceArnT = Aws::String>
    DescribeNodeSummary& WithInstanceArn(InstanceArnT&& value) { SetInstanceArn(std::forward<InstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * At the routing layer will get it from the callerId/context for use with bring
     * your own device.
     */
    inline const Aws::String& GetManagedInstanceId() const { return m_managedInstanceId; }
    inline bool ManagedInstanceIdHasBeenSet() const { return m_managedInstanceIdHasBeenSet; }
    template<typename ManagedInstanceIdT = Aws::String>
    void SetManagedInstanceId(ManagedInstanceIdT&& value) { m_managedInstanceIdHasBeenSet = true; m_managedInstanceId = std::forward<ManagedInstanceIdT>(value); }
    template<typename ManagedInstanceIdT = Aws::String>
    DescribeNodeSummary& WithManagedInstanceId(ManagedInstanceIdT&& value) { SetManagedInstanceId(std::forward<ManagedInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name that you specified for the Node.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeNodeSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Documentation update needed
     */
    inline const Aws::Vector<NodeInterfaceMapping>& GetNodeInterfaceMappings() const { return m_nodeInterfaceMappings; }
    inline bool NodeInterfaceMappingsHasBeenSet() const { return m_nodeInterfaceMappingsHasBeenSet; }
    template<typename NodeInterfaceMappingsT = Aws::Vector<NodeInterfaceMapping>>
    void SetNodeInterfaceMappings(NodeInterfaceMappingsT&& value) { m_nodeInterfaceMappingsHasBeenSet = true; m_nodeInterfaceMappings = std::forward<NodeInterfaceMappingsT>(value); }
    template<typename NodeInterfaceMappingsT = Aws::Vector<NodeInterfaceMapping>>
    DescribeNodeSummary& WithNodeInterfaceMappings(NodeInterfaceMappingsT&& value) { SetNodeInterfaceMappings(std::forward<NodeInterfaceMappingsT>(value)); return *this;}
    template<typename NodeInterfaceMappingsT = NodeInterfaceMapping>
    DescribeNodeSummary& AddNodeInterfaceMappings(NodeInterfaceMappingsT&& value) { m_nodeInterfaceMappingsHasBeenSet = true; m_nodeInterfaceMappings.emplace_back(std::forward<NodeInterfaceMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The initial role current role of the Node in the Cluster. ACTIVE means the Node
     * is available for encoding. BACKUP means the Node is a redundant Node and might
     * get used if an ACTIVE Node fails.
     */
    inline NodeRole GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(NodeRole value) { m_roleHasBeenSet = true; m_role = value; }
    inline DescribeNodeSummary& WithRole(NodeRole value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * The current state of the Node.
     */
    inline NodeState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(NodeState value) { m_stateHasBeenSet = true; m_state = value; }
    inline DescribeNodeSummary& WithState(NodeState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * An array of SDI source mappings. Each mapping connects one logical SdiSource to
     * the physical SDI card and port that the physical SDI source uses.
     */
    inline const Aws::Vector<SdiSourceMapping>& GetSdiSourceMappings() const { return m_sdiSourceMappings; }
    inline bool SdiSourceMappingsHasBeenSet() const { return m_sdiSourceMappingsHasBeenSet; }
    template<typename SdiSourceMappingsT = Aws::Vector<SdiSourceMapping>>
    void SetSdiSourceMappings(SdiSourceMappingsT&& value) { m_sdiSourceMappingsHasBeenSet = true; m_sdiSourceMappings = std::forward<SdiSourceMappingsT>(value); }
    template<typename SdiSourceMappingsT = Aws::Vector<SdiSourceMapping>>
    DescribeNodeSummary& WithSdiSourceMappings(SdiSourceMappingsT&& value) { SetSdiSourceMappings(std::forward<SdiSourceMappingsT>(value)); return *this;}
    template<typename SdiSourceMappingsT = SdiSourceMapping>
    DescribeNodeSummary& AddSdiSourceMappings(SdiSourceMappingsT&& value) { m_sdiSourceMappingsHasBeenSet = true; m_sdiSourceMappings.emplace_back(std::forward<SdiSourceMappingsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_channelPlacementGroups;
    bool m_channelPlacementGroupsHasBeenSet = false;

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    NodeConnectionState m_connectionState{NodeConnectionState::NOT_SET};
    bool m_connectionStateHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    Aws::String m_managedInstanceId;
    bool m_managedInstanceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<NodeInterfaceMapping> m_nodeInterfaceMappings;
    bool m_nodeInterfaceMappingsHasBeenSet = false;

    NodeRole m_role{NodeRole::NOT_SET};
    bool m_roleHasBeenSet = false;

    NodeState m_state{NodeState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Vector<SdiSourceMapping> m_sdiSourceMappings;
    bool m_sdiSourceMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
