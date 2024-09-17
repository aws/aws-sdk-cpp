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
    AWS_MEDIALIVE_API DescribeNodeSummary();
    AWS_MEDIALIVE_API DescribeNodeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API DescribeNodeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ARN of the Node. It is automatically assigned when the Node is created.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline DescribeNodeSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribeNodeSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribeNodeSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * An array of IDs. Each ID is one ChannelPlacementGroup that is associated with
     * this Node. Empty if the Node is not yet associated with any groups.
     */
    inline const Aws::Vector<Aws::String>& GetChannelPlacementGroups() const{ return m_channelPlacementGroups; }
    inline bool ChannelPlacementGroupsHasBeenSet() const { return m_channelPlacementGroupsHasBeenSet; }
    inline void SetChannelPlacementGroups(const Aws::Vector<Aws::String>& value) { m_channelPlacementGroupsHasBeenSet = true; m_channelPlacementGroups = value; }
    inline void SetChannelPlacementGroups(Aws::Vector<Aws::String>&& value) { m_channelPlacementGroupsHasBeenSet = true; m_channelPlacementGroups = std::move(value); }
    inline DescribeNodeSummary& WithChannelPlacementGroups(const Aws::Vector<Aws::String>& value) { SetChannelPlacementGroups(value); return *this;}
    inline DescribeNodeSummary& WithChannelPlacementGroups(Aws::Vector<Aws::String>&& value) { SetChannelPlacementGroups(std::move(value)); return *this;}
    inline DescribeNodeSummary& AddChannelPlacementGroups(const Aws::String& value) { m_channelPlacementGroupsHasBeenSet = true; m_channelPlacementGroups.push_back(value); return *this; }
    inline DescribeNodeSummary& AddChannelPlacementGroups(Aws::String&& value) { m_channelPlacementGroupsHasBeenSet = true; m_channelPlacementGroups.push_back(std::move(value)); return *this; }
    inline DescribeNodeSummary& AddChannelPlacementGroups(const char* value) { m_channelPlacementGroupsHasBeenSet = true; m_channelPlacementGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * The ID of the Cluster that the Node belongs to.
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }
    inline DescribeNodeSummary& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline DescribeNodeSummary& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline DescribeNodeSummary& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * The current connection state of the Node.
     */
    inline const NodeConnectionState& GetConnectionState() const{ return m_connectionState; }
    inline bool ConnectionStateHasBeenSet() const { return m_connectionStateHasBeenSet; }
    inline void SetConnectionState(const NodeConnectionState& value) { m_connectionStateHasBeenSet = true; m_connectionState = value; }
    inline void SetConnectionState(NodeConnectionState&& value) { m_connectionStateHasBeenSet = true; m_connectionState = std::move(value); }
    inline DescribeNodeSummary& WithConnectionState(const NodeConnectionState& value) { SetConnectionState(value); return *this;}
    inline DescribeNodeSummary& WithConnectionState(NodeConnectionState&& value) { SetConnectionState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The unique ID of the Node. Unique in the Cluster. The ID is the resource-id
     * portion of the ARN.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline DescribeNodeSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DescribeNodeSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DescribeNodeSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * The EC2 ARN of the Instance associated with the Node.
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }
    inline DescribeNodeSummary& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}
    inline DescribeNodeSummary& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}
    inline DescribeNodeSummary& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * At the routing layer will get it from the callerId/context for use with bring
     * your own device.
     */
    inline const Aws::String& GetManagedInstanceId() const{ return m_managedInstanceId; }
    inline bool ManagedInstanceIdHasBeenSet() const { return m_managedInstanceIdHasBeenSet; }
    inline void SetManagedInstanceId(const Aws::String& value) { m_managedInstanceIdHasBeenSet = true; m_managedInstanceId = value; }
    inline void SetManagedInstanceId(Aws::String&& value) { m_managedInstanceIdHasBeenSet = true; m_managedInstanceId = std::move(value); }
    inline void SetManagedInstanceId(const char* value) { m_managedInstanceIdHasBeenSet = true; m_managedInstanceId.assign(value); }
    inline DescribeNodeSummary& WithManagedInstanceId(const Aws::String& value) { SetManagedInstanceId(value); return *this;}
    inline DescribeNodeSummary& WithManagedInstanceId(Aws::String&& value) { SetManagedInstanceId(std::move(value)); return *this;}
    inline DescribeNodeSummary& WithManagedInstanceId(const char* value) { SetManagedInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * The name that you specified for the Node.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DescribeNodeSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeNodeSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeNodeSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * Documentation update needed
     */
    inline const Aws::Vector<NodeInterfaceMapping>& GetNodeInterfaceMappings() const{ return m_nodeInterfaceMappings; }
    inline bool NodeInterfaceMappingsHasBeenSet() const { return m_nodeInterfaceMappingsHasBeenSet; }
    inline void SetNodeInterfaceMappings(const Aws::Vector<NodeInterfaceMapping>& value) { m_nodeInterfaceMappingsHasBeenSet = true; m_nodeInterfaceMappings = value; }
    inline void SetNodeInterfaceMappings(Aws::Vector<NodeInterfaceMapping>&& value) { m_nodeInterfaceMappingsHasBeenSet = true; m_nodeInterfaceMappings = std::move(value); }
    inline DescribeNodeSummary& WithNodeInterfaceMappings(const Aws::Vector<NodeInterfaceMapping>& value) { SetNodeInterfaceMappings(value); return *this;}
    inline DescribeNodeSummary& WithNodeInterfaceMappings(Aws::Vector<NodeInterfaceMapping>&& value) { SetNodeInterfaceMappings(std::move(value)); return *this;}
    inline DescribeNodeSummary& AddNodeInterfaceMappings(const NodeInterfaceMapping& value) { m_nodeInterfaceMappingsHasBeenSet = true; m_nodeInterfaceMappings.push_back(value); return *this; }
    inline DescribeNodeSummary& AddNodeInterfaceMappings(NodeInterfaceMapping&& value) { m_nodeInterfaceMappingsHasBeenSet = true; m_nodeInterfaceMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The initial role current role of the Node in the Cluster. ACTIVE means the Node
     * is available for encoding. BACKUP means the Node is a redundant Node and might
     * get used if an ACTIVE Node fails.
     */
    inline const NodeRole& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const NodeRole& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(NodeRole&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline DescribeNodeSummary& WithRole(const NodeRole& value) { SetRole(value); return *this;}
    inline DescribeNodeSummary& WithRole(NodeRole&& value) { SetRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The current state of the Node.
     */
    inline const NodeState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const NodeState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(NodeState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline DescribeNodeSummary& WithState(const NodeState& value) { SetState(value); return *this;}
    inline DescribeNodeSummary& WithState(NodeState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_channelPlacementGroups;
    bool m_channelPlacementGroupsHasBeenSet = false;

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    NodeConnectionState m_connectionState;
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

    NodeRole m_role;
    bool m_roleHasBeenSet = false;

    NodeState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
