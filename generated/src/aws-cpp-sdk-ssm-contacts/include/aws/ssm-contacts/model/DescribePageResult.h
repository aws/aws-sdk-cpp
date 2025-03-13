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
  class DescribePageResult
  {
  public:
    AWS_SSMCONTACTS_API DescribePageResult() = default;
    AWS_SSMCONTACTS_API DescribePageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API DescribePageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the engagement to a contact channel.</p>
     */
    inline const Aws::String& GetPageArn() const { return m_pageArn; }
    template<typename PageArnT = Aws::String>
    void SetPageArn(PageArnT&& value) { m_pageArnHasBeenSet = true; m_pageArn = std::forward<PageArnT>(value); }
    template<typename PageArnT = Aws::String>
    DescribePageResult& WithPageArn(PageArnT&& value) { SetPageArn(std::forward<PageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the engagement that engaged the contact channel.</p>
     */
    inline const Aws::String& GetEngagementArn() const { return m_engagementArn; }
    template<typename EngagementArnT = Aws::String>
    void SetEngagementArn(EngagementArnT&& value) { m_engagementArnHasBeenSet = true; m_engagementArn = std::forward<EngagementArnT>(value); }
    template<typename EngagementArnT = Aws::String>
    DescribePageResult& WithEngagementArn(EngagementArnT&& value) { SetEngagementArn(std::forward<EngagementArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the contact that was engaged.</p>
     */
    inline const Aws::String& GetContactArn() const { return m_contactArn; }
    template<typename ContactArnT = Aws::String>
    void SetContactArn(ContactArnT&& value) { m_contactArnHasBeenSet = true; m_contactArn = std::forward<ContactArnT>(value); }
    template<typename ContactArnT = Aws::String>
    DescribePageResult& WithContactArn(ContactArnT&& value) { SetContactArn(std::forward<ContactArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user that started the engagement.</p>
     */
    inline const Aws::String& GetSender() const { return m_sender; }
    template<typename SenderT = Aws::String>
    void SetSender(SenderT&& value) { m_senderHasBeenSet = true; m_sender = std::forward<SenderT>(value); }
    template<typename SenderT = Aws::String>
    DescribePageResult& WithSender(SenderT&& value) { SetSender(std::forward<SenderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secure subject of the message that was sent to the contact. Use this
     * field for engagements to <code>VOICE</code> and <code>EMAIL</code>.</p>
     */
    inline const Aws::String& GetSubject() const { return m_subject; }
    template<typename SubjectT = Aws::String>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = Aws::String>
    DescribePageResult& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secure content of the message that was sent to the contact. Use this
     * field for engagements to <code>VOICE</code> and <code>EMAIL</code>.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    DescribePageResult& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The insecure subject of the message that was sent to the contact. Use this
     * field for engagements to <code>SMS</code>.</p>
     */
    inline const Aws::String& GetPublicSubject() const { return m_publicSubject; }
    template<typename PublicSubjectT = Aws::String>
    void SetPublicSubject(PublicSubjectT&& value) { m_publicSubjectHasBeenSet = true; m_publicSubject = std::forward<PublicSubjectT>(value); }
    template<typename PublicSubjectT = Aws::String>
    DescribePageResult& WithPublicSubject(PublicSubjectT&& value) { SetPublicSubject(std::forward<PublicSubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The insecure content of the message that was sent to the contact. Use this
     * field for engagements to <code>SMS</code>.</p>
     */
    inline const Aws::String& GetPublicContent() const { return m_publicContent; }
    template<typename PublicContentT = Aws::String>
    void SetPublicContent(PublicContentT&& value) { m_publicContentHasBeenSet = true; m_publicContent = std::forward<PublicContentT>(value); }
    template<typename PublicContentT = Aws::String>
    DescribePageResult& WithPublicContent(PublicContentT&& value) { SetPublicContent(std::forward<PublicContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the incident that engaged the contact channel.</p>
     */
    inline const Aws::String& GetIncidentId() const { return m_incidentId; }
    template<typename IncidentIdT = Aws::String>
    void SetIncidentId(IncidentIdT&& value) { m_incidentIdHasBeenSet = true; m_incidentId = std::forward<IncidentIdT>(value); }
    template<typename IncidentIdT = Aws::String>
    DescribePageResult& WithIncidentId(IncidentIdT&& value) { SetIncidentId(std::forward<IncidentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the engagement was sent to the contact channel.</p>
     */
    inline const Aws::Utils::DateTime& GetSentTime() const { return m_sentTime; }
    template<typename SentTimeT = Aws::Utils::DateTime>
    void SetSentTime(SentTimeT&& value) { m_sentTimeHasBeenSet = true; m_sentTime = std::forward<SentTimeT>(value); }
    template<typename SentTimeT = Aws::Utils::DateTime>
    DescribePageResult& WithSentTime(SentTimeT&& value) { SetSentTime(std::forward<SentTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the contact channel acknowledged the engagement.</p>
     */
    inline const Aws::Utils::DateTime& GetReadTime() const { return m_readTime; }
    template<typename ReadTimeT = Aws::Utils::DateTime>
    void SetReadTime(ReadTimeT&& value) { m_readTimeHasBeenSet = true; m_readTime = std::forward<ReadTimeT>(value); }
    template<typename ReadTimeT = Aws::Utils::DateTime>
    DescribePageResult& WithReadTime(ReadTimeT&& value) { SetReadTime(std::forward<ReadTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the contact channel received the engagement.</p>
     */
    inline const Aws::Utils::DateTime& GetDeliveryTime() const { return m_deliveryTime; }
    template<typename DeliveryTimeT = Aws::Utils::DateTime>
    void SetDeliveryTime(DeliveryTimeT&& value) { m_deliveryTimeHasBeenSet = true; m_deliveryTime = std::forward<DeliveryTimeT>(value); }
    template<typename DeliveryTimeT = Aws::Utils::DateTime>
    DescribePageResult& WithDeliveryTime(DeliveryTimeT&& value) { SetDeliveryTime(std::forward<DeliveryTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pageArn;
    bool m_pageArnHasBeenSet = false;

    Aws::String m_engagementArn;
    bool m_engagementArnHasBeenSet = false;

    Aws::String m_contactArn;
    bool m_contactArnHasBeenSet = false;

    Aws::String m_sender;
    bool m_senderHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_publicSubject;
    bool m_publicSubjectHasBeenSet = false;

    Aws::String m_publicContent;
    bool m_publicContentHasBeenSet = false;

    Aws::String m_incidentId;
    bool m_incidentIdHasBeenSet = false;

    Aws::Utils::DateTime m_sentTime{};
    bool m_sentTimeHasBeenSet = false;

    Aws::Utils::DateTime m_readTime{};
    bool m_readTimeHasBeenSet = false;

    Aws::Utils::DateTime m_deliveryTime{};
    bool m_deliveryTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
