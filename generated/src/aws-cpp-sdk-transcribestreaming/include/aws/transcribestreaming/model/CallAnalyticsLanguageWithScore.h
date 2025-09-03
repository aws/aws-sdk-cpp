/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/CallAnalyticsLanguageCode.h>
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
   * <p>The language code that represents the language identified in your audio,
   * including the associated confidence score.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/CallAnalyticsLanguageWithScore">AWS
   * API Reference</a></p>
   */
  class CallAnalyticsLanguageWithScore
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API CallAnalyticsLanguageWithScore() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API CallAnalyticsLanguageWithScore(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API CallAnalyticsLanguageWithScore& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The language code of the identified language.</p>
     */
    inline CallAnalyticsLanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(CallAnalyticsLanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline CallAnalyticsLanguageWithScore& WithLanguageCode(CallAnalyticsLanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confidence score associated with the identified language code. Confidence
     * scores are values between zero and one; larger values indicate a higher
     * confidence in the identified language.</p>
     */
    inline double GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline CallAnalyticsLanguageWithScore& WithScore(double value) { SetScore(value); return *this;}
    ///@}
  private:

    CallAnalyticsLanguageCode m_languageCode{CallAnalyticsLanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    double m_score{0.0};
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
