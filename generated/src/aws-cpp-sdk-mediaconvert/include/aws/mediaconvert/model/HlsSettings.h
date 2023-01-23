/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/HlsAudioOnlyContainer.h>
#include <aws/mediaconvert/model/HlsAudioTrackType.h>
#include <aws/mediaconvert/model/HlsDescriptiveVideoServiceFlag.h>
#include <aws/mediaconvert/model/HlsIFrameOnlyManifest.h>
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
   * Settings for HLS output groups<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/HlsSettings">AWS
   * API Reference</a></p>
   */
  class HlsSettings
  {
  public:
    AWS_MEDIACONVERT_API HlsSettings();
    AWS_MEDIACONVERT_API HlsSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API HlsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specifies the group to which the audio rendition belongs.
     */
    inline const Aws::String& GetAudioGroupId() const{ return m_audioGroupId; }

    /**
     * Specifies the group to which the audio rendition belongs.
     */
    inline bool AudioGroupIdHasBeenSet() const { return m_audioGroupIdHasBeenSet; }

    /**
     * Specifies the group to which the audio rendition belongs.
     */
    inline void SetAudioGroupId(const Aws::String& value) { m_audioGroupIdHasBeenSet = true; m_audioGroupId = value; }

    /**
     * Specifies the group to which the audio rendition belongs.
     */
    inline void SetAudioGroupId(Aws::String&& value) { m_audioGroupIdHasBeenSet = true; m_audioGroupId = std::move(value); }

    /**
     * Specifies the group to which the audio rendition belongs.
     */
    inline void SetAudioGroupId(const char* value) { m_audioGroupIdHasBeenSet = true; m_audioGroupId.assign(value); }

    /**
     * Specifies the group to which the audio rendition belongs.
     */
    inline HlsSettings& WithAudioGroupId(const Aws::String& value) { SetAudioGroupId(value); return *this;}

    /**
     * Specifies the group to which the audio rendition belongs.
     */
    inline HlsSettings& WithAudioGroupId(Aws::String&& value) { SetAudioGroupId(std::move(value)); return *this;}

    /**
     * Specifies the group to which the audio rendition belongs.
     */
    inline HlsSettings& WithAudioGroupId(const char* value) { SetAudioGroupId(value); return *this;}


    /**
     * Use this setting only in audio-only outputs. Choose MPEG-2 Transport Stream
     * (M2TS) to create a file in an MPEG2-TS container. Keep the default value
     * Automatic (AUTOMATIC) to create an audio-only file in a raw container.
     * Regardless of the value that you specify here, if this output has video, the
     * service will place the output into an MPEG2-TS container.
     */
    inline const HlsAudioOnlyContainer& GetAudioOnlyContainer() const{ return m_audioOnlyContainer; }

    /**
     * Use this setting only in audio-only outputs. Choose MPEG-2 Transport Stream
     * (M2TS) to create a file in an MPEG2-TS container. Keep the default value
     * Automatic (AUTOMATIC) to create an audio-only file in a raw container.
     * Regardless of the value that you specify here, if this output has video, the
     * service will place the output into an MPEG2-TS container.
     */
    inline bool AudioOnlyContainerHasBeenSet() const { return m_audioOnlyContainerHasBeenSet; }

    /**
     * Use this setting only in audio-only outputs. Choose MPEG-2 Transport Stream
     * (M2TS) to create a file in an MPEG2-TS container. Keep the default value
     * Automatic (AUTOMATIC) to create an audio-only file in a raw container.
     * Regardless of the value that you specify here, if this output has video, the
     * service will place the output into an MPEG2-TS container.
     */
    inline void SetAudioOnlyContainer(const HlsAudioOnlyContainer& value) { m_audioOnlyContainerHasBeenSet = true; m_audioOnlyContainer = value; }

    /**
     * Use this setting only in audio-only outputs. Choose MPEG-2 Transport Stream
     * (M2TS) to create a file in an MPEG2-TS container. Keep the default value
     * Automatic (AUTOMATIC) to create an audio-only file in a raw container.
     * Regardless of the value that you specify here, if this output has video, the
     * service will place the output into an MPEG2-TS container.
     */
    inline void SetAudioOnlyContainer(HlsAudioOnlyContainer&& value) { m_audioOnlyContainerHasBeenSet = true; m_audioOnlyContainer = std::move(value); }

    /**
     * Use this setting only in audio-only outputs. Choose MPEG-2 Transport Stream
     * (M2TS) to create a file in an MPEG2-TS container. Keep the default value
     * Automatic (AUTOMATIC) to create an audio-only file in a raw container.
     * Regardless of the value that you specify here, if this output has video, the
     * service will place the output into an MPEG2-TS container.
     */
    inline HlsSettings& WithAudioOnlyContainer(const HlsAudioOnlyContainer& value) { SetAudioOnlyContainer(value); return *this;}

    /**
     * Use this setting only in audio-only outputs. Choose MPEG-2 Transport Stream
     * (M2TS) to create a file in an MPEG2-TS container. Keep the default value
     * Automatic (AUTOMATIC) to create an audio-only file in a raw container.
     * Regardless of the value that you specify here, if this output has video, the
     * service will place the output into an MPEG2-TS container.
     */
    inline HlsSettings& WithAudioOnlyContainer(HlsAudioOnlyContainer&& value) { SetAudioOnlyContainer(std::move(value)); return *this;}


    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline const Aws::String& GetAudioRenditionSets() const{ return m_audioRenditionSets; }

    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline bool AudioRenditionSetsHasBeenSet() const { return m_audioRenditionSetsHasBeenSet; }

    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline void SetAudioRenditionSets(const Aws::String& value) { m_audioRenditionSetsHasBeenSet = true; m_audioRenditionSets = value; }

    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline void SetAudioRenditionSets(Aws::String&& value) { m_audioRenditionSetsHasBeenSet = true; m_audioRenditionSets = std::move(value); }

    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline void SetAudioRenditionSets(const char* value) { m_audioRenditionSetsHasBeenSet = true; m_audioRenditionSets.assign(value); }

    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline HlsSettings& WithAudioRenditionSets(const Aws::String& value) { SetAudioRenditionSets(value); return *this;}

    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline HlsSettings& WithAudioRenditionSets(Aws::String&& value) { SetAudioRenditionSets(std::move(value)); return *this;}

    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline HlsSettings& WithAudioRenditionSets(const char* value) { SetAudioRenditionSets(value); return *this;}


    /**
     * Four types of audio-only tracks are supported: Audio-Only Variant Stream The
     * client can play back this audio-only stream instead of video in low-bandwidth
     * scenarios. Represented as an EXT-X-STREAM-INF in the HLS manifest. Alternate
     * Audio, Auto Select, Default Alternate rendition that the client should try to
     * play back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=YES, AUTOSELECT=YES Alternate Audio, Auto Select, Not Default Alternate
     * rendition that the client may try to play back by default. Represented as an
     * EXT-X-MEDIA in the HLS manifest with DEFAULT=NO, AUTOSELECT=YES Alternate Audio,
     * not Auto Select Alternate rendition that the client will not try to play back by
     * default. Represented as an EXT-X-MEDIA in the HLS manifest with DEFAULT=NO,
     * AUTOSELECT=NO
     */
    inline const HlsAudioTrackType& GetAudioTrackType() const{ return m_audioTrackType; }

    /**
     * Four types of audio-only tracks are supported: Audio-Only Variant Stream The
     * client can play back this audio-only stream instead of video in low-bandwidth
     * scenarios. Represented as an EXT-X-STREAM-INF in the HLS manifest. Alternate
     * Audio, Auto Select, Default Alternate rendition that the client should try to
     * play back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=YES, AUTOSELECT=YES Alternate Audio, Auto Select, Not Default Alternate
     * rendition that the client may try to play back by default. Represented as an
     * EXT-X-MEDIA in the HLS manifest with DEFAULT=NO, AUTOSELECT=YES Alternate Audio,
     * not Auto Select Alternate rendition that the client will not try to play back by
     * default. Represented as an EXT-X-MEDIA in the HLS manifest with DEFAULT=NO,
     * AUTOSELECT=NO
     */
    inline bool AudioTrackTypeHasBeenSet() const { return m_audioTrackTypeHasBeenSet; }

    /**
     * Four types of audio-only tracks are supported: Audio-Only Variant Stream The
     * client can play back this audio-only stream instead of video in low-bandwidth
     * scenarios. Represented as an EXT-X-STREAM-INF in the HLS manifest. Alternate
     * Audio, Auto Select, Default Alternate rendition that the client should try to
     * play back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=YES, AUTOSELECT=YES Alternate Audio, Auto Select, Not Default Alternate
     * rendition that the client may try to play back by default. Represented as an
     * EXT-X-MEDIA in the HLS manifest with DEFAULT=NO, AUTOSELECT=YES Alternate Audio,
     * not Auto Select Alternate rendition that the client will not try to play back by
     * default. Represented as an EXT-X-MEDIA in the HLS manifest with DEFAULT=NO,
     * AUTOSELECT=NO
     */
    inline void SetAudioTrackType(const HlsAudioTrackType& value) { m_audioTrackTypeHasBeenSet = true; m_audioTrackType = value; }

    /**
     * Four types of audio-only tracks are supported: Audio-Only Variant Stream The
     * client can play back this audio-only stream instead of video in low-bandwidth
     * scenarios. Represented as an EXT-X-STREAM-INF in the HLS manifest. Alternate
     * Audio, Auto Select, Default Alternate rendition that the client should try to
     * play back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=YES, AUTOSELECT=YES Alternate Audio, Auto Select, Not Default Alternate
     * rendition that the client may try to play back by default. Represented as an
     * EXT-X-MEDIA in the HLS manifest with DEFAULT=NO, AUTOSELECT=YES Alternate Audio,
     * not Auto Select Alternate rendition that the client will not try to play back by
     * default. Represented as an EXT-X-MEDIA in the HLS manifest with DEFAULT=NO,
     * AUTOSELECT=NO
     */
    inline void SetAudioTrackType(HlsAudioTrackType&& value) { m_audioTrackTypeHasBeenSet = true; m_audioTrackType = std::move(value); }

    /**
     * Four types of audio-only tracks are supported: Audio-Only Variant Stream The
     * client can play back this audio-only stream instead of video in low-bandwidth
     * scenarios. Represented as an EXT-X-STREAM-INF in the HLS manifest. Alternate
     * Audio, Auto Select, Default Alternate rendition that the client should try to
     * play back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=YES, AUTOSELECT=YES Alternate Audio, Auto Select, Not Default Alternate
     * rendition that the client may try to play back by default. Represented as an
     * EXT-X-MEDIA in the HLS manifest with DEFAULT=NO, AUTOSELECT=YES Alternate Audio,
     * not Auto Select Alternate rendition that the client will not try to play back by
     * default. Represented as an EXT-X-MEDIA in the HLS manifest with DEFAULT=NO,
     * AUTOSELECT=NO
     */
    inline HlsSettings& WithAudioTrackType(const HlsAudioTrackType& value) { SetAudioTrackType(value); return *this;}

    /**
     * Four types of audio-only tracks are supported: Audio-Only Variant Stream The
     * client can play back this audio-only stream instead of video in low-bandwidth
     * scenarios. Represented as an EXT-X-STREAM-INF in the HLS manifest. Alternate
     * Audio, Auto Select, Default Alternate rendition that the client should try to
     * play back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=YES, AUTOSELECT=YES Alternate Audio, Auto Select, Not Default Alternate
     * rendition that the client may try to play back by default. Represented as an
     * EXT-X-MEDIA in the HLS manifest with DEFAULT=NO, AUTOSELECT=YES Alternate Audio,
     * not Auto Select Alternate rendition that the client will not try to play back by
     * default. Represented as an EXT-X-MEDIA in the HLS manifest with DEFAULT=NO,
     * AUTOSELECT=NO
     */
    inline HlsSettings& WithAudioTrackType(HlsAudioTrackType&& value) { SetAudioTrackType(std::move(value)); return *this;}


    /**
     * Specify whether to flag this audio track as descriptive video service (DVS) in
     * your HLS parent manifest. When you choose Flag (FLAG), MediaConvert includes the
     * parameter CHARACTERISTICS="public.accessibility.describes-video" in the
     * EXT-X-MEDIA entry for this track. When you keep the default choice, Don't flag
     * (DONT_FLAG), MediaConvert leaves this parameter out. The DVS flag can help with
     * accessibility on Apple devices. For more information, see the Apple
     * documentation.
     */
    inline const HlsDescriptiveVideoServiceFlag& GetDescriptiveVideoServiceFlag() const{ return m_descriptiveVideoServiceFlag; }

    /**
     * Specify whether to flag this audio track as descriptive video service (DVS) in
     * your HLS parent manifest. When you choose Flag (FLAG), MediaConvert includes the
     * parameter CHARACTERISTICS="public.accessibility.describes-video" in the
     * EXT-X-MEDIA entry for this track. When you keep the default choice, Don't flag
     * (DONT_FLAG), MediaConvert leaves this parameter out. The DVS flag can help with
     * accessibility on Apple devices. For more information, see the Apple
     * documentation.
     */
    inline bool DescriptiveVideoServiceFlagHasBeenSet() const { return m_descriptiveVideoServiceFlagHasBeenSet; }

    /**
     * Specify whether to flag this audio track as descriptive video service (DVS) in
     * your HLS parent manifest. When you choose Flag (FLAG), MediaConvert includes the
     * parameter CHARACTERISTICS="public.accessibility.describes-video" in the
     * EXT-X-MEDIA entry for this track. When you keep the default choice, Don't flag
     * (DONT_FLAG), MediaConvert leaves this parameter out. The DVS flag can help with
     * accessibility on Apple devices. For more information, see the Apple
     * documentation.
     */
    inline void SetDescriptiveVideoServiceFlag(const HlsDescriptiveVideoServiceFlag& value) { m_descriptiveVideoServiceFlagHasBeenSet = true; m_descriptiveVideoServiceFlag = value; }

    /**
     * Specify whether to flag this audio track as descriptive video service (DVS) in
     * your HLS parent manifest. When you choose Flag (FLAG), MediaConvert includes the
     * parameter CHARACTERISTICS="public.accessibility.describes-video" in the
     * EXT-X-MEDIA entry for this track. When you keep the default choice, Don't flag
     * (DONT_FLAG), MediaConvert leaves this parameter out. The DVS flag can help with
     * accessibility on Apple devices. For more information, see the Apple
     * documentation.
     */
    inline void SetDescriptiveVideoServiceFlag(HlsDescriptiveVideoServiceFlag&& value) { m_descriptiveVideoServiceFlagHasBeenSet = true; m_descriptiveVideoServiceFlag = std::move(value); }

    /**
     * Specify whether to flag this audio track as descriptive video service (DVS) in
     * your HLS parent manifest. When you choose Flag (FLAG), MediaConvert includes the
     * parameter CHARACTERISTICS="public.accessibility.describes-video" in the
     * EXT-X-MEDIA entry for this track. When you keep the default choice, Don't flag
     * (DONT_FLAG), MediaConvert leaves this parameter out. The DVS flag can help with
     * accessibility on Apple devices. For more information, see the Apple
     * documentation.
     */
    inline HlsSettings& WithDescriptiveVideoServiceFlag(const HlsDescriptiveVideoServiceFlag& value) { SetDescriptiveVideoServiceFlag(value); return *this;}

    /**
     * Specify whether to flag this audio track as descriptive video service (DVS) in
     * your HLS parent manifest. When you choose Flag (FLAG), MediaConvert includes the
     * parameter CHARACTERISTICS="public.accessibility.describes-video" in the
     * EXT-X-MEDIA entry for this track. When you keep the default choice, Don't flag
     * (DONT_FLAG), MediaConvert leaves this parameter out. The DVS flag can help with
     * accessibility on Apple devices. For more information, see the Apple
     * documentation.
     */
    inline HlsSettings& WithDescriptiveVideoServiceFlag(HlsDescriptiveVideoServiceFlag&& value) { SetDescriptiveVideoServiceFlag(std::move(value)); return *this;}


    /**
     * Choose Include (INCLUDE) to have MediaConvert generate a child manifest that
     * lists only the I-frames for this rendition, in addition to your regular manifest
     * for this rendition. You might use this manifest as part of a workflow that
     * creates preview functions for your video. MediaConvert adds both the I-frame
     * only child manifest and the regular child manifest to the parent manifest. When
     * you don't need the I-frame only child manifest, keep the default value Exclude
     * (EXCLUDE).
     */
    inline const HlsIFrameOnlyManifest& GetIFrameOnlyManifest() const{ return m_iFrameOnlyManifest; }

    /**
     * Choose Include (INCLUDE) to have MediaConvert generate a child manifest that
     * lists only the I-frames for this rendition, in addition to your regular manifest
     * for this rendition. You might use this manifest as part of a workflow that
     * creates preview functions for your video. MediaConvert adds both the I-frame
     * only child manifest and the regular child manifest to the parent manifest. When
     * you don't need the I-frame only child manifest, keep the default value Exclude
     * (EXCLUDE).
     */
    inline bool IFrameOnlyManifestHasBeenSet() const { return m_iFrameOnlyManifestHasBeenSet; }

    /**
     * Choose Include (INCLUDE) to have MediaConvert generate a child manifest that
     * lists only the I-frames for this rendition, in addition to your regular manifest
     * for this rendition. You might use this manifest as part of a workflow that
     * creates preview functions for your video. MediaConvert adds both the I-frame
     * only child manifest and the regular child manifest to the parent manifest. When
     * you don't need the I-frame only child manifest, keep the default value Exclude
     * (EXCLUDE).
     */
    inline void SetIFrameOnlyManifest(const HlsIFrameOnlyManifest& value) { m_iFrameOnlyManifestHasBeenSet = true; m_iFrameOnlyManifest = value; }

    /**
     * Choose Include (INCLUDE) to have MediaConvert generate a child manifest that
     * lists only the I-frames for this rendition, in addition to your regular manifest
     * for this rendition. You might use this manifest as part of a workflow that
     * creates preview functions for your video. MediaConvert adds both the I-frame
     * only child manifest and the regular child manifest to the parent manifest. When
     * you don't need the I-frame only child manifest, keep the default value Exclude
     * (EXCLUDE).
     */
    inline void SetIFrameOnlyManifest(HlsIFrameOnlyManifest&& value) { m_iFrameOnlyManifestHasBeenSet = true; m_iFrameOnlyManifest = std::move(value); }

    /**
     * Choose Include (INCLUDE) to have MediaConvert generate a child manifest that
     * lists only the I-frames for this rendition, in addition to your regular manifest
     * for this rendition. You might use this manifest as part of a workflow that
     * creates preview functions for your video. MediaConvert adds both the I-frame
     * only child manifest and the regular child manifest to the parent manifest. When
     * you don't need the I-frame only child manifest, keep the default value Exclude
     * (EXCLUDE).
     */
    inline HlsSettings& WithIFrameOnlyManifest(const HlsIFrameOnlyManifest& value) { SetIFrameOnlyManifest(value); return *this;}

    /**
     * Choose Include (INCLUDE) to have MediaConvert generate a child manifest that
     * lists only the I-frames for this rendition, in addition to your regular manifest
     * for this rendition. You might use this manifest as part of a workflow that
     * creates preview functions for your video. MediaConvert adds both the I-frame
     * only child manifest and the regular child manifest to the parent manifest. When
     * you don't need the I-frame only child manifest, keep the default value Exclude
     * (EXCLUDE).
     */
    inline HlsSettings& WithIFrameOnlyManifest(HlsIFrameOnlyManifest&& value) { SetIFrameOnlyManifest(std::move(value)); return *this;}


    /**
     * Use this setting to add an identifying string to the filename of each segment.
     * The service adds this string between the name modifier and segment index number.
     * You can use format identifiers in the string. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/using-variables-in-your-job-settings.html
     */
    inline const Aws::String& GetSegmentModifier() const{ return m_segmentModifier; }

    /**
     * Use this setting to add an identifying string to the filename of each segment.
     * The service adds this string between the name modifier and segment index number.
     * You can use format identifiers in the string. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/using-variables-in-your-job-settings.html
     */
    inline bool SegmentModifierHasBeenSet() const { return m_segmentModifierHasBeenSet; }

    /**
     * Use this setting to add an identifying string to the filename of each segment.
     * The service adds this string between the name modifier and segment index number.
     * You can use format identifiers in the string. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/using-variables-in-your-job-settings.html
     */
    inline void SetSegmentModifier(const Aws::String& value) { m_segmentModifierHasBeenSet = true; m_segmentModifier = value; }

    /**
     * Use this setting to add an identifying string to the filename of each segment.
     * The service adds this string between the name modifier and segment index number.
     * You can use format identifiers in the string. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/using-variables-in-your-job-settings.html
     */
    inline void SetSegmentModifier(Aws::String&& value) { m_segmentModifierHasBeenSet = true; m_segmentModifier = std::move(value); }

    /**
     * Use this setting to add an identifying string to the filename of each segment.
     * The service adds this string between the name modifier and segment index number.
     * You can use format identifiers in the string. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/using-variables-in-your-job-settings.html
     */
    inline void SetSegmentModifier(const char* value) { m_segmentModifierHasBeenSet = true; m_segmentModifier.assign(value); }

    /**
     * Use this setting to add an identifying string to the filename of each segment.
     * The service adds this string between the name modifier and segment index number.
     * You can use format identifiers in the string. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/using-variables-in-your-job-settings.html
     */
    inline HlsSettings& WithSegmentModifier(const Aws::String& value) { SetSegmentModifier(value); return *this;}

    /**
     * Use this setting to add an identifying string to the filename of each segment.
     * The service adds this string between the name modifier and segment index number.
     * You can use format identifiers in the string. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/using-variables-in-your-job-settings.html
     */
    inline HlsSettings& WithSegmentModifier(Aws::String&& value) { SetSegmentModifier(std::move(value)); return *this;}

    /**
     * Use this setting to add an identifying string to the filename of each segment.
     * The service adds this string between the name modifier and segment index number.
     * You can use format identifiers in the string. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/using-variables-in-your-job-settings.html
     */
    inline HlsSettings& WithSegmentModifier(const char* value) { SetSegmentModifier(value); return *this;}

  private:

    Aws::String m_audioGroupId;
    bool m_audioGroupIdHasBeenSet = false;

    HlsAudioOnlyContainer m_audioOnlyContainer;
    bool m_audioOnlyContainerHasBeenSet = false;

    Aws::String m_audioRenditionSets;
    bool m_audioRenditionSetsHasBeenSet = false;

    HlsAudioTrackType m_audioTrackType;
    bool m_audioTrackTypeHasBeenSet = false;

    HlsDescriptiveVideoServiceFlag m_descriptiveVideoServiceFlag;
    bool m_descriptiveVideoServiceFlagHasBeenSet = false;

    HlsIFrameOnlyManifest m_iFrameOnlyManifest;
    bool m_iFrameOnlyManifestHasBeenSet = false;

    Aws::String m_segmentModifier;
    bool m_segmentModifierHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
