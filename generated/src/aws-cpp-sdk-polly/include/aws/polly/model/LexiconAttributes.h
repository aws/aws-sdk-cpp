/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/model/LanguageCode.h>
#include <aws/core/utils/DateTime.h>
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
namespace Polly
{
namespace Model
{

  /**
   * <p>Contains metadata describing the lexicon such as the number of lexemes,
   * language code, and so on. For more information, see <a
   * href="https://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
   * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/LexiconAttributes">AWS
   * API Reference</a></p>
   */
  class LexiconAttributes
  {
  public:
    AWS_POLLY_API LexiconAttributes() = default;
    AWS_POLLY_API LexiconAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_POLLY_API LexiconAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_POLLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Phonetic alphabet used in the lexicon. Valid values are <code>ipa</code> and
     * <code>x-sampa</code>.</p>
     */
    inline const Aws::String& GetAlphabet() const { return m_alphabet; }
    inline bool AlphabetHasBeenSet() const { return m_alphabetHasBeenSet; }
    template<typename AlphabetT = Aws::String>
    void SetAlphabet(AlphabetT&& value) { m_alphabetHasBeenSet = true; m_alphabet = std::forward<AlphabetT>(value); }
    template<typename AlphabetT = Aws::String>
    LexiconAttributes& WithAlphabet(AlphabetT&& value) { SetAlphabet(std::forward<AlphabetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Language code that the lexicon applies to. A lexicon with a language code
     * such as "en" would be applied to all English languages (en-GB, en-US, en-AUS,
     * en-WLS, and so on.</p>
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline LexiconAttributes& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date lexicon was last modified (a timestamp value).</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    void SetLastModified(LastModifiedT&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::forward<LastModifiedT>(value); }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    LexiconAttributes& WithLastModified(LastModifiedT&& value) { SetLastModified(std::forward<LastModifiedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the lexicon.</p>
     */
    inline const Aws::String& GetLexiconArn() const { return m_lexiconArn; }
    inline bool LexiconArnHasBeenSet() const { return m_lexiconArnHasBeenSet; }
    template<typename LexiconArnT = Aws::String>
    void SetLexiconArn(LexiconArnT&& value) { m_lexiconArnHasBeenSet = true; m_lexiconArn = std::forward<LexiconArnT>(value); }
    template<typename LexiconArnT = Aws::String>
    LexiconAttributes& WithLexiconArn(LexiconArnT&& value) { SetLexiconArn(std::forward<LexiconArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of lexemes in the lexicon.</p>
     */
    inline int GetLexemesCount() const { return m_lexemesCount; }
    inline bool LexemesCountHasBeenSet() const { return m_lexemesCountHasBeenSet; }
    inline void SetLexemesCount(int value) { m_lexemesCountHasBeenSet = true; m_lexemesCount = value; }
    inline LexiconAttributes& WithLexemesCount(int value) { SetLexemesCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total size of the lexicon, in characters.</p>
     */
    inline int GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }
    inline LexiconAttributes& WithSize(int value) { SetSize(value); return *this;}
    ///@}
  private:

    Aws::String m_alphabet;
    bool m_alphabetHasBeenSet = false;

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified{};
    bool m_lastModifiedHasBeenSet = false;

    Aws::String m_lexiconArn;
    bool m_lexiconArnHasBeenSet = false;

    int m_lexemesCount{0};
    bool m_lexemesCountHasBeenSet = false;

    int m_size{0};
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
