/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/LanguageCode.h>
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
   * <p>Provides information on the speech contained in a discreet utterance when
   * multi-language identification is enabled in your request. This utterance
   * represents a block of speech consisting of one language, preceded or followed by
   * a block of speech in a different language.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/LanguageCodeItem">AWS
   * API Reference</a></p>
   */
  class LanguageCodeItem
  {
  public:
    AWS_TRANSCRIBESERVICE_API LanguageCodeItem();
    AWS_TRANSCRIBESERVICE_API LanguageCodeItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API LanguageCodeItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides the language code for each language identified in your media.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>Provides the language code for each language identified in your media.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>Provides the language code for each language identified in your media.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>Provides the language code for each language identified in your media.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>Provides the language code for each language identified in your media.</p>
     */
    inline LanguageCodeItem& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>Provides the language code for each language identified in your media.</p>
     */
    inline LanguageCodeItem& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>Provides the total time, in seconds, each identified language is spoken in
     * your media.</p>
     */
    inline double GetDurationInSeconds() const{ return m_durationInSeconds; }

    /**
     * <p>Provides the total time, in seconds, each identified language is spoken in
     * your media.</p>
     */
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }

    /**
     * <p>Provides the total time, in seconds, each identified language is spoken in
     * your media.</p>
     */
    inline void SetDurationInSeconds(double value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }

    /**
     * <p>Provides the total time, in seconds, each identified language is spoken in
     * your media.</p>
     */
    inline LanguageCodeItem& WithDurationInSeconds(double value) { SetDurationInSeconds(value); return *this;}

  private:

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    double m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
