/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/SalesInvolvementType.h>
#include <aws/partnercentral-selling/model/Visibility.h>
#include <utility>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   */
  class SubmitOpportunityRequest : public PartnerCentralSellingRequest
  {
  public:
    AWS_PARTNERCENTRALSELLING_API SubmitOpportunityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SubmitOpportunity"; }

    AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

    AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the catalog related to the request. Valid values are:</p> <ul> <li>
     * <p>AWS: Submits the opportunity request from the production AWS environment.</p>
     * </li> <li> <p>Sandbox: Submits the opportunity request from a sandbox
     * environment used for testing or development purposes.</p> </li> </ul>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline SubmitOpportunityRequest& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline SubmitOpportunityRequest& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline SubmitOpportunityRequest& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Opportunity previously created by partner and needs to
     * be submitted.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline SubmitOpportunityRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline SubmitOpportunityRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline SubmitOpportunityRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the level of AWS sellers' involvement on the opportunity. Valid
     * values:</p> <ul> <li> <p> <code>Co-sell</code>: Indicates the user wants to
     * co-sell with AWS. Share the opportunity with AWS to receive deal assistance and
     * support.</p> </li> <li> <p> <code>For Visibility Only</code>: Indicates that the
     * user does not need support from AWS Sales Rep. Share this opportunity with AWS
     * for visibility only, you will not receive deal assistance and support.</p> </li>
     * </ul>
     */
    inline const SalesInvolvementType& GetInvolvementType() const{ return m_involvementType; }
    inline bool InvolvementTypeHasBeenSet() const { return m_involvementTypeHasBeenSet; }
    inline void SetInvolvementType(const SalesInvolvementType& value) { m_involvementTypeHasBeenSet = true; m_involvementType = value; }
    inline void SetInvolvementType(SalesInvolvementType&& value) { m_involvementTypeHasBeenSet = true; m_involvementType = std::move(value); }
    inline SubmitOpportunityRequest& WithInvolvementType(const SalesInvolvementType& value) { SetInvolvementType(value); return *this;}
    inline SubmitOpportunityRequest& WithInvolvementType(SalesInvolvementType&& value) { SetInvolvementType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether to restrict visibility of the opportunity from AWS sales.
     * Default value is Full. Valid values:</p> <ul> <li> <p> <code>Full</code>: The
     * opportunity is fully visible to AWS sales.</p> </li> <li> <p>
     * <code>Limited</code>: The opportunity has restricted visibility to AWS
     * sales.</p> </li> </ul>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }
    inline SubmitOpportunityRequest& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}
    inline SubmitOpportunityRequest& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    SalesInvolvementType m_involvementType;
    bool m_involvementTypeHasBeenSet = false;

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
