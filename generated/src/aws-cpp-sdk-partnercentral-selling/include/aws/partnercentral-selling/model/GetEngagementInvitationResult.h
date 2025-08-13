/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/EngagementInvitationPayloadType.h>
#include <aws/partnercentral-selling/model/InvitationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/partnercentral-selling/model/Receiver.h>
#include <aws/partnercentral-selling/model/Payload.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_PARTNERCENTRALSELLING_API GetEngagementInvitationResult() = default;
    AWS_PARTNERCENTRALSELLING_API GetEngagementInvitationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API GetEngagementInvitationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the engagement invitation.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetEngagementInvitationResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of payload contained in the engagement invitation, indicating what
     * data or context the payload covers.</p>
     */
    inline EngagementInvitationPayloadType GetPayloadType() const { return m_payloadType; }
    inline void SetPayloadType(EngagementInvitationPayloadType value) { m_payloadTypeHasBeenSet = true; m_payloadType = value; }
    inline GetEngagementInvitationResult& WithPayloadType(EngagementInvitationPayloadType value) { SetPayloadType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier assigned to the engagement invitation being retrieved.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetEngagementInvitationResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the engagement associated with this invitation.This ID
     * links the invitation to its corresponding engagement.</p>
     */
    inline const Aws::String& GetEngagementId() const { return m_engagementId; }
    template<typename EngagementIdT = Aws::String>
    void SetEngagementId(EngagementIdT&& value) { m_engagementIdHasBeenSet = true; m_engagementId = std::forward<EngagementIdT>(value); }
    template<typename EngagementIdT = Aws::String>
    GetEngagementInvitationResult& WithEngagementId(EngagementIdT&& value) { SetEngagementId(std::forward<EngagementIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the engagement invitation, summarizing the purpose or objectives
     * of the opportunity shared by AWS.</p>
     */
    inline const Aws::String& GetEngagementTitle() const { return m_engagementTitle; }
    template<typename EngagementTitleT = Aws::String>
    void SetEngagementTitle(EngagementTitleT&& value) { m_engagementTitleHasBeenSet = true; m_engagementTitle = std::forward<EngagementTitleT>(value); }
    template<typename EngagementTitleT = Aws::String>
    GetEngagementInvitationResult& WithEngagementTitle(EngagementTitleT&& value) { SetEngagementTitle(std::forward<EngagementTitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the engagement invitation.</p>
     */
    inline InvitationStatus GetStatus() const { return m_status; }
    inline void SetStatus(InvitationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetEngagementInvitationResult& WithStatus(InvitationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the engagement invitation was sent to the partner.</p>
     */
    inline const Aws::Utils::DateTime& GetInvitationDate() const { return m_invitationDate; }
    template<typename InvitationDateT = Aws::Utils::DateTime>
    void SetInvitationDate(InvitationDateT&& value) { m_invitationDateHasBeenSet = true; m_invitationDate = std::forward<InvitationDateT>(value); }
    template<typename InvitationDateT = Aws::Utils::DateTime>
    GetEngagementInvitationResult& WithInvitationDate(InvitationDateT&& value) { SetInvitationDate(std::forward<InvitationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the date on which the engagement invitation will expire if not
     * accepted by the partner.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const { return m_expirationDate; }
    template<typename ExpirationDateT = Aws::Utils::DateTime>
    void SetExpirationDate(ExpirationDateT&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::forward<ExpirationDateT>(value); }
    template<typename ExpirationDateT = Aws::Utils::DateTime>
    GetEngagementInvitationResult& WithExpirationDate(ExpirationDateT&& value) { SetExpirationDate(std::forward<ExpirationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the AWS Account ID of the sender, which identifies the AWS team
     * responsible for sharing the engagement invitation.</p>
     */
    inline const Aws::String& GetSenderAwsAccountId() const { return m_senderAwsAccountId; }
    template<typename SenderAwsAccountIdT = Aws::String>
    void SetSenderAwsAccountId(SenderAwsAccountIdT&& value) { m_senderAwsAccountIdHasBeenSet = true; m_senderAwsAccountId = std::forward<SenderAwsAccountIdT>(value); }
    template<typename SenderAwsAccountIdT = Aws::String>
    GetEngagementInvitationResult& WithSenderAwsAccountId(SenderAwsAccountIdT&& value) { SetSenderAwsAccountId(std::forward<SenderAwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the AWS organization or team that sent the engagement
     * invitation.</p>
     */
    inline const Aws::String& GetSenderCompanyName() const { return m_senderCompanyName; }
    template<typename SenderCompanyNameT = Aws::String>
    void SetSenderCompanyName(SenderCompanyNameT&& value) { m_senderCompanyNameHasBeenSet = true; m_senderCompanyName = std::forward<SenderCompanyNameT>(value); }
    template<typename SenderCompanyNameT = Aws::String>
    GetEngagementInvitationResult& WithSenderCompanyName(SenderCompanyNameT&& value) { SetSenderCompanyName(std::forward<SenderCompanyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the partner organization or team that received the
     * engagement invitation, including contact details and identifiers.</p>
     */
    inline const Receiver& GetReceiver() const { return m_receiver; }
    template<typename ReceiverT = Receiver>
    void SetReceiver(ReceiverT&& value) { m_receiverHasBeenSet = true; m_receiver = std::forward<ReceiverT>(value); }
    template<typename ReceiverT = Receiver>
    GetEngagementInvitationResult& WithReceiver(ReceiverT&& value) { SetReceiver(std::forward<ReceiverT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the catalog from which the engagement invitation details are
     * retrieved. This field helps in identifying the appropriate catalog (e.g.,
     * <code>AWS</code> or <code>Sandbox</code>) used in the request.</p>
     */
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    GetEngagementInvitationResult& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the engagement invitation was rejected, this field specifies the reason
     * provided by the partner for the rejection.</p>
     */
    inline const Aws::String& GetRejectionReason() const { return m_rejectionReason; }
    template<typename RejectionReasonT = Aws::String>
    void SetRejectionReason(RejectionReasonT&& value) { m_rejectionReasonHasBeenSet = true; m_rejectionReason = std::forward<RejectionReasonT>(value); }
    template<typename RejectionReasonT = Aws::String>
    GetEngagementInvitationResult& WithRejectionReason(RejectionReasonT&& value) { SetRejectionReason(std::forward<RejectionReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the engagement invitation payload, including specific data
     * relevant to the invitation's contents, such as customer information and
     * opportunity insights.</p>
     */
    inline const Payload& GetPayload() const { return m_payload; }
    template<typename PayloadT = Payload>
    void SetPayload(PayloadT&& value) { m_payloadHasBeenSet = true; m_payload = std::forward<PayloadT>(value); }
    template<typename PayloadT = Payload>
    GetEngagementInvitationResult& WithPayload(PayloadT&& value) { SetPayload(std::forward<PayloadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message sent to the invited partner when the invitation was created.</p>
     */
    inline const Aws::String& GetInvitationMessage() const { return m_invitationMessage; }
    template<typename InvitationMessageT = Aws::String>
    void SetInvitationMessage(InvitationMessageT&& value) { m_invitationMessageHasBeenSet = true; m_invitationMessage = std::forward<InvitationMessageT>(value); }
    template<typename InvitationMessageT = Aws::String>
    GetEngagementInvitationResult& WithInvitationMessage(InvitationMessageT&& value) { SetInvitationMessage(std::forward<InvitationMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the engagement associated with this invitation.</p>
     */
    inline const Aws::String& GetEngagementDescription() const { return m_engagementDescription; }
    template<typename EngagementDescriptionT = Aws::String>
    void SetEngagementDescription(EngagementDescriptionT&& value) { m_engagementDescriptionHasBeenSet = true; m_engagementDescription = std::forward<EngagementDescriptionT>(value); }
    template<typename EngagementDescriptionT = Aws::String>
    GetEngagementInvitationResult& WithEngagementDescription(EngagementDescriptionT&& value) { SetEngagementDescription(std::forward<EngagementDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of active members currently part of the Engagement. This array
     * contains a maximum of 10 members, each represented by an object with the
     * following properties.</p> <ul> <li> <p>CompanyName: The name of the member's
     * company.</p> </li> <li> <p>WebsiteUrl: The website URL of the member's
     * company.</p> </li> </ul>
     */
    inline const Aws::Vector<EngagementMemberSummary>& GetExistingMembers() const { return m_existingMembers; }
    template<typename ExistingMembersT = Aws::Vector<EngagementMemberSummary>>
    void SetExistingMembers(ExistingMembersT&& value) { m_existingMembersHasBeenSet = true; m_existingMembers = std::forward<ExistingMembersT>(value); }
    template<typename ExistingMembersT = Aws::Vector<EngagementMemberSummary>>
    GetEngagementInvitationResult& WithExistingMembers(ExistingMembersT&& value) { SetExistingMembers(std::forward<ExistingMembersT>(value)); return *this;}
    template<typename ExistingMembersT = EngagementMemberSummary>
    GetEngagementInvitationResult& AddExistingMembers(ExistingMembersT&& value) { m_existingMembersHasBeenSet = true; m_existingMembers.emplace_back(std::forward<ExistingMembersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEngagementInvitationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    EngagementInvitationPayloadType m_payloadType{EngagementInvitationPayloadType::NOT_SET};
    bool m_payloadTypeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_engagementId;
    bool m_engagementIdHasBeenSet = false;

    Aws::String m_engagementTitle;
    bool m_engagementTitleHasBeenSet = false;

    InvitationStatus m_status{InvitationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_invitationDate{};
    bool m_invitationDateHasBeenSet = false;

    Aws::Utils::DateTime m_expirationDate{};
    bool m_expirationDateHasBeenSet = false;

    Aws::String m_senderAwsAccountId;
    bool m_senderAwsAccountIdHasBeenSet = false;

    Aws::String m_senderCompanyName;
    bool m_senderCompanyNameHasBeenSet = false;

    Receiver m_receiver;
    bool m_receiverHasBeenSet = false;

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_rejectionReason;
    bool m_rejectionReasonHasBeenSet = false;

    Payload m_payload;
    bool m_payloadHasBeenSet = false;

    Aws::String m_invitationMessage;
    bool m_invitationMessageHasBeenSet = false;

    Aws::String m_engagementDescription;
    bool m_engagementDescriptionHasBeenSet = false;

    Aws::Vector<EngagementMemberSummary> m_existingMembers;
    bool m_existingMembersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
