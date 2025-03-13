/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/ChannelResponse.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about the general settings and status of all channels
   * for an application, including channels that aren't enabled for the
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ChannelsResponse">AWS
   * API Reference</a></p>
   */
  class ChannelsResponse
  {
  public:
    AWS_PINPOINT_API ChannelsResponse() = default;
    AWS_PINPOINT_API ChannelsResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API ChannelsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A map that contains a multipart response for each channel. For each item in
     * this object, the ChannelType is the key and the Channel is the value.</p>
     */
    inline const Aws::Map<Aws::String, ChannelResponse>& GetChannels() const { return m_channels; }
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }
    template<typename ChannelsT = Aws::Map<Aws::String, ChannelResponse>>
    void SetChannels(ChannelsT&& value) { m_channelsHasBeenSet = true; m_channels = std::forward<ChannelsT>(value); }
    template<typename ChannelsT = Aws::Map<Aws::String, ChannelResponse>>
    ChannelsResponse& WithChannels(ChannelsT&& value) { SetChannels(std::forward<ChannelsT>(value)); return *this;}
    template<typename ChannelsKeyT = Aws::String, typename ChannelsValueT = ChannelResponse>
    ChannelsResponse& AddChannels(ChannelsKeyT&& key, ChannelsValueT&& value) {
      m_channelsHasBeenSet = true; m_channels.emplace(std::forward<ChannelsKeyT>(key), std::forward<ChannelsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, ChannelResponse> m_channels;
    bool m_channelsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
