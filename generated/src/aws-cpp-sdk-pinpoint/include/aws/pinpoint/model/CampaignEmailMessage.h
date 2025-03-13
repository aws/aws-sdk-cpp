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
    AWS_PINPOINT_API CampaignEmailMessage() = default;
    AWS_PINPOINT_API CampaignEmailMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API CampaignEmailMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The body of the email for recipients whose email clients don't render HTML
     * content.</p>
     */
    inline const Aws::String& GetBody() const { return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    template<typename BodyT = Aws::String>
    void SetBody(BodyT&& value) { m_bodyHasBeenSet = true; m_body = std::forward<BodyT>(value); }
    template<typename BodyT = Aws::String>
    CampaignEmailMessage& WithBody(BodyT&& value) { SetBody(std::forward<BodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The verified email address to send the email from. The default address is the
     * FromAddress specified for the email channel for the application.</p>
     */
    inline const Aws::String& GetFromAddress() const { return m_fromAddress; }
    inline bool FromAddressHasBeenSet() const { return m_fromAddressHasBeenSet; }
    template<typename FromAddressT = Aws::String>
    void SetFromAddress(FromAddressT&& value) { m_fromAddressHasBeenSet = true; m_fromAddress = std::forward<FromAddressT>(value); }
    template<typename FromAddressT = Aws::String>
    CampaignEmailMessage& WithFromAddress(FromAddressT&& value) { SetFromAddress(std::forward<FromAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-campaigns-campaign-id.html#apps-application-id-campaigns-campaign-id-model-messageheader">MessageHeaders</a>
     * for the email. You can have up to 15 MessageHeaders for each email.</p>
     */
    inline const Aws::Vector<MessageHeader>& GetHeaders() const { return m_headers; }
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }
    template<typename HeadersT = Aws::Vector<MessageHeader>>
    void SetHeaders(HeadersT&& value) { m_headersHasBeenSet = true; m_headers = std::forward<HeadersT>(value); }
    template<typename HeadersT = Aws::Vector<MessageHeader>>
    CampaignEmailMessage& WithHeaders(HeadersT&& value) { SetHeaders(std::forward<HeadersT>(value)); return *this;}
    template<typename HeadersT = MessageHeader>
    CampaignEmailMessage& AddHeaders(HeadersT&& value) { m_headersHasBeenSet = true; m_headers.emplace_back(std::forward<HeadersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The body of the email, in HTML format, for recipients whose email clients
     * render HTML content.</p>
     */
    inline const Aws::String& GetHtmlBody() const { return m_htmlBody; }
    inline bool HtmlBodyHasBeenSet() const { return m_htmlBodyHasBeenSet; }
    template<typename HtmlBodyT = Aws::String>
    void SetHtmlBody(HtmlBodyT&& value) { m_htmlBodyHasBeenSet = true; m_htmlBody = std::forward<HtmlBodyT>(value); }
    template<typename HtmlBodyT = Aws::String>
    CampaignEmailMessage& WithHtmlBody(HtmlBodyT&& value) { SetHtmlBody(std::forward<HtmlBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subject line, or title, of the email.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    CampaignEmailMessage& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
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
