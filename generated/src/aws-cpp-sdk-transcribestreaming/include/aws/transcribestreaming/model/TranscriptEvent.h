/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/Transcript.h>
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
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   * <p>The <code>TranscriptEvent</code> associated with a
   * <code>TranscriptResultStream</code>.</p> <p>Contains a set of transcription
   * results from one or more audio segments, along with additional information per
   * your request parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/TranscriptEvent">AWS
   * API Reference</a></p>
   */
  class TranscriptEvent
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API TranscriptEvent() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API TranscriptEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API TranscriptEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains <code>Results</code>, which contains a set of transcription results
     * from one or more audio segments, along with additional information per your
     * request parameters. This can include information relating to alternative
     * transcriptions, channel identification, partial result stabilization, language
     * identification, and other transcription-related data.</p>
     */
    inline const Transcript& GetTranscript() const { return m_transcript; }
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }
    template<typename TranscriptT = Transcript>
    void SetTranscript(TranscriptT&& value) { m_transcriptHasBeenSet = true; m_transcript = std::forward<TranscriptT>(value); }
    template<typename TranscriptT = Transcript>
    TranscriptEvent& WithTranscript(TranscriptT&& value) { SetTranscript(std::forward<TranscriptT>(value)); return *this;}
    ///@}
  private:

    Transcript m_transcript;
    bool m_transcriptHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
