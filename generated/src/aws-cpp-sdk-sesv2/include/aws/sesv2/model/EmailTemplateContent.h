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
    AWS_SESV2_API EmailTemplateContent() = default;
    AWS_SESV2_API EmailTemplateContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API EmailTemplateContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The subject line of the email.</p>
     */
    inline const Aws::String& GetSubject() const { return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    template<typename SubjectT = Aws::String>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = Aws::String>
    EmailTemplateContent& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email body that will be visible to recipients whose email clients do not
     * display HTML.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    EmailTemplateContent& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTML body of the email.</p>
     */
    inline const Aws::String& GetHtml() const { return m_html; }
    inline bool HtmlHasBeenSet() const { return m_htmlHasBeenSet; }
    template<typename HtmlT = Aws::String>
    void SetHtml(HtmlT&& value) { m_htmlHasBeenSet = true; m_html = std::forward<HtmlT>(value); }
    template<typename HtmlT = Aws::String>
    EmailTemplateContent& WithHtml(HtmlT&& value) { SetHtml(std::forward<HtmlT>(value)); return *this;}
    ///@}
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
