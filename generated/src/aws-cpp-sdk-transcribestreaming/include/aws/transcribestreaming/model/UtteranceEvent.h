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
#include <aws/transcribestreaming/model/CallAnalyticsLanguageCode.h>
#include <aws/transcribestreaming/model/CallAnalyticsItem.h>
#include <aws/transcribestreaming/model/CallAnalyticsEntity.h>
#include <aws/transcribestreaming/model/IssueDetected.h>
#include <aws/transcribestreaming/model/CallAnalyticsLanguageWithScore.h>
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
    AWS_TRANSCRIBESTREAMINGSERVICE_API UtteranceEvent() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API UtteranceEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API UtteranceEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier that is associated with the specified
     * <code>UtteranceEvent</code>.</p>
     */
    inline const Aws::String& GetUtteranceId() const { return m_utteranceId; }
    inline bool UtteranceIdHasBeenSet() const { return m_utteranceIdHasBeenSet; }
    template<typename UtteranceIdT = Aws::String>
    void SetUtteranceId(UtteranceIdT&& value) { m_utteranceIdHasBeenSet = true; m_utteranceId = std::forward<UtteranceIdT>(value); }
    template<typename UtteranceIdT = Aws::String>
    UtteranceEvent& WithUtteranceId(UtteranceIdT&& value) { SetUtteranceId(std::forward<UtteranceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the segment in the <code>UtteranceEvent</code> is complete
     * (<code>FALSE</code>) or partial (<code>TRUE</code>).</p>
     */
    inline bool GetIsPartial() const { return m_isPartial; }
    inline bool IsPartialHasBeenSet() const { return m_isPartialHasBeenSet; }
    inline void SetIsPartial(bool value) { m_isPartialHasBeenSet = true; m_isPartial = value; }
    inline UtteranceEvent& WithIsPartial(bool value) { SetIsPartial(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the role of the speaker for each audio channel, either
     * <code>CUSTOMER</code> or <code>AGENT</code>.</p>
     */
    inline ParticipantRole GetParticipantRole() const { return m_participantRole; }
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }
    inline void SetParticipantRole(ParticipantRole value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }
    inline UtteranceEvent& WithParticipantRole(ParticipantRole value) { SetParticipantRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds, from the beginning of the audio stream to the
     * start of the <code>UtteranceEvent</code>.</p>
     */
    inline long long GetBeginOffsetMillis() const { return m_beginOffsetMillis; }
    inline bool BeginOffsetMillisHasBeenSet() const { return m_beginOffsetMillisHasBeenSet; }
    inline void SetBeginOffsetMillis(long long value) { m_beginOffsetMillisHasBeenSet = true; m_beginOffsetMillis = value; }
    inline UtteranceEvent& WithBeginOffsetMillis(long long value) { SetBeginOffsetMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds, from the beginning of the audio stream to the
     * start of the <code>UtteranceEvent</code>.</p>
     */
    inline long long GetEndOffsetMillis() const { return m_endOffsetMillis; }
    inline bool EndOffsetMillisHasBeenSet() const { return m_endOffsetMillisHasBeenSet; }
    inline void SetEndOffsetMillis(long long value) { m_endOffsetMillisHasBeenSet = true; m_endOffsetMillis = value; }
    inline UtteranceEvent& WithEndOffsetMillis(long long value) { SetEndOffsetMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains transcribed text.</p>
     */
    inline const Aws::String& GetTranscript() const { return m_transcript; }
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }
    template<typename TranscriptT = Aws::String>
    void SetTranscript(TranscriptT&& value) { m_transcriptHasBeenSet = true; m_transcript = std::forward<TranscriptT>(value); }
    template<typename TranscriptT = Aws::String>
    UtteranceEvent& WithTranscript(TranscriptT&& value) { SetTranscript(std::forward<TranscriptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains words, phrases, or punctuation marks that are associated with the
     * specified <code>UtteranceEvent</code>.</p>
     */
    inline const Aws::Vector<CallAnalyticsItem>& GetItems() const { return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    template<typename ItemsT = Aws::Vector<CallAnalyticsItem>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<CallAnalyticsItem>>
    UtteranceEvent& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = CallAnalyticsItem>
    UtteranceEvent& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains entities identified as personally identifiable information (PII) in
     * your transcription output.</p>
     */
    inline const Aws::Vector<CallAnalyticsEntity>& GetEntities() const { return m_entities; }
    inline bool EntitiesHasBeenSet() const { return m_entitiesHasBeenSet; }
    template<typename EntitiesT = Aws::Vector<CallAnalyticsEntity>>
    void SetEntities(EntitiesT&& value) { m_entitiesHasBeenSet = true; m_entities = std::forward<EntitiesT>(value); }
    template<typename EntitiesT = Aws::Vector<CallAnalyticsEntity>>
    UtteranceEvent& WithEntities(EntitiesT&& value) { SetEntities(std::forward<EntitiesT>(value)); return *this;}
    template<typename EntitiesT = CallAnalyticsEntity>
    UtteranceEvent& AddEntities(EntitiesT&& value) { m_entitiesHasBeenSet = true; m_entities.emplace_back(std::forward<EntitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides the sentiment that was detected in the specified segment.</p>
     */
    inline Sentiment GetSentiment() const { return m_sentiment; }
    inline bool SentimentHasBeenSet() const { return m_sentimentHasBeenSet; }
    inline void SetSentiment(Sentiment value) { m_sentimentHasBeenSet = true; m_sentiment = value; }
    inline UtteranceEvent& WithSentiment(Sentiment value) { SetSentiment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the issue that was detected in the specified segment.</p>
     */
    inline const Aws::Vector<IssueDetected>& GetIssuesDetected() const { return m_issuesDetected; }
    inline bool IssuesDetectedHasBeenSet() const { return m_issuesDetectedHasBeenSet; }
    template<typename IssuesDetectedT = Aws::Vector<IssueDetected>>
    void SetIssuesDetected(IssuesDetectedT&& value) { m_issuesDetectedHasBeenSet = true; m_issuesDetected = std::forward<IssuesDetectedT>(value); }
    template<typename IssuesDetectedT = Aws::Vector<IssueDetected>>
    UtteranceEvent& WithIssuesDetected(IssuesDetectedT&& value) { SetIssuesDetected(std::forward<IssuesDetectedT>(value)); return *this;}
    template<typename IssuesDetectedT = IssueDetected>
    UtteranceEvent& AddIssuesDetected(IssuesDetectedT&& value) { m_issuesDetectedHasBeenSet = true; m_issuesDetected.emplace_back(std::forward<IssuesDetectedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The language code that represents the language spoken in your audio
     * stream.</p>
     */
    inline CallAnalyticsLanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(CallAnalyticsLanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline UtteranceEvent& WithLanguageCode(CallAnalyticsLanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code of the dominant language identified in your stream.</p>
     */
    inline const Aws::Vector<CallAnalyticsLanguageWithScore>& GetLanguageIdentification() const { return m_languageIdentification; }
    inline bool LanguageIdentificationHasBeenSet() const { return m_languageIdentificationHasBeenSet; }
    template<typename LanguageIdentificationT = Aws::Vector<CallAnalyticsLanguageWithScore>>
    void SetLanguageIdentification(LanguageIdentificationT&& value) { m_languageIdentificationHasBeenSet = true; m_languageIdentification = std::forward<LanguageIdentificationT>(value); }
    template<typename LanguageIdentificationT = Aws::Vector<CallAnalyticsLanguageWithScore>>
    UtteranceEvent& WithLanguageIdentification(LanguageIdentificationT&& value) { SetLanguageIdentification(std::forward<LanguageIdentificationT>(value)); return *this;}
    template<typename LanguageIdentificationT = CallAnalyticsLanguageWithScore>
    UtteranceEvent& AddLanguageIdentification(LanguageIdentificationT&& value) { m_languageIdentificationHasBeenSet = true; m_languageIdentification.emplace_back(std::forward<LanguageIdentificationT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_utteranceId;
    bool m_utteranceIdHasBeenSet = false;

    bool m_isPartial{false};
    bool m_isPartialHasBeenSet = false;

    ParticipantRole m_participantRole{ParticipantRole::NOT_SET};
    bool m_participantRoleHasBeenSet = false;

    long long m_beginOffsetMillis{0};
    bool m_beginOffsetMillisHasBeenSet = false;

    long long m_endOffsetMillis{0};
    bool m_endOffsetMillisHasBeenSet = false;

    Aws::String m_transcript;
    bool m_transcriptHasBeenSet = false;

    Aws::Vector<CallAnalyticsItem> m_items;
    bool m_itemsHasBeenSet = false;

    Aws::Vector<CallAnalyticsEntity> m_entities;
    bool m_entitiesHasBeenSet = false;

    Sentiment m_sentiment{Sentiment::NOT_SET};
    bool m_sentimentHasBeenSet = false;

    Aws::Vector<IssueDetected> m_issuesDetected;
    bool m_issuesDetectedHasBeenSet = false;

    CallAnalyticsLanguageCode m_languageCode{CallAnalyticsLanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    Aws::Vector<CallAnalyticsLanguageWithScore> m_languageIdentification;
    bool m_languageIdentificationHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
