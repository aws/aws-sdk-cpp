/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/partnercentral-selling/model/Payload.h>
#include <aws/partnercentral-selling/model/EngagementInvitationPayloadType.h>
#include <aws/partnercentral-selling/model/Receiver.h>
#include <aws/partnercentral-selling/model/InvitationStatus.h>
#include <aws/partnercentral-selling/model/EngagementMemberSummary.h>
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
namespace PartnerCentralSelling
{
namespace Model
{
  class GetEngagementInvitationResult
  {
  public:
    AWS_PARTNERCENTRALSELLING_API GetEngagementInvitationResult();
    AWS_PARTNERCENTRALSELLING_API GetEngagementInvitationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API GetEngagementInvitationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the engagement invitation.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetEngagementInvitationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetEngagementInvitationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetEngagementInvitationResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the catalog from which the engagement invitation details are
     * retrieved. This field helps in identifying the appropriate catalog (e.g.,
     * <code>AWS</code> or <code>Sandbox</code>) used in the request.</p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline void SetCatalog(const Aws::String& value) { m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalog.assign(value); }
    inline GetEngagementInvitationResult& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline GetEngagementInvitationResult& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline GetEngagementInvitationResult& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the engagement associated with this invitation.</p>
     */
    inline const Aws::String& GetEngagementDescription() const{ return m_engagementDescription; }
    inline void SetEngagementDescription(const Aws::String& value) { m_engagementDescription = value; }
    inline void SetEngagementDescription(Aws::String&& value) { m_engagementDescription = std::move(value); }
    inline void SetEngagementDescription(const char* value) { m_engagementDescription.assign(value); }
    inline GetEngagementInvitationResult& WithEngagementDescription(const Aws::String& value) { SetEngagementDescription(value); return *this;}
    inline GetEngagementInvitationResult& WithEngagementDescription(Aws::String&& value) { SetEngagementDescription(std::move(value)); return *this;}
    inline GetEngagementInvitationResult& WithEngagementDescription(const char* value) { SetEngagementDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the engagement associated with this invitation.This ID
     * links the invitation to its corresponding engagement.</p>
     */
    inline const Aws::String& GetEngagementId() const{ return m_engagementId; }
    inline void SetEngagementId(const Aws::String& value) { m_engagementId = value; }
    inline void SetEngagementId(Aws::String&& value) { m_engagementId = std::move(value); }
    inline void SetEngagementId(const char* value) { m_engagementId.assign(value); }
    inline GetEngagementInvitationResult& WithEngagementId(const Aws::String& value) { SetEngagementId(value); return *this;}
    inline GetEngagementInvitationResult& WithEngagementId(Aws::String&& value) { SetEngagementId(std::move(value)); return *this;}
    inline GetEngagementInvitationResult& WithEngagementId(const char* value) { SetEngagementId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the engagement invitation, summarizing the purpose or objectives
     * of the opportunity shared by AWS.</p>
     */
    inline const Aws::String& GetEngagementTitle() const{ return m_engagementTitle; }
    inline void SetEngagementTitle(const Aws::String& value) { m_engagementTitle = value; }
    inline void SetEngagementTitle(Aws::String&& value) { m_engagementTitle = std::move(value); }
    inline void SetEngagementTitle(const char* value) { m_engagementTitle.assign(value); }
    inline GetEngagementInvitationResult& WithEngagementTitle(const Aws::String& value) { SetEngagementTitle(value); return *this;}
    inline GetEngagementInvitationResult& WithEngagementTitle(Aws::String&& value) { SetEngagementTitle(std::move(value)); return *this;}
    inline GetEngagementInvitationResult& WithEngagementTitle(const char* value) { SetEngagementTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of active members currently part of the Engagement. This array
     * contains a maximum of 10 members, each represented by an object with the
     * following properties.</p> <ul> <li> <p>CompanyName: The name of the member's
     * company.</p> </li> <li> <p>WebsiteUrl: The website URL of the member's
     * company.</p> </li> </ul>
     */
    inline const Aws::Vector<EngagementMemberSummary>& GetExistingMembers() const{ return m_existingMembers; }
    inline void SetExistingMembers(const Aws::Vector<EngagementMemberSummary>& value) { m_existingMembers = value; }
    inline void SetExistingMembers(Aws::Vector<EngagementMemberSummary>&& value) { m_existingMembers = std::move(value); }
    inline GetEngagementInvitationResult& WithExistingMembers(const Aws::Vector<EngagementMemberSummary>& value) { SetExistingMembers(value); return *this;}
    inline GetEngagementInvitationResult& WithExistingMembers(Aws::Vector<EngagementMemberSummary>&& value) { SetExistingMembers(std::move(value)); return *this;}
    inline GetEngagementInvitationResult& AddExistingMembers(const EngagementMemberSummary& value) { m_existingMembers.push_back(value); return *this; }
    inline GetEngagementInvitationResult& AddExistingMembers(EngagementMemberSummary&& value) { m_existingMembers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the date on which the engagement invitation will expire if not
     * accepted by the partner.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const{ return m_expirationDate; }
    inline void SetExpirationDate(const Aws::Utils::DateTime& value) { m_expirationDate = value; }
    inline void SetExpirationDate(Aws::Utils::DateTime&& value) { m_expirationDate = std::move(value); }
    inline GetEngagementInvitationResult& WithExpirationDate(const Aws::Utils::DateTime& value) { SetExpirationDate(value); return *this;}
    inline GetEngagementInvitationResult& WithExpirationDate(Aws::Utils::DateTime&& value) { SetExpirationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier assigned to the engagement invitation being retrieved.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetEngagementInvitationResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetEngagementInvitationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetEngagementInvitationResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the engagement invitation was sent to the partner.</p>
     */
    inline const Aws::Utils::DateTime& GetInvitationDate() const{ return m_invitationDate; }
    inline void SetInvitationDate(const Aws::Utils::DateTime& value) { m_invitationDate = value; }
    inline void SetInvitationDate(Aws::Utils::DateTime&& value) { m_invitationDate = std::move(value); }
    inline GetEngagementInvitationResult& WithInvitationDate(const Aws::Utils::DateTime& value) { SetInvitationDate(value); return *this;}
    inline GetEngagementInvitationResult& WithInvitationDate(Aws::Utils::DateTime&& value) { SetInvitationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message sent to the invited partner when the invitation was created.</p>
     */
    inline const Aws::String& GetInvitationMessage() const{ return m_invitationMessage; }
    inline void SetInvitationMessage(const Aws::String& value) { m_invitationMessage = value; }
    inline void SetInvitationMessage(Aws::String&& value) { m_invitationMessage = std::move(value); }
    inline void SetInvitationMessage(const char* value) { m_invitationMessage.assign(value); }
    inline GetEngagementInvitationResult& WithInvitationMessage(const Aws::String& value) { SetInvitationMessage(value); return *this;}
    inline GetEngagementInvitationResult& WithInvitationMessage(Aws::String&& value) { SetInvitationMessage(std::move(value)); return *this;}
    inline GetEngagementInvitationResult& WithInvitationMessage(const char* value) { SetInvitationMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the engagement invitation payload, including specific data
     * relevant to the invitation's contents, such as customer information and
     * opportunity insights.</p>
     */
    inline const Payload& GetPayload() const{ return m_payload; }
    inline void SetPayload(const Payload& value) { m_payload = value; }
    inline void SetPayload(Payload&& value) { m_payload = std::move(value); }
    inline GetEngagementInvitationResult& WithPayload(const Payload& value) { SetPayload(value); return *this;}
    inline GetEngagementInvitationResult& WithPayload(Payload&& value) { SetPayload(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of payload contained in the engagement invitation, indicating what
     * data or context the payload covers.</p>
     */
    inline const EngagementInvitationPayloadType& GetPayloadType() const{ return m_payloadType; }
    inline void SetPayloadType(const EngagementInvitationPayloadType& value) { m_payloadType = value; }
    inline void SetPayloadType(EngagementInvitationPayloadType&& value) { m_payloadType = std::move(value); }
    inline GetEngagementInvitationResult& WithPayloadType(const EngagementInvitationPayloadType& value) { SetPayloadType(value); return *this;}
    inline GetEngagementInvitationResult& WithPayloadType(EngagementInvitationPayloadType&& value) { SetPayloadType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the partner organization or team that received the
     * engagement invitation, including contact details and identifiers.</p>
     */
    inline const Receiver& GetReceiver() const{ return m_receiver; }
    inline void SetReceiver(const Receiver& value) { m_receiver = value; }
    inline void SetReceiver(Receiver&& value) { m_receiver = std::move(value); }
    inline GetEngagementInvitationResult& WithReceiver(const Receiver& value) { SetReceiver(value); return *this;}
    inline GetEngagementInvitationResult& WithReceiver(Receiver&& value) { SetReceiver(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the engagement invitation was rejected, this field specifies the reason
     * provided by the partner for the rejection.</p>
     */
    inline const Aws::String& GetRejectionReason() const{ return m_rejectionReason; }
    inline void SetRejectionReason(const Aws::String& value) { m_rejectionReason = value; }
    inline void SetRejectionReason(Aws::String&& value) { m_rejectionReason = std::move(value); }
    inline void SetRejectionReason(const char* value) { m_rejectionReason.assign(value); }
    inline GetEngagementInvitationResult& WithRejectionReason(const Aws::String& value) { SetRejectionReason(value); return *this;}
    inline GetEngagementInvitationResult& WithRejectionReason(Aws::String&& value) { SetRejectionReason(std::move(value)); return *this;}
    inline GetEngagementInvitationResult& WithRejectionReason(const char* value) { SetRejectionReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the AWS Account ID of the sender, which identifies the AWS team
     * responsible for sharing the engagement invitation.</p>
     */
    inline const Aws::String& GetSenderAwsAccountId() const{ return m_senderAwsAccountId; }
    inline void SetSenderAwsAccountId(const Aws::String& value) { m_senderAwsAccountId = value; }
    inline void SetSenderAwsAccountId(Aws::String&& value) { m_senderAwsAccountId = std::move(value); }
    inline void SetSenderAwsAccountId(const char* value) { m_senderAwsAccountId.assign(value); }
    inline GetEngagementInvitationResult& WithSenderAwsAccountId(const Aws::String& value) { SetSenderAwsAccountId(value); return *this;}
    inline GetEngagementInvitationResult& WithSenderAwsAccountId(Aws::String&& value) { SetSenderAwsAccountId(std::move(value)); return *this;}
    inline GetEngagementInvitationResult& WithSenderAwsAccountId(const char* value) { SetSenderAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the AWS organization or team that sent the engagement
     * invitation.</p>
     */
    inline const Aws::String& GetSenderCompanyName() const{ return m_senderCompanyName; }
    inline void SetSenderCompanyName(const Aws::String& value) { m_senderCompanyName = value; }
    inline void SetSenderCompanyName(Aws::String&& value) { m_senderCompanyName = std::move(value); }
    inline void SetSenderCompanyName(const char* value) { m_senderCompanyName.assign(value); }
    inline GetEngagementInvitationResult& WithSenderCompanyName(const Aws::String& value) { SetSenderCompanyName(value); return *this;}
    inline GetEngagementInvitationResult& WithSenderCompanyName(Aws::String&& value) { SetSenderCompanyName(std::move(value)); return *this;}
    inline GetEngagementInvitationResult& WithSenderCompanyName(const char* value) { SetSenderCompanyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the engagement invitation.</p>
     */
    inline const InvitationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const InvitationStatus& value) { m_status = value; }
    inline void SetStatus(InvitationStatus&& value) { m_status = std::move(value); }
    inline GetEngagementInvitationResult& WithStatus(const InvitationStatus& value) { SetStatus(value); return *this;}
    inline GetEngagementInvitationResult& WithStatus(InvitationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEngagementInvitationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEngagementInvitationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEngagementInvitationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_catalog;

    Aws::String m_engagementDescription;

    Aws::String m_engagementId;

    Aws::String m_engagementTitle;

    Aws::Vector<EngagementMemberSummary> m_existingMembers;

    Aws::Utils::DateTime m_expirationDate;

    Aws::String m_id;

    Aws::Utils::DateTime m_invitationDate;

    Aws::String m_invitationMessage;

    Payload m_payload;

    EngagementInvitationPayloadType m_payloadType;

    Receiver m_receiver;

    Aws::String m_rejectionReason;

    Aws::String m_senderAwsAccountId;

    Aws::String m_senderCompanyName;

    InvitationStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
