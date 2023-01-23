/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/NonTalkTimeFilter.h>
#include <aws/transcribe/model/InterruptionFilter.h>
#include <aws/transcribe/model/TranscriptFilter.h>
#include <aws/transcribe/model/SentimentFilter.h>
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
   * <p>A rule is a set of criteria that you can specify to flag an attribute in your
   * Call Analytics output. Rules define a Call Analytics category.</p> <p>Rules can
   * include these parameters: , , , and .</p> <p>To learn more about Call Analytics
   * rules and categories, see <a
   * href="https://docs.aws.amazon.com/transcribe/latest/dg/tca-categories-batch.html">Creating
   * categories for batch transcriptions</a> and <a
   * href="https://docs.aws.amazon.com/transcribe/latest/dg/tca-categories-stream.html">Creating
   * categories for streaming transcriptions</a>.</p> <p>To learn more about Call
   * Analytics, see <a
   * href="https://docs.aws.amazon.com/transcribe/latest/dg/call-analytics.html">Analyzing
   * call center audio with Call Analytics</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/Rule">AWS API
   * Reference</a></p>
   */
  class Rule
  {
  public:
    AWS_TRANSCRIBESERVICE_API Rule();
    AWS_TRANSCRIBESERVICE_API Rule(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Rule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Flag the presence or absence of periods of silence in your Call Analytics
     * transcription output. Refer to for more detail.</p>
     */
    inline const NonTalkTimeFilter& GetNonTalkTimeFilter() const{ return m_nonTalkTimeFilter; }

    /**
     * <p>Flag the presence or absence of periods of silence in your Call Analytics
     * transcription output. Refer to for more detail.</p>
     */
    inline bool NonTalkTimeFilterHasBeenSet() const { return m_nonTalkTimeFilterHasBeenSet; }

    /**
     * <p>Flag the presence or absence of periods of silence in your Call Analytics
     * transcription output. Refer to for more detail.</p>
     */
    inline void SetNonTalkTimeFilter(const NonTalkTimeFilter& value) { m_nonTalkTimeFilterHasBeenSet = true; m_nonTalkTimeFilter = value; }

    /**
     * <p>Flag the presence or absence of periods of silence in your Call Analytics
     * transcription output. Refer to for more detail.</p>
     */
    inline void SetNonTalkTimeFilter(NonTalkTimeFilter&& value) { m_nonTalkTimeFilterHasBeenSet = true; m_nonTalkTimeFilter = std::move(value); }

    /**
     * <p>Flag the presence or absence of periods of silence in your Call Analytics
     * transcription output. Refer to for more detail.</p>
     */
    inline Rule& WithNonTalkTimeFilter(const NonTalkTimeFilter& value) { SetNonTalkTimeFilter(value); return *this;}

    /**
     * <p>Flag the presence or absence of periods of silence in your Call Analytics
     * transcription output. Refer to for more detail.</p>
     */
    inline Rule& WithNonTalkTimeFilter(NonTalkTimeFilter&& value) { SetNonTalkTimeFilter(std::move(value)); return *this;}


    /**
     * <p>Flag the presence or absence of interruptions in your Call Analytics
     * transcription output. Refer to for more detail.</p>
     */
    inline const InterruptionFilter& GetInterruptionFilter() const{ return m_interruptionFilter; }

    /**
     * <p>Flag the presence or absence of interruptions in your Call Analytics
     * transcription output. Refer to for more detail.</p>
     */
    inline bool InterruptionFilterHasBeenSet() const { return m_interruptionFilterHasBeenSet; }

    /**
     * <p>Flag the presence or absence of interruptions in your Call Analytics
     * transcription output. Refer to for more detail.</p>
     */
    inline void SetInterruptionFilter(const InterruptionFilter& value) { m_interruptionFilterHasBeenSet = true; m_interruptionFilter = value; }

    /**
     * <p>Flag the presence or absence of interruptions in your Call Analytics
     * transcription output. Refer to for more detail.</p>
     */
    inline void SetInterruptionFilter(InterruptionFilter&& value) { m_interruptionFilterHasBeenSet = true; m_interruptionFilter = std::move(value); }

    /**
     * <p>Flag the presence or absence of interruptions in your Call Analytics
     * transcription output. Refer to for more detail.</p>
     */
    inline Rule& WithInterruptionFilter(const InterruptionFilter& value) { SetInterruptionFilter(value); return *this;}

    /**
     * <p>Flag the presence or absence of interruptions in your Call Analytics
     * transcription output. Refer to for more detail.</p>
     */
    inline Rule& WithInterruptionFilter(InterruptionFilter&& value) { SetInterruptionFilter(std::move(value)); return *this;}


    /**
     * <p>Flag the presence or absence of specific words or phrases in your Call
     * Analytics transcription output. Refer to for more detail.</p>
     */
    inline const TranscriptFilter& GetTranscriptFilter() const{ return m_transcriptFilter; }

    /**
     * <p>Flag the presence or absence of specific words or phrases in your Call
     * Analytics transcription output. Refer to for more detail.</p>
     */
    inline bool TranscriptFilterHasBeenSet() const { return m_transcriptFilterHasBeenSet; }

    /**
     * <p>Flag the presence or absence of specific words or phrases in your Call
     * Analytics transcription output. Refer to for more detail.</p>
     */
    inline void SetTranscriptFilter(const TranscriptFilter& value) { m_transcriptFilterHasBeenSet = true; m_transcriptFilter = value; }

    /**
     * <p>Flag the presence or absence of specific words or phrases in your Call
     * Analytics transcription output. Refer to for more detail.</p>
     */
    inline void SetTranscriptFilter(TranscriptFilter&& value) { m_transcriptFilterHasBeenSet = true; m_transcriptFilter = std::move(value); }

    /**
     * <p>Flag the presence or absence of specific words or phrases in your Call
     * Analytics transcription output. Refer to for more detail.</p>
     */
    inline Rule& WithTranscriptFilter(const TranscriptFilter& value) { SetTranscriptFilter(value); return *this;}

    /**
     * <p>Flag the presence or absence of specific words or phrases in your Call
     * Analytics transcription output. Refer to for more detail.</p>
     */
    inline Rule& WithTranscriptFilter(TranscriptFilter&& value) { SetTranscriptFilter(std::move(value)); return *this;}


    /**
     * <p>Flag the presence or absence of specific sentiments in your Call Analytics
     * transcription output. Refer to for more detail.</p>
     */
    inline const SentimentFilter& GetSentimentFilter() const{ return m_sentimentFilter; }

    /**
     * <p>Flag the presence or absence of specific sentiments in your Call Analytics
     * transcription output. Refer to for more detail.</p>
     */
    inline bool SentimentFilterHasBeenSet() const { return m_sentimentFilterHasBeenSet; }

    /**
     * <p>Flag the presence or absence of specific sentiments in your Call Analytics
     * transcription output. Refer to for more detail.</p>
     */
    inline void SetSentimentFilter(const SentimentFilter& value) { m_sentimentFilterHasBeenSet = true; m_sentimentFilter = value; }

    /**
     * <p>Flag the presence or absence of specific sentiments in your Call Analytics
     * transcription output. Refer to for more detail.</p>
     */
    inline void SetSentimentFilter(SentimentFilter&& value) { m_sentimentFilterHasBeenSet = true; m_sentimentFilter = std::move(value); }

    /**
     * <p>Flag the presence or absence of specific sentiments in your Call Analytics
     * transcription output. Refer to for more detail.</p>
     */
    inline Rule& WithSentimentFilter(const SentimentFilter& value) { SetSentimentFilter(value); return *this;}

    /**
     * <p>Flag the presence or absence of specific sentiments in your Call Analytics
     * transcription output. Refer to for more detail.</p>
     */
    inline Rule& WithSentimentFilter(SentimentFilter&& value) { SetSentimentFilter(std::move(value)); return *this;}

  private:

    NonTalkTimeFilter m_nonTalkTimeFilter;
    bool m_nonTalkTimeFilterHasBeenSet = false;

    InterruptionFilter m_interruptionFilter;
    bool m_interruptionFilterHasBeenSet = false;

    TranscriptFilter m_transcriptFilter;
    bool m_transcriptFilterHasBeenSet = false;

    SentimentFilter m_sentimentFilter;
    bool m_sentimentFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
