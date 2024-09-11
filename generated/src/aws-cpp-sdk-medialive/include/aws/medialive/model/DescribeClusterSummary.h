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
    AWS_MEDIALIVE_API DescribeClusterSummary();
    AWS_MEDIALIVE_API DescribeClusterSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API DescribeClusterSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ARN of this Cluster. It is automatically assigned when the Cluster is
     * created.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline DescribeClusterSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribeClusterSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribeClusterSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * An array of the IDs of the Channels that are associated with this Cluster. One
     * Channel is associated with the Cluster as follows: A Channel belongs to a
     * ChannelPlacementGroup. A ChannelPlacementGroup is attached to a Node. A Node
     * belongs to a Cluster.
     */
    inline const Aws::Vector<Aws::String>& GetChannelIds() const{ return m_channelIds; }
    inline bool ChannelIdsHasBeenSet() const { return m_channelIdsHasBeenSet; }
    inline void SetChannelIds(const Aws::Vector<Aws::String>& value) { m_channelIdsHasBeenSet = true; m_channelIds = value; }
    inline void SetChannelIds(Aws::Vector<Aws::String>&& value) { m_channelIdsHasBeenSet = true; m_channelIds = std::move(value); }
    inline DescribeClusterSummary& WithChannelIds(const Aws::Vector<Aws::String>& value) { SetChannelIds(value); return *this;}
    inline DescribeClusterSummary& WithChannelIds(Aws::Vector<Aws::String>&& value) { SetChannelIds(std::move(value)); return *this;}
    inline DescribeClusterSummary& AddChannelIds(const Aws::String& value) { m_channelIdsHasBeenSet = true; m_channelIds.push_back(value); return *this; }
    inline DescribeClusterSummary& AddChannelIds(Aws::String&& value) { m_channelIdsHasBeenSet = true; m_channelIds.push_back(std::move(value)); return *this; }
    inline DescribeClusterSummary& AddChannelIds(const char* value) { m_channelIdsHasBeenSet = true; m_channelIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * The hardware type for the Cluster.
     */
    inline const ClusterType& GetClusterType() const{ return m_clusterType; }
    inline bool ClusterTypeHasBeenSet() const { return m_clusterTypeHasBeenSet; }
    inline void SetClusterType(const ClusterType& value) { m_clusterTypeHasBeenSet = true; m_clusterType = value; }
    inline void SetClusterType(ClusterType&& value) { m_clusterTypeHasBeenSet = true; m_clusterType = std::move(value); }
    inline DescribeClusterSummary& WithClusterType(const ClusterType& value) { SetClusterType(value); return *this;}
    inline DescribeClusterSummary& WithClusterType(ClusterType&& value) { SetClusterType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the Cluster. Unique in the AWS account. The ID is the resource-id
     * portion of the ARN.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline DescribeClusterSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DescribeClusterSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DescribeClusterSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the IAM role for the Node in this Cluster. Any Nodes that are
     * associated with this Cluster assume this role. The role gives permissions to the
     * operations that you expect these Node to perform.
     */
    inline const Aws::String& GetInstanceRoleArn() const{ return m_instanceRoleArn; }
    inline bool InstanceRoleArnHasBeenSet() const { return m_instanceRoleArnHasBeenSet; }
    inline void SetInstanceRoleArn(const Aws::String& value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn = value; }
    inline void SetInstanceRoleArn(Aws::String&& value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn = std::move(value); }
    inline void SetInstanceRoleArn(const char* value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn.assign(value); }
    inline DescribeClusterSummary& WithInstanceRoleArn(const Aws::String& value) { SetInstanceRoleArn(value); return *this;}
    inline DescribeClusterSummary& WithInstanceRoleArn(Aws::String&& value) { SetInstanceRoleArn(std::move(value)); return *this;}
    inline DescribeClusterSummary& WithInstanceRoleArn(const char* value) { SetInstanceRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The name that you specified for the Cluster.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DescribeClusterSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeClusterSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeClusterSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * Network settings that connect the Nodes in the Cluster to one or more of the
     * Networks that the Cluster is associated with.
     */
    inline const ClusterNetworkSettings& GetNetworkSettings() const{ return m_networkSettings; }
    inline bool NetworkSettingsHasBeenSet() const { return m_networkSettingsHasBeenSet; }
    inline void SetNetworkSettings(const ClusterNetworkSettings& value) { m_networkSettingsHasBeenSet = true; m_networkSettings = value; }
    inline void SetNetworkSettings(ClusterNetworkSettings&& value) { m_networkSettingsHasBeenSet = true; m_networkSettings = std::move(value); }
    inline DescribeClusterSummary& WithNetworkSettings(const ClusterNetworkSettings& value) { SetNetworkSettings(value); return *this;}
    inline DescribeClusterSummary& WithNetworkSettings(ClusterNetworkSettings&& value) { SetNetworkSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The current state of the Cluster.
     */
    inline const ClusterState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ClusterState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ClusterState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline DescribeClusterSummary& WithState(const ClusterState& value) { SetState(value); return *this;}
    inline DescribeClusterSummary& WithState(ClusterState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_channelIds;
    bool m_channelIdsHasBeenSet = false;

    ClusterType m_clusterType;
    bool m_clusterTypeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_instanceRoleArn;
    bool m_instanceRoleArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ClusterNetworkSettings m_networkSettings;
    bool m_networkSettingsHasBeenSet = false;

    ClusterState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
