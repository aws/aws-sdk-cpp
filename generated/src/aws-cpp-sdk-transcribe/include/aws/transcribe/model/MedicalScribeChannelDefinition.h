/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/MedicalScribeParticipantRole.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace TranscribeService {
namespace Model {

/**
 * <p>Indicates which speaker is on which channel. The options are
 * <code>CLINICIAN</code> and <code>PATIENT</code> </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/MedicalScribeChannelDefinition">AWS
 * API Reference</a></p>
 */
class MedicalScribeChannelDefinition {
 public:
  AWS_TRANSCRIBESERVICE_API MedicalScribeChannelDefinition() = default;
  AWS_TRANSCRIBESERVICE_API MedicalScribeChannelDefinition(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API MedicalScribeChannelDefinition& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Specify the audio channel you want to define.</p>
   */
  inline int64_t GetChannelId() const { return m_channelId; }
  inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
  inline void SetChannelId(int64_t value) {
    m_channelIdHasBeenSet = true;
    m_channelId = value;
  }
  inline MedicalScribeChannelDefinition& WithChannelId(int64_t value) {
    SetChannelId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specify the participant that you want to flag. The options are
   * <code>CLINICIAN</code> and <code>PATIENT</code> </p>
   */
  inline MedicalScribeParticipantRole GetParticipantRole() const { return m_participantRole; }
  inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }
  inline void SetParticipantRole(MedicalScribeParticipantRole value) {
    m_participantRoleHasBeenSet = true;
    m_participantRole = value;
  }
  inline MedicalScribeChannelDefinition& WithParticipantRole(MedicalScribeParticipantRole value) {
    SetParticipantRole(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_channelId{0};

  MedicalScribeParticipantRole m_participantRole{MedicalScribeParticipantRole::NOT_SET};
  bool m_channelIdHasBeenSet = false;
  bool m_participantRoleHasBeenSet = false;
};

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
