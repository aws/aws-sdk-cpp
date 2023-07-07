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
    AWS_MEDIALIVE_API ThumbnailDetail();
    AWS_MEDIALIVE_API ThumbnailDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ThumbnailDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Pipeline ID
     */
    inline const Aws::String& GetPipelineId() const{ return m_pipelineId; }

    /**
     * Pipeline ID
     */
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }

    /**
     * Pipeline ID
     */
    inline void SetPipelineId(const Aws::String& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }

    /**
     * Pipeline ID
     */
    inline void SetPipelineId(Aws::String&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::move(value); }

    /**
     * Pipeline ID
     */
    inline void SetPipelineId(const char* value) { m_pipelineIdHasBeenSet = true; m_pipelineId.assign(value); }

    /**
     * Pipeline ID
     */
    inline ThumbnailDetail& WithPipelineId(const Aws::String& value) { SetPipelineId(value); return *this;}

    /**
     * Pipeline ID
     */
    inline ThumbnailDetail& WithPipelineId(Aws::String&& value) { SetPipelineId(std::move(value)); return *this;}

    /**
     * Pipeline ID
     */
    inline ThumbnailDetail& WithPipelineId(const char* value) { SetPipelineId(value); return *this;}


    /**
     * thumbnails of a single pipeline
     */
    inline const Aws::Vector<Thumbnail>& GetThumbnails() const{ return m_thumbnails; }

    /**
     * thumbnails of a single pipeline
     */
    inline bool ThumbnailsHasBeenSet() const { return m_thumbnailsHasBeenSet; }

    /**
     * thumbnails of a single pipeline
     */
    inline void SetThumbnails(const Aws::Vector<Thumbnail>& value) { m_thumbnailsHasBeenSet = true; m_thumbnails = value; }

    /**
     * thumbnails of a single pipeline
     */
    inline void SetThumbnails(Aws::Vector<Thumbnail>&& value) { m_thumbnailsHasBeenSet = true; m_thumbnails = std::move(value); }

    /**
     * thumbnails of a single pipeline
     */
    inline ThumbnailDetail& WithThumbnails(const Aws::Vector<Thumbnail>& value) { SetThumbnails(value); return *this;}

    /**
     * thumbnails of a single pipeline
     */
    inline ThumbnailDetail& WithThumbnails(Aws::Vector<Thumbnail>&& value) { SetThumbnails(std::move(value)); return *this;}

    /**
     * thumbnails of a single pipeline
     */
    inline ThumbnailDetail& AddThumbnails(const Thumbnail& value) { m_thumbnailsHasBeenSet = true; m_thumbnails.push_back(value); return *this; }

    /**
     * thumbnails of a single pipeline
     */
    inline ThumbnailDetail& AddThumbnails(Thumbnail&& value) { m_thumbnailsHasBeenSet = true; m_thumbnails.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet = false;

    Aws::Vector<Thumbnail> m_thumbnails;
    bool m_thumbnailsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
