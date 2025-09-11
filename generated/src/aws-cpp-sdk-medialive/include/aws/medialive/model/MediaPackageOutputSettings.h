/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/MediaPackageV2DestinationSettings.h>
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
   * Media Package Output Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MediaPackageOutputSettings">AWS
   * API Reference</a></p>
   */
  class MediaPackageOutputSettings
  {
  public:
    AWS_MEDIALIVE_API MediaPackageOutputSettings() = default;
    AWS_MEDIALIVE_API MediaPackageOutputSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MediaPackageOutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Optional settings for MediaPackage V2 destinations
     */
    inline const MediaPackageV2DestinationSettings& GetMediaPackageV2DestinationSettings() const { return m_mediaPackageV2DestinationSettings; }
    inline bool MediaPackageV2DestinationSettingsHasBeenSet() const { return m_mediaPackageV2DestinationSettingsHasBeenSet; }
    template<typename MediaPackageV2DestinationSettingsT = MediaPackageV2DestinationSettings>
    void SetMediaPackageV2DestinationSettings(MediaPackageV2DestinationSettingsT&& value) { m_mediaPackageV2DestinationSettingsHasBeenSet = true; m_mediaPackageV2DestinationSettings = std::forward<MediaPackageV2DestinationSettingsT>(value); }
    template<typename MediaPackageV2DestinationSettingsT = MediaPackageV2DestinationSettings>
    MediaPackageOutputSettings& WithMediaPackageV2DestinationSettings(MediaPackageV2DestinationSettingsT&& value) { SetMediaPackageV2DestinationSettings(std::forward<MediaPackageV2DestinationSettingsT>(value)); return *this;}
    ///@}
  private:

    MediaPackageV2DestinationSettings m_mediaPackageV2DestinationSettings;
    bool m_mediaPackageV2DestinationSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
