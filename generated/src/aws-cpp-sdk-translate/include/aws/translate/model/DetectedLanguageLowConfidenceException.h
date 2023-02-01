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
   * <p>The confidence that Amazon Comprehend accurately detected the source language
   * is low. If a low confidence level is acceptable for your application, you can
   * use the language in the exception to call Amazon Translate again. For more
   * information, see the <a
   * href="https://docs.aws.amazon.com/comprehend/latest/dg/API_DetectDominantLanguage.html">DetectDominantLanguage</a>
   * operation in the <i>Amazon Comprehend Developer Guide</i>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/DetectedLanguageLowConfidenceException">AWS
   * API Reference</a></p>
   */
  class DetectedLanguageLowConfidenceException
  {
  public:
    AWS_TRANSLATE_API DetectedLanguageLowConfidenceException();
    AWS_TRANSLATE_API DetectedLanguageLowConfidenceException(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API DetectedLanguageLowConfidenceException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline DetectedLanguageLowConfidenceException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline DetectedLanguageLowConfidenceException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline DetectedLanguageLowConfidenceException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The language code of the auto-detected language from Amazon Comprehend.</p>
     */
    inline const Aws::String& GetDetectedLanguageCode() const{ return m_detectedLanguageCode; }

    /**
     * <p>The language code of the auto-detected language from Amazon Comprehend.</p>
     */
    inline bool DetectedLanguageCodeHasBeenSet() const { return m_detectedLanguageCodeHasBeenSet; }

    /**
     * <p>The language code of the auto-detected language from Amazon Comprehend.</p>
     */
    inline void SetDetectedLanguageCode(const Aws::String& value) { m_detectedLanguageCodeHasBeenSet = true; m_detectedLanguageCode = value; }

    /**
     * <p>The language code of the auto-detected language from Amazon Comprehend.</p>
     */
    inline void SetDetectedLanguageCode(Aws::String&& value) { m_detectedLanguageCodeHasBeenSet = true; m_detectedLanguageCode = std::move(value); }

    /**
     * <p>The language code of the auto-detected language from Amazon Comprehend.</p>
     */
    inline void SetDetectedLanguageCode(const char* value) { m_detectedLanguageCodeHasBeenSet = true; m_detectedLanguageCode.assign(value); }

    /**
     * <p>The language code of the auto-detected language from Amazon Comprehend.</p>
     */
    inline DetectedLanguageLowConfidenceException& WithDetectedLanguageCode(const Aws::String& value) { SetDetectedLanguageCode(value); return *this;}

    /**
     * <p>The language code of the auto-detected language from Amazon Comprehend.</p>
     */
    inline DetectedLanguageLowConfidenceException& WithDetectedLanguageCode(Aws::String&& value) { SetDetectedLanguageCode(std::move(value)); return *this;}

    /**
     * <p>The language code of the auto-detected language from Amazon Comprehend.</p>
     */
    inline DetectedLanguageLowConfidenceException& WithDetectedLanguageCode(const char* value) { SetDetectedLanguageCode(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_detectedLanguageCode;
    bool m_detectedLanguageCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
