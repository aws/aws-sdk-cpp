/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/LeadContact.h>

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
 * <p>Represents a specific interaction or touchpoint with a lead customer. This
 * structure captures details about communications, meetings, or other engagement
 * activities that help track the lead's progression and engagement
 * history.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/LeadInteraction">AWS
 * API Reference</a></p>
 */
class LeadInteraction {
 public:
  AWS_PARTNERCENTRALSELLING_API LeadInteraction() = default;
  AWS_PARTNERCENTRALSELLING_API LeadInteraction(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API LeadInteraction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies the type of source that generated the lead interaction, such as
   * "Event", "Website", "Referral", or "Campaign". This categorization helps track
   * lead generation effectiveness across different channels.</p>
   */
  inline const Aws::String& GetSourceType() const { return m_sourceType; }
  inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
  template <typename SourceTypeT = Aws::String>
  void SetSourceType(SourceTypeT&& value) {
    m_sourceTypeHasBeenSet = true;
    m_sourceType = std::forward<SourceTypeT>(value);
  }
  template <typename SourceTypeT = Aws::String>
  LeadInteraction& WithSourceType(SourceTypeT&& value) {
    SetSourceType(std::forward<SourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the specific source that generated the lead
   * interaction. This ID provides traceability back to the original lead generation
   * activity.</p>
   */
  inline const Aws::String& GetSourceId() const { return m_sourceId; }
  inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
  template <typename SourceIdT = Aws::String>
  void SetSourceId(SourceIdT&& value) {
    m_sourceIdHasBeenSet = true;
    m_sourceId = std::forward<SourceIdT>(value);
  }
  template <typename SourceIdT = Aws::String>
  LeadInteraction& WithSourceId(SourceIdT&& value) {
    SetSourceId(std::forward<SourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The descriptive name of the source that generated the lead interaction,
   * providing a human-readable identifier for the lead generation channel or
   * activity.</p>
   */
  inline const Aws::String& GetSourceName() const { return m_sourceName; }
  inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
  template <typename SourceNameT = Aws::String>
  void SetSourceName(SourceNameT&& value) {
    m_sourceNameHasBeenSet = true;
    m_sourceName = std::forward<SourceNameT>(value);
  }
  template <typename SourceNameT = Aws::String>
  LeadInteraction& WithSourceName(SourceNameT&& value) {
    SetSourceName(std::forward<SourceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Describes the specific use case or business scenario discussed during the
   * lead interaction. This helps categorize the customer's interests and potential
   * solutions.</p>
   */
  inline const Aws::String& GetUsecase() const { return m_usecase; }
  inline bool UsecaseHasBeenSet() const { return m_usecaseHasBeenSet; }
  template <typename UsecaseT = Aws::String>
  void SetUsecase(UsecaseT&& value) {
    m_usecaseHasBeenSet = true;
    m_usecase = std::forward<UsecaseT>(value);
  }
  template <typename UsecaseT = Aws::String>
  LeadInteraction& WithUsecase(UsecaseT&& value) {
    SetUsecase(std::forward<UsecaseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the lead interaction occurred, in ISO 8601 format
   * (UTC). This timestamp helps track the chronology of lead engagement
   * activities.</p>
   */
  inline const Aws::Utils::DateTime& GetInteractionDate() const { return m_interactionDate; }
  inline bool InteractionDateHasBeenSet() const { return m_interactionDateHasBeenSet; }
  template <typename InteractionDateT = Aws::Utils::DateTime>
  void SetInteractionDate(InteractionDateT&& value) {
    m_interactionDateHasBeenSet = true;
    m_interactionDate = std::forward<InteractionDateT>(value);
  }
  template <typename InteractionDateT = Aws::Utils::DateTime>
  LeadInteraction& WithInteractionDate(InteractionDateT&& value) {
    SetInteractionDate(std::forward<InteractionDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Describes the action taken by the customer during or as a result of the
   * interaction, such as requesting information, scheduling a meeting, or expressing
   * interest in a solution.</p>
   */
  inline const Aws::String& GetCustomerAction() const { return m_customerAction; }
  inline bool CustomerActionHasBeenSet() const { return m_customerActionHasBeenSet; }
  template <typename CustomerActionT = Aws::String>
  void SetCustomerAction(CustomerActionT&& value) {
    m_customerActionHasBeenSet = true;
    m_customerAction = std::forward<CustomerActionT>(value);
  }
  template <typename CustomerActionT = Aws::String>
  LeadInteraction& WithCustomerAction(CustomerActionT&& value) {
    SetCustomerAction(std::forward<CustomerActionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Describes the business problem or challenge that the customer discussed
   * during the interaction. This information helps qualify the lead and identify
   * appropriate solutions.</p>
   */
  inline const Aws::String& GetBusinessProblem() const { return m_businessProblem; }
  inline bool BusinessProblemHasBeenSet() const { return m_businessProblemHasBeenSet; }
  template <typename BusinessProblemT = Aws::String>
  void SetBusinessProblem(BusinessProblemT&& value) {
    m_businessProblemHasBeenSet = true;
    m_businessProblem = std::forward<BusinessProblemT>(value);
  }
  template <typename BusinessProblemT = Aws::String>
  LeadInteraction& WithBusinessProblem(BusinessProblemT&& value) {
    SetBusinessProblem(std::forward<BusinessProblemT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains contact information for the customer representative involved in the
   * lead interaction, including their name, title, and contact details.</p>
   */
  inline const LeadContact& GetContact() const { return m_contact; }
  inline bool ContactHasBeenSet() const { return m_contactHasBeenSet; }
  template <typename ContactT = LeadContact>
  void SetContact(ContactT&& value) {
    m_contactHasBeenSet = true;
    m_contact = std::forward<ContactT>(value);
  }
  template <typename ContactT = LeadContact>
  LeadInteraction& WithContact(ContactT&& value) {
    SetContact(std::forward<ContactT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceType;
  bool m_sourceTypeHasBeenSet = false;

  Aws::String m_sourceId;
  bool m_sourceIdHasBeenSet = false;

  Aws::String m_sourceName;
  bool m_sourceNameHasBeenSet = false;

  Aws::String m_usecase;
  bool m_usecaseHasBeenSet = false;

  Aws::Utils::DateTime m_interactionDate{};
  bool m_interactionDateHasBeenSet = false;

  Aws::String m_customerAction;
  bool m_customerActionHasBeenSet = false;

  Aws::String m_businessProblem;
  bool m_businessProblemHasBeenSet = false;

  LeadContact m_contact;
  bool m_contactHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
