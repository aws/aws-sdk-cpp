/**
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
    AWS_PINPOINT_API EmailMessage() = default;
    AWS_PINPOINT_API EmailMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EmailMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The body of the email message.</p>
     */
    inline const Aws::String& GetBody() const { return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    template<typename BodyT = Aws::String>
    void SetBody(BodyT&& value) { m_bodyHasBeenSet = true; m_body = std::forward<BodyT>(value); }
    template<typename BodyT = Aws::String>
    EmailMessage& WithBody(BodyT&& value) { SetBody(std::forward<BodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address to forward bounces and complaints to, if feedback
     * forwarding is enabled.</p>
     */
    inline const Aws::String& GetFeedbackForwardingAddress() const { return m_feedbackForwardingAddress; }
    inline bool FeedbackForwardingAddressHasBeenSet() const { return m_feedbackForwardingAddressHasBeenSet; }
    template<typename FeedbackForwardingAddressT = Aws::String>
    void SetFeedbackForwardingAddress(FeedbackForwardingAddressT&& value) { m_feedbackForwardingAddressHasBeenSet = true; m_feedbackForwardingAddress = std::forward<FeedbackForwardingAddressT>(value); }
    template<typename FeedbackForwardingAddressT = Aws::String>
    EmailMessage& WithFeedbackForwardingAddress(FeedbackForwardingAddressT&& value) { SetFeedbackForwardingAddress(std::forward<FeedbackForwardingAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The verified email address to send the email message from. The default value
     * is the FromAddress specified for the email channel.</p>
     */
    inline const Aws::String& GetFromAddress() const { return m_fromAddress; }
    inline bool FromAddressHasBeenSet() const { return m_fromAddressHasBeenSet; }
    template<typename FromAddressT = Aws::String>
    void SetFromAddress(FromAddressT&& value) { m_fromAddressHasBeenSet = true; m_fromAddress = std::forward<FromAddressT>(value); }
    template<typename FromAddressT = Aws::String>
    EmailMessage& WithFromAddress(FromAddressT&& value) { SetFromAddress(std::forward<FromAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email message, represented as a raw MIME message.</p>
     */
    inline const RawEmail& GetRawEmail() const { return m_rawEmail; }
    inline bool RawEmailHasBeenSet() const { return m_rawEmailHasBeenSet; }
    template<typename RawEmailT = RawEmail>
    void SetRawEmail(RawEmailT&& value) { m_rawEmailHasBeenSet = true; m_rawEmail = std::forward<RawEmailT>(value); }
    template<typename RawEmailT = RawEmail>
    EmailMessage& WithRawEmail(RawEmailT&& value) { SetRawEmail(std::forward<RawEmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reply-to email address(es) for the email message. If a recipient replies
     * to the email, each reply-to address receives the reply.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplyToAddresses() const { return m_replyToAddresses; }
    inline bool ReplyToAddressesHasBeenSet() const { return m_replyToAddressesHasBeenSet; }
    template<typename ReplyToAddressesT = Aws::Vector<Aws::String>>
    void SetReplyToAddresses(ReplyToAddressesT&& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses = std::forward<ReplyToAddressesT>(value); }
    template<typename ReplyToAddressesT = Aws::Vector<Aws::String>>
    EmailMessage& WithReplyToAddresses(ReplyToAddressesT&& value) { SetReplyToAddresses(std::forward<ReplyToAddressesT>(value)); return *this;}
    template<typename ReplyToAddressesT = Aws::String>
    EmailMessage& AddReplyToAddresses(ReplyToAddressesT&& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.emplace_back(std::forward<ReplyToAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The email message, composed of a subject, a text part, and an HTML part.</p>
     */
    inline const SimpleEmail& GetSimpleEmail() const { return m_simpleEmail; }
    inline bool SimpleEmailHasBeenSet() const { return m_simpleEmailHasBeenSet; }
    template<typename SimpleEmailT = SimpleEmail>
    void SetSimpleEmail(SimpleEmailT&& value) { m_simpleEmailHasBeenSet = true; m_simpleEmail = std::forward<SimpleEmailT>(value); }
    template<typename SimpleEmailT = SimpleEmail>
    EmailMessage& WithSimpleEmail(SimpleEmailT&& value) { SetSimpleEmail(std::forward<SimpleEmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default message variables to use in the email message. You can override
     * the default variables with individual address variables.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSubstitutions() const { return m_substitutions; }
    inline bool SubstitutionsHasBeenSet() const { return m_substitutionsHasBeenSet; }
    template<typename SubstitutionsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetSubstitutions(SubstitutionsT&& value) { m_substitutionsHasBeenSet = true; m_substitutions = std::forward<SubstitutionsT>(value); }
    template<typename SubstitutionsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    EmailMessage& WithSubstitutions(SubstitutionsT&& value) { SetSubstitutions(std::forward<SubstitutionsT>(value)); return *this;}
    template<typename SubstitutionsKeyT = Aws::String, typename SubstitutionsValueT = Aws::Vector<Aws::String>>
    EmailMessage& AddSubstitutions(SubstitutionsKeyT&& key, SubstitutionsValueT&& value) {
      m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::forward<SubstitutionsKeyT>(key), std::forward<SubstitutionsValueT>(value)); return *this;
    }
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
