/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/model/Content.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>Represents the body of the email message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/Body">AWS
   * API Reference</a></p>
   */
  class Body
  {
  public:
    AWS_PINPOINTEMAIL_API Body();
    AWS_PINPOINTEMAIL_API Body(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Body& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that represents the version of the message that is displayed in
     * email clients that don't support HTML, or clients where the recipient has
     * disabled HTML rendering.</p>
     */
    inline const Content& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Content& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Content&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline Body& WithText(const Content& value) { SetText(value); return *this;}
    inline Body& WithText(Content&& value) { SetText(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents the version of the message that is displayed in
     * email clients that support HTML. HTML messages can include formatted text,
     * hyperlinks, images, and more. </p>
     */
    inline const Content& GetHtml() const{ return m_html; }
    inline bool HtmlHasBeenSet() const { return m_htmlHasBeenSet; }
    inline void SetHtml(const Content& value) { m_htmlHasBeenSet = true; m_html = value; }
    inline void SetHtml(Content&& value) { m_htmlHasBeenSet = true; m_html = std::move(value); }
    inline Body& WithHtml(const Content& value) { SetHtml(value); return *this;}
    inline Body& WithHtml(Content&& value) { SetHtml(std::move(value)); return *this;}
    ///@}
  private:

    Content m_text;
    bool m_textHasBeenSet = false;

    Content m_html;
    bool m_htmlHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
