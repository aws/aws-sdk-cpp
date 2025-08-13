/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/NationalSecurity.h>
#include <aws/partnercentral-selling/model/Customer.h>
#include <aws/partnercentral-selling/model/Project.h>
#include <aws/partnercentral-selling/model/OpportunityType.h>
#include <aws/partnercentral-selling/model/Marketing.h>
#include <aws/partnercentral-selling/model/SoftwareRevenue.h>
#include <aws/core/utils/DateTime.h>
#include <aws/partnercentral-selling/model/LifeCycle.h>
#include <aws/partnercentral-selling/model/PrimaryNeedFromAws.h>
#include <utility>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   */
  class UpdateOpportunityRequest : public PartnerCentralSellingRequest
  {
  public:
    AWS_PARTNERCENTRALSELLING_API UpdateOpportunityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOpportunity"; }

    AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

    AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the catalog associated with the request. This field takes a string
     * value from a predefined list: <code>AWS</code> or <code>Sandbox</code>. The
     * catalog determines which environment the opportunity is updated in. Use
     * <code>AWS</code> to update real opportunities in the production environment, and
     * <code>Sandbox</code> for testing in secure, isolated environments. When you use
     * the <code>Sandbox</code> catalog, it allows you to simulate and validate your
     * interactions with Amazon Web Services services without affecting live data or
     * operations.</p>
     */
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    UpdateOpportunityRequest& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the type of support the partner needs from Amazon Web
     * Services.</p> <p>Valid values:</p> <ul> <li> <p>Cosell—Architectural Validation:
     * Confirmation from Amazon Web Services that the partner's proposed solution
     * architecture is aligned with Amazon Web Services best practices and poses
     * minimal architectural risks.</p> </li> <li> <p>Cosell—Business Presentation:
     * Request Amazon Web Services seller's participation in a joint customer
     * presentation.</p> </li> <li> <p>Cosell—Competitive Information: Access to Amazon
     * Web Services competitive resources and support for the partner's proposed
     * solution.</p> </li> <li> <p>Cosell—Pricing Assistance: Connect with an AWS
     * seller for support situations where a partner may be receiving an upfront
     * discount on a service (for example: EDP deals).</p> </li> <li>
     * <p>Cosell—Technical Consultation: Connection with an Amazon Web Services
     * Solutions Architect to address the partner's questions about the proposed
     * solution.</p> </li> <li> <p>Cosell—Total Cost of Ownership Evaluation:
     * Assistance with quoting different cost savings of proposed solutions on Amazon
     * Web Services versus on-premises or a traditional hosting environment.</p> </li>
     * <li> <p>Cosell—Deal Support: Request Amazon Web Services seller's support to
     * progress the opportunity (for example: joint customer call, strategic
     * positioning).</p> </li> <li> <p>Cosell—Support for Public Tender/RFx:
     * Opportunity related to the public sector where the partner needs RFx support
     * from Amazon Web Services.</p> </li> </ul>
     */
    inline const Aws::Vector<PrimaryNeedFromAws>& GetPrimaryNeedsFromAws() const { return m_primaryNeedsFromAws; }
    inline bool PrimaryNeedsFromAwsHasBeenSet() const { return m_primaryNeedsFromAwsHasBeenSet; }
    template<typename PrimaryNeedsFromAwsT = Aws::Vector<PrimaryNeedFromAws>>
    void SetPrimaryNeedsFromAws(PrimaryNeedsFromAwsT&& value) { m_primaryNeedsFromAwsHasBeenSet = true; m_primaryNeedsFromAws = std::forward<PrimaryNeedsFromAwsT>(value); }
    template<typename PrimaryNeedsFromAwsT = Aws::Vector<PrimaryNeedFromAws>>
    UpdateOpportunityRequest& WithPrimaryNeedsFromAws(PrimaryNeedsFromAwsT&& value) { SetPrimaryNeedsFromAws(std::forward<PrimaryNeedsFromAwsT>(value)); return *this;}
    inline UpdateOpportunityRequest& AddPrimaryNeedsFromAws(PrimaryNeedFromAws value) { m_primaryNeedsFromAwsHasBeenSet = true; m_primaryNeedsFromAws.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies if the opportunity is associated with national security concerns.
     * This flag is only applicable when the industry is <code>Government</code>. For
     * national-security-related opportunities, validation and compliance rules may
     * apply, impacting the opportunity's visibility and processing.</p>
     */
    inline NationalSecurity GetNationalSecurity() const { return m_nationalSecurity; }
    inline bool NationalSecurityHasBeenSet() const { return m_nationalSecurityHasBeenSet; }
    inline void SetNationalSecurity(NationalSecurity value) { m_nationalSecurityHasBeenSet = true; m_nationalSecurity = value; }
    inline UpdateOpportunityRequest& WithNationalSecurity(NationalSecurity value) { SetNationalSecurity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the opportunity's unique identifier in the partner's CRM system.
     * This value is essential to track and reconcile because it's included in the
     * outbound payload sent back to the partner.</p>
     */
    inline const Aws::String& GetPartnerOpportunityIdentifier() const { return m_partnerOpportunityIdentifier; }
    inline bool PartnerOpportunityIdentifierHasBeenSet() const { return m_partnerOpportunityIdentifierHasBeenSet; }
    template<typename PartnerOpportunityIdentifierT = Aws::String>
    void SetPartnerOpportunityIdentifier(PartnerOpportunityIdentifierT&& value) { m_partnerOpportunityIdentifierHasBeenSet = true; m_partnerOpportunityIdentifier = std::forward<PartnerOpportunityIdentifierT>(value); }
    template<typename PartnerOpportunityIdentifierT = Aws::String>
    UpdateOpportunityRequest& WithPartnerOpportunityIdentifier(PartnerOpportunityIdentifierT&& value) { SetPartnerOpportunityIdentifier(std::forward<PartnerOpportunityIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies details of the customer associated with the
     * <code>Opportunity</code>.</p>
     */
    inline const Customer& GetCustomer() const { return m_customer; }
    inline bool CustomerHasBeenSet() const { return m_customerHasBeenSet; }
    template<typename CustomerT = Customer>
    void SetCustomer(CustomerT&& value) { m_customerHasBeenSet = true; m_customer = std::forward<CustomerT>(value); }
    template<typename CustomerT = Customer>
    UpdateOpportunityRequest& WithCustomer(CustomerT&& value) { SetCustomer(std::forward<CustomerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains project details summary for the
     * <code>Opportunity</code>.</p>
     */
    inline const Project& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = Project>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = Project>
    UpdateOpportunityRequest& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the opportunity type as a renewal, new, or expansion.</p>
     * <p>Opportunity types:</p> <ul> <li> <p>New opportunity: Represents a new
     * business opportunity with a potential customer that's not previously engaged
     * with your solutions or services.</p> </li> <li> <p>Renewal opportunity:
     * Represents an opportunity to renew an existing contract or subscription with a
     * current customer, ensuring continuity of service.</p> </li> <li> <p>Expansion
     * opportunity: Represents an opportunity to expand the scope of an existing
     * contract or subscription, either by adding new services or increasing the volume
     * of existing services for a current customer.</p> </li> </ul>
     */
    inline OpportunityType GetOpportunityType() const { return m_opportunityType; }
    inline bool OpportunityTypeHasBeenSet() const { return m_opportunityTypeHasBeenSet; }
    inline void SetOpportunityType(OpportunityType value) { m_opportunityTypeHasBeenSet = true; m_opportunityType = value; }
    inline UpdateOpportunityRequest& WithOpportunityType(OpportunityType value) { SetOpportunityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains marketing details for the
     * <code>Opportunity</code>.</p>
     */
    inline const Marketing& GetMarketing() const { return m_marketing; }
    inline bool MarketingHasBeenSet() const { return m_marketingHasBeenSet; }
    template<typename MarketingT = Marketing>
    void SetMarketing(MarketingT&& value) { m_marketingHasBeenSet = true; m_marketing = std::forward<MarketingT>(value); }
    template<typename MarketingT = Marketing>
    UpdateOpportunityRequest& WithMarketing(MarketingT&& value) { SetMarketing(std::forward<MarketingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies details of a customer's procurement terms. Required only for
     * partners in eligible programs.</p>
     */
    inline const SoftwareRevenue& GetSoftwareRevenue() const { return m_softwareRevenue; }
    inline bool SoftwareRevenueHasBeenSet() const { return m_softwareRevenueHasBeenSet; }
    template<typename SoftwareRevenueT = SoftwareRevenue>
    void SetSoftwareRevenue(SoftwareRevenueT&& value) { m_softwareRevenueHasBeenSet = true; m_softwareRevenue = std::forward<SoftwareRevenueT>(value); }
    template<typename SoftwareRevenueT = SoftwareRevenue>
    UpdateOpportunityRequest& WithSoftwareRevenue(SoftwareRevenueT&& value) { SetSoftwareRevenue(std::forward<SoftwareRevenueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>DateTime</code> when the opportunity was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    UpdateOpportunityRequest& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Read-only, system generated <code>Opportunity</code> unique identifier.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    UpdateOpportunityRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains lifecycle details for the
     * <code>Opportunity</code>.</p>
     */
    inline const LifeCycle& GetLifeCycle() const { return m_lifeCycle; }
    inline bool LifeCycleHasBeenSet() const { return m_lifeCycleHasBeenSet; }
    template<typename LifeCycleT = LifeCycle>
    void SetLifeCycle(LifeCycleT&& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = std::forward<LifeCycleT>(value); }
    template<typename LifeCycleT = LifeCycle>
    UpdateOpportunityRequest& WithLifeCycle(LifeCycleT&& value) { SetLifeCycle(std::forward<LifeCycleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::Vector<PrimaryNeedFromAws> m_primaryNeedsFromAws;
    bool m_primaryNeedsFromAwsHasBeenSet = false;

    NationalSecurity m_nationalSecurity{NationalSecurity::NOT_SET};
    bool m_nationalSecurityHasBeenSet = false;

    Aws::String m_partnerOpportunityIdentifier;
    bool m_partnerOpportunityIdentifierHasBeenSet = false;

    Customer m_customer;
    bool m_customerHasBeenSet = false;

    Project m_project;
    bool m_projectHasBeenSet = false;

    OpportunityType m_opportunityType{OpportunityType::NOT_SET};
    bool m_opportunityTypeHasBeenSet = false;

    Marketing m_marketing;
    bool m_marketingHasBeenSet = false;

    SoftwareRevenue m_softwareRevenue;
    bool m_softwareRevenueHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    LifeCycle m_lifeCycle;
    bool m_lifeCycleHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
