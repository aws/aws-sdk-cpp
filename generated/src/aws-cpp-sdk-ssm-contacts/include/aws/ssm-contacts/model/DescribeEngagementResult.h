/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSMContacts
{
namespace Model
{
  class DescribeEngagementResult
  {
  public:
    AWS_SSMCONTACTS_API DescribeEngagementResult();
    AWS_SSMCONTACTS_API DescribeEngagementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API DescribeEngagementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the escalation plan or contacts involved in the engagement.</p>
     */
    inline const Aws::String& GetContactArn() const{ return m_contactArn; }
    inline void SetContactArn(const Aws::String& value) { m_contactArn = value; }
    inline void SetContactArn(Aws::String&& value) { m_contactArn = std::move(value); }
    inline void SetContactArn(const char* value) { m_contactArn.assign(value); }
    inline DescribeEngagementResult& WithContactArn(const Aws::String& value) { SetContactArn(value); return *this;}
    inline DescribeEngagementResult& WithContactArn(Aws::String&& value) { SetContactArn(std::move(value)); return *this;}
    inline DescribeEngagementResult& WithContactArn(const char* value) { SetContactArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the engagement.</p>
     */
    inline const Aws::String& GetEngagementArn() const{ return m_engagementArn; }
    inline void SetEngagementArn(const Aws::String& value) { m_engagementArn = value; }
    inline void SetEngagementArn(Aws::String&& value) { m_engagementArn = std::move(value); }
    inline void SetEngagementArn(const char* value) { m_engagementArn.assign(value); }
    inline DescribeEngagementResult& WithEngagementArn(const Aws::String& value) { SetEngagementArn(value); return *this;}
    inline DescribeEngagementResult& WithEngagementArn(Aws::String&& value) { SetEngagementArn(std::move(value)); return *this;}
    inline DescribeEngagementResult& WithEngagementArn(const char* value) { SetEngagementArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user that started the engagement.</p>
     */
    inline const Aws::String& GetSender() const{ return m_sender; }
    inline void SetSender(const Aws::String& value) { m_sender = value; }
    inline void SetSender(Aws::String&& value) { m_sender = std::move(value); }
    inline void SetSender(const char* value) { m_sender.assign(value); }
    inline DescribeEngagementResult& WithSender(const Aws::String& value) { SetSender(value); return *this;}
    inline DescribeEngagementResult& WithSender(Aws::String&& value) { SetSender(std::move(value)); return *this;}
    inline DescribeEngagementResult& WithSender(const char* value) { SetSender(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secure subject of the message that was sent to the contact. Use this
     * field for engagements to <code>VOICE</code> and <code>EMAIL</code>.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }
    inline void SetSubject(const Aws::String& value) { m_subject = value; }
    inline void SetSubject(Aws::String&& value) { m_subject = std::move(value); }
    inline void SetSubject(const char* value) { m_subject.assign(value); }
    inline DescribeEngagementResult& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}
    inline DescribeEngagementResult& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}
    inline DescribeEngagementResult& WithSubject(const char* value) { SetSubject(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secure content of the message that was sent to the contact. Use this
     * field for engagements to <code>VOICE</code> and <code>EMAIL</code>.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline void SetContent(const Aws::String& value) { m_content = value; }
    inline void SetContent(Aws::String&& value) { m_content = std::move(value); }
    inline void SetContent(const char* value) { m_content.assign(value); }
    inline DescribeEngagementResult& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline DescribeEngagementResult& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline DescribeEngagementResult& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The insecure subject of the message that was sent to the contact. Use this
     * field for engagements to <code>SMS</code>.</p>
     */
    inline const Aws::String& GetPublicSubject() const{ return m_publicSubject; }
    inline void SetPublicSubject(const Aws::String& value) { m_publicSubject = value; }
    inline void SetPublicSubject(Aws::String&& value) { m_publicSubject = std::move(value); }
    inline void SetPublicSubject(const char* value) { m_publicSubject.assign(value); }
    inline DescribeEngagementResult& WithPublicSubject(const Aws::String& value) { SetPublicSubject(value); return *this;}
    inline DescribeEngagementResult& WithPublicSubject(Aws::String&& value) { SetPublicSubject(std::move(value)); return *this;}
    inline DescribeEngagementResult& WithPublicSubject(const char* value) { SetPublicSubject(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The insecure content of the message that was sent to the contact. Use this
     * field for engagements to <code>SMS</code>.</p>
     */
    inline const Aws::String& GetPublicContent() const{ return m_publicContent; }
    inline void SetPublicContent(const Aws::String& value) { m_publicContent = value; }
    inline void SetPublicContent(Aws::String&& value) { m_publicContent = std::move(value); }
    inline void SetPublicContent(const char* value) { m_publicContent.assign(value); }
    inline DescribeEngagementResult& WithPublicContent(const Aws::String& value) { SetPublicContent(value); return *this;}
    inline DescribeEngagementResult& WithPublicContent(Aws::String&& value) { SetPublicContent(std::move(value)); return *this;}
    inline DescribeEngagementResult& WithPublicContent(const char* value) { SetPublicContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the incident in which the engagement occurred.</p>
     */
    inline const Aws::String& GetIncidentId() const{ return m_incidentId; }
    inline void SetIncidentId(const Aws::String& value) { m_incidentId = value; }
    inline void SetIncidentId(Aws::String&& value) { m_incidentId = std::move(value); }
    inline void SetIncidentId(const char* value) { m_incidentId.assign(value); }
    inline DescribeEngagementResult& WithIncidentId(const Aws::String& value) { SetIncidentId(value); return *this;}
    inline DescribeEngagementResult& WithIncidentId(Aws::String&& value) { SetIncidentId(std::move(value)); return *this;}
    inline DescribeEngagementResult& WithIncidentId(const char* value) { SetIncidentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the engagement started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline DescribeEngagementResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline DescribeEngagementResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the engagement ended.</p>
     */
    inline const Aws::Utils::DateTime& GetStopTime() const{ return m_stopTime; }
    inline void SetStopTime(const Aws::Utils::DateTime& value) { m_stopTime = value; }
    inline void SetStopTime(Aws::Utils::DateTime&& value) { m_stopTime = std::move(value); }
    inline DescribeEngagementResult& WithStopTime(const Aws::Utils::DateTime& value) { SetStopTime(value); return *this;}
    inline DescribeEngagementResult& WithStopTime(Aws::Utils::DateTime&& value) { SetStopTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeEngagementResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeEngagementResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeEngagementResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_contactArn;

    Aws::String m_engagementArn;

    Aws::String m_sender;

    Aws::String m_subject;

    Aws::String m_content;

    Aws::String m_publicSubject;

    Aws::String m_publicContent;

    Aws::String m_incidentId;

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_stopTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
