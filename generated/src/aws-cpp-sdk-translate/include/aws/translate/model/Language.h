/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/translate/Translate_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Translate {
namespace Model {

/**
 * <p>A supported language.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/Language">AWS
 * API Reference</a></p>
 */
class Language {
 public:
  AWS_TRANSLATE_API Language() = default;
  AWS_TRANSLATE_API Language(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSLATE_API Language& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSLATE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Language name of the supported language.</p>
   */
  inline const Aws::String& GetLanguageName() const { return m_languageName; }
  inline bool LanguageNameHasBeenSet() const { return m_languageNameHasBeenSet; }
  template <typename LanguageNameT = Aws::String>
  void SetLanguageName(LanguageNameT&& value) {
    m_languageNameHasBeenSet = true;
    m_languageName = std::forward<LanguageNameT>(value);
  }
  template <typename LanguageNameT = Aws::String>
  Language& WithLanguageName(LanguageNameT&& value) {
    SetLanguageName(std::forward<LanguageNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Language code for the supported language.</p>
   */
  inline const Aws::String& GetLanguageCode() const { return m_languageCode; }
  inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
  template <typename LanguageCodeT = Aws::String>
  void SetLanguageCode(LanguageCodeT&& value) {
    m_languageCodeHasBeenSet = true;
    m_languageCode = std::forward<LanguageCodeT>(value);
  }
  template <typename LanguageCodeT = Aws::String>
  Language& WithLanguageCode(LanguageCodeT&& value) {
    SetLanguageCode(std::forward<LanguageCodeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_languageName;

  Aws::String m_languageCode;
  bool m_languageNameHasBeenSet = false;
  bool m_languageCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Translate
}  // namespace Aws
