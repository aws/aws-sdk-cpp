/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/partnercentral-selling/model/AssigneeContact.h>
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
  class AssignOpportunityRequest : public PartnerCentralSellingRequest
  {
  public:
    AWS_PARTNERCENTRALSELLING_API AssignOpportunityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssignOpportunity"; }

    AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

    AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the user or team member responsible for managing the assigned
     * opportunity. This field identifies the <i>Assignee</i> based on the partner's
     * internal team structure. Ensure that the email address is associated with a
     * registered user in your Partner Central account.</p>
     */
    inline const AssigneeContact& GetAssignee() const{ return m_assignee; }
    inline bool AssigneeHasBeenSet() const { return m_assigneeHasBeenSet; }
    inline void SetAssignee(const AssigneeContact& value) { m_assigneeHasBeenSet = true; m_assignee = value; }
    inline void SetAssignee(AssigneeContact&& value) { m_assigneeHasBeenSet = true; m_assignee = std::move(value); }
    inline AssignOpportunityRequest& WithAssignee(const AssigneeContact& value) { SetAssignee(value); return *this;}
    inline AssignOpportunityRequest& WithAssignee(AssigneeContact&& value) { SetAssignee(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the catalog associated with the request. This field takes a string
     * value from a predefined list: <code>AWS</code> or <code>Sandbox</code>. The
     * catalog determines which environment the opportunity is assigned in. Use
     * <code>AWS</code> to assign real opportunities in the Amazon Web Services
     * catalog, and <code>Sandbox</code> for testing in secure, isolated
     * environments.</p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline AssignOpportunityRequest& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline AssignOpportunityRequest& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline AssignOpportunityRequest& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Requires the <code>Opportunity</code>'s unique identifier when you want to
     * assign it to another user. Provide the correct identifier so the intended
     * opportunity is reassigned.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline AssignOpportunityRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline AssignOpportunityRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline AssignOpportunityRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}
  private:

    AssigneeContact m_assignee;
    bool m_assigneeHasBeenSet = false;

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
