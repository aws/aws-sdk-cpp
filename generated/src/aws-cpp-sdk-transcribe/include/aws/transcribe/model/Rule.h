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
   * categories for post-call transcriptions</a> and <a
   * href="https://docs.aws.amazon.com/transcribe/latest/dg/tca-categories-stream.html">Creating
   * categories for real-time transcriptions</a>.</p> <p>To learn more about Call
   * Analytics, see <a
   * href="https://docs.aws.amazon.com/transcribe/latest/dg/call-analytics.html">Analyzing
   * call center audio with Call Analytics</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/Rule">AWS API
   * Reference</a></p>
   */
  class Rule
  {
  public:
    AWS_TRANSCRIBESERVICE_API Rule() = default;
    AWS_TRANSCRIBESERVICE_API Rule(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Rule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Flag the presence or absence of periods of silence in your Call Analytics
     * transcription output. Refer to for more detail.</p>
     */
    inline const NonTalkTimeFilter& GetNonTalkTimeFilter() const { return m_nonTalkTimeFilter; }
    inline bool NonTalkTimeFilterHasBeenSet() const { return m_nonTalkTimeFilterHasBeenSet; }
    template<typename NonTalkTimeFilterT = NonTalkTimeFilter>
    void SetNonTalkTimeFilter(NonTalkTimeFilterT&& value) { m_nonTalkTimeFilterHasBeenSet = true; m_nonTalkTimeFilter = std::forward<NonTalkTimeFilterT>(value); }
    template<typename NonTalkTimeFilterT = NonTalkTimeFilter>
    Rule& WithNonTalkTimeFilter(NonTalkTimeFilterT&& value) { SetNonTalkTimeFilter(std::forward<NonTalkTimeFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Flag the presence or absence of interruptions in your Call Analytics
     * transcription output. Refer to for more detail.</p>
     */
    inline const InterruptionFilter& GetInterruptionFilter() const { return m_interruptionFilter; }
    inline bool InterruptionFilterHasBeenSet() const { return m_interruptionFilterHasBeenSet; }
    template<typename InterruptionFilterT = InterruptionFilter>
    void SetInterruptionFilter(InterruptionFilterT&& value) { m_interruptionFilterHasBeenSet = true; m_interruptionFilter = std::forward<InterruptionFilterT>(value); }
    template<typename InterruptionFilterT = InterruptionFilter>
    Rule& WithInterruptionFilter(InterruptionFilterT&& value) { SetInterruptionFilter(std::forward<InterruptionFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Flag the presence or absence of specific words or phrases in your Call
     * Analytics transcription output. Refer to for more detail.</p>
     */
    inline const TranscriptFilter& GetTranscriptFilter() const { return m_transcriptFilter; }
    inline bool TranscriptFilterHasBeenSet() const { return m_transcriptFilterHasBeenSet; }
    template<typename TranscriptFilterT = TranscriptFilter>
    void SetTranscriptFilter(TranscriptFilterT&& value) { m_transcriptFilterHasBeenSet = true; m_transcriptFilter = std::forward<TranscriptFilterT>(value); }
    template<typename TranscriptFilterT = TranscriptFilter>
    Rule& WithTranscriptFilter(TranscriptFilterT&& value) { SetTranscriptFilter(std::forward<TranscriptFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Flag the presence or absence of specific sentiments in your Call Analytics
     * transcription output. Refer to for more detail.</p>
     */
    inline const SentimentFilter& GetSentimentFilter() const { return m_sentimentFilter; }
    inline bool SentimentFilterHasBeenSet() const { return m_sentimentFilterHasBeenSet; }
    template<typename SentimentFilterT = SentimentFilter>
    void SetSentimentFilter(SentimentFilterT&& value) { m_sentimentFilterHasBeenSet = true; m_sentimentFilter = std::forward<SentimentFilterT>(value); }
    template<typename SentimentFilterT = SentimentFilter>
    Rule& WithSentimentFilter(SentimentFilterT&& value) { SetSentimentFilter(std::forward<SentimentFilterT>(value)); return *this;}
    ///@}
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
