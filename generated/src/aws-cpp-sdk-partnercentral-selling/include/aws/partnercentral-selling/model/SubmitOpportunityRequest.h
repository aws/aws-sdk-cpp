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
    AWS_PARTNERCENTRALSELLING_API SubmitOpportunityRequest() = default;

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
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    SubmitOpportunityRequest& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Opportunity previously created by partner and needs to
     * be submitted.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    SubmitOpportunityRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
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
    inline SalesInvolvementType GetInvolvementType() const { return m_involvementType; }
    inline bool InvolvementTypeHasBeenSet() const { return m_involvementTypeHasBeenSet; }
    inline void SetInvolvementType(SalesInvolvementType value) { m_involvementTypeHasBeenSet = true; m_involvementType = value; }
    inline SubmitOpportunityRequest& WithInvolvementType(SalesInvolvementType value) { SetInvolvementType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether to restrict visibility of the opportunity from AWS sales.
     * Default value is Full. Valid values:</p> <ul> <li> <p> <code>Full</code>: The
     * opportunity is fully visible to AWS sales.</p> </li> <li> <p>
     * <code>Limited</code>: The opportunity has restricted visibility to AWS
     * sales.</p> </li> </ul>
     */
    inline Visibility GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(Visibility value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline SubmitOpportunityRequest& WithVisibility(Visibility value) { SetVisibility(value); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    SalesInvolvementType m_involvementType{SalesInvolvementType::NOT_SET};
    bool m_involvementTypeHasBeenSet = false;

    Visibility m_visibility{Visibility::NOT_SET};
    bool m_visibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
