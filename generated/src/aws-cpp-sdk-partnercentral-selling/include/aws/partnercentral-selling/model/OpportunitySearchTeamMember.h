/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

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
 * <p>An opportunity team member surfaced in search: name and business title only,
 * with no contact details.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/OpportunitySearchTeamMember">AWS
 * API Reference</a></p>
 */
class OpportunitySearchTeamMember {
 public:
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchTeamMember() = default;
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchTeamMember(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchTeamMember& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The team member's first name.</p>
   */
  inline const Aws::String& GetFirstName() const { return m_firstName; }
  inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
  template <typename FirstNameT = Aws::String>
  void SetFirstName(FirstNameT&& value) {
    m_firstNameHasBeenSet = true;
    m_firstName = std::forward<FirstNameT>(value);
  }
  template <typename FirstNameT = Aws::String>
  OpportunitySearchTeamMember& WithFirstName(FirstNameT&& value) {
    SetFirstName(std::forward<FirstNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The team member's last name.</p>
   */
  inline const Aws::String& GetLastName() const { return m_lastName; }
  inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
  template <typename LastNameT = Aws::String>
  void SetLastName(LastNameT&& value) {
    m_lastNameHasBeenSet = true;
    m_lastName = std::forward<LastNameT>(value);
  }
  template <typename LastNameT = Aws::String>
  OpportunitySearchTeamMember& WithLastName(LastNameT&& value) {
    SetLastName(std::forward<LastNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The team member's business title.</p>
   */
  inline const Aws::String& GetBusinessTitle() const { return m_businessTitle; }
  inline bool BusinessTitleHasBeenSet() const { return m_businessTitleHasBeenSet; }
  template <typename BusinessTitleT = Aws::String>
  void SetBusinessTitle(BusinessTitleT&& value) {
    m_businessTitleHasBeenSet = true;
    m_businessTitle = std::forward<BusinessTitleT>(value);
  }
  template <typename BusinessTitleT = Aws::String>
  OpportunitySearchTeamMember& WithBusinessTitle(BusinessTitleT&& value) {
    SetBusinessTitle(std::forward<BusinessTitleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_firstName;

  Aws::String m_lastName;

  Aws::String m_businessTitle;
  bool m_firstNameHasBeenSet = false;
  bool m_lastNameHasBeenSet = false;
  bool m_businessTitleHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
