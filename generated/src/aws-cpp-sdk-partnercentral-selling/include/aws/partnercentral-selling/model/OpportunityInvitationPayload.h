/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/EngagementCustomer.h>
#include <aws/partnercentral-selling/model/ProjectDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/ReceiverResponsibility.h>
#include <aws/partnercentral-selling/model/SenderContact.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p>Represents the data payload of an Engagement Invitation for a specific
   * opportunity. This contains detailed information that partners use to evaluate
   * the engagement.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/OpportunityInvitationPayload">AWS
   * API Reference</a></p>
   */
  class OpportunityInvitationPayload
  {
  public:
    AWS_PARTNERCENTRALSELLING_API OpportunityInvitationPayload();
    AWS_PARTNERCENTRALSELLING_API OpportunityInvitationPayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API OpportunityInvitationPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about the customer related to the opportunity in the
     * Engagement Invitation. This data helps partners understand the customer’s
     * profile and requirements.</p>
     */
    inline const EngagementCustomer& GetCustomer() const{ return m_customer; }
    inline bool CustomerHasBeenSet() const { return m_customerHasBeenSet; }
    inline void SetCustomer(const EngagementCustomer& value) { m_customerHasBeenSet = true; m_customer = value; }
    inline void SetCustomer(EngagementCustomer&& value) { m_customerHasBeenSet = true; m_customer = std::move(value); }
    inline OpportunityInvitationPayload& WithCustomer(const EngagementCustomer& value) { SetCustomer(value); return *this;}
    inline OpportunityInvitationPayload& WithCustomer(EngagementCustomer&& value) { SetCustomer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the project details associated with the opportunity, including the
     * customer’s needs and the scope of work expected to be performed.</p>
     */
    inline const ProjectDetails& GetProject() const{ return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    inline void SetProject(const ProjectDetails& value) { m_projectHasBeenSet = true; m_project = value; }
    inline void SetProject(ProjectDetails&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }
    inline OpportunityInvitationPayload& WithProject(const ProjectDetails& value) { SetProject(value); return *this;}
    inline OpportunityInvitationPayload& WithProject(ProjectDetails&& value) { SetProject(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Outlines the responsibilities or expectations of the receiver in the context
     * of the invitation.</p>
     */
    inline const Aws::Vector<ReceiverResponsibility>& GetReceiverResponsibilities() const{ return m_receiverResponsibilities; }
    inline bool ReceiverResponsibilitiesHasBeenSet() const { return m_receiverResponsibilitiesHasBeenSet; }
    inline void SetReceiverResponsibilities(const Aws::Vector<ReceiverResponsibility>& value) { m_receiverResponsibilitiesHasBeenSet = true; m_receiverResponsibilities = value; }
    inline void SetReceiverResponsibilities(Aws::Vector<ReceiverResponsibility>&& value) { m_receiverResponsibilitiesHasBeenSet = true; m_receiverResponsibilities = std::move(value); }
    inline OpportunityInvitationPayload& WithReceiverResponsibilities(const Aws::Vector<ReceiverResponsibility>& value) { SetReceiverResponsibilities(value); return *this;}
    inline OpportunityInvitationPayload& WithReceiverResponsibilities(Aws::Vector<ReceiverResponsibility>&& value) { SetReceiverResponsibilities(std::move(value)); return *this;}
    inline OpportunityInvitationPayload& AddReceiverResponsibilities(const ReceiverResponsibility& value) { m_receiverResponsibilitiesHasBeenSet = true; m_receiverResponsibilities.push_back(value); return *this; }
    inline OpportunityInvitationPayload& AddReceiverResponsibilities(ReceiverResponsibility&& value) { m_receiverResponsibilitiesHasBeenSet = true; m_receiverResponsibilities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents the contact details of the AWS representatives involved in sending
     * the Engagement Invitation. These contacts are opportunity stakeholders.</p>
     */
    inline const Aws::Vector<SenderContact>& GetSenderContacts() const{ return m_senderContacts; }
    inline bool SenderContactsHasBeenSet() const { return m_senderContactsHasBeenSet; }
    inline void SetSenderContacts(const Aws::Vector<SenderContact>& value) { m_senderContactsHasBeenSet = true; m_senderContacts = value; }
    inline void SetSenderContacts(Aws::Vector<SenderContact>&& value) { m_senderContactsHasBeenSet = true; m_senderContacts = std::move(value); }
    inline OpportunityInvitationPayload& WithSenderContacts(const Aws::Vector<SenderContact>& value) { SetSenderContacts(value); return *this;}
    inline OpportunityInvitationPayload& WithSenderContacts(Aws::Vector<SenderContact>&& value) { SetSenderContacts(std::move(value)); return *this;}
    inline OpportunityInvitationPayload& AddSenderContacts(const SenderContact& value) { m_senderContactsHasBeenSet = true; m_senderContacts.push_back(value); return *this; }
    inline OpportunityInvitationPayload& AddSenderContacts(SenderContact&& value) { m_senderContactsHasBeenSet = true; m_senderContacts.push_back(std::move(value)); return *this; }
    ///@}
  private:

    EngagementCustomer m_customer;
    bool m_customerHasBeenSet = false;

    ProjectDetails m_project;
    bool m_projectHasBeenSet = false;

    Aws::Vector<ReceiverResponsibility> m_receiverResponsibilities;
    bool m_receiverResponsibilitiesHasBeenSet = false;

    Aws::Vector<SenderContact> m_senderContacts;
    bool m_senderContactsHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
