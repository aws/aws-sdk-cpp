/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/OpportunityEngagementInvitationSort.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/ParticipantType.h>
#include <aws/partnercentral-selling/model/EngagementInvitationPayloadType.h>
#include <aws/partnercentral-selling/model/InvitationStatus.h>
#include <utility>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   */
  class ListEngagementInvitationsRequest : public PartnerCentralSellingRequest
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ListEngagementInvitationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEngagementInvitations"; }

    AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

    AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the catalog from which to list the engagement invitations. Use
     * <code>AWS</code> for production invitations or <code>Sandbox</code> for testing
     * environments.</p>
     */
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    ListEngagementInvitationsRequest& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum number of engagement invitations to return in the
     * response. If more results are available, a pagination token will be
     * provided.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListEngagementInvitationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pagination token used to retrieve additional pages of results when the
     * response to a previous request was truncated. Pass this token to continue
     * listing invitations from where the previous call left off.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEngagementInvitationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the sorting options for listing engagement invitations. Invitations
     * can be sorted by fields such as <code>InvitationDate</code> or
     * <code>Status</code> to help partners view results in their preferred order.</p>
     */
    inline const OpportunityEngagementInvitationSort& GetSort() const { return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    template<typename SortT = OpportunityEngagementInvitationSort>
    void SetSort(SortT&& value) { m_sortHasBeenSet = true; m_sort = std::forward<SortT>(value); }
    template<typename SortT = OpportunityEngagementInvitationSort>
    ListEngagementInvitationsRequest& WithSort(SortT&& value) { SetSort(std::forward<SortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the type of payload associated with the engagement invitations to be
     * listed. The attributes in this payload help decide on acceptance or rejection of
     * the invitation.</p>
     */
    inline const Aws::Vector<EngagementInvitationPayloadType>& GetPayloadType() const { return m_payloadType; }
    inline bool PayloadTypeHasBeenSet() const { return m_payloadTypeHasBeenSet; }
    template<typename PayloadTypeT = Aws::Vector<EngagementInvitationPayloadType>>
    void SetPayloadType(PayloadTypeT&& value) { m_payloadTypeHasBeenSet = true; m_payloadType = std::forward<PayloadTypeT>(value); }
    template<typename PayloadTypeT = Aws::Vector<EngagementInvitationPayloadType>>
    ListEngagementInvitationsRequest& WithPayloadType(PayloadTypeT&& value) { SetPayloadType(std::forward<PayloadTypeT>(value)); return *this;}
    inline ListEngagementInvitationsRequest& AddPayloadType(EngagementInvitationPayloadType value) { m_payloadTypeHasBeenSet = true; m_payloadType.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the type of participant for which to list engagement invitations.
     * Identifies the role of the participant.</p>
     */
    inline ParticipantType GetParticipantType() const { return m_participantType; }
    inline bool ParticipantTypeHasBeenSet() const { return m_participantTypeHasBeenSet; }
    inline void SetParticipantType(ParticipantType value) { m_participantTypeHasBeenSet = true; m_participantType = value; }
    inline ListEngagementInvitationsRequest& WithParticipantType(ParticipantType value) { SetParticipantType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Status values to filter the invitations. </p>
     */
    inline const Aws::Vector<InvitationStatus>& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::Vector<InvitationStatus>>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::Vector<InvitationStatus>>
    ListEngagementInvitationsRequest& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    inline ListEngagementInvitationsRequest& AddStatus(InvitationStatus value) { m_statusHasBeenSet = true; m_status.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Retrieves a list of engagement invitation summaries based on specified
     * filters. The ListEngagementInvitations operation allows you to view all
     * invitations that you have sent or received. You must specify the ParticipantType
     * to filter invitations where you are either the SENDER or the RECEIVER.
     * Invitations will automatically expire if not accepted within 15 days. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEngagementIdentifier() const { return m_engagementIdentifier; }
    inline bool EngagementIdentifierHasBeenSet() const { return m_engagementIdentifierHasBeenSet; }
    template<typename EngagementIdentifierT = Aws::Vector<Aws::String>>
    void SetEngagementIdentifier(EngagementIdentifierT&& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier = std::forward<EngagementIdentifierT>(value); }
    template<typename EngagementIdentifierT = Aws::Vector<Aws::String>>
    ListEngagementInvitationsRequest& WithEngagementIdentifier(EngagementIdentifierT&& value) { SetEngagementIdentifier(std::forward<EngagementIdentifierT>(value)); return *this;}
    template<typename EngagementIdentifierT = Aws::String>
    ListEngagementInvitationsRequest& AddEngagementIdentifier(EngagementIdentifierT&& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier.emplace_back(std::forward<EngagementIdentifierT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> List of sender AWS account IDs to filter the invitations. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSenderAwsAccountId() const { return m_senderAwsAccountId; }
    inline bool SenderAwsAccountIdHasBeenSet() const { return m_senderAwsAccountIdHasBeenSet; }
    template<typename SenderAwsAccountIdT = Aws::Vector<Aws::String>>
    void SetSenderAwsAccountId(SenderAwsAccountIdT&& value) { m_senderAwsAccountIdHasBeenSet = true; m_senderAwsAccountId = std::forward<SenderAwsAccountIdT>(value); }
    template<typename SenderAwsAccountIdT = Aws::Vector<Aws::String>>
    ListEngagementInvitationsRequest& WithSenderAwsAccountId(SenderAwsAccountIdT&& value) { SetSenderAwsAccountId(std::forward<SenderAwsAccountIdT>(value)); return *this;}
    template<typename SenderAwsAccountIdT = Aws::String>
    ListEngagementInvitationsRequest& AddSenderAwsAccountId(SenderAwsAccountIdT&& value) { m_senderAwsAccountIdHasBeenSet = true; m_senderAwsAccountId.emplace_back(std::forward<SenderAwsAccountIdT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    OpportunityEngagementInvitationSort m_sort;
    bool m_sortHasBeenSet = false;

    Aws::Vector<EngagementInvitationPayloadType> m_payloadType;
    bool m_payloadTypeHasBeenSet = false;

    ParticipantType m_participantType{ParticipantType::NOT_SET};
    bool m_participantTypeHasBeenSet = false;

    Aws::Vector<InvitationStatus> m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_engagementIdentifier;
    bool m_engagementIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_senderAwsAccountId;
    bool m_senderAwsAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
