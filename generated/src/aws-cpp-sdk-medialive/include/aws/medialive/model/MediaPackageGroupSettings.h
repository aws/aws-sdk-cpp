/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/OutputLocationRef.h>
#include <aws/medialive/model/MediaPackageV2GroupSettings.h>
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
   * Media Package Group Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MediaPackageGroupSettings">AWS
   * API Reference</a></p>
   */
  class MediaPackageGroupSettings
  {
  public:
    AWS_MEDIALIVE_API MediaPackageGroupSettings() = default;
    AWS_MEDIALIVE_API MediaPackageGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MediaPackageGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * MediaPackage channel destination.
     */
    inline const OutputLocationRef& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = OutputLocationRef>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = OutputLocationRef>
    MediaPackageGroupSettings& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Parameters that apply only if the destination parameter (for the output group)
     * specifies a channelGroup and channelName. Use of these two paramters indicates
     * that the output group is for MediaPackage V2 (CMAF Ingest).
     */
    inline const MediaPackageV2GroupSettings& GetMediapackageV2GroupSettings() const { return m_mediapackageV2GroupSettings; }
    inline bool MediapackageV2GroupSettingsHasBeenSet() const { return m_mediapackageV2GroupSettingsHasBeenSet; }
    template<typename MediapackageV2GroupSettingsT = MediaPackageV2GroupSettings>
    void SetMediapackageV2GroupSettings(MediapackageV2GroupSettingsT&& value) { m_mediapackageV2GroupSettingsHasBeenSet = true; m_mediapackageV2GroupSettings = std::forward<MediapackageV2GroupSettingsT>(value); }
    template<typename MediapackageV2GroupSettingsT = MediaPackageV2GroupSettings>
    MediaPackageGroupSettings& WithMediapackageV2GroupSettings(MediapackageV2GroupSettingsT&& value) { SetMediapackageV2GroupSettings(std::forward<MediapackageV2GroupSettingsT>(value)); return *this;}
    ///@}
  private:

    OutputLocationRef m_destination;
    bool m_destinationHasBeenSet = false;

    MediaPackageV2GroupSettings m_mediapackageV2GroupSettings;
    bool m_mediapackageV2GroupSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
