/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/AudioChannelMapping.h>
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
   * Remix Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/RemixSettings">AWS
   * API Reference</a></p>
   */
  class RemixSettings
  {
  public:
    AWS_MEDIALIVE_API RemixSettings() = default;
    AWS_MEDIALIVE_API RemixSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API RemixSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Mapping of input channels to output channels, with appropriate gain adjustments.
     */
    inline const Aws::Vector<AudioChannelMapping>& GetChannelMappings() const { return m_channelMappings; }
    inline bool ChannelMappingsHasBeenSet() const { return m_channelMappingsHasBeenSet; }
    template<typename ChannelMappingsT = Aws::Vector<AudioChannelMapping>>
    void SetChannelMappings(ChannelMappingsT&& value) { m_channelMappingsHasBeenSet = true; m_channelMappings = std::forward<ChannelMappingsT>(value); }
    template<typename ChannelMappingsT = Aws::Vector<AudioChannelMapping>>
    RemixSettings& WithChannelMappings(ChannelMappingsT&& value) { SetChannelMappings(std::forward<ChannelMappingsT>(value)); return *this;}
    template<typename ChannelMappingsT = AudioChannelMapping>
    RemixSettings& AddChannelMappings(ChannelMappingsT&& value) { m_channelMappingsHasBeenSet = true; m_channelMappings.emplace_back(std::forward<ChannelMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Number of input channels to be used.
     */
    inline int GetChannelsIn() const { return m_channelsIn; }
    inline bool ChannelsInHasBeenSet() const { return m_channelsInHasBeenSet; }
    inline void SetChannelsIn(int value) { m_channelsInHasBeenSet = true; m_channelsIn = value; }
    inline RemixSettings& WithChannelsIn(int value) { SetChannelsIn(value); return *this;}
    ///@}

    ///@{
    /**
     * Number of output channels to be produced.
Valid values: 1, 2, 4, 6, 8
     */
    inline int GetChannelsOut() const { return m_channelsOut; }
    inline bool ChannelsOutHasBeenSet() const { return m_channelsOutHasBeenSet; }
    inline void SetChannelsOut(int value) { m_channelsOutHasBeenSet = true; m_channelsOut = value; }
    inline RemixSettings& WithChannelsOut(int value) { SetChannelsOut(value); return *this;}
    ///@}
  private:

    Aws::Vector<AudioChannelMapping> m_channelMappings;
    bool m_channelMappingsHasBeenSet = false;

    int m_channelsIn{0};
    bool m_channelsInHasBeenSet = false;

    int m_channelsOut{0};
    bool m_channelsOutHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
