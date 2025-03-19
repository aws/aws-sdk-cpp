/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   */
  class RejectEngagementInvitationRequest : public PartnerCentralSellingRequest
  {
  public:
    AWS_PARTNERCENTRALSELLING_API RejectEngagementInvitationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RejectEngagementInvitation"; }

    AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

    AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>This is the catalog that's associated with the engagement invitation.
     * Acceptable values are <code>AWS</code> or <code>Sandbox</code>, and these values
     * determine the environment in which the opportunity is managed.</p>
     */
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    RejectEngagementInvitationRequest& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the unique identifier of the rejected
     * <code>EngagementInvitation</code>. Providing the correct identifier helps to
     * ensure that the intended invitation is rejected.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    RejectEngagementInvitationRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This describes the reason for rejecting the engagement invitation, which
     * helps AWS track usage patterns. Acceptable values include the following:</p>
     * <ul> <li> <p> <i>Customer problem unclear:</i> The customer's problem isn't
     * understood.</p> </li> <li> <p> <i>Next steps unclear:</i> The next steps
     * required to proceed aren't understood.</p> </li> <li> <p> <i>Unable to
     * support:</i> The partner is unable to provide support due to resource or
     * capability constraints.</p> </li> <li> <p> <i>Duplicate of partner referral:</i>
     * The opportunity is a duplicate of an existing referral.</p> </li> <li> <p>
     * <i>Other:</i> Any reason not covered by other values.</p> </li> </ul>
     */
    inline const Aws::String& GetRejectionReason() const { return m_rejectionReason; }
    inline bool RejectionReasonHasBeenSet() const { return m_rejectionReasonHasBeenSet; }
    template<typename RejectionReasonT = Aws::String>
    void SetRejectionReason(RejectionReasonT&& value) { m_rejectionReasonHasBeenSet = true; m_rejectionReason = std::forward<RejectionReasonT>(value); }
    template<typename RejectionReasonT = Aws::String>
    RejectEngagementInvitationRequest& WithRejectionReason(RejectionReasonT&& value) { SetRejectionReason(std::forward<RejectionReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_rejectionReason;
    bool m_rejectionReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
