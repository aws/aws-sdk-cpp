/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/OutputLocationRef.h>
#include <aws/medialive/model/FrameCaptureCdnSettings.h>
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
   * Frame Capture Group Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/FrameCaptureGroupSettings">AWS
   * API Reference</a></p>
   */
  class FrameCaptureGroupSettings
  {
  public:
    AWS_MEDIALIVE_API FrameCaptureGroupSettings() = default;
    AWS_MEDIALIVE_API FrameCaptureGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API FrameCaptureGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The destination for the frame capture files. Either the URI for an Amazon S3
     * bucket and object, plus a file name prefix (for example,
     * s3ssl://sportsDelivery/highlights/20180820/curling-) or the URI for a MediaStore
     * container, plus a file name prefix (for example,
     * mediastoressl://sportsDelivery/20180820/curling-). The final file names consist
     * of the prefix from the destination field (for example, "curling-") + name
     * modifier + the counter (5 digits, starting from 00001) + extension (which is
     * always .jpg).  For example, curling-low.00001.jpg
     */
    inline const OutputLocationRef& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = OutputLocationRef>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = OutputLocationRef>
    FrameCaptureGroupSettings& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Parameters that control interactions with the CDN.
     */
    inline const FrameCaptureCdnSettings& GetFrameCaptureCdnSettings() const { return m_frameCaptureCdnSettings; }
    inline bool FrameCaptureCdnSettingsHasBeenSet() const { return m_frameCaptureCdnSettingsHasBeenSet; }
    template<typename FrameCaptureCdnSettingsT = FrameCaptureCdnSettings>
    void SetFrameCaptureCdnSettings(FrameCaptureCdnSettingsT&& value) { m_frameCaptureCdnSettingsHasBeenSet = true; m_frameCaptureCdnSettings = std::forward<FrameCaptureCdnSettingsT>(value); }
    template<typename FrameCaptureCdnSettingsT = FrameCaptureCdnSettings>
    FrameCaptureGroupSettings& WithFrameCaptureCdnSettings(FrameCaptureCdnSettingsT&& value) { SetFrameCaptureCdnSettings(std::forward<FrameCaptureCdnSettingsT>(value)); return *this;}
    ///@}
  private:

    OutputLocationRef m_destination;
    bool m_destinationHasBeenSet = false;

    FrameCaptureCdnSettings m_frameCaptureCdnSettings;
    bool m_frameCaptureCdnSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
