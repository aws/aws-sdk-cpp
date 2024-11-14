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
    AWS_PARTNERCENTRALSELLING_API RejectEngagementInvitationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RejectEngagementInvitation"; }

    AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

    AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the catalog related to the engagement invitation. Accepted values
     * are <code>AWS</code> and <code>Sandbox</code>, which determine the environment
     * in which the opportunity is managed.</p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline RejectEngagementInvitationRequest& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline RejectEngagementInvitationRequest& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline RejectEngagementInvitationRequest& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the unique identifier of the <code>EngagementInvitation</code> to
     * be rejected. Providing the correct identifier ensures that the intended
     * invitation is rejected.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline RejectEngagementInvitationRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline RejectEngagementInvitationRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline RejectEngagementInvitationRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the reason for rejecting the engagement invitation. Providing a
     * reason helps document the rationale behind the rejection and assists AWS in
     * tracking patterns or issues. Possible values include:</p> <ul> <li> <p>
     * <i>Customer problem unclear:</i> The customer's problem is not clearly
     * defined.</p> </li> <li> <p> <i>Next steps unclear:</i> The next steps required
     * to proceed are not clear.</p> </li> <li> <p> <i>Unable to support:</i> The
     * partner is unable to provide support due to resource or capability
     * constraints.</p> </li> <li> <p> <i>Duplicate of Partner Referral:</i> The
     * opportunity is a duplicate of an existing referral.</p> </li> <li> <p>
     * <i>Other:</i> Any other reason not covered by the specified values.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetRejectionReason() const{ return m_rejectionReason; }
    inline bool RejectionReasonHasBeenSet() const { return m_rejectionReasonHasBeenSet; }
    inline void SetRejectionReason(const Aws::String& value) { m_rejectionReasonHasBeenSet = true; m_rejectionReason = value; }
    inline void SetRejectionReason(Aws::String&& value) { m_rejectionReasonHasBeenSet = true; m_rejectionReason = std::move(value); }
    inline void SetRejectionReason(const char* value) { m_rejectionReasonHasBeenSet = true; m_rejectionReason.assign(value); }
    inline RejectEngagementInvitationRequest& WithRejectionReason(const Aws::String& value) { SetRejectionReason(value); return *this;}
    inline RejectEngagementInvitationRequest& WithRejectionReason(Aws::String&& value) { SetRejectionReason(std::move(value)); return *this;}
    inline RejectEngagementInvitationRequest& WithRejectionReason(const char* value) { SetRejectionReason(value); return *this;}
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
