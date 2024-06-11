/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Specifies the content and "From" address for an email message that's sent to
   * recipients of a campaign.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CampaignEmailMessage">AWS
   * API Reference</a></p>
   */
  class CampaignEmailMessage
  {
  public:
    AWS_PINPOINT_API CampaignEmailMessage();
    AWS_PINPOINT_API CampaignEmailMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API CampaignEmailMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The body of the email for recipients whose email clients don't render HTML
     * content.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }
    inline CampaignEmailMessage& WithBody(const Aws::String& value) { SetBody(value); return *this;}
    inline CampaignEmailMessage& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}
    inline CampaignEmailMessage& WithBody(const char* value) { SetBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The verified email address to send the email from. The default address is the
     * FromAddress specified for the email channel for the application.</p>
     */
    inline const Aws::String& GetFromAddress() const{ return m_fromAddress; }
    inline bool FromAddressHasBeenSet() const { return m_fromAddressHasBeenSet; }
    inline void SetFromAddress(const Aws::String& value) { m_fromAddressHasBeenSet = true; m_fromAddress = value; }
    inline void SetFromAddress(Aws::String&& value) { m_fromAddressHasBeenSet = true; m_fromAddress = std::move(value); }
    inline void SetFromAddress(const char* value) { m_fromAddressHasBeenSet = true; m_fromAddress.assign(value); }
    inline CampaignEmailMessage& WithFromAddress(const Aws::String& value) { SetFromAddress(value); return *this;}
    inline CampaignEmailMessage& WithFromAddress(Aws::String&& value) { SetFromAddress(std::move(value)); return *this;}
    inline CampaignEmailMessage& WithFromAddress(const char* value) { SetFromAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-campaigns-campaign-id.html#apps-application-id-campaigns-campaign-id-model-messageheader">MessageHeaders</a>
     * for the email. You can have up to 15 MessageHeaders for each email.</p>
     */
    inline const Aws::Vector<MessageHeader>& GetHeaders() const{ return m_headers; }
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }
    inline void SetHeaders(const Aws::Vector<MessageHeader>& value) { m_headersHasBeenSet = true; m_headers = value; }
    inline void SetHeaders(Aws::Vector<MessageHeader>&& value) { m_headersHasBeenSet = true; m_headers = std::move(value); }
    inline CampaignEmailMessage& WithHeaders(const Aws::Vector<MessageHeader>& value) { SetHeaders(value); return *this;}
    inline CampaignEmailMessage& WithHeaders(Aws::Vector<MessageHeader>&& value) { SetHeaders(std::move(value)); return *this;}
    inline CampaignEmailMessage& AddHeaders(const MessageHeader& value) { m_headersHasBeenSet = true; m_headers.push_back(value); return *this; }
    inline CampaignEmailMessage& AddHeaders(MessageHeader&& value) { m_headersHasBeenSet = true; m_headers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The body of the email, in HTML format, for recipients whose email clients
     * render HTML content.</p>
     */
    inline const Aws::String& GetHtmlBody() const{ return m_htmlBody; }
    inline bool HtmlBodyHasBeenSet() const { return m_htmlBodyHasBeenSet; }
    inline void SetHtmlBody(const Aws::String& value) { m_htmlBodyHasBeenSet = true; m_htmlBody = value; }
    inline void SetHtmlBody(Aws::String&& value) { m_htmlBodyHasBeenSet = true; m_htmlBody = std::move(value); }
    inline void SetHtmlBody(const char* value) { m_htmlBodyHasBeenSet = true; m_htmlBody.assign(value); }
    inline CampaignEmailMessage& WithHtmlBody(const Aws::String& value) { SetHtmlBody(value); return *this;}
    inline CampaignEmailMessage& WithHtmlBody(Aws::String&& value) { SetHtmlBody(std::move(value)); return *this;}
    inline CampaignEmailMessage& WithHtmlBody(const char* value) { SetHtmlBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subject line, or title, of the email.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline CampaignEmailMessage& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline CampaignEmailMessage& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline CampaignEmailMessage& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}
  private:

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::String m_fromAddress;
    bool m_fromAddressHasBeenSet = false;

    Aws::Vector<MessageHeader> m_headers;
    bool m_headersHasBeenSet = false;

    Aws::String m_htmlBody;
    bool m_htmlBodyHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
