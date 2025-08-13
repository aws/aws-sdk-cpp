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
#include <aws/partnercentral-selling/model/ParticipantType.h>
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
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p>Provides a summarized view of the Engagement Invitation, including details
   * like the identifier, status, and sender. This summary helps partners track and
   * manage AWS originated opportunities.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/EngagementInvitationSummary">AWS
   * API Reference</a></p>
   */
  class EngagementInvitationSummary
  {
  public:
    AWS_PARTNERCENTRALSELLING_API EngagementInvitationSummary() = default;
    AWS_PARTNERCENTRALSELLING_API EngagementInvitationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API EngagementInvitationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Engagement Invitation. The ARN is a
     * unique identifier that allows partners to reference the invitation in their
     * system and manage its lifecycle.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    EngagementInvitationSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the type of payload associated with the Engagement Invitation, such
     * as <code>Opportunity</code> or <code>MarketplaceOffer</code>. This helps
     * partners understand the nature of the engagement request from AWS.</p>
     */
    inline EngagementInvitationPayloadType GetPayloadType() const { return m_payloadType; }
    inline bool PayloadTypeHasBeenSet() const { return m_payloadTypeHasBeenSet; }
    inline void SetPayloadType(EngagementInvitationPayloadType value) { m_payloadTypeHasBeenSet = true; m_payloadType = value; }
    inline EngagementInvitationSummary& WithPayloadType(EngagementInvitationPayloadType value) { SetPayloadType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the unique identifier of the Engagement Invitation. This
     * identifier is used to track the invitation and to manage responses like
     * acceptance or rejection.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    EngagementInvitationSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the Engagement associated with this invitation. This links
     * the invitation to its parent Engagement. </p>
     */
    inline const Aws::String& GetEngagementId() const { return m_engagementId; }
    inline bool EngagementIdHasBeenSet() const { return m_engagementIdHasBeenSet; }
    template<typename EngagementIdT = Aws::String>
    void SetEngagementId(EngagementIdT&& value) { m_engagementIdHasBeenSet = true; m_engagementId = std::forward<EngagementIdT>(value); }
    template<typename EngagementIdT = Aws::String>
    EngagementInvitationSummary& WithEngagementId(EngagementIdT&& value) { SetEngagementId(std::forward<EngagementIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a short title or description of the Engagement Invitation. This
     * title helps partners quickly identify and differentiate between multiple
     * engagement opportunities.</p>
     */
    inline const Aws::String& GetEngagementTitle() const { return m_engagementTitle; }
    inline bool EngagementTitleHasBeenSet() const { return m_engagementTitleHasBeenSet; }
    template<typename EngagementTitleT = Aws::String>
    void SetEngagementTitle(EngagementTitleT&& value) { m_engagementTitleHasBeenSet = true; m_engagementTitle = std::forward<EngagementTitleT>(value); }
    template<typename EngagementTitleT = Aws::String>
    EngagementInvitationSummary& WithEngagementTitle(EngagementTitleT&& value) { SetEngagementTitle(std::forward<EngagementTitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the current status of the Engagement Invitation, such as
     * <code>Pending</code>, <code>Accepted</code>, or <code>Rejected</code>. The
     * status helps track the progress and response to the invitation.</p>
     */
    inline InvitationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(InvitationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline EngagementInvitationSummary& WithStatus(InvitationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the date when the Engagement Invitation was sent to the partner.
     * This provides context for when the opportunity was shared and helps in tracking
     * the timeline for engagement.</p>
     */
    inline const Aws::Utils::DateTime& GetInvitationDate() const { return m_invitationDate; }
    inline bool InvitationDateHasBeenSet() const { return m_invitationDateHasBeenSet; }
    template<typename InvitationDateT = Aws::Utils::DateTime>
    void SetInvitationDate(InvitationDateT&& value) { m_invitationDateHasBeenSet = true; m_invitationDate = std::forward<InvitationDateT>(value); }
    template<typename InvitationDateT = Aws::Utils::DateTime>
    EngagementInvitationSummary& WithInvitationDate(InvitationDateT&& value) { SetInvitationDate(std::forward<InvitationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the date and time when the Engagement Invitation will expire. After
     * this date, the invitation can no longer be accepted, and the opportunity will be
     * unavailable to the partner.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const { return m_expirationDate; }
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }
    template<typename ExpirationDateT = Aws::Utils::DateTime>
    void SetExpirationDate(ExpirationDateT&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::forward<ExpirationDateT>(value); }
    template<typename ExpirationDateT = Aws::Utils::DateTime>
    EngagementInvitationSummary& WithExpirationDate(ExpirationDateT&& value) { SetExpirationDate(std::forward<ExpirationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the AWS account ID of the sender who initiated the Engagement
     * Invitation. This allows the partner to identify the AWS entity or representative
     * responsible for sharing the opportunity.</p>
     */
    inline const Aws::String& GetSenderAwsAccountId() const { return m_senderAwsAccountId; }
    inline bool SenderAwsAccountIdHasBeenSet() const { return m_senderAwsAccountIdHasBeenSet; }
    template<typename SenderAwsAccountIdT = Aws::String>
    void SetSenderAwsAccountId(SenderAwsAccountIdT&& value) { m_senderAwsAccountIdHasBeenSet = true; m_senderAwsAccountId = std::forward<SenderAwsAccountIdT>(value); }
    template<typename SenderAwsAccountIdT = Aws::String>
    EngagementInvitationSummary& WithSenderAwsAccountId(SenderAwsAccountIdT&& value) { SetSenderAwsAccountId(std::forward<SenderAwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the name of the company or AWS division that sent the Engagement
     * Invitation. This information is useful for partners to know which part of AWS is
     * requesting engagement.</p>
     */
    inline const Aws::String& GetSenderCompanyName() const { return m_senderCompanyName; }
    inline bool SenderCompanyNameHasBeenSet() const { return m_senderCompanyNameHasBeenSet; }
    template<typename SenderCompanyNameT = Aws::String>
    void SetSenderCompanyName(SenderCompanyNameT&& value) { m_senderCompanyNameHasBeenSet = true; m_senderCompanyName = std::forward<SenderCompanyNameT>(value); }
    template<typename SenderCompanyNameT = Aws::String>
    EngagementInvitationSummary& WithSenderCompanyName(SenderCompanyNameT&& value) { SetSenderCompanyName(std::forward<SenderCompanyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the partner company or individual that received the Engagement
     * Invitation. This field is important for tracking who the invitation was sent to
     * within the partner organization.</p>
     */
    inline const Receiver& GetReceiver() const { return m_receiver; }
    inline bool ReceiverHasBeenSet() const { return m_receiverHasBeenSet; }
    template<typename ReceiverT = Receiver>
    void SetReceiver(ReceiverT&& value) { m_receiverHasBeenSet = true; m_receiver = std::forward<ReceiverT>(value); }
    template<typename ReceiverT = Receiver>
    EngagementInvitationSummary& WithReceiver(ReceiverT&& value) { SetReceiver(std::forward<ReceiverT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the catalog in which the Engagement Invitation resides. This can be
     * either the <code>AWS</code> or <code>Sandbox</code> catalog, indicating whether
     * the opportunity is live or being tested.</p>
     */
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    EngagementInvitationSummary& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the role of the caller in the engagement invitation.</p>
     */
    inline ParticipantType GetParticipantType() const { return m_participantType; }
    inline bool ParticipantTypeHasBeenSet() const { return m_participantTypeHasBeenSet; }
    inline void SetParticipantType(ParticipantType value) { m_participantTypeHasBeenSet = true; m_participantType = value; }
    inline EngagementInvitationSummary& WithParticipantType(ParticipantType value) { SetParticipantType(value); return *this;}
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

    ParticipantType m_participantType{ParticipantType::NOT_SET};
    bool m_participantTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
