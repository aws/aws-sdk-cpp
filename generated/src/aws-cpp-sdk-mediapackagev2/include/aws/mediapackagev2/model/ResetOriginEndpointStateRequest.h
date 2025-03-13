/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/mediapackagev2/Mediapackagev2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

  /**
   */
  class ResetOriginEndpointStateRequest : public Mediapackagev2Request
  {
  public:
    AWS_MEDIAPACKAGEV2_API ResetOriginEndpointStateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResetOriginEndpointState"; }

    AWS_MEDIAPACKAGEV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the channel group that contains the channel with the origin
     * endpoint that you are resetting.</p>
     */
    inline const Aws::String& GetChannelGroupName() const { return m_channelGroupName; }
    inline bool ChannelGroupNameHasBeenSet() const { return m_channelGroupNameHasBeenSet; }
    template<typename ChannelGroupNameT = Aws::String>
    void SetChannelGroupName(ChannelGroupNameT&& value) { m_channelGroupNameHasBeenSet = true; m_channelGroupName = std::forward<ChannelGroupNameT>(value); }
    template<typename ChannelGroupNameT = Aws::String>
    ResetOriginEndpointStateRequest& WithChannelGroupName(ChannelGroupNameT&& value) { SetChannelGroupName(std::forward<ChannelGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the channel with the origin endpoint that you are resetting.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    ResetOriginEndpointStateRequest& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the origin endpoint that you are resetting.</p>
     */
    inline const Aws::String& GetOriginEndpointName() const { return m_originEndpointName; }
    inline bool OriginEndpointNameHasBeenSet() const { return m_originEndpointNameHasBeenSet; }
    template<typename OriginEndpointNameT = Aws::String>
    void SetOriginEndpointName(OriginEndpointNameT&& value) { m_originEndpointNameHasBeenSet = true; m_originEndpointName = std::forward<OriginEndpointNameT>(value); }
    template<typename OriginEndpointNameT = Aws::String>
    ResetOriginEndpointStateRequest& WithOriginEndpointName(OriginEndpointNameT&& value) { SetOriginEndpointName(std::forward<OriginEndpointNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelGroupName;
    bool m_channelGroupNameHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_originEndpointName;
    bool m_originEndpointNameHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
