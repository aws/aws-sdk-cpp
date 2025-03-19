/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/MedicalScribeTranscriptSegment.h>
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
   * <p>The event associated with <code>MedicalScribeResultStream</code>. </p>
   * <p>Contains <code>MedicalScribeTranscriptSegment</code>, which contains segment
   * related information. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/MedicalScribeTranscriptEvent">AWS
   * API Reference</a></p>
   */
  class MedicalScribeTranscriptEvent
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeTranscriptEvent() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeTranscriptEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeTranscriptEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>TranscriptSegment</code> associated with a
     * <code>MedicalScribeTranscriptEvent</code>. </p>
     */
    inline const MedicalScribeTranscriptSegment& GetTranscriptSegment() const { return m_transcriptSegment; }
    inline bool TranscriptSegmentHasBeenSet() const { return m_transcriptSegmentHasBeenSet; }
    template<typename TranscriptSegmentT = MedicalScribeTranscriptSegment>
    void SetTranscriptSegment(TranscriptSegmentT&& value) { m_transcriptSegmentHasBeenSet = true; m_transcriptSegment = std::forward<TranscriptSegmentT>(value); }
    template<typename TranscriptSegmentT = MedicalScribeTranscriptSegment>
    MedicalScribeTranscriptEvent& WithTranscriptSegment(TranscriptSegmentT&& value) { SetTranscriptSegment(std::forward<TranscriptSegmentT>(value)); return *this;}
    ///@}
  private:

    MedicalScribeTranscriptSegment m_transcriptSegment;
    bool m_transcriptSegmentHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
