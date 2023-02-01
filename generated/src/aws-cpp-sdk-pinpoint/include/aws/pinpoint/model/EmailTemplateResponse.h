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
   * that can be used in messages that are sent through the email
   * channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EmailTemplateResponse">AWS
   * API Reference</a></p>
   */
  class EmailTemplateResponse
  {
  public:
    AWS_PINPOINT_API EmailTemplateResponse();
    AWS_PINPOINT_API EmailTemplateResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EmailTemplateResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline EmailTemplateResponse& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline EmailTemplateResponse& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline EmailTemplateResponse& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date, in ISO 8601 format, when the message template was created.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date, in ISO 8601 format, when the message template was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date, in ISO 8601 format, when the message template was created.</p>
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date, in ISO 8601 format, when the message template was created.</p>
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date, in ISO 8601 format, when the message template was created.</p>
     */
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }

    /**
     * <p>The date, in ISO 8601 format, when the message template was created.</p>
     */
    inline EmailTemplateResponse& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date, in ISO 8601 format, when the message template was created.</p>
     */
    inline EmailTemplateResponse& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * <p>The date, in ISO 8601 format, when the message template was created.</p>
     */
    inline EmailTemplateResponse& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}


    /**
     * <p>The JSON object that specifies the default values that are used for message
     * variables in the message template. This object is a set of key-value pairs. Each
     * key defines a message variable in the template. The corresponding value defines
     * the default value for that variable.</p>
     */
    inline const Aws::String& GetDefaultSubstitutions() const{ return m_defaultSubstitutions; }

    /**
     * <p>The JSON object that specifies the default values that are used for message
     * variables in the message template. This object is a set of key-value pairs. Each
     * key defines a message variable in the template. The corresponding value defines
     * the default value for that variable.</p>
     */
    inline bool DefaultSubstitutionsHasBeenSet() const { return m_defaultSubstitutionsHasBeenSet; }

    /**
     * <p>The JSON object that specifies the default values that are used for message
     * variables in the message template. This object is a set of key-value pairs. Each
     * key defines a message variable in the template. The corresponding value defines
     * the default value for that variable.</p>
     */
    inline void SetDefaultSubstitutions(const Aws::String& value) { m_defaultSubstitutionsHasBeenSet = true; m_defaultSubstitutions = value; }

    /**
     * <p>The JSON object that specifies the default values that are used for message
     * variables in the message template. This object is a set of key-value pairs. Each
     * key defines a message variable in the template. The corresponding value defines
     * the default value for that variable.</p>
     */
    inline void SetDefaultSubstitutions(Aws::String&& value) { m_defaultSubstitutionsHasBeenSet = true; m_defaultSubstitutions = std::move(value); }

    /**
     * <p>The JSON object that specifies the default values that are used for message
     * variables in the message template. This object is a set of key-value pairs. Each
     * key defines a message variable in the template. The corresponding value defines
     * the default value for that variable.</p>
     */
    inline void SetDefaultSubstitutions(const char* value) { m_defaultSubstitutionsHasBeenSet = true; m_defaultSubstitutions.assign(value); }

    /**
     * <p>The JSON object that specifies the default values that are used for message
     * variables in the message template. This object is a set of key-value pairs. Each
     * key defines a message variable in the template. The corresponding value defines
     * the default value for that variable.</p>
     */
    inline EmailTemplateResponse& WithDefaultSubstitutions(const Aws::String& value) { SetDefaultSubstitutions(value); return *this;}

    /**
     * <p>The JSON object that specifies the default values that are used for message
     * variables in the message template. This object is a set of key-value pairs. Each
     * key defines a message variable in the template. The corresponding value defines
     * the default value for that variable.</p>
     */
    inline EmailTemplateResponse& WithDefaultSubstitutions(Aws::String&& value) { SetDefaultSubstitutions(std::move(value)); return *this;}

    /**
     * <p>The JSON object that specifies the default values that are used for message
     * variables in the message template. This object is a set of key-value pairs. Each
     * key defines a message variable in the template. The corresponding value defines
     * the default value for that variable.</p>
     */
    inline EmailTemplateResponse& WithDefaultSubstitutions(const char* value) { SetDefaultSubstitutions(value); return *this;}


    /**
     * <p>The message body, in HTML format, that's used in email messages that are
     * based on the message template.</p>
     */
    inline const Aws::String& GetHtmlPart() const{ return m_htmlPart; }

    /**
     * <p>The message body, in HTML format, that's used in email messages that are
     * based on the message template.</p>
     */
    inline bool HtmlPartHasBeenSet() const { return m_htmlPartHasBeenSet; }

    /**
     * <p>The message body, in HTML format, that's used in email messages that are
     * based on the message template.</p>
     */
    inline void SetHtmlPart(const Aws::String& value) { m_htmlPartHasBeenSet = true; m_htmlPart = value; }

    /**
     * <p>The message body, in HTML format, that's used in email messages that are
     * based on the message template.</p>
     */
    inline void SetHtmlPart(Aws::String&& value) { m_htmlPartHasBeenSet = true; m_htmlPart = std::move(value); }

    /**
     * <p>The message body, in HTML format, that's used in email messages that are
     * based on the message template.</p>
     */
    inline void SetHtmlPart(const char* value) { m_htmlPartHasBeenSet = true; m_htmlPart.assign(value); }

    /**
     * <p>The message body, in HTML format, that's used in email messages that are
     * based on the message template.</p>
     */
    inline EmailTemplateResponse& WithHtmlPart(const Aws::String& value) { SetHtmlPart(value); return *this;}

    /**
     * <p>The message body, in HTML format, that's used in email messages that are
     * based on the message template.</p>
     */
    inline EmailTemplateResponse& WithHtmlPart(Aws::String&& value) { SetHtmlPart(std::move(value)); return *this;}

    /**
     * <p>The message body, in HTML format, that's used in email messages that are
     * based on the message template.</p>
     */
    inline EmailTemplateResponse& WithHtmlPart(const char* value) { SetHtmlPart(value); return *this;}


    /**
     * <p>The date, in ISO 8601 format, when the message template was last
     * modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date, in ISO 8601 format, when the message template was last
     * modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date, in ISO 8601 format, when the message template was last
     * modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date, in ISO 8601 format, when the message template was last
     * modified.</p>
     */
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date, in ISO 8601 format, when the message template was last
     * modified.</p>
     */
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }

    /**
     * <p>The date, in ISO 8601 format, when the message template was last
     * modified.</p>
     */
    inline EmailTemplateResponse& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date, in ISO 8601 format, when the message template was last
     * modified.</p>
     */
    inline EmailTemplateResponse& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}

    /**
     * <p>The date, in ISO 8601 format, when the message template was last
     * modified.</p>
     */
    inline EmailTemplateResponse& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}


    /**
     * <p>The unique identifier for the recommender model that's used by the message
     * template.</p>
     */
    inline const Aws::String& GetRecommenderId() const{ return m_recommenderId; }

    /**
     * <p>The unique identifier for the recommender model that's used by the message
     * template.</p>
     */
    inline bool RecommenderIdHasBeenSet() const { return m_recommenderIdHasBeenSet; }

    /**
     * <p>The unique identifier for the recommender model that's used by the message
     * template.</p>
     */
    inline void SetRecommenderId(const Aws::String& value) { m_recommenderIdHasBeenSet = true; m_recommenderId = value; }

    /**
     * <p>The unique identifier for the recommender model that's used by the message
     * template.</p>
     */
    inline void SetRecommenderId(Aws::String&& value) { m_recommenderIdHasBeenSet = true; m_recommenderId = std::move(value); }

    /**
     * <p>The unique identifier for the recommender model that's used by the message
     * template.</p>
     */
    inline void SetRecommenderId(const char* value) { m_recommenderIdHasBeenSet = true; m_recommenderId.assign(value); }

    /**
     * <p>The unique identifier for the recommender model that's used by the message
     * template.</p>
     */
    inline EmailTemplateResponse& WithRecommenderId(const Aws::String& value) { SetRecommenderId(value); return *this;}

    /**
     * <p>The unique identifier for the recommender model that's used by the message
     * template.</p>
     */
    inline EmailTemplateResponse& WithRecommenderId(Aws::String&& value) { SetRecommenderId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the recommender model that's used by the message
     * template.</p>
     */
    inline EmailTemplateResponse& WithRecommenderId(const char* value) { SetRecommenderId(value); return *this;}


    /**
     * <p>The subject line, or title, that's used in email messages that are based on
     * the message template.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }

    /**
     * <p>The subject line, or title, that's used in email messages that are based on
     * the message template.</p>
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * <p>The subject line, or title, that's used in email messages that are based on
     * the message template.</p>
     */
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>The subject line, or title, that's used in email messages that are based on
     * the message template.</p>
     */
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * <p>The subject line, or title, that's used in email messages that are based on
     * the message template.</p>
     */
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }

    /**
     * <p>The subject line, or title, that's used in email messages that are based on
     * the message template.</p>
     */
    inline EmailTemplateResponse& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}

    /**
     * <p>The subject line, or title, that's used in email messages that are based on
     * the message template.</p>
     */
    inline EmailTemplateResponse& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}

    /**
     * <p>The subject line, or title, that's used in email messages that are based on
     * the message template.</p>
     */
    inline EmailTemplateResponse& WithSubject(const char* value) { SetSubject(value); return *this;}


    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline EmailTemplateResponse& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline EmailTemplateResponse& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline EmailTemplateResponse& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline EmailTemplateResponse& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline EmailTemplateResponse& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline EmailTemplateResponse& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline EmailTemplateResponse& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline EmailTemplateResponse& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline EmailTemplateResponse& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The custom description of the message template.</p>
     */
    inline const Aws::String& GetTemplateDescription() const{ return m_templateDescription; }

    /**
     * <p>The custom description of the message template.</p>
     */
    inline bool TemplateDescriptionHasBeenSet() const { return m_templateDescriptionHasBeenSet; }

    /**
     * <p>The custom description of the message template.</p>
     */
    inline void SetTemplateDescription(const Aws::String& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = value; }

    /**
     * <p>The custom description of the message template.</p>
     */
    inline void SetTemplateDescription(Aws::String&& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = std::move(value); }

    /**
     * <p>The custom description of the message template.</p>
     */
    inline void SetTemplateDescription(const char* value) { m_templateDescriptionHasBeenSet = true; m_templateDescription.assign(value); }

    /**
     * <p>The custom description of the message template.</p>
     */
    inline EmailTemplateResponse& WithTemplateDescription(const Aws::String& value) { SetTemplateDescription(value); return *this;}

    /**
     * <p>The custom description of the message template.</p>
     */
    inline EmailTemplateResponse& WithTemplateDescription(Aws::String&& value) { SetTemplateDescription(std::move(value)); return *this;}

    /**
     * <p>The custom description of the message template.</p>
     */
    inline EmailTemplateResponse& WithTemplateDescription(const char* value) { SetTemplateDescription(value); return *this;}


    /**
     * <p>The name of the message template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the message template.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the message template.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the message template.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the message template.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the message template.</p>
     */
    inline EmailTemplateResponse& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the message template.</p>
     */
    inline EmailTemplateResponse& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the message template.</p>
     */
    inline EmailTemplateResponse& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The type of channel that the message template is designed for. For an email
     * template, this value is EMAIL.</p>
     */
    inline const TemplateType& GetTemplateType() const{ return m_templateType; }

    /**
     * <p>The type of channel that the message template is designed for. For an email
     * template, this value is EMAIL.</p>
     */
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }

    /**
     * <p>The type of channel that the message template is designed for. For an email
     * template, this value is EMAIL.</p>
     */
    inline void SetTemplateType(const TemplateType& value) { m_templateTypeHasBeenSet = true; m_templateType = value; }

    /**
     * <p>The type of channel that the message template is designed for. For an email
     * template, this value is EMAIL.</p>
     */
    inline void SetTemplateType(TemplateType&& value) { m_templateTypeHasBeenSet = true; m_templateType = std::move(value); }

    /**
     * <p>The type of channel that the message template is designed for. For an email
     * template, this value is EMAIL.</p>
     */
    inline EmailTemplateResponse& WithTemplateType(const TemplateType& value) { SetTemplateType(value); return *this;}

    /**
     * <p>The type of channel that the message template is designed for. For an email
     * template, this value is EMAIL.</p>
     */
    inline EmailTemplateResponse& WithTemplateType(TemplateType&& value) { SetTemplateType(std::move(value)); return *this;}


    /**
     * <p>The message body, in plain text format, that's used in email messages that
     * are based on the message template.</p>
     */
    inline const Aws::String& GetTextPart() const{ return m_textPart; }

    /**
     * <p>The message body, in plain text format, that's used in email messages that
     * are based on the message template.</p>
     */
    inline bool TextPartHasBeenSet() const { return m_textPartHasBeenSet; }

    /**
     * <p>The message body, in plain text format, that's used in email messages that
     * are based on the message template.</p>
     */
    inline void SetTextPart(const Aws::String& value) { m_textPartHasBeenSet = true; m_textPart = value; }

    /**
     * <p>The message body, in plain text format, that's used in email messages that
     * are based on the message template.</p>
     */
    inline void SetTextPart(Aws::String&& value) { m_textPartHasBeenSet = true; m_textPart = std::move(value); }

    /**
     * <p>The message body, in plain text format, that's used in email messages that
     * are based on the message template.</p>
     */
    inline void SetTextPart(const char* value) { m_textPartHasBeenSet = true; m_textPart.assign(value); }

    /**
     * <p>The message body, in plain text format, that's used in email messages that
     * are based on the message template.</p>
     */
    inline EmailTemplateResponse& WithTextPart(const Aws::String& value) { SetTextPart(value); return *this;}

    /**
     * <p>The message body, in plain text format, that's used in email messages that
     * are based on the message template.</p>
     */
    inline EmailTemplateResponse& WithTextPart(Aws::String&& value) { SetTextPart(std::move(value)); return *this;}

    /**
     * <p>The message body, in plain text format, that's used in email messages that
     * are based on the message template.</p>
     */
    inline EmailTemplateResponse& WithTextPart(const char* value) { SetTextPart(value); return *this;}


    /**
     * <p>The unique identifier, as an integer, for the active version of the message
     * template, or the version of the template that you specified by using the version
     * parameter in your request.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The unique identifier, as an integer, for the active version of the message
     * template, or the version of the template that you specified by using the version
     * parameter in your request.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The unique identifier, as an integer, for the active version of the message
     * template, or the version of the template that you specified by using the version
     * parameter in your request.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The unique identifier, as an integer, for the active version of the message
     * template, or the version of the template that you specified by using the version
     * parameter in your request.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The unique identifier, as an integer, for the active version of the message
     * template, or the version of the template that you specified by using the version
     * parameter in your request.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The unique identifier, as an integer, for the active version of the message
     * template, or the version of the template that you specified by using the version
     * parameter in your request.</p>
     */
    inline EmailTemplateResponse& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The unique identifier, as an integer, for the active version of the message
     * template, or the version of the template that you specified by using the version
     * parameter in your request.</p>
     */
    inline EmailTemplateResponse& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The unique identifier, as an integer, for the active version of the message
     * template, or the version of the template that you specified by using the version
     * parameter in your request.</p>
     */
    inline EmailTemplateResponse& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_defaultSubstitutions;
    bool m_defaultSubstitutionsHasBeenSet = false;

    Aws::String m_htmlPart;
    bool m_htmlPartHasBeenSet = false;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_recommenderId;
    bool m_recommenderIdHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_templateDescription;
    bool m_templateDescriptionHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    TemplateType m_templateType;
    bool m_templateTypeHasBeenSet = false;

    Aws::String m_textPart;
    bool m_textPartHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
