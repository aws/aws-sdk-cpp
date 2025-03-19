/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/MedicalScribeParticipantRole.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Indicates which speaker is on which channel. The options are
   * <code>CLINICIAN</code> and <code>PATIENT</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/MedicalScribeChannelDefinition">AWS
   * API Reference</a></p>
   */
  class MedicalScribeChannelDefinition
  {
  public:
    AWS_TRANSCRIBESERVICE_API MedicalScribeChannelDefinition() = default;
    AWS_TRANSCRIBESERVICE_API MedicalScribeChannelDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API MedicalScribeChannelDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>Specify the participant that you want to flag. The options are
     * <code>CLINICIAN</code> and <code>PATIENT</code> </p>
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
} // namespace TranscribeService
} // namespace Aws
