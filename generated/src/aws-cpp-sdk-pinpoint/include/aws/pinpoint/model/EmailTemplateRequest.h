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
   * messages that are sent through the email channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EmailTemplateRequest">AWS
   * API Reference</a></p>
   */
  class EmailTemplateRequest
  {
  public:
    AWS_PINPOINT_API EmailTemplateRequest();
    AWS_PINPOINT_API EmailTemplateRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EmailTemplateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline EmailTemplateRequest& WithDefaultSubstitutions(const Aws::String& value) { SetDefaultSubstitutions(value); return *this;}

    /**
     * <p>A JSON object that specifies the default values to use for message variables
     * in the message template. This object is a set of key-value pairs. Each key
     * defines a message variable in the template. The corresponding value defines the
     * default value for that variable. When you create a message that's based on the
     * template, you can override these defaults with message-specific and
     * address-specific variables and values.</p>
     */
    inline EmailTemplateRequest& WithDefaultSubstitutions(Aws::String&& value) { SetDefaultSubstitutions(std::move(value)); return *this;}

    /**
     * <p>A JSON object that specifies the default values to use for message variables
     * in the message template. This object is a set of key-value pairs. Each key
     * defines a message variable in the template. The corresponding value defines the
     * default value for that variable. When you create a message that's based on the
     * template, you can override these defaults with message-specific and
     * address-specific variables and values.</p>
     */
    inline EmailTemplateRequest& WithDefaultSubstitutions(const char* value) { SetDefaultSubstitutions(value); return *this;}


    /**
     * <p>The message body, in HTML format, to use in email messages that are based on
     * the message template. We recommend using HTML format for email clients that
     * render HTML content. You can include links, formatted text, and more in an HTML
     * message.</p>
     */
    inline const Aws::String& GetHtmlPart() const{ return m_htmlPart; }

    /**
     * <p>The message body, in HTML format, to use in email messages that are based on
     * the message template. We recommend using HTML format for email clients that
     * render HTML content. You can include links, formatted text, and more in an HTML
     * message.</p>
     */
    inline bool HtmlPartHasBeenSet() const { return m_htmlPartHasBeenSet; }

    /**
     * <p>The message body, in HTML format, to use in email messages that are based on
     * the message template. We recommend using HTML format for email clients that
     * render HTML content. You can include links, formatted text, and more in an HTML
     * message.</p>
     */
    inline void SetHtmlPart(const Aws::String& value) { m_htmlPartHasBeenSet = true; m_htmlPart = value; }

    /**
     * <p>The message body, in HTML format, to use in email messages that are based on
     * the message template. We recommend using HTML format for email clients that
     * render HTML content. You can include links, formatted text, and more in an HTML
     * message.</p>
     */
    inline void SetHtmlPart(Aws::String&& value) { m_htmlPartHasBeenSet = true; m_htmlPart = std::move(value); }

    /**
     * <p>The message body, in HTML format, to use in email messages that are based on
     * the message template. We recommend using HTML format for email clients that
     * render HTML content. You can include links, formatted text, and more in an HTML
     * message.</p>
     */
    inline void SetHtmlPart(const char* value) { m_htmlPartHasBeenSet = true; m_htmlPart.assign(value); }

    /**
     * <p>The message body, in HTML format, to use in email messages that are based on
     * the message template. We recommend using HTML format for email clients that
     * render HTML content. You can include links, formatted text, and more in an HTML
     * message.</p>
     */
    inline EmailTemplateRequest& WithHtmlPart(const Aws::String& value) { SetHtmlPart(value); return *this;}

    /**
     * <p>The message body, in HTML format, to use in email messages that are based on
     * the message template. We recommend using HTML format for email clients that
     * render HTML content. You can include links, formatted text, and more in an HTML
     * message.</p>
     */
    inline EmailTemplateRequest& WithHtmlPart(Aws::String&& value) { SetHtmlPart(std::move(value)); return *this;}

    /**
     * <p>The message body, in HTML format, to use in email messages that are based on
     * the message template. We recommend using HTML format for email clients that
     * render HTML content. You can include links, formatted text, and more in an HTML
     * message.</p>
     */
    inline EmailTemplateRequest& WithHtmlPart(const char* value) { SetHtmlPart(value); return *this;}


    /**
     * <p>The unique identifier for the recommender model to use for the message
     * template. Amazon Pinpoint uses this value to determine how to retrieve and
     * process data from a recommender model when it sends messages that use the
     * template, if the template contains message variables for recommendation
     * data.</p>
     */
    inline const Aws::String& GetRecommenderId() const{ return m_recommenderId; }

    /**
     * <p>The unique identifier for the recommender model to use for the message
     * template. Amazon Pinpoint uses this value to determine how to retrieve and
     * process data from a recommender model when it sends messages that use the
     * template, if the template contains message variables for recommendation
     * data.</p>
     */
    inline bool RecommenderIdHasBeenSet() const { return m_recommenderIdHasBeenSet; }

    /**
     * <p>The unique identifier for the recommender model to use for the message
     * template. Amazon Pinpoint uses this value to determine how to retrieve and
     * process data from a recommender model when it sends messages that use the
     * template, if the template contains message variables for recommendation
     * data.</p>
     */
    inline void SetRecommenderId(const Aws::String& value) { m_recommenderIdHasBeenSet = true; m_recommenderId = value; }

    /**
     * <p>The unique identifier for the recommender model to use for the message
     * template. Amazon Pinpoint uses this value to determine how to retrieve and
     * process data from a recommender model when it sends messages that use the
     * template, if the template contains message variables for recommendation
     * data.</p>
     */
    inline void SetRecommenderId(Aws::String&& value) { m_recommenderIdHasBeenSet = true; m_recommenderId = std::move(value); }

    /**
     * <p>The unique identifier for the recommender model to use for the message
     * template. Amazon Pinpoint uses this value to determine how to retrieve and
     * process data from a recommender model when it sends messages that use the
     * template, if the template contains message variables for recommendation
     * data.</p>
     */
    inline void SetRecommenderId(const char* value) { m_recommenderIdHasBeenSet = true; m_recommenderId.assign(value); }

    /**
     * <p>The unique identifier for the recommender model to use for the message
     * template. Amazon Pinpoint uses this value to determine how to retrieve and
     * process data from a recommender model when it sends messages that use the
     * template, if the template contains message variables for recommendation
     * data.</p>
     */
    inline EmailTemplateRequest& WithRecommenderId(const Aws::String& value) { SetRecommenderId(value); return *this;}

    /**
     * <p>The unique identifier for the recommender model to use for the message
     * template. Amazon Pinpoint uses this value to determine how to retrieve and
     * process data from a recommender model when it sends messages that use the
     * template, if the template contains message variables for recommendation
     * data.</p>
     */
    inline EmailTemplateRequest& WithRecommenderId(Aws::String&& value) { SetRecommenderId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the recommender model to use for the message
     * template. Amazon Pinpoint uses this value to determine how to retrieve and
     * process data from a recommender model when it sends messages that use the
     * template, if the template contains message variables for recommendation
     * data.</p>
     */
    inline EmailTemplateRequest& WithRecommenderId(const char* value) { SetRecommenderId(value); return *this;}


    /**
     * <p>The subject line, or title, to use in email messages that are based on the
     * message template.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }

    /**
     * <p>The subject line, or title, to use in email messages that are based on the
     * message template.</p>
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * <p>The subject line, or title, to use in email messages that are based on the
     * message template.</p>
     */
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>The subject line, or title, to use in email messages that are based on the
     * message template.</p>
     */
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * <p>The subject line, or title, to use in email messages that are based on the
     * message template.</p>
     */
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }

    /**
     * <p>The subject line, or title, to use in email messages that are based on the
     * message template.</p>
     */
    inline EmailTemplateRequest& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}

    /**
     * <p>The subject line, or title, to use in email messages that are based on the
     * message template.</p>
     */
    inline EmailTemplateRequest& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}

    /**
     * <p>The subject line, or title, to use in email messages that are based on the
     * message template.</p>
     */
    inline EmailTemplateRequest& WithSubject(const char* value) { SetSubject(value); return *this;}


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
    inline EmailTemplateRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline EmailTemplateRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline EmailTemplateRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline EmailTemplateRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline EmailTemplateRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline EmailTemplateRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline EmailTemplateRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline EmailTemplateRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline EmailTemplateRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


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
    inline EmailTemplateRequest& WithTemplateDescription(const Aws::String& value) { SetTemplateDescription(value); return *this;}

    /**
     * <p>A custom description of the message template.</p>
     */
    inline EmailTemplateRequest& WithTemplateDescription(Aws::String&& value) { SetTemplateDescription(std::move(value)); return *this;}

    /**
     * <p>A custom description of the message template.</p>
     */
    inline EmailTemplateRequest& WithTemplateDescription(const char* value) { SetTemplateDescription(value); return *this;}


    /**
     * <p>The message body, in plain text format, to use in email messages that are
     * based on the message template. We recommend using plain text format for email
     * clients that don't render HTML content and clients that are connected to
     * high-latency networks, such as mobile devices.</p>
     */
    inline const Aws::String& GetTextPart() const{ return m_textPart; }

    /**
     * <p>The message body, in plain text format, to use in email messages that are
     * based on the message template. We recommend using plain text format for email
     * clients that don't render HTML content and clients that are connected to
     * high-latency networks, such as mobile devices.</p>
     */
    inline bool TextPartHasBeenSet() const { return m_textPartHasBeenSet; }

    /**
     * <p>The message body, in plain text format, to use in email messages that are
     * based on the message template. We recommend using plain text format for email
     * clients that don't render HTML content and clients that are connected to
     * high-latency networks, such as mobile devices.</p>
     */
    inline void SetTextPart(const Aws::String& value) { m_textPartHasBeenSet = true; m_textPart = value; }

    /**
     * <p>The message body, in plain text format, to use in email messages that are
     * based on the message template. We recommend using plain text format for email
     * clients that don't render HTML content and clients that are connected to
     * high-latency networks, such as mobile devices.</p>
     */
    inline void SetTextPart(Aws::String&& value) { m_textPartHasBeenSet = true; m_textPart = std::move(value); }

    /**
     * <p>The message body, in plain text format, to use in email messages that are
     * based on the message template. We recommend using plain text format for email
     * clients that don't render HTML content and clients that are connected to
     * high-latency networks, such as mobile devices.</p>
     */
    inline void SetTextPart(const char* value) { m_textPartHasBeenSet = true; m_textPart.assign(value); }

    /**
     * <p>The message body, in plain text format, to use in email messages that are
     * based on the message template. We recommend using plain text format for email
     * clients that don't render HTML content and clients that are connected to
     * high-latency networks, such as mobile devices.</p>
     */
    inline EmailTemplateRequest& WithTextPart(const Aws::String& value) { SetTextPart(value); return *this;}

    /**
     * <p>The message body, in plain text format, to use in email messages that are
     * based on the message template. We recommend using plain text format for email
     * clients that don't render HTML content and clients that are connected to
     * high-latency networks, such as mobile devices.</p>
     */
    inline EmailTemplateRequest& WithTextPart(Aws::String&& value) { SetTextPart(std::move(value)); return *this;}

    /**
     * <p>The message body, in plain text format, to use in email messages that are
     * based on the message template. We recommend using plain text format for email
     * clients that don't render HTML content and clients that are connected to
     * high-latency networks, such as mobile devices.</p>
     */
    inline EmailTemplateRequest& WithTextPart(const char* value) { SetTextPart(value); return *this;}

  private:

    Aws::String m_defaultSubstitutions;
    bool m_defaultSubstitutionsHasBeenSet = false;

    Aws::String m_htmlPart;
    bool m_htmlPartHasBeenSet = false;

    Aws::String m_recommenderId;
    bool m_recommenderIdHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_templateDescription;
    bool m_templateDescriptionHasBeenSet = false;

    Aws::String m_textPart;
    bool m_textPartHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
