/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/Thumbnail.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{

  /**
   * Thumbnail details for one pipeline of a running channel.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ThumbnailDetail">AWS
   * API Reference</a></p>
   */
  class ThumbnailDetail
  {
  public:
    AWS_MEDIALIVE_API ThumbnailDetail() = default;
    AWS_MEDIALIVE_API ThumbnailDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ThumbnailDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Pipeline ID
     */
    inline const Aws::String& GetPipelineId() const { return m_pipelineId; }
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }
    template<typename PipelineIdT = Aws::String>
    void SetPipelineId(PipelineIdT&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::forward<PipelineIdT>(value); }
    template<typename PipelineIdT = Aws::String>
    ThumbnailDetail& WithPipelineId(PipelineIdT&& value) { SetPipelineId(std::forward<PipelineIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * thumbnails of a single pipeline
     */
    inline const Aws::Vector<Thumbnail>& GetThumbnails() const { return m_thumbnails; }
    inline bool ThumbnailsHasBeenSet() const { return m_thumbnailsHasBeenSet; }
    template<typename ThumbnailsT = Aws::Vector<Thumbnail>>
    void SetThumbnails(ThumbnailsT&& value) { m_thumbnailsHasBeenSet = true; m_thumbnails = std::forward<ThumbnailsT>(value); }
    template<typename ThumbnailsT = Aws::Vector<Thumbnail>>
    ThumbnailDetail& WithThumbnails(ThumbnailsT&& value) { SetThumbnails(std::forward<ThumbnailsT>(value)); return *this;}
    template<typename ThumbnailsT = Thumbnail>
    ThumbnailDetail& AddThumbnails(ThumbnailsT&& value) { m_thumbnailsHasBeenSet = true; m_thumbnails.emplace_back(std::forward<ThumbnailsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet = false;

    Aws::Vector<Thumbnail> m_thumbnails;
    bool m_thumbnailsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
