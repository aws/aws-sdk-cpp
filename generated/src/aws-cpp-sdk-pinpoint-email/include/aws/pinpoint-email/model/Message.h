/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/model/Content.h>
#include <aws/pinpoint-email/model/Body.h>
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
   * <p>Represents the email message that you're sending. The <code>Message</code>
   * object consists of a subject line and a message body.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/Message">AWS
   * API Reference</a></p>
   */
  class Message
  {
  public:
    AWS_PINPOINTEMAIL_API Message() = default;
    AWS_PINPOINTEMAIL_API Message(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Message& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The subject line of the email. The subject line can only contain 7-bit ASCII
     * characters. However, you can specify non-ASCII characters in the subject line by
     * using encoded-word syntax, as described in <a
     * href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>.</p>
     */
    inline const Content& GetSubject() const { return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    template<typename SubjectT = Content>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = Content>
    Message& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The body of the message. You can specify an HTML version of the message, a
     * text-only version of the message, or both.</p>
     */
    inline const Body& GetBody() const { return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    template<typename BodyT = Body>
    void SetBody(BodyT&& value) { m_bodyHasBeenSet = true; m_body = std::forward<BodyT>(value); }
    template<typename BodyT = Body>
    Message& WithBody(BodyT&& value) { SetBody(std::forward<BodyT>(value)); return *this;}
    ///@}
  private:

    Content m_subject;
    bool m_subjectHasBeenSet = false;

    Body m_body;
    bool m_bodyHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
