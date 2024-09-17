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
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AnywhereSettings">AWS
   * API Reference</a></p>
   */
  class AnywhereSettings
  {
  public:
    AWS_MEDIALIVE_API AnywhereSettings();
    AWS_MEDIALIVE_API AnywhereSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AnywhereSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ID of the channel placement group for the channel.
     */
    inline const Aws::String& GetChannelPlacementGroupId() const{ return m_channelPlacementGroupId; }
    inline bool ChannelPlacementGroupIdHasBeenSet() const { return m_channelPlacementGroupIdHasBeenSet; }
    inline void SetChannelPlacementGroupId(const Aws::String& value) { m_channelPlacementGroupIdHasBeenSet = true; m_channelPlacementGroupId = value; }
    inline void SetChannelPlacementGroupId(Aws::String&& value) { m_channelPlacementGroupIdHasBeenSet = true; m_channelPlacementGroupId = std::move(value); }
    inline void SetChannelPlacementGroupId(const char* value) { m_channelPlacementGroupIdHasBeenSet = true; m_channelPlacementGroupId.assign(value); }
    inline AnywhereSettings& WithChannelPlacementGroupId(const Aws::String& value) { SetChannelPlacementGroupId(value); return *this;}
    inline AnywhereSettings& WithChannelPlacementGroupId(Aws::String&& value) { SetChannelPlacementGroupId(std::move(value)); return *this;}
    inline AnywhereSettings& WithChannelPlacementGroupId(const char* value) { SetChannelPlacementGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the cluster for the channel.
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }
    inline AnywhereSettings& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline AnywhereSettings& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline AnywhereSettings& WithClusterId(const char* value) { SetClusterId(value); return *this;}
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
