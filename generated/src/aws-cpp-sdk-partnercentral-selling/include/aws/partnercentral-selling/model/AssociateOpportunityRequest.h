/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/RelatedEntityType.h>
#include <utility>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   */
  class AssociateOpportunityRequest : public PartnerCentralSellingRequest
  {
  public:
    AWS_PARTNERCENTRALSELLING_API AssociateOpportunityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateOpportunity"; }

    AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

    AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the catalog associated with the request. This field takes a string
     * value from a predefined list: <code>AWS</code> or <code>Sandbox</code>. The
     * catalog determines which environment the opportunity association is made in. Use
     * <code>AWS</code> to associate opportunities in the Amazon Web Services catalog,
     * and <code>Sandbox</code> for testing in secure, isolated environments.</p>
     */
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    AssociateOpportunityRequest& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Requires the <code>Opportunity</code>'s unique identifier when you want to
     * associate it with a related entity. Provide the correct identifier so the
     * intended opportunity is updated with the association.</p>
     */
    inline const Aws::String& GetOpportunityIdentifier() const { return m_opportunityIdentifier; }
    inline bool OpportunityIdentifierHasBeenSet() const { return m_opportunityIdentifierHasBeenSet; }
    template<typename OpportunityIdentifierT = Aws::String>
    void SetOpportunityIdentifier(OpportunityIdentifierT&& value) { m_opportunityIdentifierHasBeenSet = true; m_opportunityIdentifier = std::forward<OpportunityIdentifierT>(value); }
    template<typename OpportunityIdentifierT = Aws::String>
    AssociateOpportunityRequest& WithOpportunityIdentifier(OpportunityIdentifierT&& value) { SetOpportunityIdentifier(std::forward<OpportunityIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the entity type that you're associating with the <code>
     * Opportunity</code>. This helps to categorize and properly process the
     * association.</p>
     */
    inline RelatedEntityType GetRelatedEntityType() const { return m_relatedEntityType; }
    inline bool RelatedEntityTypeHasBeenSet() const { return m_relatedEntityTypeHasBeenSet; }
    inline void SetRelatedEntityType(RelatedEntityType value) { m_relatedEntityTypeHasBeenSet = true; m_relatedEntityType = value; }
    inline AssociateOpportunityRequest& WithRelatedEntityType(RelatedEntityType value) { SetRelatedEntityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Requires the related entity's unique identifier when you want to associate it
     * with the <code> Opportunity</code>. For Amazon Web Services Marketplace
     * entities, provide the Amazon Resource Name (ARN). Use the <a
     * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/welcome.html">
     * Amazon Web Services Marketplace API</a> to obtain the ARN.</p>
     */
    inline const Aws::String& GetRelatedEntityIdentifier() const { return m_relatedEntityIdentifier; }
    inline bool RelatedEntityIdentifierHasBeenSet() const { return m_relatedEntityIdentifierHasBeenSet; }
    template<typename RelatedEntityIdentifierT = Aws::String>
    void SetRelatedEntityIdentifier(RelatedEntityIdentifierT&& value) { m_relatedEntityIdentifierHasBeenSet = true; m_relatedEntityIdentifier = std::forward<RelatedEntityIdentifierT>(value); }
    template<typename RelatedEntityIdentifierT = Aws::String>
    AssociateOpportunityRequest& WithRelatedEntityIdentifier(RelatedEntityIdentifierT&& value) { SetRelatedEntityIdentifier(std::forward<RelatedEntityIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_opportunityIdentifier;
    bool m_opportunityIdentifierHasBeenSet = false;

    RelatedEntityType m_relatedEntityType{RelatedEntityType::NOT_SET};
    bool m_relatedEntityTypeHasBeenSet = false;

    Aws::String m_relatedEntityIdentifier;
    bool m_relatedEntityIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
