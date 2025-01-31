/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{
  /**
   * <p>A wrapper for your audio chunks. Your audio stream consists of one or more
   * audio events, which consist of one or more audio chunks.</p> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/transcribe/latest/dg/event-stream.html">Event
   * stream encoding</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/AudioEvent">AWS
   * API Reference</a></p>
   */
  class AudioEvent
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API AudioEvent() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API AudioEvent(Aws::Vector<unsigned char>&& value) { m_audioChunk = std::move(value); }

    ///@{
    /**
     * <p> An audio blob containing the next segment of audio from your application,
     * with a maximum duration of 1 second. The maximum size in bytes varies based on
     * audio properties. </p> <p>Find recommended size in <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#best-practices">Transcribing
     * streaming best practices</a>. </p> <p> Size calculation: <code>Duration (s) *
     * Sample Rate (Hz) * Number of Channels * 2 (Bytes per Sample)</code> </p> <p> For
     * example, a 1-second chunk of 16 kHz, 2-channel, 16-bit audio would be <code>1 *
     * 16000 * 2 * 2 = 64000 bytes</code>. </p> <p> For 8 kHz, 1-channel, 16-bit audio,
     * a 1-second chunk would be <code>1 * 8000 * 1 * 2 = 16000 bytes</code>. </p>
     */
    inline const Aws::Vector<unsigned char>& GetAudioChunk() const { return m_audioChunk; }
    inline Aws::Vector<unsigned char>&& GetAudioChunkWithOwnership() { return std::move(m_audioChunk); }
    inline void SetAudioChunk(const Aws::Vector<unsigned char>& value) { m_audioChunkHasBeenSet = true; m_audioChunk = value; }
    inline void SetAudioChunk(Aws::Vector<unsigned char>&& value) { m_audioChunkHasBeenSet = true; m_audioChunk = std::move(value); }
    inline AudioEvent& WithAudioChunk(const Aws::Vector<unsigned char>& value) { SetAudioChunk(value); return *this;}
    inline AudioEvent& WithAudioChunk(Aws::Vector<unsigned char>&& value) { SetAudioChunk(std::move(value)); return *this;}
    ///@}

  private:

    Aws::Vector<unsigned char> m_audioChunk;
    bool m_audioChunkHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
