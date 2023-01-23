/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/SimpleEmailPart.h>
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
   * <p>Specifies the contents of an email message, composed of a subject, a text
   * part, and an HTML part.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SimpleEmail">AWS
   * API Reference</a></p>
   */
  class SimpleEmail
  {
  public:
    AWS_PINPOINT_API SimpleEmail();
    AWS_PINPOINT_API SimpleEmail(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API SimpleEmail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The body of the email message, in HTML format. We recommend using HTML format
     * for email clients that render HTML content. You can include links, formatted
     * text, and more in an HTML message.</p>
     */
    inline const SimpleEmailPart& GetHtmlPart() const{ return m_htmlPart; }

    /**
     * <p>The body of the email message, in HTML format. We recommend using HTML format
     * for email clients that render HTML content. You can include links, formatted
     * text, and more in an HTML message.</p>
     */
    inline bool HtmlPartHasBeenSet() const { return m_htmlPartHasBeenSet; }

    /**
     * <p>The body of the email message, in HTML format. We recommend using HTML format
     * for email clients that render HTML content. You can include links, formatted
     * text, and more in an HTML message.</p>
     */
    inline void SetHtmlPart(const SimpleEmailPart& value) { m_htmlPartHasBeenSet = true; m_htmlPart = value; }

    /**
     * <p>The body of the email message, in HTML format. We recommend using HTML format
     * for email clients that render HTML content. You can include links, formatted
     * text, and more in an HTML message.</p>
     */
    inline void SetHtmlPart(SimpleEmailPart&& value) { m_htmlPartHasBeenSet = true; m_htmlPart = std::move(value); }

    /**
     * <p>The body of the email message, in HTML format. We recommend using HTML format
     * for email clients that render HTML content. You can include links, formatted
     * text, and more in an HTML message.</p>
     */
    inline SimpleEmail& WithHtmlPart(const SimpleEmailPart& value) { SetHtmlPart(value); return *this;}

    /**
     * <p>The body of the email message, in HTML format. We recommend using HTML format
     * for email clients that render HTML content. You can include links, formatted
     * text, and more in an HTML message.</p>
     */
    inline SimpleEmail& WithHtmlPart(SimpleEmailPart&& value) { SetHtmlPart(std::move(value)); return *this;}


    /**
     * <p>The subject line, or title, of the email.</p>
     */
    inline const SimpleEmailPart& GetSubject() const{ return m_subject; }

    /**
     * <p>The subject line, or title, of the email.</p>
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * <p>The subject line, or title, of the email.</p>
     */
    inline void SetSubject(const SimpleEmailPart& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>The subject line, or title, of the email.</p>
     */
    inline void SetSubject(SimpleEmailPart&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * <p>The subject line, or title, of the email.</p>
     */
    inline SimpleEmail& WithSubject(const SimpleEmailPart& value) { SetSubject(value); return *this;}

    /**
     * <p>The subject line, or title, of the email.</p>
     */
    inline SimpleEmail& WithSubject(SimpleEmailPart&& value) { SetSubject(std::move(value)); return *this;}


    /**
     * <p>The body of the email message, in plain text format. We recommend using plain
     * text format for email clients that don't render HTML content and clients that
     * are connected to high-latency networks, such as mobile devices.</p>
     */
    inline const SimpleEmailPart& GetTextPart() const{ return m_textPart; }

    /**
     * <p>The body of the email message, in plain text format. We recommend using plain
     * text format for email clients that don't render HTML content and clients that
     * are connected to high-latency networks, such as mobile devices.</p>
     */
    inline bool TextPartHasBeenSet() const { return m_textPartHasBeenSet; }

    /**
     * <p>The body of the email message, in plain text format. We recommend using plain
     * text format for email clients that don't render HTML content and clients that
     * are connected to high-latency networks, such as mobile devices.</p>
     */
    inline void SetTextPart(const SimpleEmailPart& value) { m_textPartHasBeenSet = true; m_textPart = value; }

    /**
     * <p>The body of the email message, in plain text format. We recommend using plain
     * text format for email clients that don't render HTML content and clients that
     * are connected to high-latency networks, such as mobile devices.</p>
     */
    inline void SetTextPart(SimpleEmailPart&& value) { m_textPartHasBeenSet = true; m_textPart = std::move(value); }

    /**
     * <p>The body of the email message, in plain text format. We recommend using plain
     * text format for email clients that don't render HTML content and clients that
     * are connected to high-latency networks, such as mobile devices.</p>
     */
    inline SimpleEmail& WithTextPart(const SimpleEmailPart& value) { SetTextPart(value); return *this;}

    /**
     * <p>The body of the email message, in plain text format. We recommend using plain
     * text format for email clients that don't render HTML content and clients that
     * are connected to high-latency networks, such as mobile devices.</p>
     */
    inline SimpleEmail& WithTextPart(SimpleEmailPart&& value) { SetTextPart(std::move(value)); return *this;}

  private:

    SimpleEmailPart m_htmlPart;
    bool m_htmlPartHasBeenSet = false;

    SimpleEmailPart m_subject;
    bool m_subjectHasBeenSet = false;

    SimpleEmailPart m_textPart;
    bool m_textPartHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
