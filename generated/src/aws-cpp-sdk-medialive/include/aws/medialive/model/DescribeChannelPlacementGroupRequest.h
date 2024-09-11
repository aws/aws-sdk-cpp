/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for DescribeChannelPlacementGroupRequest<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeChannelPlacementGroupRequest">AWS
   * API Reference</a></p>
   */
  class DescribeChannelPlacementGroupRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API DescribeChannelPlacementGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeChannelPlacementGroup"; }

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
    inline DescribeChannelPlacementGroupRequest& WithChannelPlacementGroupId(const Aws::String& value) { SetChannelPlacementGroupId(value); return *this;}
    inline DescribeChannelPlacementGroupRequest& WithChannelPlacementGroupId(Aws::String&& value) { SetChannelPlacementGroupId(std::move(value)); return *this;}
    inline DescribeChannelPlacementGroupRequest& WithChannelPlacementGroupId(const char* value) { SetChannelPlacementGroupId(value); return *this;}
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
    inline DescribeChannelPlacementGroupRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline DescribeChannelPlacementGroupRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline DescribeChannelPlacementGroupRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}
  private:

    Aws::String m_channelPlacementGroupId;
    bool m_channelPlacementGroupIdHasBeenSet = false;

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
