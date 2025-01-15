/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/Customer.h>
#include <aws/partnercentral-selling/model/LifeCycle.h>
#include <aws/partnercentral-selling/model/Marketing.h>
#include <aws/partnercentral-selling/model/NationalSecurity.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/OpportunityType.h>
#include <aws/partnercentral-selling/model/OpportunityOrigin.h>
#include <aws/partnercentral-selling/model/Project.h>
#include <aws/partnercentral-selling/model/SoftwareRevenue.h>
#include <aws/partnercentral-selling/model/Contact.h>
#include <aws/partnercentral-selling/model/PrimaryNeedFromAws.h>
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
  class CreateOpportunityRequest : public PartnerCentralSellingRequest
  {
  public:
    AWS_PARTNERCENTRALSELLING_API CreateOpportunityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOpportunity"; }

    AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

    AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the catalog associated with the request. This field takes a string
     * value from a predefined list: <code>AWS</code> or <code>Sandbox</code>. The
     * catalog determines which environment the opportunity is created in. Use
     * <code>AWS</code> to create opportunities in the Amazon Web Services catalog, and
     * <code>Sandbox</code> for testing in secure, isolated environments.</p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline CreateOpportunityRequest& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline CreateOpportunityRequest& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline CreateOpportunityRequest& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required to be unique, and should be unchanging, it can be randomly generated
     * or a meaningful string.</p> <p>Default: None</p> <p>Best practice: To help
     * ensure uniqueness and avoid conflicts, use a Universally Unique Identifier
     * (UUID) as the <code>ClientToken</code>. You can use standard libraries from most
     * programming languages to generate this. If you use the same client token, the
     * API returns the following error: "Conflicting client token submitted for a new
     * request body."</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateOpportunityRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateOpportunityRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateOpportunityRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies customer details associated with the <code>Opportunity</code>.</p>
     */
    inline const Customer& GetCustomer() const{ return m_customer; }
    inline bool CustomerHasBeenSet() const { return m_customerHasBeenSet; }
    inline void SetCustomer(const Customer& value) { m_customerHasBeenSet = true; m_customer = value; }
    inline void SetCustomer(Customer&& value) { m_customerHasBeenSet = true; m_customer = std::move(value); }
    inline CreateOpportunityRequest& WithCustomer(const Customer& value) { SetCustomer(value); return *this;}
    inline CreateOpportunityRequest& WithCustomer(Customer&& value) { SetCustomer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains lifecycle details for the
     * <code>Opportunity</code>.</p>
     */
    inline const LifeCycle& GetLifeCycle() const{ return m_lifeCycle; }
    inline bool LifeCycleHasBeenSet() const { return m_lifeCycleHasBeenSet; }
    inline void SetLifeCycle(const LifeCycle& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = value; }
    inline void SetLifeCycle(LifeCycle&& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = std::move(value); }
    inline CreateOpportunityRequest& WithLifeCycle(const LifeCycle& value) { SetLifeCycle(value); return *this;}
    inline CreateOpportunityRequest& WithLifeCycle(LifeCycle&& value) { SetLifeCycle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This object contains marketing details and is optional for an
     * opportunity.</p>
     */
    inline const Marketing& GetMarketing() const{ return m_marketing; }
    inline bool MarketingHasBeenSet() const { return m_marketingHasBeenSet; }
    inline void SetMarketing(const Marketing& value) { m_marketingHasBeenSet = true; m_marketing = value; }
    inline void SetMarketing(Marketing&& value) { m_marketingHasBeenSet = true; m_marketing = std::move(value); }
    inline CreateOpportunityRequest& WithMarketing(const Marketing& value) { SetMarketing(value); return *this;}
    inline CreateOpportunityRequest& WithMarketing(Marketing&& value) { SetMarketing(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the <code>Opportunity</code> pertains to a national
     * security project. This field must be set to <code>true</code> only when the
     * customer's industry is <i>Government</i>. Additional privacy and security
     * measures apply during the review and management process for opportunities marked
     * as <code>NationalSecurity</code>.</p>
     */
    inline const NationalSecurity& GetNationalSecurity() const{ return m_nationalSecurity; }
    inline bool NationalSecurityHasBeenSet() const { return m_nationalSecurityHasBeenSet; }
    inline void SetNationalSecurity(const NationalSecurity& value) { m_nationalSecurityHasBeenSet = true; m_nationalSecurity = value; }
    inline void SetNationalSecurity(NationalSecurity&& value) { m_nationalSecurityHasBeenSet = true; m_nationalSecurity = std::move(value); }
    inline CreateOpportunityRequest& WithNationalSecurity(const NationalSecurity& value) { SetNationalSecurity(value); return *this;}
    inline CreateOpportunityRequest& WithNationalSecurity(NationalSecurity&& value) { SetNationalSecurity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the internal team handling the opportunity. Specify collaborating
     * members of this opportunity who are within the partner's organization.</p>
     */
    inline const Aws::Vector<Contact>& GetOpportunityTeam() const{ return m_opportunityTeam; }
    inline bool OpportunityTeamHasBeenSet() const { return m_opportunityTeamHasBeenSet; }
    inline void SetOpportunityTeam(const Aws::Vector<Contact>& value) { m_opportunityTeamHasBeenSet = true; m_opportunityTeam = value; }
    inline void SetOpportunityTeam(Aws::Vector<Contact>&& value) { m_opportunityTeamHasBeenSet = true; m_opportunityTeam = std::move(value); }
    inline CreateOpportunityRequest& WithOpportunityTeam(const Aws::Vector<Contact>& value) { SetOpportunityTeam(value); return *this;}
    inline CreateOpportunityRequest& WithOpportunityTeam(Aws::Vector<Contact>&& value) { SetOpportunityTeam(std::move(value)); return *this;}
    inline CreateOpportunityRequest& AddOpportunityTeam(const Contact& value) { m_opportunityTeamHasBeenSet = true; m_opportunityTeam.push_back(value); return *this; }
    inline CreateOpportunityRequest& AddOpportunityTeam(Contact&& value) { m_opportunityTeamHasBeenSet = true; m_opportunityTeam.push_back(std::move(value)); return *this; }
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
    inline const OpportunityType& GetOpportunityType() const{ return m_opportunityType; }
    inline bool OpportunityTypeHasBeenSet() const { return m_opportunityTypeHasBeenSet; }
    inline void SetOpportunityType(const OpportunityType& value) { m_opportunityTypeHasBeenSet = true; m_opportunityType = value; }
    inline void SetOpportunityType(OpportunityType&& value) { m_opportunityTypeHasBeenSet = true; m_opportunityType = std::move(value); }
    inline CreateOpportunityRequest& WithOpportunityType(const OpportunityType& value) { SetOpportunityType(value); return *this;}
    inline CreateOpportunityRequest& WithOpportunityType(OpportunityType&& value) { SetOpportunityType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the origin of the opportunity, indicating if it was sourced from
     * Amazon Web Services or the partner. For all opportunities created with
     * <code>Catalog: AWS</code>, this field must only be <code>Partner
     * Referral</code>. However, when using <code>Catalog: Sandbox</code>, you can set
     * this field to <code>AWS Referral</code> to simulate Amazon Web Services referral
     * creation. This allows Amazon Web Services-originated flows testing in the
     * sandbox catalog.</p>
     */
    inline const OpportunityOrigin& GetOrigin() const{ return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    inline void SetOrigin(const OpportunityOrigin& value) { m_originHasBeenSet = true; m_origin = value; }
    inline void SetOrigin(OpportunityOrigin&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }
    inline CreateOpportunityRequest& WithOrigin(const OpportunityOrigin& value) { SetOrigin(value); return *this;}
    inline CreateOpportunityRequest& WithOrigin(OpportunityOrigin&& value) { SetOrigin(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the opportunity's unique identifier in the partner's CRM system.
     * This value is essential to track and reconcile because it's included in the
     * outbound payload to the partner.</p> <p>This field allows partners to link an
     * opportunity to their CRM, which helps to ensure seamless integration and
     * accurate synchronization between the Partner Central API and the partner's
     * internal systems.</p>
     */
    inline const Aws::String& GetPartnerOpportunityIdentifier() const{ return m_partnerOpportunityIdentifier; }
    inline bool PartnerOpportunityIdentifierHasBeenSet() const { return m_partnerOpportunityIdentifierHasBeenSet; }
    inline void SetPartnerOpportunityIdentifier(const Aws::String& value) { m_partnerOpportunityIdentifierHasBeenSet = true; m_partnerOpportunityIdentifier = value; }
    inline void SetPartnerOpportunityIdentifier(Aws::String&& value) { m_partnerOpportunityIdentifierHasBeenSet = true; m_partnerOpportunityIdentifier = std::move(value); }
    inline void SetPartnerOpportunityIdentifier(const char* value) { m_partnerOpportunityIdentifierHasBeenSet = true; m_partnerOpportunityIdentifier.assign(value); }
    inline CreateOpportunityRequest& WithPartnerOpportunityIdentifier(const Aws::String& value) { SetPartnerOpportunityIdentifier(value); return *this;}
    inline CreateOpportunityRequest& WithPartnerOpportunityIdentifier(Aws::String&& value) { SetPartnerOpportunityIdentifier(std::move(value)); return *this;}
    inline CreateOpportunityRequest& WithPartnerOpportunityIdentifier(const char* value) { SetPartnerOpportunityIdentifier(value); return *this;}
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
     * solution.</p> </li> <li> <p>Cosell—Pricing Assistance: Connect with an Amazon
     * Web Services seller for support situations where a partner may be receiving an
     * upfront discount on a service (for example: EDP deals).</p> </li> <li>
     * <p>Cosell—Technical Consultation: Connect with an Amazon Web Services Solutions
     * Architect to address the partner's questions about the proposed solution.</p>
     * </li> <li> <p>Cosell—Total Cost of Ownership Evaluation: Assistance with quoting
     * different cost savings of proposed solutions on Amazon Web Services versus
     * on-premises or a traditional hosting environment.</p> </li> <li> <p>Cosell—Deal
     * Support: Request Amazon Web Services seller's support to progress the
     * opportunity (for example: joint customer call, strategic positioning).</p> </li>
     * <li> <p>Cosell—Support for Public Tender/RFx: Opportunity related to the public
     * sector where the partner needs Amazon Web Services RFx support.</p> </li> </ul>
     */
    inline const Aws::Vector<PrimaryNeedFromAws>& GetPrimaryNeedsFromAws() const{ return m_primaryNeedsFromAws; }
    inline bool PrimaryNeedsFromAwsHasBeenSet() const { return m_primaryNeedsFromAwsHasBeenSet; }
    inline void SetPrimaryNeedsFromAws(const Aws::Vector<PrimaryNeedFromAws>& value) { m_primaryNeedsFromAwsHasBeenSet = true; m_primaryNeedsFromAws = value; }
    inline void SetPrimaryNeedsFromAws(Aws::Vector<PrimaryNeedFromAws>&& value) { m_primaryNeedsFromAwsHasBeenSet = true; m_primaryNeedsFromAws = std::move(value); }
    inline CreateOpportunityRequest& WithPrimaryNeedsFromAws(const Aws::Vector<PrimaryNeedFromAws>& value) { SetPrimaryNeedsFromAws(value); return *this;}
    inline CreateOpportunityRequest& WithPrimaryNeedsFromAws(Aws::Vector<PrimaryNeedFromAws>&& value) { SetPrimaryNeedsFromAws(std::move(value)); return *this;}
    inline CreateOpportunityRequest& AddPrimaryNeedsFromAws(const PrimaryNeedFromAws& value) { m_primaryNeedsFromAwsHasBeenSet = true; m_primaryNeedsFromAws.push_back(value); return *this; }
    inline CreateOpportunityRequest& AddPrimaryNeedsFromAws(PrimaryNeedFromAws&& value) { m_primaryNeedsFromAwsHasBeenSet = true; m_primaryNeedsFromAws.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that contains project details for the <code>Opportunity</code>.</p>
     */
    inline const Project& GetProject() const{ return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    inline void SetProject(const Project& value) { m_projectHasBeenSet = true; m_project = value; }
    inline void SetProject(Project&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }
    inline CreateOpportunityRequest& WithProject(const Project& value) { SetProject(value); return *this;}
    inline CreateOpportunityRequest& WithProject(Project&& value) { SetProject(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies details of a customer's procurement terms. This is required only
     * for partners in eligible programs.</p>
     */
    inline const SoftwareRevenue& GetSoftwareRevenue() const{ return m_softwareRevenue; }
    inline bool SoftwareRevenueHasBeenSet() const { return m_softwareRevenueHasBeenSet; }
    inline void SetSoftwareRevenue(const SoftwareRevenue& value) { m_softwareRevenueHasBeenSet = true; m_softwareRevenue = value; }
    inline void SetSoftwareRevenue(SoftwareRevenue&& value) { m_softwareRevenueHasBeenSet = true; m_softwareRevenue = std::move(value); }
    inline CreateOpportunityRequest& WithSoftwareRevenue(const SoftwareRevenue& value) { SetSoftwareRevenue(value); return *this;}
    inline CreateOpportunityRequest& WithSoftwareRevenue(SoftwareRevenue&& value) { SetSoftwareRevenue(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Customer m_customer;
    bool m_customerHasBeenSet = false;

    LifeCycle m_lifeCycle;
    bool m_lifeCycleHasBeenSet = false;

    Marketing m_marketing;
    bool m_marketingHasBeenSet = false;

    NationalSecurity m_nationalSecurity;
    bool m_nationalSecurityHasBeenSet = false;

    Aws::Vector<Contact> m_opportunityTeam;
    bool m_opportunityTeamHasBeenSet = false;

    OpportunityType m_opportunityType;
    bool m_opportunityTypeHasBeenSet = false;

    OpportunityOrigin m_origin;
    bool m_originHasBeenSet = false;

    Aws::String m_partnerOpportunityIdentifier;
    bool m_partnerOpportunityIdentifierHasBeenSet = false;

    Aws::Vector<PrimaryNeedFromAws> m_primaryNeedsFromAws;
    bool m_primaryNeedsFromAwsHasBeenSet = false;

    Project m_project;
    bool m_projectHasBeenSet = false;

    SoftwareRevenue m_softwareRevenue;
    bool m_softwareRevenueHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
