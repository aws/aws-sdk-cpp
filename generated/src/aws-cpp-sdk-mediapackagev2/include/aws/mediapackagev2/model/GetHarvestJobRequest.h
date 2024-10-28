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
   * <p>The request object for retrieving a specific harvest job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/GetHarvestJobRequest">AWS
   * API Reference</a></p>
   */
  class GetHarvestJobRequest : public Mediapackagev2Request
  {
  public:
    AWS_MEDIAPACKAGEV2_API GetHarvestJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetHarvestJob"; }

    AWS_MEDIAPACKAGEV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the channel group containing the channel associated with the
     * harvest job.</p>
     */
    inline const Aws::String& GetChannelGroupName() const{ return m_channelGroupName; }
    inline bool ChannelGroupNameHasBeenSet() const { return m_channelGroupNameHasBeenSet; }
    inline void SetChannelGroupName(const Aws::String& value) { m_channelGroupNameHasBeenSet = true; m_channelGroupName = value; }
    inline void SetChannelGroupName(Aws::String&& value) { m_channelGroupNameHasBeenSet = true; m_channelGroupName = std::move(value); }
    inline void SetChannelGroupName(const char* value) { m_channelGroupNameHasBeenSet = true; m_channelGroupName.assign(value); }
    inline GetHarvestJobRequest& WithChannelGroupName(const Aws::String& value) { SetChannelGroupName(value); return *this;}
    inline GetHarvestJobRequest& WithChannelGroupName(Aws::String&& value) { SetChannelGroupName(std::move(value)); return *this;}
    inline GetHarvestJobRequest& WithChannelGroupName(const char* value) { SetChannelGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the channel associated with the harvest job.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }
    inline GetHarvestJobRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}
    inline GetHarvestJobRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}
    inline GetHarvestJobRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the origin endpoint associated with the harvest job.</p>
     */
    inline const Aws::String& GetOriginEndpointName() const{ return m_originEndpointName; }
    inline bool OriginEndpointNameHasBeenSet() const { return m_originEndpointNameHasBeenSet; }
    inline void SetOriginEndpointName(const Aws::String& value) { m_originEndpointNameHasBeenSet = true; m_originEndpointName = value; }
    inline void SetOriginEndpointName(Aws::String&& value) { m_originEndpointNameHasBeenSet = true; m_originEndpointName = std::move(value); }
    inline void SetOriginEndpointName(const char* value) { m_originEndpointNameHasBeenSet = true; m_originEndpointName.assign(value); }
    inline GetHarvestJobRequest& WithOriginEndpointName(const Aws::String& value) { SetOriginEndpointName(value); return *this;}
    inline GetHarvestJobRequest& WithOriginEndpointName(Aws::String&& value) { SetOriginEndpointName(std::move(value)); return *this;}
    inline GetHarvestJobRequest& WithOriginEndpointName(const char* value) { SetOriginEndpointName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the harvest job to retrieve.</p>
     */
    inline const Aws::String& GetHarvestJobName() const{ return m_harvestJobName; }
    inline bool HarvestJobNameHasBeenSet() const { return m_harvestJobNameHasBeenSet; }
    inline void SetHarvestJobName(const Aws::String& value) { m_harvestJobNameHasBeenSet = true; m_harvestJobName = value; }
    inline void SetHarvestJobName(Aws::String&& value) { m_harvestJobNameHasBeenSet = true; m_harvestJobName = std::move(value); }
    inline void SetHarvestJobName(const char* value) { m_harvestJobNameHasBeenSet = true; m_harvestJobName.assign(value); }
    inline GetHarvestJobRequest& WithHarvestJobName(const Aws::String& value) { SetHarvestJobName(value); return *this;}
    inline GetHarvestJobRequest& WithHarvestJobName(Aws::String&& value) { SetHarvestJobName(std::move(value)); return *this;}
    inline GetHarvestJobRequest& WithHarvestJobName(const char* value) { SetHarvestJobName(value); return *this;}
    ///@}
  private:

    Aws::String m_channelGroupName;
    bool m_channelGroupNameHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_originEndpointName;
    bool m_originEndpointNameHasBeenSet = false;

    Aws::String m_harvestJobName;
    bool m_harvestJobNameHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
