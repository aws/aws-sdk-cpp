/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/LeadInvitationCustomer.h>
#include <aws/partnercentral-selling/model/LeadInvitationInteraction.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>Represents the data payload of an engagement invitation for a lead
 * opportunity. This contains detailed information about the customer and
 * interaction history that partners use to evaluate whether to accept the lead
 * engagement invitation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/LeadInvitationPayload">AWS
 * API Reference</a></p>
 */
class LeadInvitationPayload {
 public:
  AWS_PARTNERCENTRALSELLING_API LeadInvitationPayload() = default;
  AWS_PARTNERCENTRALSELLING_API LeadInvitationPayload(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API LeadInvitationPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Contains information about the customer associated with the lead invitation.
   * This data helps partners understand the customer's profile, industry, and
   * business context to assess the lead opportunity.</p>
   */
  inline const LeadInvitationCustomer& GetCustomer() const { return m_customer; }
  inline bool CustomerHasBeenSet() const { return m_customerHasBeenSet; }
  template <typename CustomerT = LeadInvitationCustomer>
  void SetCustomer(CustomerT&& value) {
    m_customerHasBeenSet = true;
    m_customer = std::forward<CustomerT>(value);
  }
  template <typename CustomerT = LeadInvitationCustomer>
  LeadInvitationPayload& WithCustomer(CustomerT&& value) {
    SetCustomer(std::forward<CustomerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Describes the interaction details associated with the lead, including the
   * source of the lead generation and customer engagement information. This context
   * helps partners evaluate the lead quality and engagement approach.</p>
   */
  inline const LeadInvitationInteraction& GetInteraction() const { return m_interaction; }
  inline bool InteractionHasBeenSet() const { return m_interactionHasBeenSet; }
  template <typename InteractionT = LeadInvitationInteraction>
  void SetInteraction(InteractionT&& value) {
    m_interactionHasBeenSet = true;
    m_interaction = std::forward<InteractionT>(value);
  }
  template <typename InteractionT = LeadInvitationInteraction>
  LeadInvitationPayload& WithInteraction(InteractionT&& value) {
    SetInteraction(std::forward<InteractionT>(value));
    return *this;
  }
  ///@}
 private:
  LeadInvitationCustomer m_customer;

  LeadInvitationInteraction m_interaction;
  bool m_customerHasBeenSet = false;
  bool m_interactionHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
