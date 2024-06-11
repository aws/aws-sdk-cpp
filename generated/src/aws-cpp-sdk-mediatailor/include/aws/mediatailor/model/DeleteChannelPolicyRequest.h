﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

  /**
   */
  class DeleteChannelPolicyRequest : public MediaTailorRequest
  {
  public:
    AWS_MEDIATAILOR_API DeleteChannelPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteChannelPolicy"; }

    AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the channel associated with this channel policy.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }
    inline DeleteChannelPolicyRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}
    inline DeleteChannelPolicyRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}
    inline DeleteChannelPolicyRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}
    ///@}
  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
