/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
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
namespace Support
{
namespace Model
{

  /**
   * <p> A JSON-formatted object that contains the available ISO 639-1 language
   * <code>code</code>, <code>language</code> name and langauge <code>display</code>
   * value. The language code is what should be used in the <a>CreateCase</a> call.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/SupportedLanguage">AWS
   * API Reference</a></p>
   */
  class SupportedLanguage
  {
  public:
    AWS_SUPPORT_API SupportedLanguage() = default;
    AWS_SUPPORT_API SupportedLanguage(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API SupportedLanguage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> 2 digit ISO 639-1 code. e.g. <code>en</code> </p>
     */
    inline const Aws::String& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = Aws::String>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = Aws::String>
    SupportedLanguage& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Full language description e.g. <code>ENGLISH</code> </p>
     */
    inline const Aws::String& GetLanguage() const { return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    template<typename LanguageT = Aws::String>
    void SetLanguage(LanguageT&& value) { m_languageHasBeenSet = true; m_language = std::forward<LanguageT>(value); }
    template<typename LanguageT = Aws::String>
    SupportedLanguage& WithLanguage(LanguageT&& value) { SetLanguage(std::forward<LanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Language display value e.g. <code>ENGLISH</code> </p>
     */
    inline const Aws::String& GetDisplay() const { return m_display; }
    inline bool DisplayHasBeenSet() const { return m_displayHasBeenSet; }
    template<typename DisplayT = Aws::String>
    void SetDisplay(DisplayT&& value) { m_displayHasBeenSet = true; m_display = std::forward<DisplayT>(value); }
    template<typename DisplayT = Aws::String>
    SupportedLanguage& WithDisplay(DisplayT&& value) { SetDisplay(std::forward<DisplayT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    Aws::String m_display;
    bool m_displayHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
