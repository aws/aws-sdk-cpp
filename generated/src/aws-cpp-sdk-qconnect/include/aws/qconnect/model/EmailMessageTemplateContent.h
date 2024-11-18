/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/EmailMessageTemplateContentBody.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_QCONNECT_API EmailMessageTemplateContent();
    AWS_QCONNECT_API EmailMessageTemplateContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API EmailMessageTemplateContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The body to use in email messages.</p>
     */
    inline const EmailMessageTemplateContentBody& GetBody() const{ return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    inline void SetBody(const EmailMessageTemplateContentBody& value) { m_bodyHasBeenSet = true; m_body = value; }
    inline void SetBody(EmailMessageTemplateContentBody&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }
    inline EmailMessageTemplateContent& WithBody(const EmailMessageTemplateContentBody& value) { SetBody(value); return *this;}
    inline EmailMessageTemplateContent& WithBody(EmailMessageTemplateContentBody&& value) { SetBody(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email headers to include in email messages.</p>
     */
    inline const Aws::Vector<EmailHeader>& GetHeaders() const{ return m_headers; }
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }
    inline void SetHeaders(const Aws::Vector<EmailHeader>& value) { m_headersHasBeenSet = true; m_headers = value; }
    inline void SetHeaders(Aws::Vector<EmailHeader>&& value) { m_headersHasBeenSet = true; m_headers = std::move(value); }
    inline EmailMessageTemplateContent& WithHeaders(const Aws::Vector<EmailHeader>& value) { SetHeaders(value); return *this;}
    inline EmailMessageTemplateContent& WithHeaders(Aws::Vector<EmailHeader>&& value) { SetHeaders(std::move(value)); return *this;}
    inline EmailMessageTemplateContent& AddHeaders(const EmailHeader& value) { m_headersHasBeenSet = true; m_headers.push_back(value); return *this; }
    inline EmailMessageTemplateContent& AddHeaders(EmailHeader&& value) { m_headersHasBeenSet = true; m_headers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The subject line, or title, to use in email messages.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }
    inline EmailMessageTemplateContent& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}
    inline EmailMessageTemplateContent& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}
    inline EmailMessageTemplateContent& WithSubject(const char* value) { SetSubject(value); return *this;}
    ///@}
  private:

    EmailMessageTemplateContentBody m_body;
    bool m_bodyHasBeenSet = false;

    Aws::Vector<EmailHeader> m_headers;
    bool m_headersHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
