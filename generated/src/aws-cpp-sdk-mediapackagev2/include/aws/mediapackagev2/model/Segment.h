/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/model/Scte.h>
#include <aws/mediapackagev2/model/Encryption.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>The segment configuration, including the segment name, duration, and other
   * configuration values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/Segment">AWS
   * API Reference</a></p>
   */
  class Segment
  {
  public:
    AWS_MEDIAPACKAGEV2_API Segment();
    AWS_MEDIAPACKAGEV2_API Segment(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Segment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The duration (in seconds) of each segment. Enter a value equal to, or a
     * multiple of, the input segment duration. If the value that you enter is
     * different from the input segment duration, MediaPackage rounds segments to the
     * nearest multiple of the input segment duration.</p>
     */
    inline int GetSegmentDurationSeconds() const{ return m_segmentDurationSeconds; }

    /**
     * <p>The duration (in seconds) of each segment. Enter a value equal to, or a
     * multiple of, the input segment duration. If the value that you enter is
     * different from the input segment duration, MediaPackage rounds segments to the
     * nearest multiple of the input segment duration.</p>
     */
    inline bool SegmentDurationSecondsHasBeenSet() const { return m_segmentDurationSecondsHasBeenSet; }

    /**
     * <p>The duration (in seconds) of each segment. Enter a value equal to, or a
     * multiple of, the input segment duration. If the value that you enter is
     * different from the input segment duration, MediaPackage rounds segments to the
     * nearest multiple of the input segment duration.</p>
     */
    inline void SetSegmentDurationSeconds(int value) { m_segmentDurationSecondsHasBeenSet = true; m_segmentDurationSeconds = value; }

    /**
     * <p>The duration (in seconds) of each segment. Enter a value equal to, or a
     * multiple of, the input segment duration. If the value that you enter is
     * different from the input segment duration, MediaPackage rounds segments to the
     * nearest multiple of the input segment duration.</p>
     */
    inline Segment& WithSegmentDurationSeconds(int value) { SetSegmentDurationSeconds(value); return *this;}


    /**
     * <p>The name that describes the segment. The name is the base name of the segment
     * used in all content manifests inside of the endpoint. You can't use spaces in
     * the name.</p>
     */
    inline const Aws::String& GetSegmentName() const{ return m_segmentName; }

    /**
     * <p>The name that describes the segment. The name is the base name of the segment
     * used in all content manifests inside of the endpoint. You can't use spaces in
     * the name.</p>
     */
    inline bool SegmentNameHasBeenSet() const { return m_segmentNameHasBeenSet; }

    /**
     * <p>The name that describes the segment. The name is the base name of the segment
     * used in all content manifests inside of the endpoint. You can't use spaces in
     * the name.</p>
     */
    inline void SetSegmentName(const Aws::String& value) { m_segmentNameHasBeenSet = true; m_segmentName = value; }

    /**
     * <p>The name that describes the segment. The name is the base name of the segment
     * used in all content manifests inside of the endpoint. You can't use spaces in
     * the name.</p>
     */
    inline void SetSegmentName(Aws::String&& value) { m_segmentNameHasBeenSet = true; m_segmentName = std::move(value); }

    /**
     * <p>The name that describes the segment. The name is the base name of the segment
     * used in all content manifests inside of the endpoint. You can't use spaces in
     * the name.</p>
     */
    inline void SetSegmentName(const char* value) { m_segmentNameHasBeenSet = true; m_segmentName.assign(value); }

    /**
     * <p>The name that describes the segment. The name is the base name of the segment
     * used in all content manifests inside of the endpoint. You can't use spaces in
     * the name.</p>
     */
    inline Segment& WithSegmentName(const Aws::String& value) { SetSegmentName(value); return *this;}

    /**
     * <p>The name that describes the segment. The name is the base name of the segment
     * used in all content manifests inside of the endpoint. You can't use spaces in
     * the name.</p>
     */
    inline Segment& WithSegmentName(Aws::String&& value) { SetSegmentName(std::move(value)); return *this;}

    /**
     * <p>The name that describes the segment. The name is the base name of the segment
     * used in all content manifests inside of the endpoint. You can't use spaces in
     * the name.</p>
     */
    inline Segment& WithSegmentName(const char* value) { SetSegmentName(value); return *this;}


    /**
     * <p>When selected, MediaPackage bundles all audio tracks in a rendition group.
     * All other tracks in the stream can be used with any audio rendition from the
     * group.</p>
     */
    inline bool GetTsUseAudioRenditionGroup() const{ return m_tsUseAudioRenditionGroup; }

    /**
     * <p>When selected, MediaPackage bundles all audio tracks in a rendition group.
     * All other tracks in the stream can be used with any audio rendition from the
     * group.</p>
     */
    inline bool TsUseAudioRenditionGroupHasBeenSet() const { return m_tsUseAudioRenditionGroupHasBeenSet; }

    /**
     * <p>When selected, MediaPackage bundles all audio tracks in a rendition group.
     * All other tracks in the stream can be used with any audio rendition from the
     * group.</p>
     */
    inline void SetTsUseAudioRenditionGroup(bool value) { m_tsUseAudioRenditionGroupHasBeenSet = true; m_tsUseAudioRenditionGroup = value; }

    /**
     * <p>When selected, MediaPackage bundles all audio tracks in a rendition group.
     * All other tracks in the stream can be used with any audio rendition from the
     * group.</p>
     */
    inline Segment& WithTsUseAudioRenditionGroup(bool value) { SetTsUseAudioRenditionGroup(value); return *this;}


    /**
     * <p>When selected, the stream set includes an additional I-frame only stream,
     * along with the other tracks. If false, this extra stream is not included.
     * MediaPackage generates an I-frame only stream from the first rendition in the
     * manifest. The service inserts EXT-I-FRAMES-ONLY tags in the output manifest, and
     * then generates and includes an I-frames only playlist in the stream. This
     * playlist permits player functionality like fast forward and rewind.</p>
     */
    inline bool GetIncludeIframeOnlyStreams() const{ return m_includeIframeOnlyStreams; }

    /**
     * <p>When selected, the stream set includes an additional I-frame only stream,
     * along with the other tracks. If false, this extra stream is not included.
     * MediaPackage generates an I-frame only stream from the first rendition in the
     * manifest. The service inserts EXT-I-FRAMES-ONLY tags in the output manifest, and
     * then generates and includes an I-frames only playlist in the stream. This
     * playlist permits player functionality like fast forward and rewind.</p>
     */
    inline bool IncludeIframeOnlyStreamsHasBeenSet() const { return m_includeIframeOnlyStreamsHasBeenSet; }

    /**
     * <p>When selected, the stream set includes an additional I-frame only stream,
     * along with the other tracks. If false, this extra stream is not included.
     * MediaPackage generates an I-frame only stream from the first rendition in the
     * manifest. The service inserts EXT-I-FRAMES-ONLY tags in the output manifest, and
     * then generates and includes an I-frames only playlist in the stream. This
     * playlist permits player functionality like fast forward and rewind.</p>
     */
    inline void SetIncludeIframeOnlyStreams(bool value) { m_includeIframeOnlyStreamsHasBeenSet = true; m_includeIframeOnlyStreams = value; }

    /**
     * <p>When selected, the stream set includes an additional I-frame only stream,
     * along with the other tracks. If false, this extra stream is not included.
     * MediaPackage generates an I-frame only stream from the first rendition in the
     * manifest. The service inserts EXT-I-FRAMES-ONLY tags in the output manifest, and
     * then generates and includes an I-frames only playlist in the stream. This
     * playlist permits player functionality like fast forward and rewind.</p>
     */
    inline Segment& WithIncludeIframeOnlyStreams(bool value) { SetIncludeIframeOnlyStreams(value); return *this;}


    /**
     * <p>By default, MediaPackage excludes all digital video broadcasting (DVB)
     * subtitles from the output. When selected, MediaPackage passes through DVB
     * subtitles into the output.</p>
     */
    inline bool GetTsIncludeDvbSubtitles() const{ return m_tsIncludeDvbSubtitles; }

    /**
     * <p>By default, MediaPackage excludes all digital video broadcasting (DVB)
     * subtitles from the output. When selected, MediaPackage passes through DVB
     * subtitles into the output.</p>
     */
    inline bool TsIncludeDvbSubtitlesHasBeenSet() const { return m_tsIncludeDvbSubtitlesHasBeenSet; }

    /**
     * <p>By default, MediaPackage excludes all digital video broadcasting (DVB)
     * subtitles from the output. When selected, MediaPackage passes through DVB
     * subtitles into the output.</p>
     */
    inline void SetTsIncludeDvbSubtitles(bool value) { m_tsIncludeDvbSubtitlesHasBeenSet = true; m_tsIncludeDvbSubtitles = value; }

    /**
     * <p>By default, MediaPackage excludes all digital video broadcasting (DVB)
     * subtitles from the output. When selected, MediaPackage passes through DVB
     * subtitles into the output.</p>
     */
    inline Segment& WithTsIncludeDvbSubtitles(bool value) { SetTsIncludeDvbSubtitles(value); return *this;}


    /**
     * <p>The SCTE configuration options in the segment settings.</p>
     */
    inline const Scte& GetScte() const{ return m_scte; }

    /**
     * <p>The SCTE configuration options in the segment settings.</p>
     */
    inline bool ScteHasBeenSet() const { return m_scteHasBeenSet; }

    /**
     * <p>The SCTE configuration options in the segment settings.</p>
     */
    inline void SetScte(const Scte& value) { m_scteHasBeenSet = true; m_scte = value; }

    /**
     * <p>The SCTE configuration options in the segment settings.</p>
     */
    inline void SetScte(Scte&& value) { m_scteHasBeenSet = true; m_scte = std::move(value); }

    /**
     * <p>The SCTE configuration options in the segment settings.</p>
     */
    inline Segment& WithScte(const Scte& value) { SetScte(value); return *this;}

    /**
     * <p>The SCTE configuration options in the segment settings.</p>
     */
    inline Segment& WithScte(Scte&& value) { SetScte(std::move(value)); return *this;}


    
    inline const Encryption& GetEncryption() const{ return m_encryption; }

    
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    
    inline void SetEncryption(const Encryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    
    inline void SetEncryption(Encryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    
    inline Segment& WithEncryption(const Encryption& value) { SetEncryption(value); return *this;}

    
    inline Segment& WithEncryption(Encryption&& value) { SetEncryption(std::move(value)); return *this;}

  private:

    int m_segmentDurationSeconds;
    bool m_segmentDurationSecondsHasBeenSet = false;

    Aws::String m_segmentName;
    bool m_segmentNameHasBeenSet = false;

    bool m_tsUseAudioRenditionGroup;
    bool m_tsUseAudioRenditionGroupHasBeenSet = false;

    bool m_includeIframeOnlyStreams;
    bool m_includeIframeOnlyStreamsHasBeenSet = false;

    bool m_tsIncludeDvbSubtitles;
    bool m_tsIncludeDvbSubtitlesHasBeenSet = false;

    Scte m_scte;
    bool m_scteHasBeenSet = false;

    Encryption m_encryption;
    bool m_encryptionHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
