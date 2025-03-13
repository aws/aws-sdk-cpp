/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/MedicalScribeParticipantRole.h>
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
   * <p>Makes it possible to specify which speaker is on which channel. For example,
   * if the clinician is the first participant to speak, you would set the
   * <code>ChannelId</code> of the first <code>ChannelDefinition</code> in the list
   * to <code>0</code> (to indicate the first channel) and
   * <code>ParticipantRole</code> to <code>CLINICIAN</code> (to indicate that it's
   * the clinician speaking). Then you would set the <code>ChannelId</code> of the
   * second <code>ChannelDefinition</code> in the list to <code>1</code> (to indicate
   * the second channel) and <code>ParticipantRole</code> to <code>PATIENT</code> (to
   * indicate that it's the patient speaking). </p> <p>If you don't specify a channel
   * definition, HealthScribe will diarize the transcription and identify speaker
   * roles for each speaker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/MedicalScribeChannelDefinition">AWS
   * API Reference</a></p>
   */
  class MedicalScribeChannelDefinition
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeChannelDefinition() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeChannelDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeChannelDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify the audio channel you want to define.</p>
     */
    inline int GetChannelId() const { return m_channelId; }
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
    inline void SetChannelId(int value) { m_channelIdHasBeenSet = true; m_channelId = value; }
    inline MedicalScribeChannelDefinition& WithChannelId(int value) { SetChannelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the participant that you want to flag. The allowed options are
     * <code>CLINICIAN</code> and <code>PATIENT</code>. </p>
     */
    inline MedicalScribeParticipantRole GetParticipantRole() const { return m_participantRole; }
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }
    inline void SetParticipantRole(MedicalScribeParticipantRole value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }
    inline MedicalScribeChannelDefinition& WithParticipantRole(MedicalScribeParticipantRole value) { SetParticipantRole(value); return *this;}
    ///@}
  private:

    int m_channelId{0};
    bool m_channelIdHasBeenSet = false;

    MedicalScribeParticipantRole m_participantRole{MedicalScribeParticipantRole::NOT_SET};
    bool m_participantRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
