﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/HlsIntervalCadence.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Tile and thumbnail settings applicable when imageBasedTrickPlay is
   * ADVANCED<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/HlsImageBasedTrickPlaySettings">AWS
   * API Reference</a></p>
   */
  class HlsImageBasedTrickPlaySettings
  {
  public:
    AWS_MEDIACONVERT_API HlsImageBasedTrickPlaySettings();
    AWS_MEDIACONVERT_API HlsImageBasedTrickPlaySettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API HlsImageBasedTrickPlaySettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The cadence MediaConvert follows for generating thumbnails. If set to
     * FOLLOW_IFRAME, MediaConvert generates thumbnails for each IDR frame in the
     * output (matching the GOP cadence). If set to FOLLOW_CUSTOM, MediaConvert
     * generates thumbnails according to the interval you specify in thumbnailInterval.
     */
    inline const HlsIntervalCadence& GetIntervalCadence() const{ return m_intervalCadence; }
    inline bool IntervalCadenceHasBeenSet() const { return m_intervalCadenceHasBeenSet; }
    inline void SetIntervalCadence(const HlsIntervalCadence& value) { m_intervalCadenceHasBeenSet = true; m_intervalCadence = value; }
    inline void SetIntervalCadence(HlsIntervalCadence&& value) { m_intervalCadenceHasBeenSet = true; m_intervalCadence = std::move(value); }
    inline HlsImageBasedTrickPlaySettings& WithIntervalCadence(const HlsIntervalCadence& value) { SetIntervalCadence(value); return *this;}
    inline HlsImageBasedTrickPlaySettings& WithIntervalCadence(HlsIntervalCadence&& value) { SetIntervalCadence(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Height of each thumbnail within each tile image, in pixels. Leave blank to
     * maintain aspect ratio with thumbnail width. If following the aspect ratio would
     * lead to a total tile height greater than 4096, then the job will be rejected.
     * Must be divisible by 2.
     */
    inline int GetThumbnailHeight() const{ return m_thumbnailHeight; }
    inline bool ThumbnailHeightHasBeenSet() const { return m_thumbnailHeightHasBeenSet; }
    inline void SetThumbnailHeight(int value) { m_thumbnailHeightHasBeenSet = true; m_thumbnailHeight = value; }
    inline HlsImageBasedTrickPlaySettings& WithThumbnailHeight(int value) { SetThumbnailHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * Enter the interval, in seconds, that MediaConvert uses to generate thumbnails.
     * If the interval you enter doesn't align with the output frame rate, MediaConvert
     * automatically rounds the interval to align with the output frame rate. For
     * example, if the output frame rate is 29.97 frames per second and you enter 5,
     * MediaConvert uses a 150 frame interval to generate thumbnails.
     */
    inline double GetThumbnailInterval() const{ return m_thumbnailInterval; }
    inline bool ThumbnailIntervalHasBeenSet() const { return m_thumbnailIntervalHasBeenSet; }
    inline void SetThumbnailInterval(double value) { m_thumbnailIntervalHasBeenSet = true; m_thumbnailInterval = value; }
    inline HlsImageBasedTrickPlaySettings& WithThumbnailInterval(double value) { SetThumbnailInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * Width of each thumbnail within each tile image, in pixels. Default is 312. Must
     * be divisible by 8.
     */
    inline int GetThumbnailWidth() const{ return m_thumbnailWidth; }
    inline bool ThumbnailWidthHasBeenSet() const { return m_thumbnailWidthHasBeenSet; }
    inline void SetThumbnailWidth(int value) { m_thumbnailWidthHasBeenSet = true; m_thumbnailWidth = value; }
    inline HlsImageBasedTrickPlaySettings& WithThumbnailWidth(int value) { SetThumbnailWidth(value); return *this;}
    ///@}

    ///@{
    /**
     * Number of thumbnails in each column of a tile image. Set a value between 2 and
     * 2048. Must be divisible by 2.
     */
    inline int GetTileHeight() const{ return m_tileHeight; }
    inline bool TileHeightHasBeenSet() const { return m_tileHeightHasBeenSet; }
    inline void SetTileHeight(int value) { m_tileHeightHasBeenSet = true; m_tileHeight = value; }
    inline HlsImageBasedTrickPlaySettings& WithTileHeight(int value) { SetTileHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * Number of thumbnails in each row of a tile image. Set a value between 1 and 512.
     */
    inline int GetTileWidth() const{ return m_tileWidth; }
    inline bool TileWidthHasBeenSet() const { return m_tileWidthHasBeenSet; }
    inline void SetTileWidth(int value) { m_tileWidthHasBeenSet = true; m_tileWidth = value; }
    inline HlsImageBasedTrickPlaySettings& WithTileWidth(int value) { SetTileWidth(value); return *this;}
    ///@}
  private:

    HlsIntervalCadence m_intervalCadence;
    bool m_intervalCadenceHasBeenSet = false;

    int m_thumbnailHeight;
    bool m_thumbnailHeightHasBeenSet = false;

    double m_thumbnailInterval;
    bool m_thumbnailIntervalHasBeenSet = false;

    int m_thumbnailWidth;
    bool m_thumbnailWidthHasBeenSet = false;

    int m_tileHeight;
    bool m_tileHeightHasBeenSet = false;

    int m_tileWidth;
    bool m_tileWidthHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
