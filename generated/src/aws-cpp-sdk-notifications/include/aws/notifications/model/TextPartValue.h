/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/notifications/model/TextPartType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/notifications/model/LocaleCode.h>
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
namespace Notifications
{
namespace Model
{

  /**
   * <p>Describes text information objects containing fields that determine how text
   * part objects are composed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/TextPartValue">AWS
   * API Reference</a></p>
   */
  class TextPartValue
  {
  public:
    AWS_NOTIFICATIONS_API TextPartValue() = default;
    AWS_NOTIFICATIONS_API TextPartValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API TextPartValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of text part. Determines the usage of all other fields and whether
     * or not they're required.</p>
     */
    inline TextPartType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(TextPartType value) { m_typeHasBeenSet = true; m_type = value; }
    inline TextPartValue& WithType(TextPartType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short single line description of the link. Must be hyper-linked with the
     * URL itself. </p> <p>Used for text parts with the type <code>URL</code>.</p>
     */
    inline const Aws::String& GetDisplayText() const { return m_displayText; }
    inline bool DisplayTextHasBeenSet() const { return m_displayTextHasBeenSet; }
    template<typename DisplayTextT = Aws::String>
    void SetDisplayText(DisplayTextT&& value) { m_displayTextHasBeenSet = true; m_displayText = std::forward<DisplayTextT>(value); }
    template<typename DisplayTextT = Aws::String>
    TextPartValue& WithDisplayText(DisplayTextT&& value) { SetDisplayText(std::forward<DisplayTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of locales to the text in that locale.</p>
     */
    inline const Aws::Map<LocaleCode, Aws::String>& GetTextByLocale() const { return m_textByLocale; }
    inline bool TextByLocaleHasBeenSet() const { return m_textByLocaleHasBeenSet; }
    template<typename TextByLocaleT = Aws::Map<LocaleCode, Aws::String>>
    void SetTextByLocale(TextByLocaleT&& value) { m_textByLocaleHasBeenSet = true; m_textByLocale = std::forward<TextByLocaleT>(value); }
    template<typename TextByLocaleT = Aws::Map<LocaleCode, Aws::String>>
    TextPartValue& WithTextByLocale(TextByLocaleT&& value) { SetTextByLocale(std::forward<TextByLocaleT>(value)); return *this;}
    inline TextPartValue& AddTextByLocale(LocaleCode key, Aws::String value) {
      m_textByLocaleHasBeenSet = true; m_textByLocale.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The URL itself.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    TextPartValue& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}
  private:

    TextPartType m_type{TextPartType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_displayText;
    bool m_displayTextHasBeenSet = false;

    Aws::Map<LocaleCode, Aws::String> m_textByLocale;
    bool m_textByLocaleHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
