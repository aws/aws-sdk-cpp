/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/LeadCustomer.h>
#include <aws/partnercentral-selling/model/LeadInteraction.h>

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
 * <p>Updates the context information for a lead with qualification status,
 * customer details, and interaction data.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/UpdateLeadContext">AWS
 * API Reference</a></p>
 */
class UpdateLeadContext {
 public:
  AWS_PARTNERCENTRALSELLING_API UpdateLeadContext() = default;
  AWS_PARTNERCENTRALSELLING_API UpdateLeadContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API UpdateLeadContext& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The updated qualification status of the lead.</p>
   */
  inline const Aws::String& GetQualificationStatus() const { return m_qualificationStatus; }
  inline bool QualificationStatusHasBeenSet() const { return m_qualificationStatusHasBeenSet; }
  template <typename QualificationStatusT = Aws::String>
  void SetQualificationStatus(QualificationStatusT&& value) {
    m_qualificationStatusHasBeenSet = true;
    m_qualificationStatus = std::forward<QualificationStatusT>(value);
  }
  template <typename QualificationStatusT = Aws::String>
  UpdateLeadContext& WithQualificationStatus(QualificationStatusT&& value) {
    SetQualificationStatus(std::forward<QualificationStatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Updated customer information associated with the lead.</p>
   */
  inline const LeadCustomer& GetCustomer() const { return m_customer; }
  inline bool CustomerHasBeenSet() const { return m_customerHasBeenSet; }
  template <typename CustomerT = LeadCustomer>
  void SetCustomer(CustomerT&& value) {
    m_customerHasBeenSet = true;
    m_customer = std::forward<CustomerT>(value);
  }
  template <typename CustomerT = LeadCustomer>
  UpdateLeadContext& WithCustomer(CustomerT&& value) {
    SetCustomer(std::forward<CustomerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Updated interaction details for the lead context.</p>
   */
  inline const LeadInteraction& GetInteraction() const { return m_interaction; }
  inline bool InteractionHasBeenSet() const { return m_interactionHasBeenSet; }
  template <typename InteractionT = LeadInteraction>
  void SetInteraction(InteractionT&& value) {
    m_interactionHasBeenSet = true;
    m_interaction = std::forward<InteractionT>(value);
  }
  template <typename InteractionT = LeadInteraction>
  UpdateLeadContext& WithInteraction(InteractionT&& value) {
    SetInteraction(std::forward<InteractionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_qualificationStatus;

  LeadCustomer m_customer;

  LeadInteraction m_interaction;
  bool m_qualificationStatusHasBeenSet = false;
  bool m_customerHasBeenSet = false;
  bool m_interactionHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
