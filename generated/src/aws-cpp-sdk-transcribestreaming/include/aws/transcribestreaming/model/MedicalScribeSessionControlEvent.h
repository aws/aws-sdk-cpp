/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/MedicalScribeSessionControlEventType.h>
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
   * <p>Specify the lifecycle of your streaming session.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/MedicalScribeSessionControlEvent">AWS
   * API Reference</a></p>
   */
  class MedicalScribeSessionControlEvent
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeSessionControlEvent() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeSessionControlEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeSessionControlEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of <code>MedicalScribeSessionControlEvent</code>. </p> <p>Possible
     * Values:</p> <ul> <li> <p> <code>END_OF_SESSION</code> - Indicates the audio
     * streaming is complete. After you send an END_OF_SESSION event, Amazon Web
     * Services HealthScribe starts the post-stream analytics. The session can't be
     * resumed after this event is sent. After Amazon Web Services HealthScribe
     * processes the event, the real-time <code>StreamStatus</code> is
     * <code>COMPLETED</code>. You get the <code>StreamStatus</code> and other stream
     * details with the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/API_streaming_GetMedicalScribeStream.html">GetMedicalScribeStream</a>
     * API operation. For more information about different streaming statuses, see the
     * <code>StreamStatus</code> description in the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/API_streaming_MedicalScribeStreamDetails.html">MedicalScribeStreamDetails</a>.
     * </p> </li> </ul>
     */
    inline MedicalScribeSessionControlEventType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(MedicalScribeSessionControlEventType value) { m_typeHasBeenSet = true; m_type = value; }
    inline MedicalScribeSessionControlEvent& WithType(MedicalScribeSessionControlEventType value) { SetType(value); return *this;}
    ///@}
  private:

    MedicalScribeSessionControlEventType m_type{MedicalScribeSessionControlEventType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
