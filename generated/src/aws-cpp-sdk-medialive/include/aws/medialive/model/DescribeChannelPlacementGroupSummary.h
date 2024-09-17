/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/ChannelPlacementGroupState.h>
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
   * Contains the response for ListChannelPlacementGroups<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeChannelPlacementGroupSummary">AWS
   * API Reference</a></p>
   */
  class DescribeChannelPlacementGroupSummary
  {
  public:
    AWS_MEDIALIVE_API DescribeChannelPlacementGroupSummary();
    AWS_MEDIALIVE_API DescribeChannelPlacementGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API DescribeChannelPlacementGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ARN of this ChannelPlacementGroup. It is automatically assigned when the
     * ChannelPlacementGroup is created.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline DescribeChannelPlacementGroupSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribeChannelPlacementGroupSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribeChannelPlacementGroupSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * Used in ListChannelPlacementGroupsResult
     */
    inline const Aws::Vector<Aws::String>& GetChannels() const{ return m_channels; }
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }
    inline void SetChannels(const Aws::Vector<Aws::String>& value) { m_channelsHasBeenSet = true; m_channels = value; }
    inline void SetChannels(Aws::Vector<Aws::String>&& value) { m_channelsHasBeenSet = true; m_channels = std::move(value); }
    inline DescribeChannelPlacementGroupSummary& WithChannels(const Aws::Vector<Aws::String>& value) { SetChannels(value); return *this;}
    inline DescribeChannelPlacementGroupSummary& WithChannels(Aws::Vector<Aws::String>&& value) { SetChannels(std::move(value)); return *this;}
    inline DescribeChannelPlacementGroupSummary& AddChannels(const Aws::String& value) { m_channelsHasBeenSet = true; m_channels.push_back(value); return *this; }
    inline DescribeChannelPlacementGroupSummary& AddChannels(Aws::String&& value) { m_channelsHasBeenSet = true; m_channels.push_back(std::move(value)); return *this; }
    inline DescribeChannelPlacementGroupSummary& AddChannels(const char* value) { m_channelsHasBeenSet = true; m_channels.push_back(value); return *this; }
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
    inline DescribeChannelPlacementGroupSummary& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline DescribeChannelPlacementGroupSummary& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline DescribeChannelPlacementGroupSummary& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the ChannelPlacementGroup. Unique in the AWS account. The ID is the
     * resource-id portion of the ARN.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline DescribeChannelPlacementGroupSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DescribeChannelPlacementGroupSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DescribeChannelPlacementGroupSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * The name that you specified for the ChannelPlacementGroup.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DescribeChannelPlacementGroupSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeChannelPlacementGroupSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeChannelPlacementGroupSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * An array with one item, which is the signle Node that is associated with the
     * ChannelPlacementGroup.
     */
    inline const Aws::Vector<Aws::String>& GetNodes() const{ return m_nodes; }
    inline bool NodesHasBeenSet() const { return m_nodesHasBeenSet; }
    inline void SetNodes(const Aws::Vector<Aws::String>& value) { m_nodesHasBeenSet = true; m_nodes = value; }
    inline void SetNodes(Aws::Vector<Aws::String>&& value) { m_nodesHasBeenSet = true; m_nodes = std::move(value); }
    inline DescribeChannelPlacementGroupSummary& WithNodes(const Aws::Vector<Aws::String>& value) { SetNodes(value); return *this;}
    inline DescribeChannelPlacementGroupSummary& WithNodes(Aws::Vector<Aws::String>&& value) { SetNodes(std::move(value)); return *this;}
    inline DescribeChannelPlacementGroupSummary& AddNodes(const Aws::String& value) { m_nodesHasBeenSet = true; m_nodes.push_back(value); return *this; }
    inline DescribeChannelPlacementGroupSummary& AddNodes(Aws::String&& value) { m_nodesHasBeenSet = true; m_nodes.push_back(std::move(value)); return *this; }
    inline DescribeChannelPlacementGroupSummary& AddNodes(const char* value) { m_nodesHasBeenSet = true; m_nodes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * The current state of the ChannelPlacementGroup.
     */
    inline const ChannelPlacementGroupState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ChannelPlacementGroupState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ChannelPlacementGroupState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline DescribeChannelPlacementGroupSummary& WithState(const ChannelPlacementGroupState& value) { SetState(value); return *this;}
    inline DescribeChannelPlacementGroupSummary& WithState(ChannelPlacementGroupState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_channels;
    bool m_channelsHasBeenSet = false;

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_nodes;
    bool m_nodesHasBeenSet = false;

    ChannelPlacementGroupState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
