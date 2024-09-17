/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribestreaming/model/ParticipantRole.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribestreaming/model/Sentiment.h>
#include <aws/transcribestreaming/model/CallAnalyticsItem.h>
#include <aws/transcribestreaming/model/CallAnalyticsEntity.h>
#include <aws/transcribestreaming/model/IssueDetected.h>
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
   * <p>Contains set of transcription results from one or more audio segments, along
   * with additional information about the parameters included in your request. For
   * example, channel definitions, partial result stabilization, sentiment, and issue
   * detection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/UtteranceEvent">AWS
   * API Reference</a></p>
   */
  class UtteranceEvent
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API UtteranceEvent();
    AWS_TRANSCRIBESTREAMINGSERVICE_API UtteranceEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API UtteranceEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier that is associated with the specified
     * <code>UtteranceEvent</code>.</p>
     */
    inline const Aws::String& GetUtteranceId() const{ return m_utteranceId; }
    inline bool UtteranceIdHasBeenSet() const { return m_utteranceIdHasBeenSet; }
    inline void SetUtteranceId(const Aws::String& value) { m_utteranceIdHasBeenSet = true; m_utteranceId = value; }
    inline void SetUtteranceId(Aws::String&& value) { m_utteranceIdHasBeenSet = true; m_utteranceId = std::move(value); }
    inline void SetUtteranceId(const char* value) { m_utteranceIdHasBeenSet = true; m_utteranceId.assign(value); }
    inline UtteranceEvent& WithUtteranceId(const Aws::String& value) { SetUtteranceId(value); return *this;}
    inline UtteranceEvent& WithUtteranceId(Aws::String&& value) { SetUtteranceId(std::move(value)); return *this;}
    inline UtteranceEvent& WithUtteranceId(const char* value) { SetUtteranceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the segment in the <code>UtteranceEvent</code> is complete
     * (<code>FALSE</code>) or partial (<code>TRUE</code>).</p>
     */
    inline bool GetIsPartial() const{ return m_isPartial; }
    inline bool IsPartialHasBeenSet() const { return m_isPartialHasBeenSet; }
    inline void SetIsPartial(bool value) { m_isPartialHasBeenSet = true; m_isPartial = value; }
    inline UtteranceEvent& WithIsPartial(bool value) { SetIsPartial(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the role of the speaker for each audio channel, either
     * <code>CUSTOMER</code> or <code>AGENT</code>.</p>
     */
    inline const ParticipantRole& GetParticipantRole() const{ return m_participantRole; }
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }
    inline void SetParticipantRole(const ParticipantRole& value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }
    inline void SetParticipantRole(ParticipantRole&& value) { m_participantRoleHasBeenSet = true; m_participantRole = std::move(value); }
    inline UtteranceEvent& WithParticipantRole(const ParticipantRole& value) { SetParticipantRole(value); return *this;}
    inline UtteranceEvent& WithParticipantRole(ParticipantRole&& value) { SetParticipantRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds, from the beginning of the audio stream to the
     * start of the <code>UtteranceEvent</code>.</p>
     */
    inline long long GetBeginOffsetMillis() const{ return m_beginOffsetMillis; }
    inline bool BeginOffsetMillisHasBeenSet() const { return m_beginOffsetMillisHasBeenSet; }
    inline void SetBeginOffsetMillis(long long value) { m_beginOffsetMillisHasBeenSet = true; m_beginOffsetMillis = value; }
    inline UtteranceEvent& WithBeginOffsetMillis(long long value) { SetBeginOffsetMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds, from the beginning of the audio stream to the
     * start of the <code>UtteranceEvent</code>.</p>
     */
    inline long long GetEndOffsetMillis() const{ return m_endOffsetMillis; }
    inline bool EndOffsetMillisHasBeenSet() const { return m_endOffsetMillisHasBeenSet; }
    inline void SetEndOffsetMillis(long long value) { m_endOffsetMillisHasBeenSet = true; m_endOffsetMillis = value; }
    inline UtteranceEvent& WithEndOffsetMillis(long long value) { SetEndOffsetMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains transcribed text.</p>
     */
    inline const Aws::String& GetTranscript() const{ return m_transcript; }
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }
    inline void SetTranscript(const Aws::String& value) { m_transcriptHasBeenSet = true; m_transcript = value; }
    inline void SetTranscript(Aws::String&& value) { m_transcriptHasBeenSet = true; m_transcript = std::move(value); }
    inline void SetTranscript(const char* value) { m_transcriptHasBeenSet = true; m_transcript.assign(value); }
    inline UtteranceEvent& WithTranscript(const Aws::String& value) { SetTranscript(value); return *this;}
    inline UtteranceEvent& WithTranscript(Aws::String&& value) { SetTranscript(std::move(value)); return *this;}
    inline UtteranceEvent& WithTranscript(const char* value) { SetTranscript(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains words, phrases, or punctuation marks that are associated with the
     * specified <code>UtteranceEvent</code>.</p>
     */
    inline const Aws::Vector<CallAnalyticsItem>& GetItems() const{ return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    inline void SetItems(const Aws::Vector<CallAnalyticsItem>& value) { m_itemsHasBeenSet = true; m_items = value; }
    inline void SetItems(Aws::Vector<CallAnalyticsItem>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }
    inline UtteranceEvent& WithItems(const Aws::Vector<CallAnalyticsItem>& value) { SetItems(value); return *this;}
    inline UtteranceEvent& WithItems(Aws::Vector<CallAnalyticsItem>&& value) { SetItems(std::move(value)); return *this;}
    inline UtteranceEvent& AddItems(const CallAnalyticsItem& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }
    inline UtteranceEvent& AddItems(CallAnalyticsItem&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains entities identified as personally identifiable information (PII) in
     * your transcription output.</p>
     */
    inline const Aws::Vector<CallAnalyticsEntity>& GetEntities() const{ return m_entities; }
    inline bool EntitiesHasBeenSet() const { return m_entitiesHasBeenSet; }
    inline void SetEntities(const Aws::Vector<CallAnalyticsEntity>& value) { m_entitiesHasBeenSet = true; m_entities = value; }
    inline void SetEntities(Aws::Vector<CallAnalyticsEntity>&& value) { m_entitiesHasBeenSet = true; m_entities = std::move(value); }
    inline UtteranceEvent& WithEntities(const Aws::Vector<CallAnalyticsEntity>& value) { SetEntities(value); return *this;}
    inline UtteranceEvent& WithEntities(Aws::Vector<CallAnalyticsEntity>&& value) { SetEntities(std::move(value)); return *this;}
    inline UtteranceEvent& AddEntities(const CallAnalyticsEntity& value) { m_entitiesHasBeenSet = true; m_entities.push_back(value); return *this; }
    inline UtteranceEvent& AddEntities(CallAnalyticsEntity&& value) { m_entitiesHasBeenSet = true; m_entities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides the sentiment that was detected in the specified segment.</p>
     */
    inline const Sentiment& GetSentiment() const{ return m_sentiment; }
    inline bool SentimentHasBeenSet() const { return m_sentimentHasBeenSet; }
    inline void SetSentiment(const Sentiment& value) { m_sentimentHasBeenSet = true; m_sentiment = value; }
    inline void SetSentiment(Sentiment&& value) { m_sentimentHasBeenSet = true; m_sentiment = std::move(value); }
    inline UtteranceEvent& WithSentiment(const Sentiment& value) { SetSentiment(value); return *this;}
    inline UtteranceEvent& WithSentiment(Sentiment&& value) { SetSentiment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the issue that was detected in the specified segment.</p>
     */
    inline const Aws::Vector<IssueDetected>& GetIssuesDetected() const{ return m_issuesDetected; }
    inline bool IssuesDetectedHasBeenSet() const { return m_issuesDetectedHasBeenSet; }
    inline void SetIssuesDetected(const Aws::Vector<IssueDetected>& value) { m_issuesDetectedHasBeenSet = true; m_issuesDetected = value; }
    inline void SetIssuesDetected(Aws::Vector<IssueDetected>&& value) { m_issuesDetectedHasBeenSet = true; m_issuesDetected = std::move(value); }
    inline UtteranceEvent& WithIssuesDetected(const Aws::Vector<IssueDetected>& value) { SetIssuesDetected(value); return *this;}
    inline UtteranceEvent& WithIssuesDetected(Aws::Vector<IssueDetected>&& value) { SetIssuesDetected(std::move(value)); return *this;}
    inline UtteranceEvent& AddIssuesDetected(const IssueDetected& value) { m_issuesDetectedHasBeenSet = true; m_issuesDetected.push_back(value); return *this; }
    inline UtteranceEvent& AddIssuesDetected(IssueDetected&& value) { m_issuesDetectedHasBeenSet = true; m_issuesDetected.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_utteranceId;
    bool m_utteranceIdHasBeenSet = false;

    bool m_isPartial;
    bool m_isPartialHasBeenSet = false;

    ParticipantRole m_participantRole;
    bool m_participantRoleHasBeenSet = false;

    long long m_beginOffsetMillis;
    bool m_beginOffsetMillisHasBeenSet = false;

    long long m_endOffsetMillis;
    bool m_endOffsetMillisHasBeenSet = false;

    Aws::String m_transcript;
    bool m_transcriptHasBeenSet = false;

    Aws::Vector<CallAnalyticsItem> m_items;
    bool m_itemsHasBeenSet = false;

    Aws::Vector<CallAnalyticsEntity> m_entities;
    bool m_entitiesHasBeenSet = false;

    Sentiment m_sentiment;
    bool m_sentimentHasBeenSet = false;

    Aws::Vector<IssueDetected> m_issuesDetected;
    bool m_issuesDetectedHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
