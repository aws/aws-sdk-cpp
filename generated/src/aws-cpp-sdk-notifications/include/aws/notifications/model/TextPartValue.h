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
    AWS_NOTIFICATIONS_API TextPartValue();
    AWS_NOTIFICATIONS_API TextPartValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API TextPartValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of text part. Determines the usage of all other fields and whether
     * or not they're required.</p>
     */
    inline const TextPartType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const TextPartType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(TextPartType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline TextPartValue& WithType(const TextPartType& value) { SetType(value); return *this;}
    inline TextPartValue& WithType(TextPartType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short single line description of the link. Must be hyper-linked with the
     * URL itself. </p> <p>Used for text parts with the type <code>URL</code>.</p>
     */
    inline const Aws::String& GetDisplayText() const{ return m_displayText; }
    inline bool DisplayTextHasBeenSet() const { return m_displayTextHasBeenSet; }
    inline void SetDisplayText(const Aws::String& value) { m_displayTextHasBeenSet = true; m_displayText = value; }
    inline void SetDisplayText(Aws::String&& value) { m_displayTextHasBeenSet = true; m_displayText = std::move(value); }
    inline void SetDisplayText(const char* value) { m_displayTextHasBeenSet = true; m_displayText.assign(value); }
    inline TextPartValue& WithDisplayText(const Aws::String& value) { SetDisplayText(value); return *this;}
    inline TextPartValue& WithDisplayText(Aws::String&& value) { SetDisplayText(std::move(value)); return *this;}
    inline TextPartValue& WithDisplayText(const char* value) { SetDisplayText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of locales to the text in that locale.</p>
     */
    inline const Aws::Map<LocaleCode, Aws::String>& GetTextByLocale() const{ return m_textByLocale; }
    inline bool TextByLocaleHasBeenSet() const { return m_textByLocaleHasBeenSet; }
    inline void SetTextByLocale(const Aws::Map<LocaleCode, Aws::String>& value) { m_textByLocaleHasBeenSet = true; m_textByLocale = value; }
    inline void SetTextByLocale(Aws::Map<LocaleCode, Aws::String>&& value) { m_textByLocaleHasBeenSet = true; m_textByLocale = std::move(value); }
    inline TextPartValue& WithTextByLocale(const Aws::Map<LocaleCode, Aws::String>& value) { SetTextByLocale(value); return *this;}
    inline TextPartValue& WithTextByLocale(Aws::Map<LocaleCode, Aws::String>&& value) { SetTextByLocale(std::move(value)); return *this;}
    inline TextPartValue& AddTextByLocale(const LocaleCode& key, const Aws::String& value) { m_textByLocaleHasBeenSet = true; m_textByLocale.emplace(key, value); return *this; }
    inline TextPartValue& AddTextByLocale(LocaleCode&& key, const Aws::String& value) { m_textByLocaleHasBeenSet = true; m_textByLocale.emplace(std::move(key), value); return *this; }
    inline TextPartValue& AddTextByLocale(const LocaleCode& key, Aws::String&& value) { m_textByLocaleHasBeenSet = true; m_textByLocale.emplace(key, std::move(value)); return *this; }
    inline TextPartValue& AddTextByLocale(LocaleCode&& key, Aws::String&& value) { m_textByLocaleHasBeenSet = true; m_textByLocale.emplace(std::move(key), std::move(value)); return *this; }
    inline TextPartValue& AddTextByLocale(LocaleCode&& key, const char* value) { m_textByLocaleHasBeenSet = true; m_textByLocale.emplace(std::move(key), value); return *this; }
    inline TextPartValue& AddTextByLocale(const LocaleCode& key, const char* value) { m_textByLocaleHasBeenSet = true; m_textByLocale.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The URL itself.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline TextPartValue& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline TextPartValue& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline TextPartValue& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}
  private:

    TextPartType m_type;
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
