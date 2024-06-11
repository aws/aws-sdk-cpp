﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/RawEmail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint/model/SimpleEmail.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Specifies the default settings and content for a one-time email message
   * that's sent directly to an endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EmailMessage">AWS
   * API Reference</a></p>
   */
  class EmailMessage
  {
  public:
    AWS_PINPOINT_API EmailMessage();
    AWS_PINPOINT_API EmailMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EmailMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The body of the email message.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }
    inline EmailMessage& WithBody(const Aws::String& value) { SetBody(value); return *this;}
    inline EmailMessage& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}
    inline EmailMessage& WithBody(const char* value) { SetBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address to forward bounces and complaints to, if feedback
     * forwarding is enabled.</p>
     */
    inline const Aws::String& GetFeedbackForwardingAddress() const{ return m_feedbackForwardingAddress; }
    inline bool FeedbackForwardingAddressHasBeenSet() const { return m_feedbackForwardingAddressHasBeenSet; }
    inline void SetFeedbackForwardingAddress(const Aws::String& value) { m_feedbackForwardingAddressHasBeenSet = true; m_feedbackForwardingAddress = value; }
    inline void SetFeedbackForwardingAddress(Aws::String&& value) { m_feedbackForwardingAddressHasBeenSet = true; m_feedbackForwardingAddress = std::move(value); }
    inline void SetFeedbackForwardingAddress(const char* value) { m_feedbackForwardingAddressHasBeenSet = true; m_feedbackForwardingAddress.assign(value); }
    inline EmailMessage& WithFeedbackForwardingAddress(const Aws::String& value) { SetFeedbackForwardingAddress(value); return *this;}
    inline EmailMessage& WithFeedbackForwardingAddress(Aws::String&& value) { SetFeedbackForwardingAddress(std::move(value)); return *this;}
    inline EmailMessage& WithFeedbackForwardingAddress(const char* value) { SetFeedbackForwardingAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The verified email address to send the email message from. The default value
     * is the FromAddress specified for the email channel.</p>
     */
    inline const Aws::String& GetFromAddress() const{ return m_fromAddress; }
    inline bool FromAddressHasBeenSet() const { return m_fromAddressHasBeenSet; }
    inline void SetFromAddress(const Aws::String& value) { m_fromAddressHasBeenSet = true; m_fromAddress = value; }
    inline void SetFromAddress(Aws::String&& value) { m_fromAddressHasBeenSet = true; m_fromAddress = std::move(value); }
    inline void SetFromAddress(const char* value) { m_fromAddressHasBeenSet = true; m_fromAddress.assign(value); }
    inline EmailMessage& WithFromAddress(const Aws::String& value) { SetFromAddress(value); return *this;}
    inline EmailMessage& WithFromAddress(Aws::String&& value) { SetFromAddress(std::move(value)); return *this;}
    inline EmailMessage& WithFromAddress(const char* value) { SetFromAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email message, represented as a raw MIME message.</p>
     */
    inline const RawEmail& GetRawEmail() const{ return m_rawEmail; }
    inline bool RawEmailHasBeenSet() const { return m_rawEmailHasBeenSet; }
    inline void SetRawEmail(const RawEmail& value) { m_rawEmailHasBeenSet = true; m_rawEmail = value; }
    inline void SetRawEmail(RawEmail&& value) { m_rawEmailHasBeenSet = true; m_rawEmail = std::move(value); }
    inline EmailMessage& WithRawEmail(const RawEmail& value) { SetRawEmail(value); return *this;}
    inline EmailMessage& WithRawEmail(RawEmail&& value) { SetRawEmail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reply-to email address(es) for the email message. If a recipient replies
     * to the email, each reply-to address receives the reply.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplyToAddresses() const{ return m_replyToAddresses; }
    inline bool ReplyToAddressesHasBeenSet() const { return m_replyToAddressesHasBeenSet; }
    inline void SetReplyToAddresses(const Aws::Vector<Aws::String>& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses = value; }
    inline void SetReplyToAddresses(Aws::Vector<Aws::String>&& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses = std::move(value); }
    inline EmailMessage& WithReplyToAddresses(const Aws::Vector<Aws::String>& value) { SetReplyToAddresses(value); return *this;}
    inline EmailMessage& WithReplyToAddresses(Aws::Vector<Aws::String>&& value) { SetReplyToAddresses(std::move(value)); return *this;}
    inline EmailMessage& AddReplyToAddresses(const Aws::String& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(value); return *this; }
    inline EmailMessage& AddReplyToAddresses(Aws::String&& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(std::move(value)); return *this; }
    inline EmailMessage& AddReplyToAddresses(const char* value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The email message, composed of a subject, a text part, and an HTML part.</p>
     */
    inline const SimpleEmail& GetSimpleEmail() const{ return m_simpleEmail; }
    inline bool SimpleEmailHasBeenSet() const { return m_simpleEmailHasBeenSet; }
    inline void SetSimpleEmail(const SimpleEmail& value) { m_simpleEmailHasBeenSet = true; m_simpleEmail = value; }
    inline void SetSimpleEmail(SimpleEmail&& value) { m_simpleEmailHasBeenSet = true; m_simpleEmail = std::move(value); }
    inline EmailMessage& WithSimpleEmail(const SimpleEmail& value) { SetSimpleEmail(value); return *this;}
    inline EmailMessage& WithSimpleEmail(SimpleEmail&& value) { SetSimpleEmail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default message variables to use in the email message. You can override
     * the default variables with individual address variables.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSubstitutions() const{ return m_substitutions; }
    inline bool SubstitutionsHasBeenSet() const { return m_substitutionsHasBeenSet; }
    inline void SetSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_substitutionsHasBeenSet = true; m_substitutions = value; }
    inline void SetSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_substitutionsHasBeenSet = true; m_substitutions = std::move(value); }
    inline EmailMessage& WithSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetSubstitutions(value); return *this;}
    inline EmailMessage& WithSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetSubstitutions(std::move(value)); return *this;}
    inline EmailMessage& AddSubstitutions(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }
    inline EmailMessage& AddSubstitutions(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), value); return *this; }
    inline EmailMessage& AddSubstitutions(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }
    inline EmailMessage& AddSubstitutions(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), std::move(value)); return *this; }
    inline EmailMessage& AddSubstitutions(const char* key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }
    inline EmailMessage& AddSubstitutions(const char* key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::String m_feedbackForwardingAddress;
    bool m_feedbackForwardingAddressHasBeenSet = false;

    Aws::String m_fromAddress;
    bool m_fromAddressHasBeenSet = false;

    RawEmail m_rawEmail;
    bool m_rawEmailHasBeenSet = false;

    Aws::Vector<Aws::String> m_replyToAddresses;
    bool m_replyToAddressesHasBeenSet = false;

    SimpleEmail m_simpleEmail;
    bool m_simpleEmailHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_substitutions;
    bool m_substitutionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
