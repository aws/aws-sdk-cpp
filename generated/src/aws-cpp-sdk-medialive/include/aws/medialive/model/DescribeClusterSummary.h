/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/ClusterType.h>
#include <aws/medialive/model/ClusterNetworkSettings.h>
#include <aws/medialive/model/ClusterState.h>
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
   * Used in ListClustersResult.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeClusterSummary">AWS
   * API Reference</a></p>
   */
  class DescribeClusterSummary
  {
  public:
    AWS_MEDIALIVE_API DescribeClusterSummary() = default;
    AWS_MEDIALIVE_API DescribeClusterSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API DescribeClusterSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ARN of this Cluster. It is automatically assigned when the Cluster is
     * created.
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribeClusterSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * An array of the IDs of the Channels that are associated with this Cluster. One
     * Channel is associated with the Cluster as follows: A Channel belongs to a
     * ChannelPlacementGroup. A ChannelPlacementGroup is attached to a Node. A Node
     * belongs to a Cluster.
     */
    inline const Aws::Vector<Aws::String>& GetChannelIds() const { return m_channelIds; }
    inline bool ChannelIdsHasBeenSet() const { return m_channelIdsHasBeenSet; }
    template<typename ChannelIdsT = Aws::Vector<Aws::String>>
    void SetChannelIds(ChannelIdsT&& value) { m_channelIdsHasBeenSet = true; m_channelIds = std::forward<ChannelIdsT>(value); }
    template<typename ChannelIdsT = Aws::Vector<Aws::String>>
    DescribeClusterSummary& WithChannelIds(ChannelIdsT&& value) { SetChannelIds(std::forward<ChannelIdsT>(value)); return *this;}
    template<typename ChannelIdsT = Aws::String>
    DescribeClusterSummary& AddChannelIds(ChannelIdsT&& value) { m_channelIdsHasBeenSet = true; m_channelIds.emplace_back(std::forward<ChannelIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The hardware type for the Cluster.
     */
    inline ClusterType GetClusterType() const { return m_clusterType; }
    inline bool ClusterTypeHasBeenSet() const { return m_clusterTypeHasBeenSet; }
    inline void SetClusterType(ClusterType value) { m_clusterTypeHasBeenSet = true; m_clusterType = value; }
    inline DescribeClusterSummary& WithClusterType(ClusterType value) { SetClusterType(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the Cluster. Unique in the AWS account. The ID is the resource-id
     * portion of the ARN.
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DescribeClusterSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the IAM role for the Node in this Cluster. Any Nodes that are
     * associated with this Cluster assume this role. The role gives permissions to the
     * operations that you expect these Node to perform.
     */
    inline const Aws::String& GetInstanceRoleArn() const { return m_instanceRoleArn; }
    inline bool InstanceRoleArnHasBeenSet() const { return m_instanceRoleArnHasBeenSet; }
    template<typename InstanceRoleArnT = Aws::String>
    void SetInstanceRoleArn(InstanceRoleArnT&& value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn = std::forward<InstanceRoleArnT>(value); }
    template<typename InstanceRoleArnT = Aws::String>
    DescribeClusterSummary& WithInstanceRoleArn(InstanceRoleArnT&& value) { SetInstanceRoleArn(std::forward<InstanceRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name that you specified for the Cluster.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeClusterSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Network settings that connect the Nodes in the Cluster to one or more of the
     * Networks that the Cluster is associated with.
     */
    inline const ClusterNetworkSettings& GetNetworkSettings() const { return m_networkSettings; }
    inline bool NetworkSettingsHasBeenSet() const { return m_networkSettingsHasBeenSet; }
    template<typename NetworkSettingsT = ClusterNetworkSettings>
    void SetNetworkSettings(NetworkSettingsT&& value) { m_networkSettingsHasBeenSet = true; m_networkSettings = std::forward<NetworkSettingsT>(value); }
    template<typename NetworkSettingsT = ClusterNetworkSettings>
    DescribeClusterSummary& WithNetworkSettings(NetworkSettingsT&& value) { SetNetworkSettings(std::forward<NetworkSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The current state of the Cluster.
     */
    inline ClusterState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ClusterState value) { m_stateHasBeenSet = true; m_state = value; }
    inline DescribeClusterSummary& WithState(ClusterState value) { SetState(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_channelIds;
    bool m_channelIdsHasBeenSet = false;

    ClusterType m_clusterType{ClusterType::NOT_SET};
    bool m_clusterTypeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_instanceRoleArn;
    bool m_instanceRoleArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ClusterNetworkSettings m_networkSettings;
    bool m_networkSettingsHasBeenSet = false;

    ClusterState m_state{ClusterState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
