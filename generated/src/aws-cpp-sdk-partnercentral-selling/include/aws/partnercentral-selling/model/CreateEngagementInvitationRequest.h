/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/Invitation.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   */
  class CreateEngagementInvitationRequest : public PartnerCentralSellingRequest
  {
  public:
    AWS_PARTNERCENTRALSELLING_API CreateEngagementInvitationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEngagementInvitation"; }

    AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

    AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> Specifies the catalog related to the engagement. Accepted values are
     * <code>AWS</code> and <code>Sandbox</code>, which determine the environment in
     * which the engagement is managed. </p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline CreateEngagementInvitationRequest& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline CreateEngagementInvitationRequest& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline CreateEngagementInvitationRequest& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies a unique, client-generated UUID to ensure that the request is
     * handled exactly once. This token helps prevent duplicate invitation creations.
     * </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateEngagementInvitationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateEngagementInvitationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateEngagementInvitationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the <code>Engagement</code> associated with the
     * invitation. This parameter ensures the invitation is created within the correct
     * <code>Engagement</code> context. </p>
     */
    inline const Aws::String& GetEngagementIdentifier() const{ return m_engagementIdentifier; }
    inline bool EngagementIdentifierHasBeenSet() const { return m_engagementIdentifierHasBeenSet; }
    inline void SetEngagementIdentifier(const Aws::String& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier = value; }
    inline void SetEngagementIdentifier(Aws::String&& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier = std::move(value); }
    inline void SetEngagementIdentifier(const char* value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier.assign(value); }
    inline CreateEngagementInvitationRequest& WithEngagementIdentifier(const Aws::String& value) { SetEngagementIdentifier(value); return *this;}
    inline CreateEngagementInvitationRequest& WithEngagementIdentifier(Aws::String&& value) { SetEngagementIdentifier(std::move(value)); return *this;}
    inline CreateEngagementInvitationRequest& WithEngagementIdentifier(const char* value) { SetEngagementIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The <code>Invitation</code> object all information necessary to initiate an
     * engagement invitation to a partner. It contains a personalized message from the
     * sender, the invitation's receiver, and a payload. The <code>Payload</code> can
     * be the <code>OpportunityInvitation</code>, which includes detailed structures
     * for sender contacts, partner responsibilities, customer information, and project
     * details. </p>
     */
    inline const Invitation& GetInvitation() const{ return m_invitation; }
    inline bool InvitationHasBeenSet() const { return m_invitationHasBeenSet; }
    inline void SetInvitation(const Invitation& value) { m_invitationHasBeenSet = true; m_invitation = value; }
    inline void SetInvitation(Invitation&& value) { m_invitationHasBeenSet = true; m_invitation = std::move(value); }
    inline CreateEngagementInvitationRequest& WithInvitation(const Invitation& value) { SetInvitation(value); return *this;}
    inline CreateEngagementInvitationRequest& WithInvitation(Invitation&& value) { SetInvitation(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_engagementIdentifier;
    bool m_engagementIdentifierHasBeenSet = false;

    Invitation m_invitation;
    bool m_invitationHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
