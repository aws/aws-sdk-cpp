/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/TemplateType.h>
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
   * <p>Provides information about the content and settings for a message template
   * that can be used in messages that are sent through the voice
   * channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/VoiceTemplateResponse">AWS
   * API Reference</a></p>
   */
  class VoiceTemplateResponse
  {
  public:
    AWS_PINPOINT_API VoiceTemplateResponse();
    AWS_PINPOINT_API VoiceTemplateResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API VoiceTemplateResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline VoiceTemplateResponse& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline VoiceTemplateResponse& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline VoiceTemplateResponse& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of the script that's used in messages that are based on the message
     * template, in plain text format.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }
    inline VoiceTemplateResponse& WithBody(const Aws::String& value) { SetBody(value); return *this;}
    inline VoiceTemplateResponse& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}
    inline VoiceTemplateResponse& WithBody(const char* value) { SetBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date, in ISO 8601 format, when the message template was created.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }
    inline VoiceTemplateResponse& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}
    inline VoiceTemplateResponse& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}
    inline VoiceTemplateResponse& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON object that specifies the default values that are used for message
     * variables in the message template. This object is a set of key-value pairs. Each
     * key defines a message variable in the template. The corresponding value defines
     * the default value for that variable.</p>
     */
    inline const Aws::String& GetDefaultSubstitutions() const{ return m_defaultSubstitutions; }
    inline bool DefaultSubstitutionsHasBeenSet() const { return m_defaultSubstitutionsHasBeenSet; }
    inline void SetDefaultSubstitutions(const Aws::String& value) { m_defaultSubstitutionsHasBeenSet = true; m_defaultSubstitutions = value; }
    inline void SetDefaultSubstitutions(Aws::String&& value) { m_defaultSubstitutionsHasBeenSet = true; m_defaultSubstitutions = std::move(value); }
    inline void SetDefaultSubstitutions(const char* value) { m_defaultSubstitutionsHasBeenSet = true; m_defaultSubstitutions.assign(value); }
    inline VoiceTemplateResponse& WithDefaultSubstitutions(const Aws::String& value) { SetDefaultSubstitutions(value); return *this;}
    inline VoiceTemplateResponse& WithDefaultSubstitutions(Aws::String&& value) { SetDefaultSubstitutions(std::move(value)); return *this;}
    inline VoiceTemplateResponse& WithDefaultSubstitutions(const char* value) { SetDefaultSubstitutions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code for the language that's used when synthesizing the text of the
     * script in messages that are based on the message template. For a list of
     * supported languages and the code for each one, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline const Aws::String& GetLanguageCode() const{ return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(const Aws::String& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline void SetLanguageCode(Aws::String&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }
    inline void SetLanguageCode(const char* value) { m_languageCodeHasBeenSet = true; m_languageCode.assign(value); }
    inline VoiceTemplateResponse& WithLanguageCode(const Aws::String& value) { SetLanguageCode(value); return *this;}
    inline VoiceTemplateResponse& WithLanguageCode(Aws::String&& value) { SetLanguageCode(std::move(value)); return *this;}
    inline VoiceTemplateResponse& WithLanguageCode(const char* value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date, in ISO 8601 format, when the message template was last
     * modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }
    inline VoiceTemplateResponse& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}
    inline VoiceTemplateResponse& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    inline VoiceTemplateResponse& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline VoiceTemplateResponse& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline VoiceTemplateResponse& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline VoiceTemplateResponse& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline VoiceTemplateResponse& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline VoiceTemplateResponse& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline VoiceTemplateResponse& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline VoiceTemplateResponse& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline VoiceTemplateResponse& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline VoiceTemplateResponse& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The custom description of the message template.</p>
     */
    inline const Aws::String& GetTemplateDescription() const{ return m_templateDescription; }
    inline bool TemplateDescriptionHasBeenSet() const { return m_templateDescriptionHasBeenSet; }
    inline void SetTemplateDescription(const Aws::String& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = value; }
    inline void SetTemplateDescription(Aws::String&& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = std::move(value); }
    inline void SetTemplateDescription(const char* value) { m_templateDescriptionHasBeenSet = true; m_templateDescription.assign(value); }
    inline VoiceTemplateResponse& WithTemplateDescription(const Aws::String& value) { SetTemplateDescription(value); return *this;}
    inline VoiceTemplateResponse& WithTemplateDescription(Aws::String&& value) { SetTemplateDescription(std::move(value)); return *this;}
    inline VoiceTemplateResponse& WithTemplateDescription(const char* value) { SetTemplateDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the message template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline VoiceTemplateResponse& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline VoiceTemplateResponse& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline VoiceTemplateResponse& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of channel that the message template is designed for. For a voice
     * template, this value is VOICE.</p>
     */
    inline const TemplateType& GetTemplateType() const{ return m_templateType; }
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }
    inline void SetTemplateType(const TemplateType& value) { m_templateTypeHasBeenSet = true; m_templateType = value; }
    inline void SetTemplateType(TemplateType&& value) { m_templateTypeHasBeenSet = true; m_templateType = std::move(value); }
    inline VoiceTemplateResponse& WithTemplateType(const TemplateType& value) { SetTemplateType(value); return *this;}
    inline VoiceTemplateResponse& WithTemplateType(TemplateType&& value) { SetTemplateType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier, as an integer, for the active version of the message
     * template, or the version of the template that you specified by using the version
     * parameter in your request.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline VoiceTemplateResponse& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline VoiceTemplateResponse& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline VoiceTemplateResponse& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the voice that's used when delivering messages that are based on
     * the message template. For a list of supported voices, see the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly
     * Developer Guide</a>.</p>
     */
    inline const Aws::String& GetVoiceId() const{ return m_voiceId; }
    inline bool VoiceIdHasBeenSet() const { return m_voiceIdHasBeenSet; }
    inline void SetVoiceId(const Aws::String& value) { m_voiceIdHasBeenSet = true; m_voiceId = value; }
    inline void SetVoiceId(Aws::String&& value) { m_voiceIdHasBeenSet = true; m_voiceId = std::move(value); }
    inline void SetVoiceId(const char* value) { m_voiceIdHasBeenSet = true; m_voiceId.assign(value); }
    inline VoiceTemplateResponse& WithVoiceId(const Aws::String& value) { SetVoiceId(value); return *this;}
    inline VoiceTemplateResponse& WithVoiceId(Aws::String&& value) { SetVoiceId(std::move(value)); return *this;}
    inline VoiceTemplateResponse& WithVoiceId(const char* value) { SetVoiceId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_defaultSubstitutions;
    bool m_defaultSubstitutionsHasBeenSet = false;

    Aws::String m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_templateDescription;
    bool m_templateDescriptionHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    TemplateType m_templateType;
    bool m_templateTypeHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_voiceId;
    bool m_voiceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
