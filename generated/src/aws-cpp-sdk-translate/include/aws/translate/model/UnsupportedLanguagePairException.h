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
   * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
   * languages</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/UnsupportedLanguagePairException">AWS
   * API Reference</a></p>
   */
  class UnsupportedLanguagePairException
  {
  public:
    AWS_TRANSLATE_API UnsupportedLanguagePairException() = default;
    AWS_TRANSLATE_API UnsupportedLanguagePairException(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API UnsupportedLanguagePairException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    UnsupportedLanguagePairException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code for the language of the input text. </p>
     */
    inline const Aws::String& GetSourceLanguageCode() const { return m_sourceLanguageCode; }
    inline bool SourceLanguageCodeHasBeenSet() const { return m_sourceLanguageCodeHasBeenSet; }
    template<typename SourceLanguageCodeT = Aws::String>
    void SetSourceLanguageCode(SourceLanguageCodeT&& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = std::forward<SourceLanguageCodeT>(value); }
    template<typename SourceLanguageCodeT = Aws::String>
    UnsupportedLanguagePairException& WithSourceLanguageCode(SourceLanguageCodeT&& value) { SetSourceLanguageCode(std::forward<SourceLanguageCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code for the language of the translated text. </p>
     */
    inline const Aws::String& GetTargetLanguageCode() const { return m_targetLanguageCode; }
    inline bool TargetLanguageCodeHasBeenSet() const { return m_targetLanguageCodeHasBeenSet; }
    template<typename TargetLanguageCodeT = Aws::String>
    void SetTargetLanguageCode(TargetLanguageCodeT&& value) { m_targetLanguageCodeHasBeenSet = true; m_targetLanguageCode = std::forward<TargetLanguageCodeT>(value); }
    template<typename TargetLanguageCodeT = Aws::String>
    UnsupportedLanguagePairException& WithTargetLanguageCode(TargetLanguageCodeT&& value) { SetTargetLanguageCode(std::forward<TargetLanguageCodeT>(value)); return *this;}
    ///@}
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
