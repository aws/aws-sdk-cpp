/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/ChannelPipelineIdToRestart.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * Pipelines to restart.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/RestartChannelPipelinesRequest">AWS
   * API Reference</a></p>
   */
  class RestartChannelPipelinesRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API RestartChannelPipelinesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestartChannelPipelines"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    /**
     * ID of channel
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }

    /**
     * ID of channel
     */
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }

    /**
     * ID of channel
     */
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }

    /**
     * ID of channel
     */
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }

    /**
     * ID of channel
     */
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }

    /**
     * ID of channel
     */
    inline RestartChannelPipelinesRequest& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}

    /**
     * ID of channel
     */
    inline RestartChannelPipelinesRequest& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}

    /**
     * ID of channel
     */
    inline RestartChannelPipelinesRequest& WithChannelId(const char* value) { SetChannelId(value); return *this;}


    /**
     * An array of pipelines to restart in this channel. Format PIPELINE_0 or
     * PIPELINE_1.
     */
    inline const Aws::Vector<ChannelPipelineIdToRestart>& GetPipelineIds() const{ return m_pipelineIds; }

    /**
     * An array of pipelines to restart in this channel. Format PIPELINE_0 or
     * PIPELINE_1.
     */
    inline bool PipelineIdsHasBeenSet() const { return m_pipelineIdsHasBeenSet; }

    /**
     * An array of pipelines to restart in this channel. Format PIPELINE_0 or
     * PIPELINE_1.
     */
    inline void SetPipelineIds(const Aws::Vector<ChannelPipelineIdToRestart>& value) { m_pipelineIdsHasBeenSet = true; m_pipelineIds = value; }

    /**
     * An array of pipelines to restart in this channel. Format PIPELINE_0 or
     * PIPELINE_1.
     */
    inline void SetPipelineIds(Aws::Vector<ChannelPipelineIdToRestart>&& value) { m_pipelineIdsHasBeenSet = true; m_pipelineIds = std::move(value); }

    /**
     * An array of pipelines to restart in this channel. Format PIPELINE_0 or
     * PIPELINE_1.
     */
    inline RestartChannelPipelinesRequest& WithPipelineIds(const Aws::Vector<ChannelPipelineIdToRestart>& value) { SetPipelineIds(value); return *this;}

    /**
     * An array of pipelines to restart in this channel. Format PIPELINE_0 or
     * PIPELINE_1.
     */
    inline RestartChannelPipelinesRequest& WithPipelineIds(Aws::Vector<ChannelPipelineIdToRestart>&& value) { SetPipelineIds(std::move(value)); return *this;}

    /**
     * An array of pipelines to restart in this channel. Format PIPELINE_0 or
     * PIPELINE_1.
     */
    inline RestartChannelPipelinesRequest& AddPipelineIds(const ChannelPipelineIdToRestart& value) { m_pipelineIdsHasBeenSet = true; m_pipelineIds.push_back(value); return *this; }

    /**
     * An array of pipelines to restart in this channel. Format PIPELINE_0 or
     * PIPELINE_1.
     */
    inline RestartChannelPipelinesRequest& AddPipelineIds(ChannelPipelineIdToRestart&& value) { m_pipelineIdsHasBeenSet = true; m_pipelineIds.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;

    Aws::Vector<ChannelPipelineIdToRestart> m_pipelineIds;
    bool m_pipelineIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
