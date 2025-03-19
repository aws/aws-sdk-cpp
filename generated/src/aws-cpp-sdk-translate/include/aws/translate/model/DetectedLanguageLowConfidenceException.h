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
    AWS_TRANSLATE_API DetectedLanguageLowConfidenceException() = default;
    AWS_TRANSLATE_API DetectedLanguageLowConfidenceException(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API DetectedLanguageLowConfidenceException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DetectedLanguageLowConfidenceException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code of the auto-detected language from Amazon Comprehend.</p>
     */
    inline const Aws::String& GetDetectedLanguageCode() const { return m_detectedLanguageCode; }
    inline bool DetectedLanguageCodeHasBeenSet() const { return m_detectedLanguageCodeHasBeenSet; }
    template<typename DetectedLanguageCodeT = Aws::String>
    void SetDetectedLanguageCode(DetectedLanguageCodeT&& value) { m_detectedLanguageCodeHasBeenSet = true; m_detectedLanguageCode = std::forward<DetectedLanguageCodeT>(value); }
    template<typename DetectedLanguageCodeT = Aws::String>
    DetectedLanguageLowConfidenceException& WithDetectedLanguageCode(DetectedLanguageCodeT&& value) { SetDetectedLanguageCode(std::forward<DetectedLanguageCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_detectedLanguageCode;
    bool m_detectedLanguageCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
