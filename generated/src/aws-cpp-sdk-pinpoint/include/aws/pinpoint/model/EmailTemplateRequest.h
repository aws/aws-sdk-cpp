/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/MessageHeader.h>
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
    AWS_PINPOINT_API EmailTemplateRequest() = default;
    AWS_PINPOINT_API EmailTemplateRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EmailTemplateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A JSON object that specifies the default values to use for message variables
     * in the message template. This object is a set of key-value pairs. Each key
     * defines a message variable in the template. The corresponding value defines the
     * default value for that variable. When you create a message that's based on the
     * template, you can override these defaults with message-specific and
     * address-specific variables and values.</p>
     */
    inline const Aws::String& GetDefaultSubstitutions() const { return m_defaultSubstitutions; }
    inline bool DefaultSubstitutionsHasBeenSet() const { return m_defaultSubstitutionsHasBeenSet; }
    template<typename DefaultSubstitutionsT = Aws::String>
    void SetDefaultSubstitutions(DefaultSubstitutionsT&& value) { m_defaultSubstitutionsHasBeenSet = true; m_defaultSubstitutions = std::forward<DefaultSubstitutionsT>(value); }
    template<typename DefaultSubstitutionsT = Aws::String>
    EmailTemplateRequest& WithDefaultSubstitutions(DefaultSubstitutionsT&& value) { SetDefaultSubstitutions(std::forward<DefaultSubstitutionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message body, in HTML format, to use in email messages that are based on
     * the message template. We recommend using HTML format for email clients that
     * render HTML content. You can include links, formatted text, and more in an HTML
     * message.</p>
     */
    inline const Aws::String& GetHtmlPart() const { return m_htmlPart; }
    inline bool HtmlPartHasBeenSet() const { return m_htmlPartHasBeenSet; }
    template<typename HtmlPartT = Aws::String>
    void SetHtmlPart(HtmlPartT&& value) { m_htmlPartHasBeenSet = true; m_htmlPart = std::forward<HtmlPartT>(value); }
    template<typename HtmlPartT = Aws::String>
    EmailTemplateRequest& WithHtmlPart(HtmlPartT&& value) { SetHtmlPart(std::forward<HtmlPartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the recommender model to use for the message
     * template. Amazon Pinpoint uses this value to determine how to retrieve and
     * process data from a recommender model when it sends messages that use the
     * template, if the template contains message variables for recommendation
     * data.</p>
     */
    inline const Aws::String& GetRecommenderId() const { return m_recommenderId; }
    inline bool RecommenderIdHasBeenSet() const { return m_recommenderIdHasBeenSet; }
    template<typename RecommenderIdT = Aws::String>
    void SetRecommenderId(RecommenderIdT&& value) { m_recommenderIdHasBeenSet = true; m_recommenderId = std::forward<RecommenderIdT>(value); }
    template<typename RecommenderIdT = Aws::String>
    EmailTemplateRequest& WithRecommenderId(RecommenderIdT&& value) { SetRecommenderId(std::forward<RecommenderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subject line, or title, to use in email messages that are based on the
     * message template.</p>
     */
    inline const Aws::String& GetSubject() const { return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    template<typename SubjectT = Aws::String>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = Aws::String>
    EmailTemplateRequest& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/templates-template-name-email.html#templates-template-name-email-model-messageheader">MessageHeaders</a>
     * for the email. You can have up to 15 Headers.</p>
     */
    inline const Aws::Vector<MessageHeader>& GetHeaders() const { return m_headers; }
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }
    template<typename HeadersT = Aws::Vector<MessageHeader>>
    void SetHeaders(HeadersT&& value) { m_headersHasBeenSet = true; m_headers = std::forward<HeadersT>(value); }
    template<typename HeadersT = Aws::Vector<MessageHeader>>
    EmailTemplateRequest& WithHeaders(HeadersT&& value) { SetHeaders(std::forward<HeadersT>(value)); return *this;}
    template<typename HeadersT = MessageHeader>
    EmailTemplateRequest& AddHeaders(HeadersT&& value) { m_headersHasBeenSet = true; m_headers.emplace_back(std::forward<HeadersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>As of <b>22-05-2023</b> tags has been deprecated for update operations.
     * After this date any value in tags is not processed and an error code is not
     * returned. To manage tags we recommend using either <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/tags-resource-arn.html">Tags</a>
     * in the <i>API Reference for Amazon Pinpoint</i>, <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/resourcegroupstaggingapi/index.html">resourcegroupstaggingapi</a>
     * commands in the <i>AWS Command Line Interface Documentation</i> or <a
     * href="https://sdk.amazonaws.com/java/api/latest/software/amazon/awssdk/services/resourcegroupstaggingapi/package-summary.html">resourcegroupstaggingapi</a>
     * in the <i>AWS SDK</i>.</p> <p>(Deprecated) A string-to-string map of
     * key-value pairs that defines the tags to associate with the message template.
     * Each tag consists of a required tag key and an associated tag value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    EmailTemplateRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    EmailTemplateRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A custom description of the message template.</p>
     */
    inline const Aws::String& GetTemplateDescription() const { return m_templateDescription; }
    inline bool TemplateDescriptionHasBeenSet() const { return m_templateDescriptionHasBeenSet; }
    template<typename TemplateDescriptionT = Aws::String>
    void SetTemplateDescription(TemplateDescriptionT&& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = std::forward<TemplateDescriptionT>(value); }
    template<typename TemplateDescriptionT = Aws::String>
    EmailTemplateRequest& WithTemplateDescription(TemplateDescriptionT&& value) { SetTemplateDescription(std::forward<TemplateDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message body, in plain text format, to use in email messages that are
     * based on the message template. We recommend using plain text format for email
     * clients that don't render HTML content and clients that are connected to
     * high-latency networks, such as mobile devices.</p>
     */
    inline const Aws::String& GetTextPart() const { return m_textPart; }
    inline bool TextPartHasBeenSet() const { return m_textPartHasBeenSet; }
    template<typename TextPartT = Aws::String>
    void SetTextPart(TextPartT&& value) { m_textPartHasBeenSet = true; m_textPart = std::forward<TextPartT>(value); }
    template<typename TextPartT = Aws::String>
    EmailTemplateRequest& WithTextPart(TextPartT&& value) { SetTextPart(std::forward<TextPartT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_defaultSubstitutions;
    bool m_defaultSubstitutionsHasBeenSet = false;

    Aws::String m_htmlPart;
    bool m_htmlPartHasBeenSet = false;

    Aws::String m_recommenderId;
    bool m_recommenderIdHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::Vector<MessageHeader> m_headers;
    bool m_headersHasBeenSet = false;

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
