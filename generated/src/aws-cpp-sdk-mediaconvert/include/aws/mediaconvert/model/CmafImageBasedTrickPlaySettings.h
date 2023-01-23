/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/CmafIntervalCadence.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CmafImageBasedTrickPlaySettings">AWS
   * API Reference</a></p>
   */
  class CmafImageBasedTrickPlaySettings
  {
  public:
    AWS_MEDIACONVERT_API CmafImageBasedTrickPlaySettings();
    AWS_MEDIACONVERT_API CmafImageBasedTrickPlaySettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API CmafImageBasedTrickPlaySettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The cadence MediaConvert follows for generating thumbnails.  If set to
     * FOLLOW_IFRAME, MediaConvert generates thumbnails for each IDR frame in the
     * output (matching the GOP cadence).  If set to FOLLOW_CUSTOM, MediaConvert
     * generates thumbnails according to the interval you specify in thumbnailInterval.
     */
    inline const CmafIntervalCadence& GetIntervalCadence() const{ return m_intervalCadence; }

    /**
     * The cadence MediaConvert follows for generating thumbnails.  If set to
     * FOLLOW_IFRAME, MediaConvert generates thumbnails for each IDR frame in the
     * output (matching the GOP cadence).  If set to FOLLOW_CUSTOM, MediaConvert
     * generates thumbnails according to the interval you specify in thumbnailInterval.
     */
    inline bool IntervalCadenceHasBeenSet() const { return m_intervalCadenceHasBeenSet; }

    /**
     * The cadence MediaConvert follows for generating thumbnails.  If set to
     * FOLLOW_IFRAME, MediaConvert generates thumbnails for each IDR frame in the
     * output (matching the GOP cadence).  If set to FOLLOW_CUSTOM, MediaConvert
     * generates thumbnails according to the interval you specify in thumbnailInterval.
     */
    inline void SetIntervalCadence(const CmafIntervalCadence& value) { m_intervalCadenceHasBeenSet = true; m_intervalCadence = value; }

    /**
     * The cadence MediaConvert follows for generating thumbnails.  If set to
     * FOLLOW_IFRAME, MediaConvert generates thumbnails for each IDR frame in the
     * output (matching the GOP cadence).  If set to FOLLOW_CUSTOM, MediaConvert
     * generates thumbnails according to the interval you specify in thumbnailInterval.
     */
    inline void SetIntervalCadence(CmafIntervalCadence&& value) { m_intervalCadenceHasBeenSet = true; m_intervalCadence = std::move(value); }

    /**
     * The cadence MediaConvert follows for generating thumbnails.  If set to
     * FOLLOW_IFRAME, MediaConvert generates thumbnails for each IDR frame in the
     * output (matching the GOP cadence).  If set to FOLLOW_CUSTOM, MediaConvert
     * generates thumbnails according to the interval you specify in thumbnailInterval.
     */
    inline CmafImageBasedTrickPlaySettings& WithIntervalCadence(const CmafIntervalCadence& value) { SetIntervalCadence(value); return *this;}

    /**
     * The cadence MediaConvert follows for generating thumbnails.  If set to
     * FOLLOW_IFRAME, MediaConvert generates thumbnails for each IDR frame in the
     * output (matching the GOP cadence).  If set to FOLLOW_CUSTOM, MediaConvert
     * generates thumbnails according to the interval you specify in thumbnailInterval.
     */
    inline CmafImageBasedTrickPlaySettings& WithIntervalCadence(CmafIntervalCadence&& value) { SetIntervalCadence(std::move(value)); return *this;}


    /**
     * Height of each thumbnail within each tile image, in pixels.  Leave blank to
     * maintain aspect ratio with thumbnail width.  If following the aspect ratio would
     * lead to a total tile height greater than 4096, then the job will be rejected. 
     * Must be divisible by 2.
     */
    inline int GetThumbnailHeight() const{ return m_thumbnailHeight; }

    /**
     * Height of each thumbnail within each tile image, in pixels.  Leave blank to
     * maintain aspect ratio with thumbnail width.  If following the aspect ratio would
     * lead to a total tile height greater than 4096, then the job will be rejected. 
     * Must be divisible by 2.
     */
    inline bool ThumbnailHeightHasBeenSet() const { return m_thumbnailHeightHasBeenSet; }

    /**
     * Height of each thumbnail within each tile image, in pixels.  Leave blank to
     * maintain aspect ratio with thumbnail width.  If following the aspect ratio would
     * lead to a total tile height greater than 4096, then the job will be rejected. 
     * Must be divisible by 2.
     */
    inline void SetThumbnailHeight(int value) { m_thumbnailHeightHasBeenSet = true; m_thumbnailHeight = value; }

    /**
     * Height of each thumbnail within each tile image, in pixels.  Leave blank to
     * maintain aspect ratio with thumbnail width.  If following the aspect ratio would
     * lead to a total tile height greater than 4096, then the job will be rejected. 
     * Must be divisible by 2.
     */
    inline CmafImageBasedTrickPlaySettings& WithThumbnailHeight(int value) { SetThumbnailHeight(value); return *this;}


    /**
     * Enter the interval, in seconds, that MediaConvert uses to generate thumbnails. 
     * If the interval you enter doesn't align with the output frame rate, MediaConvert
     * automatically rounds the interval to align with the output frame rate.  For
     * example, if the output frame rate is 29.97 frames per second and you enter 5,
     * MediaConvert uses a 150 frame interval to generate thumbnails.
     */
    inline double GetThumbnailInterval() const{ return m_thumbnailInterval; }

    /**
     * Enter the interval, in seconds, that MediaConvert uses to generate thumbnails. 
     * If the interval you enter doesn't align with the output frame rate, MediaConvert
     * automatically rounds the interval to align with the output frame rate.  For
     * example, if the output frame rate is 29.97 frames per second and you enter 5,
     * MediaConvert uses a 150 frame interval to generate thumbnails.
     */
    inline bool ThumbnailIntervalHasBeenSet() const { return m_thumbnailIntervalHasBeenSet; }

    /**
     * Enter the interval, in seconds, that MediaConvert uses to generate thumbnails. 
     * If the interval you enter doesn't align with the output frame rate, MediaConvert
     * automatically rounds the interval to align with the output frame rate.  For
     * example, if the output frame rate is 29.97 frames per second and you enter 5,
     * MediaConvert uses a 150 frame interval to generate thumbnails.
     */
    inline void SetThumbnailInterval(double value) { m_thumbnailIntervalHasBeenSet = true; m_thumbnailInterval = value; }

    /**
     * Enter the interval, in seconds, that MediaConvert uses to generate thumbnails. 
     * If the interval you enter doesn't align with the output frame rate, MediaConvert
     * automatically rounds the interval to align with the output frame rate.  For
     * example, if the output frame rate is 29.97 frames per second and you enter 5,
     * MediaConvert uses a 150 frame interval to generate thumbnails.
     */
    inline CmafImageBasedTrickPlaySettings& WithThumbnailInterval(double value) { SetThumbnailInterval(value); return *this;}


    /**
     * Width of each thumbnail within each tile image, in pixels.  Default is 312. 
     * Must be divisible by 8.
     */
    inline int GetThumbnailWidth() const{ return m_thumbnailWidth; }

    /**
     * Width of each thumbnail within each tile image, in pixels.  Default is 312. 
     * Must be divisible by 8.
     */
    inline bool ThumbnailWidthHasBeenSet() const { return m_thumbnailWidthHasBeenSet; }

    /**
     * Width of each thumbnail within each tile image, in pixels.  Default is 312. 
     * Must be divisible by 8.
     */
    inline void SetThumbnailWidth(int value) { m_thumbnailWidthHasBeenSet = true; m_thumbnailWidth = value; }

    /**
     * Width of each thumbnail within each tile image, in pixels.  Default is 312. 
     * Must be divisible by 8.
     */
    inline CmafImageBasedTrickPlaySettings& WithThumbnailWidth(int value) { SetThumbnailWidth(value); return *this;}


    /**
     * Number of thumbnails in each column of a tile image. Set a value between 2 and
     * 2048. Must be divisible by 2.
     */
    inline int GetTileHeight() const{ return m_tileHeight; }

    /**
     * Number of thumbnails in each column of a tile image. Set a value between 2 and
     * 2048. Must be divisible by 2.
     */
    inline bool TileHeightHasBeenSet() const { return m_tileHeightHasBeenSet; }

    /**
     * Number of thumbnails in each column of a tile image. Set a value between 2 and
     * 2048. Must be divisible by 2.
     */
    inline void SetTileHeight(int value) { m_tileHeightHasBeenSet = true; m_tileHeight = value; }

    /**
     * Number of thumbnails in each column of a tile image. Set a value between 2 and
     * 2048. Must be divisible by 2.
     */
    inline CmafImageBasedTrickPlaySettings& WithTileHeight(int value) { SetTileHeight(value); return *this;}


    /**
     * Number of thumbnails in each row of a tile image.  Set a value between 1 and
     * 512.
     */
    inline int GetTileWidth() const{ return m_tileWidth; }

    /**
     * Number of thumbnails in each row of a tile image.  Set a value between 1 and
     * 512.
     */
    inline bool TileWidthHasBeenSet() const { return m_tileWidthHasBeenSet; }

    /**
     * Number of thumbnails in each row of a tile image.  Set a value between 1 and
     * 512.
     */
    inline void SetTileWidth(int value) { m_tileWidthHasBeenSet = true; m_tileWidth = value; }

    /**
     * Number of thumbnails in each row of a tile image.  Set a value between 1 and
     * 512.
     */
    inline CmafImageBasedTrickPlaySettings& WithTileWidth(int value) { SetTileWidth(value); return *this;}

  private:

    CmafIntervalCadence m_intervalCadence;
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
