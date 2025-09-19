/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/HlsAutoSelect.h>
#include <aws/medialive/model/HlsDefault.h>
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
   * Media Package V2 Destination Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MediaPackageV2DestinationSettings">AWS
   * API Reference</a></p>
   */
  class MediaPackageV2DestinationSettings
  {
  public:
    AWS_MEDIALIVE_API MediaPackageV2DestinationSettings() = default;
    AWS_MEDIALIVE_API MediaPackageV2DestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MediaPackageV2DestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Applies only to an output that contains audio. If you want to put several audio
     * encodes into one audio rendition group, decide on a name (ID) for the group.
     * Then in every audio output that you want to belong to that group, enter that ID
     * in this field. Note that this information is part of the HLS specification (not
     * the CMAF specification), but if you include it then MediaPackage will include it
     * in the manifest it creates for the video player.
     */
    inline const Aws::String& GetAudioGroupId() const { return m_audioGroupId; }
    inline bool AudioGroupIdHasBeenSet() const { return m_audioGroupIdHasBeenSet; }
    template<typename AudioGroupIdT = Aws::String>
    void SetAudioGroupId(AudioGroupIdT&& value) { m_audioGroupIdHasBeenSet = true; m_audioGroupId = std::forward<AudioGroupIdT>(value); }
    template<typename AudioGroupIdT = Aws::String>
    MediaPackageV2DestinationSettings& WithAudioGroupId(AudioGroupIdT&& value) { SetAudioGroupId(std::forward<AudioGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Applies only to an output that contains video, and only if you want to associate
     * one or more audio groups to this video. In this field you assign the groups that
     * you create (in the Group ID fields in the various audio outputs). Enter one
     * group ID, or enter a comma-separated list of group IDs. Note that this
     * information is part of the HLS specification (not the CMAF specification), but
     * if you include it then MediaPackage will include it in the manifest it creates
     * for the video player.
     */
    inline const Aws::String& GetAudioRenditionSets() const { return m_audioRenditionSets; }
    inline bool AudioRenditionSetsHasBeenSet() const { return m_audioRenditionSetsHasBeenSet; }
    template<typename AudioRenditionSetsT = Aws::String>
    void SetAudioRenditionSets(AudioRenditionSetsT&& value) { m_audioRenditionSetsHasBeenSet = true; m_audioRenditionSets = std::forward<AudioRenditionSetsT>(value); }
    template<typename AudioRenditionSetsT = Aws::String>
    MediaPackageV2DestinationSettings& WithAudioRenditionSets(AudioRenditionSetsT&& value) { SetAudioRenditionSets(std::forward<AudioRenditionSetsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies whether MediaPackage should set this output as the auto-select
     * rendition in the HLS manifest. YES means this must be the auto-select. NO means
     * this should never be the auto-select. OMIT means MediaPackage decides what to
     * set on this rendition.
When you consider all the renditions, follow these
     * guidelines. You can set zero or one renditions to YES. You can set zero or more
     * renditions to NO, but you can't set all renditions to NO. You can set zero,
     * some, or all to OMIT.
     */
    inline HlsAutoSelect GetHlsAutoSelect() const { return m_hlsAutoSelect; }
    inline bool HlsAutoSelectHasBeenSet() const { return m_hlsAutoSelectHasBeenSet; }
    inline void SetHlsAutoSelect(HlsAutoSelect value) { m_hlsAutoSelectHasBeenSet = true; m_hlsAutoSelect = value; }
    inline MediaPackageV2DestinationSettings& WithHlsAutoSelect(HlsAutoSelect value) { SetHlsAutoSelect(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies whether MediaPackage should set this output as the default rendition
     * in the HLS manifest. YES means this must be the default. NO means this should
     * never be the default. OMIT means MediaPackage decides what to set on this
     * rendition.
When you consider all the renditions, follow these guidelines. You
     * can set zero or one renditions to YES. You can set zero or more renditions to
     * NO, but you can't set all renditions to NO. You can set zero, some, or all to
     * OMIT.
     */
    inline HlsDefault GetHlsDefault() const { return m_hlsDefault; }
    inline bool HlsDefaultHasBeenSet() const { return m_hlsDefaultHasBeenSet; }
    inline void SetHlsDefault(HlsDefault value) { m_hlsDefaultHasBeenSet = true; m_hlsDefault = value; }
    inline MediaPackageV2DestinationSettings& WithHlsDefault(HlsDefault value) { SetHlsDefault(value); return *this;}
    ///@}
  private:

    Aws::String m_audioGroupId;
    bool m_audioGroupIdHasBeenSet = false;

    Aws::String m_audioRenditionSets;
    bool m_audioRenditionSetsHasBeenSet = false;

    HlsAutoSelect m_hlsAutoSelect{HlsAutoSelect::NOT_SET};
    bool m_hlsAutoSelectHasBeenSet = false;

    HlsDefault m_hlsDefault{HlsDefault::NOT_SET};
    bool m_hlsDefaultHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
