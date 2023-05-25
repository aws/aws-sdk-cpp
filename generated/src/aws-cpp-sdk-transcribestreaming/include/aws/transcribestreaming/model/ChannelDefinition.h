/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/ParticipantRole.h>
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
   * <p>Makes it possible to specify which speaker is on which audio channel. For
   * example, if your agent is the first participant to speak, you would set
   * <code>ChannelId</code> to <code>0</code> (to indicate the first channel) and
   * <code>ParticipantRole</code> to <code>AGENT</code> (to indicate that it's the
   * agent speaking).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/ChannelDefinition">AWS
   * API Reference</a></p>
   */
  class ChannelDefinition
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API ChannelDefinition();
    AWS_TRANSCRIBESTREAMINGSERVICE_API ChannelDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API ChannelDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specify the audio channel you want to define.</p>
     */
    inline int GetChannelId() const{ return m_channelId; }

    /**
     * <p>Specify the audio channel you want to define.</p>
     */
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }

    /**
     * <p>Specify the audio channel you want to define.</p>
     */
    inline void SetChannelId(int value) { m_channelIdHasBeenSet = true; m_channelId = value; }

    /**
     * <p>Specify the audio channel you want to define.</p>
     */
    inline ChannelDefinition& WithChannelId(int value) { SetChannelId(value); return *this;}


    /**
     * <p>Specify the speaker you want to define. Omitting this parameter is equivalent
     * to specifying both participants.</p>
     */
    inline const ParticipantRole& GetParticipantRole() const{ return m_participantRole; }

    /**
     * <p>Specify the speaker you want to define. Omitting this parameter is equivalent
     * to specifying both participants.</p>
     */
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }

    /**
     * <p>Specify the speaker you want to define. Omitting this parameter is equivalent
     * to specifying both participants.</p>
     */
    inline void SetParticipantRole(const ParticipantRole& value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }

    /**
     * <p>Specify the speaker you want to define. Omitting this parameter is equivalent
     * to specifying both participants.</p>
     */
    inline void SetParticipantRole(ParticipantRole&& value) { m_participantRoleHasBeenSet = true; m_participantRole = std::move(value); }

    /**
     * <p>Specify the speaker you want to define. Omitting this parameter is equivalent
     * to specifying both participants.</p>
     */
    inline ChannelDefinition& WithParticipantRole(const ParticipantRole& value) { SetParticipantRole(value); return *this;}

    /**
     * <p>Specify the speaker you want to define. Omitting this parameter is equivalent
     * to specifying both participants.</p>
     */
    inline ChannelDefinition& WithParticipantRole(ParticipantRole&& value) { SetParticipantRole(std::move(value)); return *this;}

  private:

    int m_channelId;
    bool m_channelIdHasBeenSet = false;

    ParticipantRole m_participantRole;
    bool m_participantRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
