/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Amazon Translate does not support translation from the language of the source
   * text into the requested target language. For more information, see <a
   * href="https://docs.aws.amazon.com/translate/latest/dg/how-to-error-msg.html">Error
   * messages</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/UnsupportedLanguagePairException">AWS
   * API Reference</a></p>
   */
  class UnsupportedLanguagePairException
  {
  public:
    AWS_TRANSLATE_API UnsupportedLanguagePairException();
    AWS_TRANSLATE_API UnsupportedLanguagePairException(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API UnsupportedLanguagePairException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline UnsupportedLanguagePairException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline UnsupportedLanguagePairException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline UnsupportedLanguagePairException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The language code for the language of the input text. </p>
     */
    inline const Aws::String& GetSourceLanguageCode() const{ return m_sourceLanguageCode; }

    /**
     * <p>The language code for the language of the input text. </p>
     */
    inline bool SourceLanguageCodeHasBeenSet() const { return m_sourceLanguageCodeHasBeenSet; }

    /**
     * <p>The language code for the language of the input text. </p>
     */
    inline void SetSourceLanguageCode(const Aws::String& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = value; }

    /**
     * <p>The language code for the language of the input text. </p>
     */
    inline void SetSourceLanguageCode(Aws::String&& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = std::move(value); }

    /**
     * <p>The language code for the language of the input text. </p>
     */
    inline void SetSourceLanguageCode(const char* value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode.assign(value); }

    /**
     * <p>The language code for the language of the input text. </p>
     */
    inline UnsupportedLanguagePairException& WithSourceLanguageCode(const Aws::String& value) { SetSourceLanguageCode(value); return *this;}

    /**
     * <p>The language code for the language of the input text. </p>
     */
    inline UnsupportedLanguagePairException& WithSourceLanguageCode(Aws::String&& value) { SetSourceLanguageCode(std::move(value)); return *this;}

    /**
     * <p>The language code for the language of the input text. </p>
     */
    inline UnsupportedLanguagePairException& WithSourceLanguageCode(const char* value) { SetSourceLanguageCode(value); return *this;}


    /**
     * <p>The language code for the language of the translated text. </p>
     */
    inline const Aws::String& GetTargetLanguageCode() const{ return m_targetLanguageCode; }

    /**
     * <p>The language code for the language of the translated text. </p>
     */
    inline bool TargetLanguageCodeHasBeenSet() const { return m_targetLanguageCodeHasBeenSet; }

    /**
     * <p>The language code for the language of the translated text. </p>
     */
    inline void SetTargetLanguageCode(const Aws::String& value) { m_targetLanguageCodeHasBeenSet = true; m_targetLanguageCode = value; }

    /**
     * <p>The language code for the language of the translated text. </p>
     */
    inline void SetTargetLanguageCode(Aws::String&& value) { m_targetLanguageCodeHasBeenSet = true; m_targetLanguageCode = std::move(value); }

    /**
     * <p>The language code for the language of the translated text. </p>
     */
    inline void SetTargetLanguageCode(const char* value) { m_targetLanguageCodeHasBeenSet = true; m_targetLanguageCode.assign(value); }

    /**
     * <p>The language code for the language of the translated text. </p>
     */
    inline UnsupportedLanguagePairException& WithTargetLanguageCode(const Aws::String& value) { SetTargetLanguageCode(value); return *this;}

    /**
     * <p>The language code for the language of the translated text. </p>
     */
    inline UnsupportedLanguagePairException& WithTargetLanguageCode(Aws::String&& value) { SetTargetLanguageCode(std::move(value)); return *this;}

    /**
     * <p>The language code for the language of the translated text. </p>
     */
    inline UnsupportedLanguagePairException& WithTargetLanguageCode(const char* value) { SetTargetLanguageCode(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_sourceLanguageCode;
    bool m_sourceLanguageCodeHasBeenSet = false;

    Aws::String m_targetLanguageCode;
    bool m_targetLanguageCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
