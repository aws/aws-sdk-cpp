﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/model/Formality.h>
#include <aws/translate/model/Profanity.h>
#include <aws/translate/model/Brevity.h>
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
namespace Translate
{
namespace Model
{

  /**
   * <p>Settings to configure your translation output. You can configure the
   * following options:</p> <ul> <li> <p>Brevity: reduces the length of the
   * translation output for most translations. Available for
   * <code>TranslateText</code> only.</p> </li> <li> <p>Formality: sets the formality
   * level of the translation output.</p> </li> <li> <p>Profanity: masks profane
   * words and phrases in the translation output.</p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/TranslationSettings">AWS
   * API Reference</a></p>
   */
  class TranslationSettings
  {
  public:
    AWS_TRANSLATE_API TranslationSettings();
    AWS_TRANSLATE_API TranslationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API TranslationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>You can specify the desired level of formality for translations to supported
     * target languages. The formality setting controls the level of formal language
     * usage (also known as <a
     * href="https://en.wikipedia.org/wiki/Register_(sociolinguistics)">register</a>)
     * in the translation output. You can set the value to informal or formal. If you
     * don't specify a value for formality, or if the target language doesn't support
     * formality, the translation will ignore the formality setting.</p> <p> If you
     * specify multiple target languages for the job, translate ignores the formality
     * setting for any unsupported target language.</p> <p>For a list of target
     * languages that support formality, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/customizing-translations-formality.html#customizing-translations-formality-languages">Supported
     * languages</a> in the Amazon Translate Developer Guide.</p>
     */
    inline const Formality& GetFormality() const{ return m_formality; }
    inline bool FormalityHasBeenSet() const { return m_formalityHasBeenSet; }
    inline void SetFormality(const Formality& value) { m_formalityHasBeenSet = true; m_formality = value; }
    inline void SetFormality(Formality&& value) { m_formalityHasBeenSet = true; m_formality = std::move(value); }
    inline TranslationSettings& WithFormality(const Formality& value) { SetFormality(value); return *this;}
    inline TranslationSettings& WithFormality(Formality&& value) { SetFormality(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can enable the profanity setting if you want to mask profane words and
     * phrases in your translation output.</p> <p>To mask profane words and phrases,
     * Amazon Translate replaces them with the grawlix string “?$#@$“. This 5-character
     * sequence is used for each profane word or phrase, regardless of the length or
     * number of words.</p> <p>Amazon Translate doesn't detect profanity in all of its
     * supported languages. For languages that don't support profanity detection, see
     * <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/customizing-translations-profanity.html#customizing-translations-profanity-languages">Unsupported
     * languages</a> in the Amazon Translate Developer Guide.</p> <p>If you specify
     * multiple target languages for the job, all the target languages must support
     * profanity masking. If any of the target languages don't support profanity
     * masking, the translation job won't mask profanity for any target language.</p>
     */
    inline const Profanity& GetProfanity() const{ return m_profanity; }
    inline bool ProfanityHasBeenSet() const { return m_profanityHasBeenSet; }
    inline void SetProfanity(const Profanity& value) { m_profanityHasBeenSet = true; m_profanity = value; }
    inline void SetProfanity(Profanity&& value) { m_profanityHasBeenSet = true; m_profanity = std::move(value); }
    inline TranslationSettings& WithProfanity(const Profanity& value) { SetProfanity(value); return *this;}
    inline TranslationSettings& WithProfanity(Profanity&& value) { SetProfanity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you turn on brevity, Amazon Translate reduces the length of the
     * translation output for most translations (when compared with the same
     * translation with brevity turned off). By default, brevity is turned off.</p>
     * <p>If you turn on brevity for a translation request with an unsupported language
     * pair, the translation proceeds with the brevity setting turned off.</p> <p>For
     * the language pairs that brevity supports, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/customizing-translations-brevity">Using
     * brevity</a> in the Amazon Translate Developer Guide.</p>
     */
    inline const Brevity& GetBrevity() const{ return m_brevity; }
    inline bool BrevityHasBeenSet() const { return m_brevityHasBeenSet; }
    inline void SetBrevity(const Brevity& value) { m_brevityHasBeenSet = true; m_brevity = value; }
    inline void SetBrevity(Brevity&& value) { m_brevityHasBeenSet = true; m_brevity = std::move(value); }
    inline TranslationSettings& WithBrevity(const Brevity& value) { SetBrevity(value); return *this;}
    inline TranslationSettings& WithBrevity(Brevity&& value) { SetBrevity(std::move(value)); return *this;}
    ///@}
  private:

    Formality m_formality;
    bool m_formalityHasBeenSet = false;

    Profanity m_profanity;
    bool m_profanityHasBeenSet = false;

    Brevity m_brevity;
    bool m_brevityHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
