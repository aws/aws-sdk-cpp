/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for DescribeThumbnailsRequest<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeThumbnailsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeThumbnailsRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API DescribeThumbnailsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeThumbnails"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;

    AWS_MEDIALIVE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * Unique ID of the channel
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }

    /**
     * Unique ID of the channel
     */
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }

    /**
     * Unique ID of the channel
     */
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }

    /**
     * Unique ID of the channel
     */
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }

    /**
     * Unique ID of the channel
     */
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }

    /**
     * Unique ID of the channel
     */
    inline DescribeThumbnailsRequest& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}

    /**
     * Unique ID of the channel
     */
    inline DescribeThumbnailsRequest& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}

    /**
     * Unique ID of the channel
     */
    inline DescribeThumbnailsRequest& WithChannelId(const char* value) { SetChannelId(value); return *this;}


    /**
     * Pipeline ID ("0" or "1")
     */
    inline const Aws::String& GetPipelineId() const{ return m_pipelineId; }

    /**
     * Pipeline ID ("0" or "1")
     */
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }

    /**
     * Pipeline ID ("0" or "1")
     */
    inline void SetPipelineId(const Aws::String& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }

    /**
     * Pipeline ID ("0" or "1")
     */
    inline void SetPipelineId(Aws::String&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::move(value); }

    /**
     * Pipeline ID ("0" or "1")
     */
    inline void SetPipelineId(const char* value) { m_pipelineIdHasBeenSet = true; m_pipelineId.assign(value); }

    /**
     * Pipeline ID ("0" or "1")
     */
    inline DescribeThumbnailsRequest& WithPipelineId(const Aws::String& value) { SetPipelineId(value); return *this;}

    /**
     * Pipeline ID ("0" or "1")
     */
    inline DescribeThumbnailsRequest& WithPipelineId(Aws::String&& value) { SetPipelineId(std::move(value)); return *this;}

    /**
     * Pipeline ID ("0" or "1")
     */
    inline DescribeThumbnailsRequest& WithPipelineId(const char* value) { SetPipelineId(value); return *this;}


    /**
     * thumbnail type
     */
    inline const Aws::String& GetThumbnailType() const{ return m_thumbnailType; }

    /**
     * thumbnail type
     */
    inline bool ThumbnailTypeHasBeenSet() const { return m_thumbnailTypeHasBeenSet; }

    /**
     * thumbnail type
     */
    inline void SetThumbnailType(const Aws::String& value) { m_thumbnailTypeHasBeenSet = true; m_thumbnailType = value; }

    /**
     * thumbnail type
     */
    inline void SetThumbnailType(Aws::String&& value) { m_thumbnailTypeHasBeenSet = true; m_thumbnailType = std::move(value); }

    /**
     * thumbnail type
     */
    inline void SetThumbnailType(const char* value) { m_thumbnailTypeHasBeenSet = true; m_thumbnailType.assign(value); }

    /**
     * thumbnail type
     */
    inline DescribeThumbnailsRequest& WithThumbnailType(const Aws::String& value) { SetThumbnailType(value); return *this;}

    /**
     * thumbnail type
     */
    inline DescribeThumbnailsRequest& WithThumbnailType(Aws::String&& value) { SetThumbnailType(std::move(value)); return *this;}

    /**
     * thumbnail type
     */
    inline DescribeThumbnailsRequest& WithThumbnailType(const char* value) { SetThumbnailType(value); return *this;}

  private:

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;

    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet = false;

    Aws::String m_thumbnailType;
    bool m_thumbnailTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
