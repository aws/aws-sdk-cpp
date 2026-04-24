/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/CustomerProjectsContext.h>
#include <aws/partnercentral-selling/model/UpdateLeadContext.h>

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
 * <p>Represents the updated payload of an engagement context. The structure of
 * this payload varies based on the context type being updated.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/UpdateEngagementContextPayload">AWS
 * API Reference</a></p>
 */
class UpdateEngagementContextPayload {
 public:
  AWS_PARTNERCENTRALSELLING_API UpdateEngagementContextPayload() = default;
  AWS_PARTNERCENTRALSELLING_API UpdateEngagementContextPayload(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API UpdateEngagementContextPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Contains updated information about a lead when the context type is "Lead".
   * This field is present only when updating a lead context within the
   * engagement.</p>
   */
  inline const UpdateLeadContext& GetLead() const { return m_lead; }
  inline bool LeadHasBeenSet() const { return m_leadHasBeenSet; }
  template <typename LeadT = UpdateLeadContext>
  void SetLead(LeadT&& value) {
    m_leadHasBeenSet = true;
    m_lead = std::forward<LeadT>(value);
  }
  template <typename LeadT = UpdateLeadContext>
  UpdateEngagementContextPayload& WithLead(LeadT&& value) {
    SetLead(std::forward<LeadT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const CustomerProjectsContext& GetCustomerProject() const { return m_customerProject; }
  inline bool CustomerProjectHasBeenSet() const { return m_customerProjectHasBeenSet; }
  template <typename CustomerProjectT = CustomerProjectsContext>
  void SetCustomerProject(CustomerProjectT&& value) {
    m_customerProjectHasBeenSet = true;
    m_customerProject = std::forward<CustomerProjectT>(value);
  }
  template <typename CustomerProjectT = CustomerProjectsContext>
  UpdateEngagementContextPayload& WithCustomerProject(CustomerProjectT&& value) {
    SetCustomerProject(std::forward<CustomerProjectT>(value));
    return *this;
  }
  ///@}
 private:
  UpdateLeadContext m_lead;

  CustomerProjectsContext m_customerProject;
  bool m_leadHasBeenSet = false;
  bool m_customerProjectHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
