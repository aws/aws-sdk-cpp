/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * Elemental anywhere settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeAnywhereSettings">AWS
   * API Reference</a></p>
   */
  class DescribeAnywhereSettings
  {
  public:
    AWS_MEDIALIVE_API DescribeAnywhereSettings() = default;
    AWS_MEDIALIVE_API DescribeAnywhereSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API DescribeAnywhereSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ID of the channel placement group for the channel.
     */
    inline const Aws::String& GetChannelPlacementGroupId() const { return m_channelPlacementGroupId; }
    inline bool ChannelPlacementGroupIdHasBeenSet() const { return m_channelPlacementGroupIdHasBeenSet; }
    template<typename ChannelPlacementGroupIdT = Aws::String>
    void SetChannelPlacementGroupId(ChannelPlacementGroupIdT&& value) { m_channelPlacementGroupIdHasBeenSet = true; m_channelPlacementGroupId = std::forward<ChannelPlacementGroupIdT>(value); }
    template<typename ChannelPlacementGroupIdT = Aws::String>
    DescribeAnywhereSettings& WithChannelPlacementGroupId(ChannelPlacementGroupIdT&& value) { SetChannelPlacementGroupId(std::forward<ChannelPlacementGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the cluster for the channel.
     */
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    DescribeAnywhereSettings& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
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
