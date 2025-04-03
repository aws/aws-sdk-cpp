/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/Message.h>
#include <aws/sesv2/model/RawMessage.h>
#include <aws/sesv2/model/Template.h>
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
   * <p>An object that defines the entire content of the email, including the message
   * headers, body content, and attachments. For a simple email message, you specify
   * the subject and provide both text and HTML versions of the message body. You can
   * also add attachments to simple and templated messages. For a raw message, you
   * provide a complete MIME-formatted message, which can include custom headers and
   * attachments.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/EmailContent">AWS
   * API Reference</a></p>
   */
  class EmailContent
  {
  public:
    AWS_SESV2_API EmailContent() = default;
    AWS_SESV2_API EmailContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API EmailContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The simple email message. The message consists of a subject, message body and
     * attachments list.</p>
     */
    inline const Message& GetSimple() const { return m_simple; }
    inline bool SimpleHasBeenSet() const { return m_simpleHasBeenSet; }
    template<typename SimpleT = Message>
    void SetSimple(SimpleT&& value) { m_simpleHasBeenSet = true; m_simple = std::forward<SimpleT>(value); }
    template<typename SimpleT = Message>
    EmailContent& WithSimple(SimpleT&& value) { SetSimple(std::forward<SimpleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The raw email message. The message has to meet the following criteria:</p>
     * <ul> <li> <p>The message has to contain a header and a body, separated by one
     * blank line.</p> </li> <li> <p>All of the required header fields must be present
     * in the message.</p> </li> <li> <p>Each part of a multipart MIME message must be
     * formatted properly.</p> </li> <li> <p>If you include attachments, they must be
     * in a file format that the Amazon SES API v2 supports. </p> </li> <li> <p>The raw
     * data of the message needs to base64-encoded if you are accessing Amazon SES
     * directly through the HTTPS interface. If you are accessing Amazon SES using an
     * Amazon Web Services SDK, the SDK takes care of the base 64-encoding for you.</p>
     * </li> <li> <p>If any of the MIME parts in your message contain content that is
     * outside of the 7-bit ASCII character range, you should encode that content to
     * ensure that recipients' email clients render the message properly.</p> </li>
     * <li> <p>The length of any single line of text in the message can't exceed 1,000
     * characters. This restriction is defined in <a
     * href="https://tools.ietf.org/html/rfc5321">RFC 5321</a>.</p> </li> </ul>
     */
    inline const RawMessage& GetRaw() const { return m_raw; }
    inline bool RawHasBeenSet() const { return m_rawHasBeenSet; }
    template<typename RawT = RawMessage>
    void SetRaw(RawT&& value) { m_rawHasBeenSet = true; m_raw = std::forward<RawT>(value); }
    template<typename RawT = RawMessage>
    EmailContent& WithRaw(RawT&& value) { SetRaw(std::forward<RawT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template to use for the email message.</p>
     */
    inline const Template& GetTemplate() const { return m_template; }
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }
    template<typename TemplateT = Template>
    void SetTemplate(TemplateT&& value) { m_templateHasBeenSet = true; m_template = std::forward<TemplateT>(value); }
    template<typename TemplateT = Template>
    EmailContent& WithTemplate(TemplateT&& value) { SetTemplate(std::forward<TemplateT>(value)); return *this;}
    ///@}
  private:

    Message m_simple;
    bool m_simpleHasBeenSet = false;

    RawMessage m_raw;
    bool m_rawHasBeenSet = false;

    Template m_template;
    bool m_templateHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
