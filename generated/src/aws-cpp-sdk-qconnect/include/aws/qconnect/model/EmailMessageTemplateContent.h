/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/EmailMessageTemplateContentBody.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/EmailHeader.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The content of the message template that applies to the email channel
   * subtype.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/EmailMessageTemplateContent">AWS
   * API Reference</a></p>
   */
  class EmailMessageTemplateContent
  {
  public:
    AWS_QCONNECT_API EmailMessageTemplateContent() = default;
    AWS_QCONNECT_API EmailMessageTemplateContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API EmailMessageTemplateContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The subject line, or title, to use in email messages.</p>
     */
    inline const Aws::String& GetSubject() const { return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    template<typename SubjectT = Aws::String>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = Aws::String>
    EmailMessageTemplateContent& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The body to use in email messages.</p>
     */
    inline const EmailMessageTemplateContentBody& GetBody() const { return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    template<typename BodyT = EmailMessageTemplateContentBody>
    void SetBody(BodyT&& value) { m_bodyHasBeenSet = true; m_body = std::forward<BodyT>(value); }
    template<typename BodyT = EmailMessageTemplateContentBody>
    EmailMessageTemplateContent& WithBody(BodyT&& value) { SetBody(std::forward<BodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email headers to include in email messages.</p>
     */
    inline const Aws::Vector<EmailHeader>& GetHeaders() const { return m_headers; }
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }
    template<typename HeadersT = Aws::Vector<EmailHeader>>
    void SetHeaders(HeadersT&& value) { m_headersHasBeenSet = true; m_headers = std::forward<HeadersT>(value); }
    template<typename HeadersT = Aws::Vector<EmailHeader>>
    EmailMessageTemplateContent& WithHeaders(HeadersT&& value) { SetHeaders(std::forward<HeadersT>(value)); return *this;}
    template<typename HeadersT = EmailHeader>
    EmailMessageTemplateContent& AddHeaders(HeadersT&& value) { m_headersHasBeenSet = true; m_headers.emplace_back(std::forward<HeadersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    EmailMessageTemplateContentBody m_body;
    bool m_bodyHasBeenSet = false;

    Aws::Vector<EmailHeader> m_headers;
    bool m_headersHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
