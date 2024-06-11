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
    AWS_SUPPORT_API SupportedLanguage();
    AWS_SUPPORT_API SupportedLanguage(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API SupportedLanguage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> 2 digit ISO 639-1 code. e.g. <code>en</code> </p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline SupportedLanguage& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline SupportedLanguage& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline SupportedLanguage& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Full language description e.g. <code>ENGLISH</code> </p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }
    inline SupportedLanguage& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}
    inline SupportedLanguage& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}
    inline SupportedLanguage& WithLanguage(const char* value) { SetLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Language display value e.g. <code>ENGLISH</code> </p>
     */
    inline const Aws::String& GetDisplay() const{ return m_display; }
    inline bool DisplayHasBeenSet() const { return m_displayHasBeenSet; }
    inline void SetDisplay(const Aws::String& value) { m_displayHasBeenSet = true; m_display = value; }
    inline void SetDisplay(Aws::String&& value) { m_displayHasBeenSet = true; m_display = std::move(value); }
    inline void SetDisplay(const char* value) { m_displayHasBeenSet = true; m_display.assign(value); }
    inline SupportedLanguage& WithDisplay(const Aws::String& value) { SetDisplay(value); return *this;}
    inline SupportedLanguage& WithDisplay(Aws::String&& value) { SetDisplay(std::move(value)); return *this;}
    inline SupportedLanguage& WithDisplay(const char* value) { SetDisplay(value); return *this;}
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
