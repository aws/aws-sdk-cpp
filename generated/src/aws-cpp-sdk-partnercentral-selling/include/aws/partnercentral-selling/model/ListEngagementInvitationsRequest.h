/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/ParticipantType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/OpportunityEngagementInvitationSort.h>
#include <aws/partnercentral-selling/model/EngagementInvitationPayloadType.h>
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
    AWS_PARTNERCENTRALSELLING_API ListEngagementInvitationsRequest();

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
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline ListEngagementInvitationsRequest& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline ListEngagementInvitationsRequest& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline ListEngagementInvitationsRequest& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum number of engagement invitations to return in the
     * response. If more results are available, a pagination token will be
     * provided.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
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
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListEngagementInvitationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEngagementInvitationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEngagementInvitationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of participant for which to list engagement invitations.
     * Identifies the role of the participant.</p>
     */
    inline const ParticipantType& GetParticipantType() const{ return m_participantType; }
    inline bool ParticipantTypeHasBeenSet() const { return m_participantTypeHasBeenSet; }
    inline void SetParticipantType(const ParticipantType& value) { m_participantTypeHasBeenSet = true; m_participantType = value; }
    inline void SetParticipantType(ParticipantType&& value) { m_participantTypeHasBeenSet = true; m_participantType = std::move(value); }
    inline ListEngagementInvitationsRequest& WithParticipantType(const ParticipantType& value) { SetParticipantType(value); return *this;}
    inline ListEngagementInvitationsRequest& WithParticipantType(ParticipantType&& value) { SetParticipantType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the type of payload associated with the engagement invitations to be
     * listed. The attributes in this payload help decide on acceptance or rejection of
     * the invitation.</p>
     */
    inline const Aws::Vector<EngagementInvitationPayloadType>& GetPayloadType() const{ return m_payloadType; }
    inline bool PayloadTypeHasBeenSet() const { return m_payloadTypeHasBeenSet; }
    inline void SetPayloadType(const Aws::Vector<EngagementInvitationPayloadType>& value) { m_payloadTypeHasBeenSet = true; m_payloadType = value; }
    inline void SetPayloadType(Aws::Vector<EngagementInvitationPayloadType>&& value) { m_payloadTypeHasBeenSet = true; m_payloadType = std::move(value); }
    inline ListEngagementInvitationsRequest& WithPayloadType(const Aws::Vector<EngagementInvitationPayloadType>& value) { SetPayloadType(value); return *this;}
    inline ListEngagementInvitationsRequest& WithPayloadType(Aws::Vector<EngagementInvitationPayloadType>&& value) { SetPayloadType(std::move(value)); return *this;}
    inline ListEngagementInvitationsRequest& AddPayloadType(const EngagementInvitationPayloadType& value) { m_payloadTypeHasBeenSet = true; m_payloadType.push_back(value); return *this; }
    inline ListEngagementInvitationsRequest& AddPayloadType(EngagementInvitationPayloadType&& value) { m_payloadTypeHasBeenSet = true; m_payloadType.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the sorting options for listing engagement invitations. Invitations
     * can be sorted by fields such as <code>InvitationDate</code> or
     * <code>Status</code> to help partners view results in their preferred order.</p>
     */
    inline const OpportunityEngagementInvitationSort& GetSort() const{ return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    inline void SetSort(const OpportunityEngagementInvitationSort& value) { m_sortHasBeenSet = true; m_sort = value; }
    inline void SetSort(OpportunityEngagementInvitationSort&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }
    inline ListEngagementInvitationsRequest& WithSort(const OpportunityEngagementInvitationSort& value) { SetSort(value); return *this;}
    inline ListEngagementInvitationsRequest& WithSort(OpportunityEngagementInvitationSort&& value) { SetSort(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ParticipantType m_participantType;
    bool m_participantTypeHasBeenSet = false;

    Aws::Vector<EngagementInvitationPayloadType> m_payloadType;
    bool m_payloadTypeHasBeenSet = false;

    OpportunityEngagementInvitationSort m_sort;
    bool m_sortHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
