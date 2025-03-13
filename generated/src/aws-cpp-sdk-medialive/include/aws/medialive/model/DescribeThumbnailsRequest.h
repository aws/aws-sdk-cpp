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
    AWS_MEDIALIVE_API DescribeThumbnailsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeThumbnails"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;

    AWS_MEDIALIVE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * Unique ID of the channel
     */
    inline const Aws::String& GetChannelId() const { return m_channelId; }
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
    template<typename ChannelIdT = Aws::String>
    void SetChannelId(ChannelIdT&& value) { m_channelIdHasBeenSet = true; m_channelId = std::forward<ChannelIdT>(value); }
    template<typename ChannelIdT = Aws::String>
    DescribeThumbnailsRequest& WithChannelId(ChannelIdT&& value) { SetChannelId(std::forward<ChannelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Pipeline ID ("0" or "1")
     */
    inline const Aws::String& GetPipelineId() const { return m_pipelineId; }
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }
    template<typename PipelineIdT = Aws::String>
    void SetPipelineId(PipelineIdT&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::forward<PipelineIdT>(value); }
    template<typename PipelineIdT = Aws::String>
    DescribeThumbnailsRequest& WithPipelineId(PipelineIdT&& value) { SetPipelineId(std::forward<PipelineIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * thumbnail type
     */
    inline const Aws::String& GetThumbnailType() const { return m_thumbnailType; }
    inline bool ThumbnailTypeHasBeenSet() const { return m_thumbnailTypeHasBeenSet; }
    template<typename ThumbnailTypeT = Aws::String>
    void SetThumbnailType(ThumbnailTypeT&& value) { m_thumbnailTypeHasBeenSet = true; m_thumbnailType = std::forward<ThumbnailTypeT>(value); }
    template<typename ThumbnailTypeT = Aws::String>
    DescribeThumbnailsRequest& WithThumbnailType(ThumbnailTypeT&& value) { SetThumbnailType(std::forward<ThumbnailTypeT>(value)); return *this;}
    ///@}
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
