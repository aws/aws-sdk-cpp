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
  class DisassociateOpportunityRequest : public PartnerCentralSellingRequest
  {
  public:
    AWS_PARTNERCENTRALSELLING_API DisassociateOpportunityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateOpportunity"; }

    AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

    AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the catalog associated with the request. This field takes a string
     * value from a predefined list: <code>AWS</code> or <code>Sandbox</code>. The
     * catalog determines which environment the opportunity disassociation is made in.
     * Use <code>AWS</code> to disassociate opportunities in the Amazon Web Services
     * catalog, and <code>Sandbox</code> for testing in secure, isolated
     * environments.</p>
     */
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    DisassociateOpportunityRequest& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The opportunity's unique identifier for when you want to disassociate it from
     * related entities. This identifier helps to ensure that the correct opportunity
     * is updated.</p> <p>Validation: Ensure that the provided identifier corresponds
     * to an existing opportunity in the Amazon Web Services system because incorrect
     * identifiers result in an error and no changes are made.</p>
     */
    inline const Aws::String& GetOpportunityIdentifier() const { return m_opportunityIdentifier; }
    inline bool OpportunityIdentifierHasBeenSet() const { return m_opportunityIdentifierHasBeenSet; }
    template<typename OpportunityIdentifierT = Aws::String>
    void SetOpportunityIdentifier(OpportunityIdentifierT&& value) { m_opportunityIdentifierHasBeenSet = true; m_opportunityIdentifier = std::forward<OpportunityIdentifierT>(value); }
    template<typename OpportunityIdentifierT = Aws::String>
    DisassociateOpportunityRequest& WithOpportunityIdentifier(OpportunityIdentifierT&& value) { SetOpportunityIdentifier(std::forward<OpportunityIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the entity that you're disassociating from the opportunity. When
     * you specify the entity type, it helps the system correctly process the
     * disassociation request to ensure that the right connections are removed.</p>
     * <p>Examples of entity types include Partner Solution, Amazon Web Services
     * product, and Amazon Web Services Marketplaceoffer. Ensure that the value matches
     * one of the expected entity types.</p> <p>Validation: Provide a valid entity type
     * to help ensure successful disassociation. An invalid or incorrect entity type
     * results in an error.</p>
     */
    inline RelatedEntityType GetRelatedEntityType() const { return m_relatedEntityType; }
    inline bool RelatedEntityTypeHasBeenSet() const { return m_relatedEntityTypeHasBeenSet; }
    inline void SetRelatedEntityType(RelatedEntityType value) { m_relatedEntityTypeHasBeenSet = true; m_relatedEntityType = value; }
    inline DisassociateOpportunityRequest& WithRelatedEntityType(RelatedEntityType value) { SetRelatedEntityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The related entity's identifier that you want to disassociate from the
     * opportunity. Depending on the type of entity, this could be a simple identifier
     * or an Amazon Resource Name (ARN) for entities managed through Amazon Web
     * Services Marketplace.</p> <p>For Amazon Web Services Marketplace entities, use
     * the Amazon Web Services Marketplace API to obtain the necessary ARNs. For
     * guidance on retrieving these ARNs, see <a
     * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/welcome.html">
     * Amazon Web Services MarketplaceUsing the Amazon Web Services Marketplace Catalog
     * API</a>.</p> <p>Validation: Ensure the identifier or ARN is valid and
     * corresponds to an existing entity. An incorrect or invalid identifier results in
     * an error.</p>
     */
    inline const Aws::String& GetRelatedEntityIdentifier() const { return m_relatedEntityIdentifier; }
    inline bool RelatedEntityIdentifierHasBeenSet() const { return m_relatedEntityIdentifierHasBeenSet; }
    template<typename RelatedEntityIdentifierT = Aws::String>
    void SetRelatedEntityIdentifier(RelatedEntityIdentifierT&& value) { m_relatedEntityIdentifierHasBeenSet = true; m_relatedEntityIdentifier = std::forward<RelatedEntityIdentifierT>(value); }
    template<typename RelatedEntityIdentifierT = Aws::String>
    DisassociateOpportunityRequest& WithRelatedEntityIdentifier(RelatedEntityIdentifierT&& value) { SetRelatedEntityIdentifier(std::forward<RelatedEntityIdentifierT>(value)); return *this;}
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
