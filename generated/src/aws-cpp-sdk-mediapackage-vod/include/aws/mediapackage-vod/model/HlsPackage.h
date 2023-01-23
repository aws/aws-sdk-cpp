/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/mediapackage-vod/model/HlsEncryption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackage-vod/model/HlsManifest.h>
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
namespace MediaPackageVod
{
namespace Model
{

  /**
   * An HTTP Live Streaming (HLS) packaging configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/HlsPackage">AWS
   * API Reference</a></p>
   */
  class HlsPackage
  {
  public:
    AWS_MEDIAPACKAGEVOD_API HlsPackage();
    AWS_MEDIAPACKAGEVOD_API HlsPackage(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API HlsPackage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const HlsEncryption& GetEncryption() const{ return m_encryption; }

    
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    
    inline void SetEncryption(const HlsEncryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    
    inline void SetEncryption(HlsEncryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    
    inline HlsPackage& WithEncryption(const HlsEncryption& value) { SetEncryption(value); return *this;}

    
    inline HlsPackage& WithEncryption(HlsEncryption&& value) { SetEncryption(std::move(value)); return *this;}


    /**
     * A list of HLS manifest configurations.
     */
    inline const Aws::Vector<HlsManifest>& GetHlsManifests() const{ return m_hlsManifests; }

    /**
     * A list of HLS manifest configurations.
     */
    inline bool HlsManifestsHasBeenSet() const { return m_hlsManifestsHasBeenSet; }

    /**
     * A list of HLS manifest configurations.
     */
    inline void SetHlsManifests(const Aws::Vector<HlsManifest>& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests = value; }

    /**
     * A list of HLS manifest configurations.
     */
    inline void SetHlsManifests(Aws::Vector<HlsManifest>&& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests = std::move(value); }

    /**
     * A list of HLS manifest configurations.
     */
    inline HlsPackage& WithHlsManifests(const Aws::Vector<HlsManifest>& value) { SetHlsManifests(value); return *this;}

    /**
     * A list of HLS manifest configurations.
     */
    inline HlsPackage& WithHlsManifests(Aws::Vector<HlsManifest>&& value) { SetHlsManifests(std::move(value)); return *this;}

    /**
     * A list of HLS manifest configurations.
     */
    inline HlsPackage& AddHlsManifests(const HlsManifest& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests.push_back(value); return *this; }

    /**
     * A list of HLS manifest configurations.
     */
    inline HlsPackage& AddHlsManifests(HlsManifest&& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests.push_back(std::move(value)); return *this; }


    /**
     * When enabled, MediaPackage passes through digital video broadcasting (DVB)
     * subtitles into the output.
     */
    inline bool GetIncludeDvbSubtitles() const{ return m_includeDvbSubtitles; }

    /**
     * When enabled, MediaPackage passes through digital video broadcasting (DVB)
     * subtitles into the output.
     */
    inline bool IncludeDvbSubtitlesHasBeenSet() const { return m_includeDvbSubtitlesHasBeenSet; }

    /**
     * When enabled, MediaPackage passes through digital video broadcasting (DVB)
     * subtitles into the output.
     */
    inline void SetIncludeDvbSubtitles(bool value) { m_includeDvbSubtitlesHasBeenSet = true; m_includeDvbSubtitles = value; }

    /**
     * When enabled, MediaPackage passes through digital video broadcasting (DVB)
     * subtitles into the output.
     */
    inline HlsPackage& WithIncludeDvbSubtitles(bool value) { SetIncludeDvbSubtitles(value); return *this;}


    /**
     * Duration (in seconds) of each fragment. Actual fragments will be
rounded to the
     * nearest multiple of the source fragment duration.

     */
    inline int GetSegmentDurationSeconds() const{ return m_segmentDurationSeconds; }

    /**
     * Duration (in seconds) of each fragment. Actual fragments will be
rounded to the
     * nearest multiple of the source fragment duration.

     */
    inline bool SegmentDurationSecondsHasBeenSet() const { return m_segmentDurationSecondsHasBeenSet; }

    /**
     * Duration (in seconds) of each fragment. Actual fragments will be
rounded to the
     * nearest multiple of the source fragment duration.

     */
    inline void SetSegmentDurationSeconds(int value) { m_segmentDurationSecondsHasBeenSet = true; m_segmentDurationSeconds = value; }

    /**
     * Duration (in seconds) of each fragment. Actual fragments will be
rounded to the
     * nearest multiple of the source fragment duration.

     */
    inline HlsPackage& WithSegmentDurationSeconds(int value) { SetSegmentDurationSeconds(value); return *this;}


    /**
     * When enabled, audio streams will be placed in rendition groups in the output.
     */
    inline bool GetUseAudioRenditionGroup() const{ return m_useAudioRenditionGroup; }

    /**
     * When enabled, audio streams will be placed in rendition groups in the output.
     */
    inline bool UseAudioRenditionGroupHasBeenSet() const { return m_useAudioRenditionGroupHasBeenSet; }

    /**
     * When enabled, audio streams will be placed in rendition groups in the output.
     */
    inline void SetUseAudioRenditionGroup(bool value) { m_useAudioRenditionGroupHasBeenSet = true; m_useAudioRenditionGroup = value; }

    /**
     * When enabled, audio streams will be placed in rendition groups in the output.
     */
    inline HlsPackage& WithUseAudioRenditionGroup(bool value) { SetUseAudioRenditionGroup(value); return *this;}

  private:

    HlsEncryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    Aws::Vector<HlsManifest> m_hlsManifests;
    bool m_hlsManifestsHasBeenSet = false;

    bool m_includeDvbSubtitles;
    bool m_includeDvbSubtitlesHasBeenSet = false;

    int m_segmentDurationSeconds;
    bool m_segmentDurationSecondsHasBeenSet = false;

    bool m_useAudioRenditionGroup;
    bool m_useAudioRenditionGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
