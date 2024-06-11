﻿/**
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
  class DescribePageResult
  {
  public:
    AWS_SSMCONTACTS_API DescribePageResult();
    AWS_SSMCONTACTS_API DescribePageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API DescribePageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the engagement to a contact channel.</p>
     */
    inline const Aws::String& GetPageArn() const{ return m_pageArn; }
    inline void SetPageArn(const Aws::String& value) { m_pageArn = value; }
    inline void SetPageArn(Aws::String&& value) { m_pageArn = std::move(value); }
    inline void SetPageArn(const char* value) { m_pageArn.assign(value); }
    inline DescribePageResult& WithPageArn(const Aws::String& value) { SetPageArn(value); return *this;}
    inline DescribePageResult& WithPageArn(Aws::String&& value) { SetPageArn(std::move(value)); return *this;}
    inline DescribePageResult& WithPageArn(const char* value) { SetPageArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the engagement that engaged the contact channel.</p>
     */
    inline const Aws::String& GetEngagementArn() const{ return m_engagementArn; }
    inline void SetEngagementArn(const Aws::String& value) { m_engagementArn = value; }
    inline void SetEngagementArn(Aws::String&& value) { m_engagementArn = std::move(value); }
    inline void SetEngagementArn(const char* value) { m_engagementArn.assign(value); }
    inline DescribePageResult& WithEngagementArn(const Aws::String& value) { SetEngagementArn(value); return *this;}
    inline DescribePageResult& WithEngagementArn(Aws::String&& value) { SetEngagementArn(std::move(value)); return *this;}
    inline DescribePageResult& WithEngagementArn(const char* value) { SetEngagementArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the contact that was engaged.</p>
     */
    inline const Aws::String& GetContactArn() const{ return m_contactArn; }
    inline void SetContactArn(const Aws::String& value) { m_contactArn = value; }
    inline void SetContactArn(Aws::String&& value) { m_contactArn = std::move(value); }
    inline void SetContactArn(const char* value) { m_contactArn.assign(value); }
    inline DescribePageResult& WithContactArn(const Aws::String& value) { SetContactArn(value); return *this;}
    inline DescribePageResult& WithContactArn(Aws::String&& value) { SetContactArn(std::move(value)); return *this;}
    inline DescribePageResult& WithContactArn(const char* value) { SetContactArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user that started the engagement.</p>
     */
    inline const Aws::String& GetSender() const{ return m_sender; }
    inline void SetSender(const Aws::String& value) { m_sender = value; }
    inline void SetSender(Aws::String&& value) { m_sender = std::move(value); }
    inline void SetSender(const char* value) { m_sender.assign(value); }
    inline DescribePageResult& WithSender(const Aws::String& value) { SetSender(value); return *this;}
    inline DescribePageResult& WithSender(Aws::String&& value) { SetSender(std::move(value)); return *this;}
    inline DescribePageResult& WithSender(const char* value) { SetSender(value); return *this;}
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
    inline DescribePageResult& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}
    inline DescribePageResult& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}
    inline DescribePageResult& WithSubject(const char* value) { SetSubject(value); return *this;}
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
    inline DescribePageResult& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline DescribePageResult& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline DescribePageResult& WithContent(const char* value) { SetContent(value); return *this;}
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
    inline DescribePageResult& WithPublicSubject(const Aws::String& value) { SetPublicSubject(value); return *this;}
    inline DescribePageResult& WithPublicSubject(Aws::String&& value) { SetPublicSubject(std::move(value)); return *this;}
    inline DescribePageResult& WithPublicSubject(const char* value) { SetPublicSubject(value); return *this;}
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
    inline DescribePageResult& WithPublicContent(const Aws::String& value) { SetPublicContent(value); return *this;}
    inline DescribePageResult& WithPublicContent(Aws::String&& value) { SetPublicContent(std::move(value)); return *this;}
    inline DescribePageResult& WithPublicContent(const char* value) { SetPublicContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the incident that engaged the contact channel.</p>
     */
    inline const Aws::String& GetIncidentId() const{ return m_incidentId; }
    inline void SetIncidentId(const Aws::String& value) { m_incidentId = value; }
    inline void SetIncidentId(Aws::String&& value) { m_incidentId = std::move(value); }
    inline void SetIncidentId(const char* value) { m_incidentId.assign(value); }
    inline DescribePageResult& WithIncidentId(const Aws::String& value) { SetIncidentId(value); return *this;}
    inline DescribePageResult& WithIncidentId(Aws::String&& value) { SetIncidentId(std::move(value)); return *this;}
    inline DescribePageResult& WithIncidentId(const char* value) { SetIncidentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the engagement was sent to the contact channel.</p>
     */
    inline const Aws::Utils::DateTime& GetSentTime() const{ return m_sentTime; }
    inline void SetSentTime(const Aws::Utils::DateTime& value) { m_sentTime = value; }
    inline void SetSentTime(Aws::Utils::DateTime&& value) { m_sentTime = std::move(value); }
    inline DescribePageResult& WithSentTime(const Aws::Utils::DateTime& value) { SetSentTime(value); return *this;}
    inline DescribePageResult& WithSentTime(Aws::Utils::DateTime&& value) { SetSentTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the contact channel acknowledged the engagement.</p>
     */
    inline const Aws::Utils::DateTime& GetReadTime() const{ return m_readTime; }
    inline void SetReadTime(const Aws::Utils::DateTime& value) { m_readTime = value; }
    inline void SetReadTime(Aws::Utils::DateTime&& value) { m_readTime = std::move(value); }
    inline DescribePageResult& WithReadTime(const Aws::Utils::DateTime& value) { SetReadTime(value); return *this;}
    inline DescribePageResult& WithReadTime(Aws::Utils::DateTime&& value) { SetReadTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the contact channel received the engagement.</p>
     */
    inline const Aws::Utils::DateTime& GetDeliveryTime() const{ return m_deliveryTime; }
    inline void SetDeliveryTime(const Aws::Utils::DateTime& value) { m_deliveryTime = value; }
    inline void SetDeliveryTime(Aws::Utils::DateTime&& value) { m_deliveryTime = std::move(value); }
    inline DescribePageResult& WithDeliveryTime(const Aws::Utils::DateTime& value) { SetDeliveryTime(value); return *this;}
    inline DescribePageResult& WithDeliveryTime(Aws::Utils::DateTime&& value) { SetDeliveryTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribePageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribePageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribePageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_pageArn;

    Aws::String m_engagementArn;

    Aws::String m_contactArn;

    Aws::String m_sender;

    Aws::String m_subject;

    Aws::String m_content;

    Aws::String m_publicSubject;

    Aws::String m_publicContent;

    Aws::String m_incidentId;

    Aws::Utils::DateTime m_sentTime;

    Aws::Utils::DateTime m_readTime;

    Aws::Utils::DateTime m_deliveryTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
