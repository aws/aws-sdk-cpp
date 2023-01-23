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
   * A request to delete resources<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchDeleteRequest">AWS
   * API Reference</a></p>
   */
  class BatchDeleteRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API BatchDeleteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDelete"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    /**
     * List of channel IDs
     */
    inline const Aws::Vector<Aws::String>& GetChannelIds() const{ return m_channelIds; }

    /**
     * List of channel IDs
     */
    inline bool ChannelIdsHasBeenSet() const { return m_channelIdsHasBeenSet; }

    /**
     * List of channel IDs
     */
    inline void SetChannelIds(const Aws::Vector<Aws::String>& value) { m_channelIdsHasBeenSet = true; m_channelIds = value; }

    /**
     * List of channel IDs
     */
    inline void SetChannelIds(Aws::Vector<Aws::String>&& value) { m_channelIdsHasBeenSet = true; m_channelIds = std::move(value); }

    /**
     * List of channel IDs
     */
    inline BatchDeleteRequest& WithChannelIds(const Aws::Vector<Aws::String>& value) { SetChannelIds(value); return *this;}

    /**
     * List of channel IDs
     */
    inline BatchDeleteRequest& WithChannelIds(Aws::Vector<Aws::String>&& value) { SetChannelIds(std::move(value)); return *this;}

    /**
     * List of channel IDs
     */
    inline BatchDeleteRequest& AddChannelIds(const Aws::String& value) { m_channelIdsHasBeenSet = true; m_channelIds.push_back(value); return *this; }

    /**
     * List of channel IDs
     */
    inline BatchDeleteRequest& AddChannelIds(Aws::String&& value) { m_channelIdsHasBeenSet = true; m_channelIds.push_back(std::move(value)); return *this; }

    /**
     * List of channel IDs
     */
    inline BatchDeleteRequest& AddChannelIds(const char* value) { m_channelIdsHasBeenSet = true; m_channelIds.push_back(value); return *this; }


    /**
     * List of input IDs
     */
    inline const Aws::Vector<Aws::String>& GetInputIds() const{ return m_inputIds; }

    /**
     * List of input IDs
     */
    inline bool InputIdsHasBeenSet() const { return m_inputIdsHasBeenSet; }

    /**
     * List of input IDs
     */
    inline void SetInputIds(const Aws::Vector<Aws::String>& value) { m_inputIdsHasBeenSet = true; m_inputIds = value; }

    /**
     * List of input IDs
     */
    inline void SetInputIds(Aws::Vector<Aws::String>&& value) { m_inputIdsHasBeenSet = true; m_inputIds = std::move(value); }

    /**
     * List of input IDs
     */
    inline BatchDeleteRequest& WithInputIds(const Aws::Vector<Aws::String>& value) { SetInputIds(value); return *this;}

    /**
     * List of input IDs
     */
    inline BatchDeleteRequest& WithInputIds(Aws::Vector<Aws::String>&& value) { SetInputIds(std::move(value)); return *this;}

    /**
     * List of input IDs
     */
    inline BatchDeleteRequest& AddInputIds(const Aws::String& value) { m_inputIdsHasBeenSet = true; m_inputIds.push_back(value); return *this; }

    /**
     * List of input IDs
     */
    inline BatchDeleteRequest& AddInputIds(Aws::String&& value) { m_inputIdsHasBeenSet = true; m_inputIds.push_back(std::move(value)); return *this; }

    /**
     * List of input IDs
     */
    inline BatchDeleteRequest& AddInputIds(const char* value) { m_inputIdsHasBeenSet = true; m_inputIds.push_back(value); return *this; }


    /**
     * List of input security group IDs
     */
    inline const Aws::Vector<Aws::String>& GetInputSecurityGroupIds() const{ return m_inputSecurityGroupIds; }

    /**
     * List of input security group IDs
     */
    inline bool InputSecurityGroupIdsHasBeenSet() const { return m_inputSecurityGroupIdsHasBeenSet; }

    /**
     * List of input security group IDs
     */
    inline void SetInputSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_inputSecurityGroupIdsHasBeenSet = true; m_inputSecurityGroupIds = value; }

    /**
     * List of input security group IDs
     */
    inline void SetInputSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_inputSecurityGroupIdsHasBeenSet = true; m_inputSecurityGroupIds = std::move(value); }

    /**
     * List of input security group IDs
     */
    inline BatchDeleteRequest& WithInputSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetInputSecurityGroupIds(value); return *this;}

    /**
     * List of input security group IDs
     */
    inline BatchDeleteRequest& WithInputSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetInputSecurityGroupIds(std::move(value)); return *this;}

    /**
     * List of input security group IDs
     */
    inline BatchDeleteRequest& AddInputSecurityGroupIds(const Aws::String& value) { m_inputSecurityGroupIdsHasBeenSet = true; m_inputSecurityGroupIds.push_back(value); return *this; }

    /**
     * List of input security group IDs
     */
    inline BatchDeleteRequest& AddInputSecurityGroupIds(Aws::String&& value) { m_inputSecurityGroupIdsHasBeenSet = true; m_inputSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * List of input security group IDs
     */
    inline BatchDeleteRequest& AddInputSecurityGroupIds(const char* value) { m_inputSecurityGroupIdsHasBeenSet = true; m_inputSecurityGroupIds.push_back(value); return *this; }


    /**
     * List of multiplex IDs
     */
    inline const Aws::Vector<Aws::String>& GetMultiplexIds() const{ return m_multiplexIds; }

    /**
     * List of multiplex IDs
     */
    inline bool MultiplexIdsHasBeenSet() const { return m_multiplexIdsHasBeenSet; }

    /**
     * List of multiplex IDs
     */
    inline void SetMultiplexIds(const Aws::Vector<Aws::String>& value) { m_multiplexIdsHasBeenSet = true; m_multiplexIds = value; }

    /**
     * List of multiplex IDs
     */
    inline void SetMultiplexIds(Aws::Vector<Aws::String>&& value) { m_multiplexIdsHasBeenSet = true; m_multiplexIds = std::move(value); }

    /**
     * List of multiplex IDs
     */
    inline BatchDeleteRequest& WithMultiplexIds(const Aws::Vector<Aws::String>& value) { SetMultiplexIds(value); return *this;}

    /**
     * List of multiplex IDs
     */
    inline BatchDeleteRequest& WithMultiplexIds(Aws::Vector<Aws::String>&& value) { SetMultiplexIds(std::move(value)); return *this;}

    /**
     * List of multiplex IDs
     */
    inline BatchDeleteRequest& AddMultiplexIds(const Aws::String& value) { m_multiplexIdsHasBeenSet = true; m_multiplexIds.push_back(value); return *this; }

    /**
     * List of multiplex IDs
     */
    inline BatchDeleteRequest& AddMultiplexIds(Aws::String&& value) { m_multiplexIdsHasBeenSet = true; m_multiplexIds.push_back(std::move(value)); return *this; }

    /**
     * List of multiplex IDs
     */
    inline BatchDeleteRequest& AddMultiplexIds(const char* value) { m_multiplexIdsHasBeenSet = true; m_multiplexIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_channelIds;
    bool m_channelIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputIds;
    bool m_inputIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputSecurityGroupIds;
    bool m_inputSecurityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_multiplexIds;
    bool m_multiplexIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
