/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/LanguageCode.h>
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
   * including the associated confidence score. If you enabled channel identification
   * in your request and each channel contained a different language, you will have
   * more than one <code>LanguageWithScore</code> result.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/LanguageWithScore">AWS
   * API Reference</a></p>
   */
  class LanguageWithScore
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API LanguageWithScore();
    AWS_TRANSCRIBESTREAMINGSERVICE_API LanguageWithScore(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API LanguageWithScore& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The language code of the identified language.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code of the identified language.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code of the identified language.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code of the identified language.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code of the identified language.</p>
     */
    inline LanguageWithScore& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code of the identified language.</p>
     */
    inline LanguageWithScore& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The confidence score associated with the identified language code. Confidence
     * scores are values between zero and one; larger values indicate a higher
     * confidence in the identified language.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>The confidence score associated with the identified language code. Confidence
     * scores are values between zero and one; larger values indicate a higher
     * confidence in the identified language.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The confidence score associated with the identified language code. Confidence
     * scores are values between zero and one; larger values indicate a higher
     * confidence in the identified language.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The confidence score associated with the identified language code. Confidence
     * scores are values between zero and one; larger values indicate a higher
     * confidence in the identified language.</p>
     */
    inline LanguageWithScore& WithScore(double value) { SetScore(value); return *this;}

  private:

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    double m_score;
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
