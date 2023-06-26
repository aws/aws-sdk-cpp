/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>The content of the email, composed of a subject line, an HTML part, and a
   * text-only part.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/EmailTemplateContent">AWS
   * API Reference</a></p>
   */
  class EmailTemplateContent
  {
  public:
    AWS_SESV2_API EmailTemplateContent();
    AWS_SESV2_API EmailTemplateContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API EmailTemplateContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The subject line of the email.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }

    /**
     * <p>The subject line of the email.</p>
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * <p>The subject line of the email.</p>
     */
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>The subject line of the email.</p>
     */
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * <p>The subject line of the email.</p>
     */
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }

    /**
     * <p>The subject line of the email.</p>
     */
    inline EmailTemplateContent& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}

    /**
     * <p>The subject line of the email.</p>
     */
    inline EmailTemplateContent& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}

    /**
     * <p>The subject line of the email.</p>
     */
    inline EmailTemplateContent& WithSubject(const char* value) { SetSubject(value); return *this;}


    /**
     * <p>The email body that will be visible to recipients whose email clients do not
     * display HTML.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The email body that will be visible to recipients whose email clients do not
     * display HTML.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The email body that will be visible to recipients whose email clients do not
     * display HTML.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The email body that will be visible to recipients whose email clients do not
     * display HTML.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The email body that will be visible to recipients whose email clients do not
     * display HTML.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The email body that will be visible to recipients whose email clients do not
     * display HTML.</p>
     */
    inline EmailTemplateContent& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The email body that will be visible to recipients whose email clients do not
     * display HTML.</p>
     */
    inline EmailTemplateContent& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The email body that will be visible to recipients whose email clients do not
     * display HTML.</p>
     */
    inline EmailTemplateContent& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The HTML body of the email.</p>
     */
    inline const Aws::String& GetHtml() const{ return m_html; }

    /**
     * <p>The HTML body of the email.</p>
     */
    inline bool HtmlHasBeenSet() const { return m_htmlHasBeenSet; }

    /**
     * <p>The HTML body of the email.</p>
     */
    inline void SetHtml(const Aws::String& value) { m_htmlHasBeenSet = true; m_html = value; }

    /**
     * <p>The HTML body of the email.</p>
     */
    inline void SetHtml(Aws::String&& value) { m_htmlHasBeenSet = true; m_html = std::move(value); }

    /**
     * <p>The HTML body of the email.</p>
     */
    inline void SetHtml(const char* value) { m_htmlHasBeenSet = true; m_html.assign(value); }

    /**
     * <p>The HTML body of the email.</p>
     */
    inline EmailTemplateContent& WithHtml(const Aws::String& value) { SetHtml(value); return *this;}

    /**
     * <p>The HTML body of the email.</p>
     */
    inline EmailTemplateContent& WithHtml(Aws::String&& value) { SetHtml(std::move(value)); return *this;}

    /**
     * <p>The HTML body of the email.</p>
     */
    inline EmailTemplateContent& WithHtml(const char* value) { SetHtml(value); return *this;}

  private:

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::String m_html;
    bool m_htmlHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
