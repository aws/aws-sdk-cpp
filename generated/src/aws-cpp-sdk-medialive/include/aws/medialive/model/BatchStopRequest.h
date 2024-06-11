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
    AWS_MEDIALIVE_API BatchStopRequest();

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
    inline const Aws::Vector<Aws::String>& GetChannelIds() const{ return m_channelIds; }
    inline bool ChannelIdsHasBeenSet() const { return m_channelIdsHasBeenSet; }
    inline void SetChannelIds(const Aws::Vector<Aws::String>& value) { m_channelIdsHasBeenSet = true; m_channelIds = value; }
    inline void SetChannelIds(Aws::Vector<Aws::String>&& value) { m_channelIdsHasBeenSet = true; m_channelIds = std::move(value); }
    inline BatchStopRequest& WithChannelIds(const Aws::Vector<Aws::String>& value) { SetChannelIds(value); return *this;}
    inline BatchStopRequest& WithChannelIds(Aws::Vector<Aws::String>&& value) { SetChannelIds(std::move(value)); return *this;}
    inline BatchStopRequest& AddChannelIds(const Aws::String& value) { m_channelIdsHasBeenSet = true; m_channelIds.push_back(value); return *this; }
    inline BatchStopRequest& AddChannelIds(Aws::String&& value) { m_channelIdsHasBeenSet = true; m_channelIds.push_back(std::move(value)); return *this; }
    inline BatchStopRequest& AddChannelIds(const char* value) { m_channelIdsHasBeenSet = true; m_channelIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * List of multiplex IDs
     */
    inline const Aws::Vector<Aws::String>& GetMultiplexIds() const{ return m_multiplexIds; }
    inline bool MultiplexIdsHasBeenSet() const { return m_multiplexIdsHasBeenSet; }
    inline void SetMultiplexIds(const Aws::Vector<Aws::String>& value) { m_multiplexIdsHasBeenSet = true; m_multiplexIds = value; }
    inline void SetMultiplexIds(Aws::Vector<Aws::String>&& value) { m_multiplexIdsHasBeenSet = true; m_multiplexIds = std::move(value); }
    inline BatchStopRequest& WithMultiplexIds(const Aws::Vector<Aws::String>& value) { SetMultiplexIds(value); return *this;}
    inline BatchStopRequest& WithMultiplexIds(Aws::Vector<Aws::String>&& value) { SetMultiplexIds(std::move(value)); return *this;}
    inline BatchStopRequest& AddMultiplexIds(const Aws::String& value) { m_multiplexIdsHasBeenSet = true; m_multiplexIds.push_back(value); return *this; }
    inline BatchStopRequest& AddMultiplexIds(Aws::String&& value) { m_multiplexIdsHasBeenSet = true; m_multiplexIds.push_back(std::move(value)); return *this; }
    inline BatchStopRequest& AddMultiplexIds(const char* value) { m_multiplexIdsHasBeenSet = true; m_multiplexIds.push_back(value); return *this; }
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
