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

  class BulkEmailEntry
  {
  public:
    AWS_SESV2_API BulkEmailEntry() = default;
    AWS_SESV2_API BulkEmailEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API BulkEmailEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
    inline const Destination& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Destination>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Destination>
    BulkEmailEntry& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendBulkTemplatedEmail</code> operation. Tags
     * correspond to characteristics of the email that you define, so that you can
     * publish email sending events.</p>
     */
    inline const Aws::Vector<MessageTag>& GetReplacementTags() const { return m_replacementTags; }
    inline bool ReplacementTagsHasBeenSet() const { return m_replacementTagsHasBeenSet; }
    template<typename ReplacementTagsT = Aws::Vector<MessageTag>>
    void SetReplacementTags(ReplacementTagsT&& value) { m_replacementTagsHasBeenSet = true; m_replacementTags = std::forward<ReplacementTagsT>(value); }
    template<typename ReplacementTagsT = Aws::Vector<MessageTag>>
    BulkEmailEntry& WithReplacementTags(ReplacementTagsT&& value) { SetReplacementTags(std::forward<ReplacementTagsT>(value)); return *this;}
    template<typename ReplacementTagsT = MessageTag>
    BulkEmailEntry& AddReplacementTags(ReplacementTagsT&& value) { m_replacementTagsHasBeenSet = true; m_replacementTags.emplace_back(std::forward<ReplacementTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>ReplacementEmailContent</code> associated with a
     * <code>BulkEmailEntry</code>.</p>
     */
    inline const ReplacementEmailContent& GetReplacementEmailContent() const { return m_replacementEmailContent; }
    inline bool ReplacementEmailContentHasBeenSet() const { return m_replacementEmailContentHasBeenSet; }
    template<typename ReplacementEmailContentT = ReplacementEmailContent>
    void SetReplacementEmailContent(ReplacementEmailContentT&& value) { m_replacementEmailContentHasBeenSet = true; m_replacementEmailContent = std::forward<ReplacementEmailContentT>(value); }
    template<typename ReplacementEmailContentT = ReplacementEmailContent>
    BulkEmailEntry& WithReplacementEmailContent(ReplacementEmailContentT&& value) { SetReplacementEmailContent(std::forward<ReplacementEmailContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of message headers associated with the <code>BulkEmailEntry</code>
     * data type.</p> <ul> <li> <p>Headers Not Present in <code>BulkEmailEntry</code>:
     * If a header is specified in <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference-V2/API_Template.html">
     * <code>Template</code> </a> but not in <code>BulkEmailEntry</code>, the header
     * from <code>Template</code> will be added to the outgoing email.</p> </li> <li>
     * <p>Headers Present in <code>BulkEmailEntry</code>: If a header is specified in
     * <code>BulkEmailEntry</code>, it takes precedence over any header of the same
     * name specified in <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference-V2/API_Template.html">
     * <code>Template</code> </a>:</p> <ul> <li> <p>If the header is also defined
     * within <code>Template</code>, the value from <code>BulkEmailEntry</code> will
     * replace the header's value in the email.</p> </li> <li> <p>If the header is not
     * defined within <code>Template</code>, it will simply be added to the email as
     * specified in <code>BulkEmailEntry</code>.</p> </li> </ul> </li> </ul>
     */
    inline const Aws::Vector<MessageHeader>& GetReplacementHeaders() const { return m_replacementHeaders; }
    inline bool ReplacementHeadersHasBeenSet() const { return m_replacementHeadersHasBeenSet; }
    template<typename ReplacementHeadersT = Aws::Vector<MessageHeader>>
    void SetReplacementHeaders(ReplacementHeadersT&& value) { m_replacementHeadersHasBeenSet = true; m_replacementHeaders = std::forward<ReplacementHeadersT>(value); }
    template<typename ReplacementHeadersT = Aws::Vector<MessageHeader>>
    BulkEmailEntry& WithReplacementHeaders(ReplacementHeadersT&& value) { SetReplacementHeaders(std::forward<ReplacementHeadersT>(value)); return *this;}
    template<typename ReplacementHeadersT = MessageHeader>
    BulkEmailEntry& AddReplacementHeaders(ReplacementHeadersT&& value) { m_replacementHeadersHasBeenSet = true; m_replacementHeaders.emplace_back(std::forward<ReplacementHeadersT>(value)); return *this; }
    ///@}
  private:

    Destination m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::Vector<MessageTag> m_replacementTags;
    bool m_replacementTagsHasBeenSet = false;

    ReplacementEmailContent m_replacementEmailContent;
    bool m_replacementEmailContentHasBeenSet = false;

    Aws::Vector<MessageHeader> m_replacementHeaders;
    bool m_replacementHeadersHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
