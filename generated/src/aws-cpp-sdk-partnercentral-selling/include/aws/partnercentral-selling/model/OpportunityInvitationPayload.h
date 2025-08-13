/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/EngagementCustomer.h>
#include <aws/partnercentral-selling/model/ProjectDetails.h>
#include <aws/partnercentral-selling/model/SenderContact.h>
#include <aws/partnercentral-selling/model/ReceiverResponsibility.h>
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
    AWS_PARTNERCENTRALSELLING_API OpportunityInvitationPayload() = default;
    AWS_PARTNERCENTRALSELLING_API OpportunityInvitationPayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API OpportunityInvitationPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents the contact details of the AWS representatives involved in sending
     * the Engagement Invitation. These contacts are opportunity stakeholders.</p>
     */
    inline const Aws::Vector<SenderContact>& GetSenderContacts() const { return m_senderContacts; }
    inline bool SenderContactsHasBeenSet() const { return m_senderContactsHasBeenSet; }
    template<typename SenderContactsT = Aws::Vector<SenderContact>>
    void SetSenderContacts(SenderContactsT&& value) { m_senderContactsHasBeenSet = true; m_senderContacts = std::forward<SenderContactsT>(value); }
    template<typename SenderContactsT = Aws::Vector<SenderContact>>
    OpportunityInvitationPayload& WithSenderContacts(SenderContactsT&& value) { SetSenderContacts(std::forward<SenderContactsT>(value)); return *this;}
    template<typename SenderContactsT = SenderContact>
    OpportunityInvitationPayload& AddSenderContacts(SenderContactsT&& value) { m_senderContactsHasBeenSet = true; m_senderContacts.emplace_back(std::forward<SenderContactsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Outlines the responsibilities or expectations of the receiver in the context
     * of the invitation.</p>
     */
    inline const Aws::Vector<ReceiverResponsibility>& GetReceiverResponsibilities() const { return m_receiverResponsibilities; }
    inline bool ReceiverResponsibilitiesHasBeenSet() const { return m_receiverResponsibilitiesHasBeenSet; }
    template<typename ReceiverResponsibilitiesT = Aws::Vector<ReceiverResponsibility>>
    void SetReceiverResponsibilities(ReceiverResponsibilitiesT&& value) { m_receiverResponsibilitiesHasBeenSet = true; m_receiverResponsibilities = std::forward<ReceiverResponsibilitiesT>(value); }
    template<typename ReceiverResponsibilitiesT = Aws::Vector<ReceiverResponsibility>>
    OpportunityInvitationPayload& WithReceiverResponsibilities(ReceiverResponsibilitiesT&& value) { SetReceiverResponsibilities(std::forward<ReceiverResponsibilitiesT>(value)); return *this;}
    inline OpportunityInvitationPayload& AddReceiverResponsibilities(ReceiverResponsibility value) { m_receiverResponsibilitiesHasBeenSet = true; m_receiverResponsibilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about the customer related to the opportunity in the
     * Engagement Invitation. This data helps partners understand the customer’s
     * profile and requirements.</p>
     */
    inline const EngagementCustomer& GetCustomer() const { return m_customer; }
    inline bool CustomerHasBeenSet() const { return m_customerHasBeenSet; }
    template<typename CustomerT = EngagementCustomer>
    void SetCustomer(CustomerT&& value) { m_customerHasBeenSet = true; m_customer = std::forward<CustomerT>(value); }
    template<typename CustomerT = EngagementCustomer>
    OpportunityInvitationPayload& WithCustomer(CustomerT&& value) { SetCustomer(std::forward<CustomerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the project details associated with the opportunity, including the
     * customer’s needs and the scope of work expected to be performed.</p>
     */
    inline const ProjectDetails& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = ProjectDetails>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = ProjectDetails>
    OpportunityInvitationPayload& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SenderContact> m_senderContacts;
    bool m_senderContactsHasBeenSet = false;

    Aws::Vector<ReceiverResponsibility> m_receiverResponsibilities;
    bool m_receiverResponsibilitiesHasBeenSet = false;

    EngagementCustomer m_customer;
    bool m_customerHasBeenSet = false;

    ProjectDetails m_project;
    bool m_projectHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
