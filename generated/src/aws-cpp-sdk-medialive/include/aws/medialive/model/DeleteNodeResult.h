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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for DeleteNodeResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteNodeResponse">AWS
   * API Reference</a></p>
   */
  class DeleteNodeResult
  {
  public:
    AWS_MEDIALIVE_API DeleteNodeResult() = default;
    AWS_MEDIALIVE_API DeleteNodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API DeleteNodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The ARN of the Node. It is automatically assigned when the Node is created.
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DeleteNodeResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * An array of IDs. Each ID is one ChannelPlacementGroup that is associated with
     * this Node. Empty if the Node is not yet associated with any groups.
     */
    inline const Aws::Vector<Aws::String>& GetChannelPlacementGroups() const { return m_channelPlacementGroups; }
    template<typename ChannelPlacementGroupsT = Aws::Vector<Aws::String>>
    void SetChannelPlacementGroups(ChannelPlacementGroupsT&& value) { m_channelPlacementGroupsHasBeenSet = true; m_channelPlacementGroups = std::forward<ChannelPlacementGroupsT>(value); }
    template<typename ChannelPlacementGroupsT = Aws::Vector<Aws::String>>
    DeleteNodeResult& WithChannelPlacementGroups(ChannelPlacementGroupsT&& value) { SetChannelPlacementGroups(std::forward<ChannelPlacementGroupsT>(value)); return *this;}
    template<typename ChannelPlacementGroupsT = Aws::String>
    DeleteNodeResult& AddChannelPlacementGroups(ChannelPlacementGroupsT&& value) { m_channelPlacementGroupsHasBeenSet = true; m_channelPlacementGroups.emplace_back(std::forward<ChannelPlacementGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The ID of the Cluster that the Node belongs to.
     */
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    DeleteNodeResult& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The current connection state of the Node.
     */
    inline NodeConnectionState GetConnectionState() const { return m_connectionState; }
    inline void SetConnectionState(NodeConnectionState value) { m_connectionStateHasBeenSet = true; m_connectionState = value; }
    inline DeleteNodeResult& WithConnectionState(NodeConnectionState value) { SetConnectionState(value); return *this;}
    ///@}

    ///@{
    /**
     * The unique ID of the Node. Unique in the Cluster. The ID is the resource-id
     * portion of the ARN.
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DeleteNodeResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the EC2 instance hosting the Node.
     */
    inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
    template<typename InstanceArnT = Aws::String>
    void SetInstanceArn(InstanceArnT&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::forward<InstanceArnT>(value); }
    template<typename InstanceArnT = Aws::String>
    DeleteNodeResult& WithInstanceArn(InstanceArnT&& value) { SetInstanceArn(std::forward<InstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name that you specified for the Node.
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DeleteNodeResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Documentation update needed
     */
    inline const Aws::Vector<NodeInterfaceMapping>& GetNodeInterfaceMappings() const { return m_nodeInterfaceMappings; }
    template<typename NodeInterfaceMappingsT = Aws::Vector<NodeInterfaceMapping>>
    void SetNodeInterfaceMappings(NodeInterfaceMappingsT&& value) { m_nodeInterfaceMappingsHasBeenSet = true; m_nodeInterfaceMappings = std::forward<NodeInterfaceMappingsT>(value); }
    template<typename NodeInterfaceMappingsT = Aws::Vector<NodeInterfaceMapping>>
    DeleteNodeResult& WithNodeInterfaceMappings(NodeInterfaceMappingsT&& value) { SetNodeInterfaceMappings(std::forward<NodeInterfaceMappingsT>(value)); return *this;}
    template<typename NodeInterfaceMappingsT = NodeInterfaceMapping>
    DeleteNodeResult& AddNodeInterfaceMappings(NodeInterfaceMappingsT&& value) { m_nodeInterfaceMappingsHasBeenSet = true; m_nodeInterfaceMappings.emplace_back(std::forward<NodeInterfaceMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The initial role current role of the Node in the Cluster. ACTIVE means the Node
     * is available for encoding. BACKUP means the Node is a redundant Node and might
     * get used if an ACTIVE Node fails.
     */
    inline NodeRole GetRole() const { return m_role; }
    inline void SetRole(NodeRole value) { m_roleHasBeenSet = true; m_role = value; }
    inline DeleteNodeResult& WithRole(NodeRole value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * The current state of the Node.
     */
    inline NodeState GetState() const { return m_state; }
    inline void SetState(NodeState value) { m_stateHasBeenSet = true; m_state = value; }
    inline DeleteNodeResult& WithState(NodeState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * An array of SDI source mappings. Each mapping connects one logical SdiSource to
     * the physical SDI card and port that the physical SDI source uses.
     */
    inline const Aws::Vector<SdiSourceMapping>& GetSdiSourceMappings() const { return m_sdiSourceMappings; }
    template<typename SdiSourceMappingsT = Aws::Vector<SdiSourceMapping>>
    void SetSdiSourceMappings(SdiSourceMappingsT&& value) { m_sdiSourceMappingsHasBeenSet = true; m_sdiSourceMappings = std::forward<SdiSourceMappingsT>(value); }
    template<typename SdiSourceMappingsT = Aws::Vector<SdiSourceMapping>>
    DeleteNodeResult& WithSdiSourceMappings(SdiSourceMappingsT&& value) { SetSdiSourceMappings(std::forward<SdiSourceMappingsT>(value)); return *this;}
    template<typename SdiSourceMappingsT = SdiSourceMapping>
    DeleteNodeResult& AddSdiSourceMappings(SdiSourceMappingsT&& value) { m_sdiSourceMappingsHasBeenSet = true; m_sdiSourceMappings.emplace_back(std::forward<SdiSourceMappingsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteNodeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
