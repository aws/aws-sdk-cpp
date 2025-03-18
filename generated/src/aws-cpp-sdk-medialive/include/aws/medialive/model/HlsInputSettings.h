/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/HlsScte35SourceType.h>
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
   * Hls Input Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/HlsInputSettings">AWS
   * API Reference</a></p>
   */
  class HlsInputSettings
  {
  public:
    AWS_MEDIALIVE_API HlsInputSettings() = default;
    AWS_MEDIALIVE_API HlsInputSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API HlsInputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * When specified the HLS stream with the m3u8 BANDWIDTH that most closely matches
     * this value will be chosen, otherwise the highest bandwidth stream in the m3u8
     * will be chosen.  The bitrate is specified in bits per second, as in an HLS
     * manifest.
     */
    inline int GetBandwidth() const { return m_bandwidth; }
    inline bool BandwidthHasBeenSet() const { return m_bandwidthHasBeenSet; }
    inline void SetBandwidth(int value) { m_bandwidthHasBeenSet = true; m_bandwidth = value; }
    inline HlsInputSettings& WithBandwidth(int value) { SetBandwidth(value); return *this;}
    ///@}

    ///@{
    /**
     * When specified, reading of the HLS input will begin this many buffer segments
     * from the end (most recently written segment).  When not specified, the HLS input
     * will begin with the first segment specified in the m3u8.
     */
    inline int GetBufferSegments() const { return m_bufferSegments; }
    inline bool BufferSegmentsHasBeenSet() const { return m_bufferSegmentsHasBeenSet; }
    inline void SetBufferSegments(int value) { m_bufferSegmentsHasBeenSet = true; m_bufferSegments = value; }
    inline HlsInputSettings& WithBufferSegments(int value) { SetBufferSegments(value); return *this;}
    ///@}

    ///@{
    /**
     * The number of consecutive times that attempts to read a manifest or segment must
     * fail before the input is considered unavailable.
     */
    inline int GetRetries() const { return m_retries; }
    inline bool RetriesHasBeenSet() const { return m_retriesHasBeenSet; }
    inline void SetRetries(int value) { m_retriesHasBeenSet = true; m_retries = value; }
    inline HlsInputSettings& WithRetries(int value) { SetRetries(value); return *this;}
    ///@}

    ///@{
    /**
     * The number of seconds between retries when an attempt to read a manifest or
     * segment fails.
     */
    inline int GetRetryInterval() const { return m_retryInterval; }
    inline bool RetryIntervalHasBeenSet() const { return m_retryIntervalHasBeenSet; }
    inline void SetRetryInterval(int value) { m_retryIntervalHasBeenSet = true; m_retryInterval = value; }
    inline HlsInputSettings& WithRetryInterval(int value) { SetRetryInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * Identifies the source for the SCTE-35 messages that MediaLive will ingest.
     * Messages can be ingested from the content segments (in the stream) or from tags
     * in the playlist (the HLS manifest). MediaLive ignores SCTE-35 information in the
     * source that is not selected.
     */
    inline HlsScte35SourceType GetScte35Source() const { return m_scte35Source; }
    inline bool Scte35SourceHasBeenSet() const { return m_scte35SourceHasBeenSet; }
    inline void SetScte35Source(HlsScte35SourceType value) { m_scte35SourceHasBeenSet = true; m_scte35Source = value; }
    inline HlsInputSettings& WithScte35Source(HlsScte35SourceType value) { SetScte35Source(value); return *this;}
    ///@}
  private:

    int m_bandwidth{0};
    bool m_bandwidthHasBeenSet = false;

    int m_bufferSegments{0};
    bool m_bufferSegmentsHasBeenSet = false;

    int m_retries{0};
    bool m_retriesHasBeenSet = false;

    int m_retryInterval{0};
    bool m_retryIntervalHasBeenSet = false;

    HlsScte35SourceType m_scte35Source{HlsScte35SourceType::NOT_SET};
    bool m_scte35SourceHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
