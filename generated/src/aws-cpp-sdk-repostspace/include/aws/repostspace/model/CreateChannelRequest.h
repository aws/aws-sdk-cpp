/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/repostspace/RepostspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace repostspace
{
namespace Model
{

  /**
   */
  class CreateChannelRequest : public RepostspaceRequest
  {
  public:
    AWS_REPOSTSPACE_API CreateChannelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateChannel"; }

    AWS_REPOSTSPACE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline const Aws::String& GetSpaceId() const { return m_spaceId; }
    inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
    template<typename SpaceIdT = Aws::String>
    void SetSpaceId(SpaceIdT&& value) { m_spaceIdHasBeenSet = true; m_spaceId = std::forward<SpaceIdT>(value); }
    template<typename SpaceIdT = Aws::String>
    CreateChannelRequest& WithSpaceId(SpaceIdT&& value) { SetSpaceId(std::forward<SpaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the channel. This must be unique per private re:Post.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    CreateChannelRequest& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the channel. This is used only to help you identify this
     * channel.</p>
     */
    inline const Aws::String& GetChannelDescription() const { return m_channelDescription; }
    inline bool ChannelDescriptionHasBeenSet() const { return m_channelDescriptionHasBeenSet; }
    template<typename ChannelDescriptionT = Aws::String>
    void SetChannelDescription(ChannelDescriptionT&& value) { m_channelDescriptionHasBeenSet = true; m_channelDescription = std::forward<ChannelDescriptionT>(value); }
    template<typename ChannelDescriptionT = Aws::String>
    CreateChannelRequest& WithChannelDescription(ChannelDescriptionT&& value) { SetChannelDescription(std::forward<ChannelDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_spaceId;
    bool m_spaceIdHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_channelDescription;
    bool m_channelDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
