/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/Content.h>
#include <aws/sesv2/model/Body.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/MessageHeader.h>
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
   * <p>Represents the email message that you're sending. The <code>Message</code>
   * object consists of a subject line and a message body.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/Message">AWS
   * API Reference</a></p>
   */
  class Message
  {
  public:
    AWS_SESV2_API Message();
    AWS_SESV2_API Message(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Message& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The subject line of the email. The subject line can only contain 7-bit ASCII
     * characters. However, you can specify non-ASCII characters in the subject line by
     * using encoded-word syntax, as described in <a
     * href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>.</p>
     */
    inline const Content& GetSubject() const{ return m_subject; }

    /**
     * <p>The subject line of the email. The subject line can only contain 7-bit ASCII
     * characters. However, you can specify non-ASCII characters in the subject line by
     * using encoded-word syntax, as described in <a
     * href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>.</p>
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * <p>The subject line of the email. The subject line can only contain 7-bit ASCII
     * characters. However, you can specify non-ASCII characters in the subject line by
     * using encoded-word syntax, as described in <a
     * href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>.</p>
     */
    inline void SetSubject(const Content& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>The subject line of the email. The subject line can only contain 7-bit ASCII
     * characters. However, you can specify non-ASCII characters in the subject line by
     * using encoded-word syntax, as described in <a
     * href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>.</p>
     */
    inline void SetSubject(Content&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * <p>The subject line of the email. The subject line can only contain 7-bit ASCII
     * characters. However, you can specify non-ASCII characters in the subject line by
     * using encoded-word syntax, as described in <a
     * href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>.</p>
     */
    inline Message& WithSubject(const Content& value) { SetSubject(value); return *this;}

    /**
     * <p>The subject line of the email. The subject line can only contain 7-bit ASCII
     * characters. However, you can specify non-ASCII characters in the subject line by
     * using encoded-word syntax, as described in <a
     * href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>.</p>
     */
    inline Message& WithSubject(Content&& value) { SetSubject(std::move(value)); return *this;}


    /**
     * <p>The body of the message. You can specify an HTML version of the message, a
     * text-only version of the message, or both.</p>
     */
    inline const Body& GetBody() const{ return m_body; }

    /**
     * <p>The body of the message. You can specify an HTML version of the message, a
     * text-only version of the message, or both.</p>
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * <p>The body of the message. You can specify an HTML version of the message, a
     * text-only version of the message, or both.</p>
     */
    inline void SetBody(const Body& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>The body of the message. You can specify an HTML version of the message, a
     * text-only version of the message, or both.</p>
     */
    inline void SetBody(Body&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * <p>The body of the message. You can specify an HTML version of the message, a
     * text-only version of the message, or both.</p>
     */
    inline Message& WithBody(const Body& value) { SetBody(value); return *this;}

    /**
     * <p>The body of the message. You can specify an HTML version of the message, a
     * text-only version of the message, or both.</p>
     */
    inline Message& WithBody(Body&& value) { SetBody(std::move(value)); return *this;}


    /**
     * <p>The list of message headers that will be added to the email message.</p>
     */
    inline const Aws::Vector<MessageHeader>& GetHeaders() const{ return m_headers; }

    /**
     * <p>The list of message headers that will be added to the email message.</p>
     */
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }

    /**
     * <p>The list of message headers that will be added to the email message.</p>
     */
    inline void SetHeaders(const Aws::Vector<MessageHeader>& value) { m_headersHasBeenSet = true; m_headers = value; }

    /**
     * <p>The list of message headers that will be added to the email message.</p>
     */
    inline void SetHeaders(Aws::Vector<MessageHeader>&& value) { m_headersHasBeenSet = true; m_headers = std::move(value); }

    /**
     * <p>The list of message headers that will be added to the email message.</p>
     */
    inline Message& WithHeaders(const Aws::Vector<MessageHeader>& value) { SetHeaders(value); return *this;}

    /**
     * <p>The list of message headers that will be added to the email message.</p>
     */
    inline Message& WithHeaders(Aws::Vector<MessageHeader>&& value) { SetHeaders(std::move(value)); return *this;}

    /**
     * <p>The list of message headers that will be added to the email message.</p>
     */
    inline Message& AddHeaders(const MessageHeader& value) { m_headersHasBeenSet = true; m_headers.push_back(value); return *this; }

    /**
     * <p>The list of message headers that will be added to the email message.</p>
     */
    inline Message& AddHeaders(MessageHeader&& value) { m_headersHasBeenSet = true; m_headers.push_back(std::move(value)); return *this; }

  private:

    Content m_subject;
    bool m_subjectHasBeenSet = false;

    Body m_body;
    bool m_bodyHasBeenSet = false;

    Aws::Vector<MessageHeader> m_headers;
    bool m_headersHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
