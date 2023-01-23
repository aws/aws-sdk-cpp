/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the content and settings for a message template that can be used in
   * messages that are sent through the voice channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/VoiceTemplateRequest">AWS
   * API Reference</a></p>
   */
  class VoiceTemplateRequest
  {
  public:
    AWS_PINPOINT_API VoiceTemplateRequest();
    AWS_PINPOINT_API VoiceTemplateRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API VoiceTemplateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text of the script to use in messages that are based on the message
     * template, in plain text format.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * <p>The text of the script to use in messages that are based on the message
     * template, in plain text format.</p>
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * <p>The text of the script to use in messages that are based on the message
     * template, in plain text format.</p>
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>The text of the script to use in messages that are based on the message
     * template, in plain text format.</p>
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * <p>The text of the script to use in messages that are based on the message
     * template, in plain text format.</p>
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * <p>The text of the script to use in messages that are based on the message
     * template, in plain text format.</p>
     */
    inline VoiceTemplateRequest& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * <p>The text of the script to use in messages that are based on the message
     * template, in plain text format.</p>
     */
    inline VoiceTemplateRequest& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * <p>The text of the script to use in messages that are based on the message
     * template, in plain text format.</p>
     */
    inline VoiceTemplateRequest& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * <p>A JSON object that specifies the default values to use for message variables
     * in the message template. This object is a set of key-value pairs. Each key
     * defines a message variable in the template. The corresponding value defines the
     * default value for that variable. When you create a message that's based on the
     * template, you can override these defaults with message-specific and
     * address-specific variables and values.</p>
     */
    inline const Aws::String& GetDefaultSubstitutions() const{ return m_defaultSubstitutions; }

    /**
     * <p>A JSON object that specifies the default values to use for message variables
     * in the message template. This object is a set of key-value pairs. Each key
     * defines a message variable in the template. The corresponding value defines the
     * default value for that variable. When you create a message that's based on the
     * template, you can override these defaults with message-specific and
     * address-specific variables and values.</p>
     */
    inline bool DefaultSubstitutionsHasBeenSet() const { return m_defaultSubstitutionsHasBeenSet; }

    /**
     * <p>A JSON object that specifies the default values to use for message variables
     * in the message template. This object is a set of key-value pairs. Each key
     * defines a message variable in the template. The corresponding value defines the
     * default value for that variable. When you create a message that's based on the
     * template, you can override these defaults with message-specific and
     * address-specific variables and values.</p>
     */
    inline void SetDefaultSubstitutions(const Aws::String& value) { m_defaultSubstitutionsHasBeenSet = true; m_defaultSubstitutions = value; }

    /**
     * <p>A JSON object that specifies the default values to use for message variables
     * in the message template. This object is a set of key-value pairs. Each key
     * defines a message variable in the template. The corresponding value defines the
     * default value for that variable. When you create a message that's based on the
     * template, you can override these defaults with message-specific and
     * address-specific variables and values.</p>
     */
    inline void SetDefaultSubstitutions(Aws::String&& value) { m_defaultSubstitutionsHasBeenSet = true; m_defaultSubstitutions = std::move(value); }

    /**
     * <p>A JSON object that specifies the default values to use for message variables
     * in the message template. This object is a set of key-value pairs. Each key
     * defines a message variable in the template. The corresponding value defines the
     * default value for that variable. When you create a message that's based on the
     * template, you can override these defaults with message-specific and
     * address-specific variables and values.</p>
     */
    inline void SetDefaultSubstitutions(const char* value) { m_defaultSubstitutionsHasBeenSet = true; m_defaultSubstitutions.assign(value); }

    /**
     * <p>A JSON object that specifies the default values to use for message variables
     * in the message template. This object is a set of key-value pairs. Each key
     * defines a message variable in the template. The corresponding value defines the
     * default value for that variable. When you create a message that's based on the
     * template, you can override these defaults with message-specific and
     * address-specific variables and values.</p>
     */
    inline VoiceTemplateRequest& WithDefaultSubstitutions(const Aws::String& value) { SetDefaultSubstitutions(value); return *this;}

    /**
     * <p>A JSON object that specifies the default values to use for message variables
     * in the message template. This object is a set of key-value pairs. Each key
     * defines a message variable in the template. The corresponding value defines the
     * default value for that variable. When you create a message that's based on the
     * template, you can override these defaults with message-specific and
     * address-specific variables and values.</p>
     */
    inline VoiceTemplateRequest& WithDefaultSubstitutions(Aws::String&& value) { SetDefaultSubstitutions(std::move(value)); return *this;}

    /**
     * <p>A JSON object that specifies the default values to use for message variables
     * in the message template. This object is a set of key-value pairs. Each key
     * defines a message variable in the template. The corresponding value defines the
     * default value for that variable. When you create a message that's based on the
     * template, you can override these defaults with message-specific and
     * address-specific variables and values.</p>
     */
    inline VoiceTemplateRequest& WithDefaultSubstitutions(const char* value) { SetDefaultSubstitutions(value); return *this;}


    /**
     * <p>The code for the language to use when synthesizing the text of the script in
     * messages that are based on the message template. For a list of supported
     * languages and the code for each one, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline const Aws::String& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The code for the language to use when synthesizing the text of the script in
     * messages that are based on the message template. For a list of supported
     * languages and the code for each one, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The code for the language to use when synthesizing the text of the script in
     * messages that are based on the message template. For a list of supported
     * languages and the code for each one, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline void SetLanguageCode(const Aws::String& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The code for the language to use when synthesizing the text of the script in
     * messages that are based on the message template. For a list of supported
     * languages and the code for each one, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline void SetLanguageCode(Aws::String&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The code for the language to use when synthesizing the text of the script in
     * messages that are based on the message template. For a list of supported
     * languages and the code for each one, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline void SetLanguageCode(const char* value) { m_languageCodeHasBeenSet = true; m_languageCode.assign(value); }

    /**
     * <p>The code for the language to use when synthesizing the text of the script in
     * messages that are based on the message template. For a list of supported
     * languages and the code for each one, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline VoiceTemplateRequest& WithLanguageCode(const Aws::String& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The code for the language to use when synthesizing the text of the script in
     * messages that are based on the message template. For a list of supported
     * languages and the code for each one, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline VoiceTemplateRequest& WithLanguageCode(Aws::String&& value) { SetLanguageCode(std::move(value)); return *this;}

    /**
     * <p>The code for the language to use when synthesizing the text of the script in
     * messages that are based on the message template. For a list of supported
     * languages and the code for each one, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline VoiceTemplateRequest& WithLanguageCode(const char* value) { SetLanguageCode(value); return *this;}


    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline VoiceTemplateRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline VoiceTemplateRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline VoiceTemplateRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline VoiceTemplateRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline VoiceTemplateRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline VoiceTemplateRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline VoiceTemplateRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline VoiceTemplateRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline VoiceTemplateRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>A custom description of the message template.</p>
     */
    inline const Aws::String& GetTemplateDescription() const{ return m_templateDescription; }

    /**
     * <p>A custom description of the message template.</p>
     */
    inline bool TemplateDescriptionHasBeenSet() const { return m_templateDescriptionHasBeenSet; }

    /**
     * <p>A custom description of the message template.</p>
     */
    inline void SetTemplateDescription(const Aws::String& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = value; }

    /**
     * <p>A custom description of the message template.</p>
     */
    inline void SetTemplateDescription(Aws::String&& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = std::move(value); }

    /**
     * <p>A custom description of the message template.</p>
     */
    inline void SetTemplateDescription(const char* value) { m_templateDescriptionHasBeenSet = true; m_templateDescription.assign(value); }

    /**
     * <p>A custom description of the message template.</p>
     */
    inline VoiceTemplateRequest& WithTemplateDescription(const Aws::String& value) { SetTemplateDescription(value); return *this;}

    /**
     * <p>A custom description of the message template.</p>
     */
    inline VoiceTemplateRequest& WithTemplateDescription(Aws::String&& value) { SetTemplateDescription(std::move(value)); return *this;}

    /**
     * <p>A custom description of the message template.</p>
     */
    inline VoiceTemplateRequest& WithTemplateDescription(const char* value) { SetTemplateDescription(value); return *this;}


    /**
     * <p>The name of the voice to use when delivering messages that are based on the
     * message template. For a list of supported voices, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline const Aws::String& GetVoiceId() const{ return m_voiceId; }

    /**
     * <p>The name of the voice to use when delivering messages that are based on the
     * message template. For a list of supported voices, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline bool VoiceIdHasBeenSet() const { return m_voiceIdHasBeenSet; }

    /**
     * <p>The name of the voice to use when delivering messages that are based on the
     * message template. For a list of supported voices, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline void SetVoiceId(const Aws::String& value) { m_voiceIdHasBeenSet = true; m_voiceId = value; }

    /**
     * <p>The name of the voice to use when delivering messages that are based on the
     * message template. For a list of supported voices, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline void SetVoiceId(Aws::String&& value) { m_voiceIdHasBeenSet = true; m_voiceId = std::move(value); }

    /**
     * <p>The name of the voice to use when delivering messages that are based on the
     * message template. For a list of supported voices, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline void SetVoiceId(const char* value) { m_voiceIdHasBeenSet = true; m_voiceId.assign(value); }

    /**
     * <p>The name of the voice to use when delivering messages that are based on the
     * message template. For a list of supported voices, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline VoiceTemplateRequest& WithVoiceId(const Aws::String& value) { SetVoiceId(value); return *this;}

    /**
     * <p>The name of the voice to use when delivering messages that are based on the
     * message template. For a list of supported voices, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline VoiceTemplateRequest& WithVoiceId(Aws::String&& value) { SetVoiceId(std::move(value)); return *this;}

    /**
     * <p>The name of the voice to use when delivering messages that are based on the
     * message template. For a list of supported voices, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline VoiceTemplateRequest& WithVoiceId(const char* value) { SetVoiceId(value); return *this;}

  private:

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::String m_defaultSubstitutions;
    bool m_defaultSubstitutionsHasBeenSet = false;

    Aws::String m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_templateDescription;
    bool m_templateDescriptionHasBeenSet = false;

    Aws::String m_voiceId;
    bool m_voiceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
