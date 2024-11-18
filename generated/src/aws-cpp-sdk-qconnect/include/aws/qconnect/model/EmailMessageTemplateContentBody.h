/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/MessageTemplateBodyContentProvider.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The body to use in email messages.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/EmailMessageTemplateContentBody">AWS
   * API Reference</a></p>
   */
  class EmailMessageTemplateContentBody
  {
  public:
    AWS_QCONNECT_API EmailMessageTemplateContentBody();
    AWS_QCONNECT_API EmailMessageTemplateContentBody(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API EmailMessageTemplateContentBody& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The message body, in HTML format, to use in email messages that are based on
     * the message template. We recommend using HTML format for email clients that
     * render HTML content. You can include links, formatted text, and more in an HTML
     * message.</p>
     */
    inline const MessageTemplateBodyContentProvider& GetHtml() const{ return m_html; }
    inline bool HtmlHasBeenSet() const { return m_htmlHasBeenSet; }
    inline void SetHtml(const MessageTemplateBodyContentProvider& value) { m_htmlHasBeenSet = true; m_html = value; }
    inline void SetHtml(MessageTemplateBodyContentProvider&& value) { m_htmlHasBeenSet = true; m_html = std::move(value); }
    inline EmailMessageTemplateContentBody& WithHtml(const MessageTemplateBodyContentProvider& value) { SetHtml(value); return *this;}
    inline EmailMessageTemplateContentBody& WithHtml(MessageTemplateBodyContentProvider&& value) { SetHtml(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message body, in plain text format, to use in email messages that are
     * based on the message template. We recommend using plain text format for email
     * clients that don't render HTML content and clients that are connected to
     * high-latency networks, such as mobile devices.</p>
     */
    inline const MessageTemplateBodyContentProvider& GetPlainText() const{ return m_plainText; }
    inline bool PlainTextHasBeenSet() const { return m_plainTextHasBeenSet; }
    inline void SetPlainText(const MessageTemplateBodyContentProvider& value) { m_plainTextHasBeenSet = true; m_plainText = value; }
    inline void SetPlainText(MessageTemplateBodyContentProvider&& value) { m_plainTextHasBeenSet = true; m_plainText = std::move(value); }
    inline EmailMessageTemplateContentBody& WithPlainText(const MessageTemplateBodyContentProvider& value) { SetPlainText(value); return *this;}
    inline EmailMessageTemplateContentBody& WithPlainText(MessageTemplateBodyContentProvider&& value) { SetPlainText(std::move(value)); return *this;}
    ///@}
  private:

    MessageTemplateBodyContentProvider m_html;
    bool m_htmlHasBeenSet = false;

    MessageTemplateBodyContentProvider m_plainText;
    bool m_plainTextHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
