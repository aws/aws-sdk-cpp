/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/ParticipantRole.h>

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
 * <p>Makes it possible to specify which speaker is on which channel. For example,
 * if your agent is the first participant to speak, you would set
 * <code>ChannelId</code> to <code>0</code> (to indicate the first channel) and
 * <code>ParticipantRole</code> to <code>AGENT</code> (to indicate that it's the
 * agent speaking).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ChannelDefinition">AWS
 * API Reference</a></p>
 */
class ChannelDefinition {
 public:
  AWS_TRANSCRIBESERVICE_API ChannelDefinition() = default;
  AWS_TRANSCRIBESERVICE_API ChannelDefinition(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API ChannelDefinition& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
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
  inline ChannelDefinition& WithChannelId(int64_t value) {
    SetChannelId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specify the speaker you want to define. Omitting this parameter is equivalent
   * to specifying both participants.</p>
   */
  inline ParticipantRole GetParticipantRole() const { return m_participantRole; }
  inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }
  inline void SetParticipantRole(ParticipantRole value) {
    m_participantRoleHasBeenSet = true;
    m_participantRole = value;
  }
  inline ChannelDefinition& WithParticipantRole(ParticipantRole value) {
    SetParticipantRole(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_channelId{0};

  ParticipantRole m_participantRole{ParticipantRole::NOT_SET};
  bool m_channelIdHasBeenSet = false;
  bool m_participantRoleHasBeenSet = false;
};

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
