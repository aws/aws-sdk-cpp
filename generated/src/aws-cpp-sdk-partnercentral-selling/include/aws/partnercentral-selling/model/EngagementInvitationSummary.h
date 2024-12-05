/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/partnercentral-selling/model/ParticipantType.h>
#include <aws/partnercentral-selling/model/EngagementInvitationPayloadType.h>
#include <aws/partnercentral-selling/model/Receiver.h>
#include <aws/partnercentral-selling/model/InvitationStatus.h>
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
    AWS_PARTNERCENTRALSELLING_API EngagementInvitationSummary();
    AWS_PARTNERCENTRALSELLING_API EngagementInvitationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API EngagementInvitationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Engagement Invitation. The ARN is a
     * unique identifier that allows partners to reference the invitation in their
     * system and manage its lifecycle.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline EngagementInvitationSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline EngagementInvitationSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline EngagementInvitationSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the catalog in which the Engagement Invitation resides. This can be
     * either the <code>AWS</code> or <code>Sandbox</code> catalog, indicating whether
     * the opportunity is live or being tested.</p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline EngagementInvitationSummary& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline EngagementInvitationSummary& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline EngagementInvitationSummary& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the Engagement associated with this invitation. This links
     * the invitation to its parent Engagement. </p>
     */
    inline const Aws::String& GetEngagementId() const{ return m_engagementId; }
    inline bool EngagementIdHasBeenSet() const { return m_engagementIdHasBeenSet; }
    inline void SetEngagementId(const Aws::String& value) { m_engagementIdHasBeenSet = true; m_engagementId = value; }
    inline void SetEngagementId(Aws::String&& value) { m_engagementIdHasBeenSet = true; m_engagementId = std::move(value); }
    inline void SetEngagementId(const char* value) { m_engagementIdHasBeenSet = true; m_engagementId.assign(value); }
    inline EngagementInvitationSummary& WithEngagementId(const Aws::String& value) { SetEngagementId(value); return *this;}
    inline EngagementInvitationSummary& WithEngagementId(Aws::String&& value) { SetEngagementId(std::move(value)); return *this;}
    inline EngagementInvitationSummary& WithEngagementId(const char* value) { SetEngagementId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a short title or description of the Engagement Invitation. This
     * title helps partners quickly identify and differentiate between multiple
     * engagement opportunities.</p>
     */
    inline const Aws::String& GetEngagementTitle() const{ return m_engagementTitle; }
    inline bool EngagementTitleHasBeenSet() const { return m_engagementTitleHasBeenSet; }
    inline void SetEngagementTitle(const Aws::String& value) { m_engagementTitleHasBeenSet = true; m_engagementTitle = value; }
    inline void SetEngagementTitle(Aws::String&& value) { m_engagementTitleHasBeenSet = true; m_engagementTitle = std::move(value); }
    inline void SetEngagementTitle(const char* value) { m_engagementTitleHasBeenSet = true; m_engagementTitle.assign(value); }
    inline EngagementInvitationSummary& WithEngagementTitle(const Aws::String& value) { SetEngagementTitle(value); return *this;}
    inline EngagementInvitationSummary& WithEngagementTitle(Aws::String&& value) { SetEngagementTitle(std::move(value)); return *this;}
    inline EngagementInvitationSummary& WithEngagementTitle(const char* value) { SetEngagementTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the date and time when the Engagement Invitation will expire. After
     * this date, the invitation can no longer be accepted, and the opportunity will be
     * unavailable to the partner.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const{ return m_expirationDate; }
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }
    inline void SetExpirationDate(const Aws::Utils::DateTime& value) { m_expirationDateHasBeenSet = true; m_expirationDate = value; }
    inline void SetExpirationDate(Aws::Utils::DateTime&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::move(value); }
    inline EngagementInvitationSummary& WithExpirationDate(const Aws::Utils::DateTime& value) { SetExpirationDate(value); return *this;}
    inline EngagementInvitationSummary& WithExpirationDate(Aws::Utils::DateTime&& value) { SetExpirationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the unique identifier of the Engagement Invitation. This
     * identifier is used to track the invitation and to manage responses like
     * acceptance or rejection.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline EngagementInvitationSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline EngagementInvitationSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline EngagementInvitationSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the date when the Engagement Invitation was sent to the partner.
     * This provides context for when the opportunity was shared and helps in tracking
     * the timeline for engagement.</p>
     */
    inline const Aws::Utils::DateTime& GetInvitationDate() const{ return m_invitationDate; }
    inline bool InvitationDateHasBeenSet() const { return m_invitationDateHasBeenSet; }
    inline void SetInvitationDate(const Aws::Utils::DateTime& value) { m_invitationDateHasBeenSet = true; m_invitationDate = value; }
    inline void SetInvitationDate(Aws::Utils::DateTime&& value) { m_invitationDateHasBeenSet = true; m_invitationDate = std::move(value); }
    inline EngagementInvitationSummary& WithInvitationDate(const Aws::Utils::DateTime& value) { SetInvitationDate(value); return *this;}
    inline EngagementInvitationSummary& WithInvitationDate(Aws::Utils::DateTime&& value) { SetInvitationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the role of the caller in the engagement invitation.</p>
     */
    inline const ParticipantType& GetParticipantType() const{ return m_participantType; }
    inline bool ParticipantTypeHasBeenSet() const { return m_participantTypeHasBeenSet; }
    inline void SetParticipantType(const ParticipantType& value) { m_participantTypeHasBeenSet = true; m_participantType = value; }
    inline void SetParticipantType(ParticipantType&& value) { m_participantTypeHasBeenSet = true; m_participantType = std::move(value); }
    inline EngagementInvitationSummary& WithParticipantType(const ParticipantType& value) { SetParticipantType(value); return *this;}
    inline EngagementInvitationSummary& WithParticipantType(ParticipantType&& value) { SetParticipantType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the type of payload associated with the Engagement Invitation, such
     * as <code>Opportunity</code> or <code>MarketplaceOffer</code>. This helps
     * partners understand the nature of the engagement request from AWS.</p>
     */
    inline const EngagementInvitationPayloadType& GetPayloadType() const{ return m_payloadType; }
    inline bool PayloadTypeHasBeenSet() const { return m_payloadTypeHasBeenSet; }
    inline void SetPayloadType(const EngagementInvitationPayloadType& value) { m_payloadTypeHasBeenSet = true; m_payloadType = value; }
    inline void SetPayloadType(EngagementInvitationPayloadType&& value) { m_payloadTypeHasBeenSet = true; m_payloadType = std::move(value); }
    inline EngagementInvitationSummary& WithPayloadType(const EngagementInvitationPayloadType& value) { SetPayloadType(value); return *this;}
    inline EngagementInvitationSummary& WithPayloadType(EngagementInvitationPayloadType&& value) { SetPayloadType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the partner company or individual that received the Engagement
     * Invitation. This field is important for tracking who the invitation was sent to
     * within the partner organization.</p>
     */
    inline const Receiver& GetReceiver() const{ return m_receiver; }
    inline bool ReceiverHasBeenSet() const { return m_receiverHasBeenSet; }
    inline void SetReceiver(const Receiver& value) { m_receiverHasBeenSet = true; m_receiver = value; }
    inline void SetReceiver(Receiver&& value) { m_receiverHasBeenSet = true; m_receiver = std::move(value); }
    inline EngagementInvitationSummary& WithReceiver(const Receiver& value) { SetReceiver(value); return *this;}
    inline EngagementInvitationSummary& WithReceiver(Receiver&& value) { SetReceiver(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the AWS account ID of the sender who initiated the Engagement
     * Invitation. This allows the partner to identify the AWS entity or representative
     * responsible for sharing the opportunity.</p>
     */
    inline const Aws::String& GetSenderAwsAccountId() const{ return m_senderAwsAccountId; }
    inline bool SenderAwsAccountIdHasBeenSet() const { return m_senderAwsAccountIdHasBeenSet; }
    inline void SetSenderAwsAccountId(const Aws::String& value) { m_senderAwsAccountIdHasBeenSet = true; m_senderAwsAccountId = value; }
    inline void SetSenderAwsAccountId(Aws::String&& value) { m_senderAwsAccountIdHasBeenSet = true; m_senderAwsAccountId = std::move(value); }
    inline void SetSenderAwsAccountId(const char* value) { m_senderAwsAccountIdHasBeenSet = true; m_senderAwsAccountId.assign(value); }
    inline EngagementInvitationSummary& WithSenderAwsAccountId(const Aws::String& value) { SetSenderAwsAccountId(value); return *this;}
    inline EngagementInvitationSummary& WithSenderAwsAccountId(Aws::String&& value) { SetSenderAwsAccountId(std::move(value)); return *this;}
    inline EngagementInvitationSummary& WithSenderAwsAccountId(const char* value) { SetSenderAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the name of the company or AWS division that sent the Engagement
     * Invitation. This information is useful for partners to know which part of AWS is
     * requesting engagement.</p>
     */
    inline const Aws::String& GetSenderCompanyName() const{ return m_senderCompanyName; }
    inline bool SenderCompanyNameHasBeenSet() const { return m_senderCompanyNameHasBeenSet; }
    inline void SetSenderCompanyName(const Aws::String& value) { m_senderCompanyNameHasBeenSet = true; m_senderCompanyName = value; }
    inline void SetSenderCompanyName(Aws::String&& value) { m_senderCompanyNameHasBeenSet = true; m_senderCompanyName = std::move(value); }
    inline void SetSenderCompanyName(const char* value) { m_senderCompanyNameHasBeenSet = true; m_senderCompanyName.assign(value); }
    inline EngagementInvitationSummary& WithSenderCompanyName(const Aws::String& value) { SetSenderCompanyName(value); return *this;}
    inline EngagementInvitationSummary& WithSenderCompanyName(Aws::String&& value) { SetSenderCompanyName(std::move(value)); return *this;}
    inline EngagementInvitationSummary& WithSenderCompanyName(const char* value) { SetSenderCompanyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the current status of the Engagement Invitation, such as
     * <code>Pending</code>, <code>Accepted</code>, or <code>Rejected</code>. The
     * status helps track the progress and response to the invitation.</p>
     */
    inline const InvitationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const InvitationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(InvitationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline EngagementInvitationSummary& WithStatus(const InvitationStatus& value) { SetStatus(value); return *this;}
    inline EngagementInvitationSummary& WithStatus(InvitationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_engagementId;
    bool m_engagementIdHasBeenSet = false;

    Aws::String m_engagementTitle;
    bool m_engagementTitleHasBeenSet = false;

    Aws::Utils::DateTime m_expirationDate;
    bool m_expirationDateHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_invitationDate;
    bool m_invitationDateHasBeenSet = false;

    ParticipantType m_participantType;
    bool m_participantTypeHasBeenSet = false;

    EngagementInvitationPayloadType m_payloadType;
    bool m_payloadTypeHasBeenSet = false;

    Receiver m_receiver;
    bool m_receiverHasBeenSet = false;

    Aws::String m_senderAwsAccountId;
    bool m_senderAwsAccountIdHasBeenSet = false;

    Aws::String m_senderCompanyName;
    bool m_senderCompanyNameHasBeenSet = false;

    InvitationStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
