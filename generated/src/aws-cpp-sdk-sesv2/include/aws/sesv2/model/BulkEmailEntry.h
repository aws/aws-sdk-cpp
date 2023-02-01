/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/Destination.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/ReplacementEmailContent.h>
#include <aws/sesv2/model/MessageTag.h>
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

  class BulkEmailEntry
  {
  public:
    AWS_SESV2_API BulkEmailEntry();
    AWS_SESV2_API BulkEmailEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API BulkEmailEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents the destination of the message, consisting of To:, CC:, and BCC:
     * fields.</p>  <p>Amazon SES does not support the SMTPUTF8 extension, as
     * described in <a href="https://tools.ietf.org/html/rfc6531">RFC6531</a>. For this
     * reason, the local part of a destination email address (the part of the email
     * address that precedes the @ sign) may only contain <a
     * href="https://en.wikipedia.org/wiki/Email_address#Local-part">7-bit ASCII
     * characters</a>. If the domain part of an address (the part after the @ sign)
     * contains non-ASCII characters, they must be encoded using Punycode, as described
     * in <a href="https://tools.ietf.org/html/rfc3492.html">RFC3492</a>.</p> 
     */
    inline const Destination& GetDestination() const{ return m_destination; }

    /**
     * <p>Represents the destination of the message, consisting of To:, CC:, and BCC:
     * fields.</p>  <p>Amazon SES does not support the SMTPUTF8 extension, as
     * described in <a href="https://tools.ietf.org/html/rfc6531">RFC6531</a>. For this
     * reason, the local part of a destination email address (the part of the email
     * address that precedes the @ sign) may only contain <a
     * href="https://en.wikipedia.org/wiki/Email_address#Local-part">7-bit ASCII
     * characters</a>. If the domain part of an address (the part after the @ sign)
     * contains non-ASCII characters, they must be encoded using Punycode, as described
     * in <a href="https://tools.ietf.org/html/rfc3492.html">RFC3492</a>.</p> 
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>Represents the destination of the message, consisting of To:, CC:, and BCC:
     * fields.</p>  <p>Amazon SES does not support the SMTPUTF8 extension, as
     * described in <a href="https://tools.ietf.org/html/rfc6531">RFC6531</a>. For this
     * reason, the local part of a destination email address (the part of the email
     * address that precedes the @ sign) may only contain <a
     * href="https://en.wikipedia.org/wiki/Email_address#Local-part">7-bit ASCII
     * characters</a>. If the domain part of an address (the part after the @ sign)
     * contains non-ASCII characters, they must be encoded using Punycode, as described
     * in <a href="https://tools.ietf.org/html/rfc3492.html">RFC3492</a>.</p> 
     */
    inline void SetDestination(const Destination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>Represents the destination of the message, consisting of To:, CC:, and BCC:
     * fields.</p>  <p>Amazon SES does not support the SMTPUTF8 extension, as
     * described in <a href="https://tools.ietf.org/html/rfc6531">RFC6531</a>. For this
     * reason, the local part of a destination email address (the part of the email
     * address that precedes the @ sign) may only contain <a
     * href="https://en.wikipedia.org/wiki/Email_address#Local-part">7-bit ASCII
     * characters</a>. If the domain part of an address (the part after the @ sign)
     * contains non-ASCII characters, they must be encoded using Punycode, as described
     * in <a href="https://tools.ietf.org/html/rfc3492.html">RFC3492</a>.</p> 
     */
    inline void SetDestination(Destination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>Represents the destination of the message, consisting of To:, CC:, and BCC:
     * fields.</p>  <p>Amazon SES does not support the SMTPUTF8 extension, as
     * described in <a href="https://tools.ietf.org/html/rfc6531">RFC6531</a>. For this
     * reason, the local part of a destination email address (the part of the email
     * address that precedes the @ sign) may only contain <a
     * href="https://en.wikipedia.org/wiki/Email_address#Local-part">7-bit ASCII
     * characters</a>. If the domain part of an address (the part after the @ sign)
     * contains non-ASCII characters, they must be encoded using Punycode, as described
     * in <a href="https://tools.ietf.org/html/rfc3492.html">RFC3492</a>.</p> 
     */
    inline BulkEmailEntry& WithDestination(const Destination& value) { SetDestination(value); return *this;}

    /**
     * <p>Represents the destination of the message, consisting of To:, CC:, and BCC:
     * fields.</p>  <p>Amazon SES does not support the SMTPUTF8 extension, as
     * described in <a href="https://tools.ietf.org/html/rfc6531">RFC6531</a>. For this
     * reason, the local part of a destination email address (the part of the email
     * address that precedes the @ sign) may only contain <a
     * href="https://en.wikipedia.org/wiki/Email_address#Local-part">7-bit ASCII
     * characters</a>. If the domain part of an address (the part after the @ sign)
     * contains non-ASCII characters, they must be encoded using Punycode, as described
     * in <a href="https://tools.ietf.org/html/rfc3492.html">RFC3492</a>.</p> 
     */
    inline BulkEmailEntry& WithDestination(Destination&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendBulkTemplatedEmail</code> operation. Tags
     * correspond to characteristics of the email that you define, so that you can
     * publish email sending events.</p>
     */
    inline const Aws::Vector<MessageTag>& GetReplacementTags() const{ return m_replacementTags; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendBulkTemplatedEmail</code> operation. Tags
     * correspond to characteristics of the email that you define, so that you can
     * publish email sending events.</p>
     */
    inline bool ReplacementTagsHasBeenSet() const { return m_replacementTagsHasBeenSet; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendBulkTemplatedEmail</code> operation. Tags
     * correspond to characteristics of the email that you define, so that you can
     * publish email sending events.</p>
     */
    inline void SetReplacementTags(const Aws::Vector<MessageTag>& value) { m_replacementTagsHasBeenSet = true; m_replacementTags = value; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendBulkTemplatedEmail</code> operation. Tags
     * correspond to characteristics of the email that you define, so that you can
     * publish email sending events.</p>
     */
    inline void SetReplacementTags(Aws::Vector<MessageTag>&& value) { m_replacementTagsHasBeenSet = true; m_replacementTags = std::move(value); }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendBulkTemplatedEmail</code> operation. Tags
     * correspond to characteristics of the email that you define, so that you can
     * publish email sending events.</p>
     */
    inline BulkEmailEntry& WithReplacementTags(const Aws::Vector<MessageTag>& value) { SetReplacementTags(value); return *this;}

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendBulkTemplatedEmail</code> operation. Tags
     * correspond to characteristics of the email that you define, so that you can
     * publish email sending events.</p>
     */
    inline BulkEmailEntry& WithReplacementTags(Aws::Vector<MessageTag>&& value) { SetReplacementTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendBulkTemplatedEmail</code> operation. Tags
     * correspond to characteristics of the email that you define, so that you can
     * publish email sending events.</p>
     */
    inline BulkEmailEntry& AddReplacementTags(const MessageTag& value) { m_replacementTagsHasBeenSet = true; m_replacementTags.push_back(value); return *this; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendBulkTemplatedEmail</code> operation. Tags
     * correspond to characteristics of the email that you define, so that you can
     * publish email sending events.</p>
     */
    inline BulkEmailEntry& AddReplacementTags(MessageTag&& value) { m_replacementTagsHasBeenSet = true; m_replacementTags.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>ReplacementEmailContent</code> associated with a
     * <code>BulkEmailEntry</code>.</p>
     */
    inline const ReplacementEmailContent& GetReplacementEmailContent() const{ return m_replacementEmailContent; }

    /**
     * <p>The <code>ReplacementEmailContent</code> associated with a
     * <code>BulkEmailEntry</code>.</p>
     */
    inline bool ReplacementEmailContentHasBeenSet() const { return m_replacementEmailContentHasBeenSet; }

    /**
     * <p>The <code>ReplacementEmailContent</code> associated with a
     * <code>BulkEmailEntry</code>.</p>
     */
    inline void SetReplacementEmailContent(const ReplacementEmailContent& value) { m_replacementEmailContentHasBeenSet = true; m_replacementEmailContent = value; }

    /**
     * <p>The <code>ReplacementEmailContent</code> associated with a
     * <code>BulkEmailEntry</code>.</p>
     */
    inline void SetReplacementEmailContent(ReplacementEmailContent&& value) { m_replacementEmailContentHasBeenSet = true; m_replacementEmailContent = std::move(value); }

    /**
     * <p>The <code>ReplacementEmailContent</code> associated with a
     * <code>BulkEmailEntry</code>.</p>
     */
    inline BulkEmailEntry& WithReplacementEmailContent(const ReplacementEmailContent& value) { SetReplacementEmailContent(value); return *this;}

    /**
     * <p>The <code>ReplacementEmailContent</code> associated with a
     * <code>BulkEmailEntry</code>.</p>
     */
    inline BulkEmailEntry& WithReplacementEmailContent(ReplacementEmailContent&& value) { SetReplacementEmailContent(std::move(value)); return *this;}

  private:

    Destination m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::Vector<MessageTag> m_replacementTags;
    bool m_replacementTagsHasBeenSet = false;

    ReplacementEmailContent m_replacementEmailContent;
    bool m_replacementEmailContentHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
