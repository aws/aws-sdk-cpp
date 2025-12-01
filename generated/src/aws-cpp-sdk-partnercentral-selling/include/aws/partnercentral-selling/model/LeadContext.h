/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>Provides comprehensive details about a lead associated with an engagement.
 * This structure contains information about lead qualification status, customer
 * details, and interaction history to facilitate lead management and tracking
 * within the engagement.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/LeadContext">AWS
 * API Reference</a></p>
 */
class LeadContext {
 public:
  AWS_PARTNERCENTRALSELLING_API LeadContext() = default;
  AWS_PARTNERCENTRALSELLING_API LeadContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API LeadContext& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Indicates the current qualification status of the lead, such as whether it
   * has been qualified, disqualified, or is still under evaluation. This helps track
   * the lead's progression through the qualification process.</p>
   */
  inline const Aws::String& GetQualificationStatus() const { return m_qualificationStatus; }
  inline bool QualificationStatusHasBeenSet() const { return m_qualificationStatusHasBeenSet; }
  template <typename QualificationStatusT = Aws::String>
  void SetQualificationStatus(QualificationStatusT&& value) {
    m_qualificationStatusHasBeenSet = true;
    m_qualificationStatus = std::forward<QualificationStatusT>(value);
  }
  template <typename QualificationStatusT = Aws::String>
  LeadContext& WithQualificationStatus(QualificationStatusT&& value) {
    SetQualificationStatus(std::forward<QualificationStatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains detailed information about the customer associated with the lead,
   * including company information, contact details, and other relevant customer
   * data.</p>
   */
  inline const LeadCustomer& GetCustomer() const { return m_customer; }
  inline bool CustomerHasBeenSet() const { return m_customerHasBeenSet; }
  template <typename CustomerT = LeadCustomer>
  void SetCustomer(CustomerT&& value) {
    m_customerHasBeenSet = true;
    m_customer = std::forward<CustomerT>(value);
  }
  template <typename CustomerT = LeadCustomer>
  LeadContext& WithCustomer(CustomerT&& value) {
    SetCustomer(std::forward<CustomerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of interactions that have occurred with the lead, providing a
   * history of communications, meetings, and other engagement activities related to
   * the lead.</p>
   */
  inline const Aws::Vector<LeadInteraction>& GetInteractions() const { return m_interactions; }
  inline bool InteractionsHasBeenSet() const { return m_interactionsHasBeenSet; }
  template <typename InteractionsT = Aws::Vector<LeadInteraction>>
  void SetInteractions(InteractionsT&& value) {
    m_interactionsHasBeenSet = true;
    m_interactions = std::forward<InteractionsT>(value);
  }
  template <typename InteractionsT = Aws::Vector<LeadInteraction>>
  LeadContext& WithInteractions(InteractionsT&& value) {
    SetInteractions(std::forward<InteractionsT>(value));
    return *this;
  }
  template <typename InteractionsT = LeadInteraction>
  LeadContext& AddInteractions(InteractionsT&& value) {
    m_interactionsHasBeenSet = true;
    m_interactions.emplace_back(std::forward<InteractionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_qualificationStatus;
  bool m_qualificationStatusHasBeenSet = false;

  LeadCustomer m_customer;
  bool m_customerHasBeenSet = false;

  Aws::Vector<LeadInteraction> m_interactions;
  bool m_interactionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
