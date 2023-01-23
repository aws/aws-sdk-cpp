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
    AWS_PINPOINT_API ChannelsResponse();
    AWS_PINPOINT_API ChannelsResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API ChannelsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A map that contains a multipart response for each channel. For each item in
     * this object, the ChannelType is the key and the Channel is the value.</p>
     */
    inline const Aws::Map<Aws::String, ChannelResponse>& GetChannels() const{ return m_channels; }

    /**
     * <p>A map that contains a multipart response for each channel. For each item in
     * this object, the ChannelType is the key and the Channel is the value.</p>
     */
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }

    /**
     * <p>A map that contains a multipart response for each channel. For each item in
     * this object, the ChannelType is the key and the Channel is the value.</p>
     */
    inline void SetChannels(const Aws::Map<Aws::String, ChannelResponse>& value) { m_channelsHasBeenSet = true; m_channels = value; }

    /**
     * <p>A map that contains a multipart response for each channel. For each item in
     * this object, the ChannelType is the key and the Channel is the value.</p>
     */
    inline void SetChannels(Aws::Map<Aws::String, ChannelResponse>&& value) { m_channelsHasBeenSet = true; m_channels = std::move(value); }

    /**
     * <p>A map that contains a multipart response for each channel. For each item in
     * this object, the ChannelType is the key and the Channel is the value.</p>
     */
    inline ChannelsResponse& WithChannels(const Aws::Map<Aws::String, ChannelResponse>& value) { SetChannels(value); return *this;}

    /**
     * <p>A map that contains a multipart response for each channel. For each item in
     * this object, the ChannelType is the key and the Channel is the value.</p>
     */
    inline ChannelsResponse& WithChannels(Aws::Map<Aws::String, ChannelResponse>&& value) { SetChannels(std::move(value)); return *this;}

    /**
     * <p>A map that contains a multipart response for each channel. For each item in
     * this object, the ChannelType is the key and the Channel is the value.</p>
     */
    inline ChannelsResponse& AddChannels(const Aws::String& key, const ChannelResponse& value) { m_channelsHasBeenSet = true; m_channels.emplace(key, value); return *this; }

    /**
     * <p>A map that contains a multipart response for each channel. For each item in
     * this object, the ChannelType is the key and the Channel is the value.</p>
     */
    inline ChannelsResponse& AddChannels(Aws::String&& key, const ChannelResponse& value) { m_channelsHasBeenSet = true; m_channels.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains a multipart response for each channel. For each item in
     * this object, the ChannelType is the key and the Channel is the value.</p>
     */
    inline ChannelsResponse& AddChannels(const Aws::String& key, ChannelResponse&& value) { m_channelsHasBeenSet = true; m_channels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains a multipart response for each channel. For each item in
     * this object, the ChannelType is the key and the Channel is the value.</p>
     */
    inline ChannelsResponse& AddChannels(Aws::String&& key, ChannelResponse&& value) { m_channelsHasBeenSet = true; m_channels.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that contains a multipart response for each channel. For each item in
     * this object, the ChannelType is the key and the Channel is the value.</p>
     */
    inline ChannelsResponse& AddChannels(const char* key, ChannelResponse&& value) { m_channelsHasBeenSet = true; m_channels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains a multipart response for each channel. For each item in
     * this object, the ChannelType is the key and the Channel is the value.</p>
     */
    inline ChannelsResponse& AddChannels(const char* key, const ChannelResponse& value) { m_channelsHasBeenSet = true; m_channels.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, ChannelResponse> m_channels;
    bool m_channelsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
