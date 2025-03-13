/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * A request to stop resources<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchStopRequest">AWS
   * API Reference</a></p>
   */
  class BatchStopRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API BatchStopRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchStop"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * List of channel IDs
     */
    inline const Aws::Vector<Aws::String>& GetChannelIds() const { return m_channelIds; }
    inline bool ChannelIdsHasBeenSet() const { return m_channelIdsHasBeenSet; }
    template<typename ChannelIdsT = Aws::Vector<Aws::String>>
    void SetChannelIds(ChannelIdsT&& value) { m_channelIdsHasBeenSet = true; m_channelIds = std::forward<ChannelIdsT>(value); }
    template<typename ChannelIdsT = Aws::Vector<Aws::String>>
    BatchStopRequest& WithChannelIds(ChannelIdsT&& value) { SetChannelIds(std::forward<ChannelIdsT>(value)); return *this;}
    template<typename ChannelIdsT = Aws::String>
    BatchStopRequest& AddChannelIds(ChannelIdsT&& value) { m_channelIdsHasBeenSet = true; m_channelIds.emplace_back(std::forward<ChannelIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * List of multiplex IDs
     */
    inline const Aws::Vector<Aws::String>& GetMultiplexIds() const { return m_multiplexIds; }
    inline bool MultiplexIdsHasBeenSet() const { return m_multiplexIdsHasBeenSet; }
    template<typename MultiplexIdsT = Aws::Vector<Aws::String>>
    void SetMultiplexIds(MultiplexIdsT&& value) { m_multiplexIdsHasBeenSet = true; m_multiplexIds = std::forward<MultiplexIdsT>(value); }
    template<typename MultiplexIdsT = Aws::Vector<Aws::String>>
    BatchStopRequest& WithMultiplexIds(MultiplexIdsT&& value) { SetMultiplexIds(std::forward<MultiplexIdsT>(value)); return *this;}
    template<typename MultiplexIdsT = Aws::String>
    BatchStopRequest& AddMultiplexIds(MultiplexIdsT&& value) { m_multiplexIdsHasBeenSet = true; m_multiplexIds.emplace_back(std::forward<MultiplexIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_channelIds;
    bool m_channelIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_multiplexIds;
    bool m_multiplexIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
