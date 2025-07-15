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
  class GetChannelRequest : public RepostspaceRequest
  {
  public:
    AWS_REPOSTSPACE_API GetChannelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetChannel"; }

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
    GetChannelRequest& WithSpaceId(SpaceIdT&& value) { SetSpaceId(std::forward<SpaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the private re:Post channel.</p>
     */
    inline const Aws::String& GetChannelId() const { return m_channelId; }
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
    template<typename ChannelIdT = Aws::String>
    void SetChannelId(ChannelIdT&& value) { m_channelIdHasBeenSet = true; m_channelId = std::forward<ChannelIdT>(value); }
    template<typename ChannelIdT = Aws::String>
    GetChannelRequest& WithChannelId(ChannelIdT&& value) { SetChannelId(std::forward<ChannelIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_spaceId;
    bool m_spaceIdHasBeenSet = false;

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
