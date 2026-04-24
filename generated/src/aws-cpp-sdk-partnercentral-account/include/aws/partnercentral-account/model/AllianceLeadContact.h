/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralAccount {
namespace Model {

/**
 * <p>Contains contact information for the primary alliance lead responsible for
 * partnership activities.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/AllianceLeadContact">AWS
 * API Reference</a></p>
 */
class AllianceLeadContact {
 public:
  AWS_PARTNERCENTRALACCOUNT_API AllianceLeadContact() = default;
  AWS_PARTNERCENTRALACCOUNT_API AllianceLeadContact(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API AllianceLeadContact& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The first name of the alliance lead contact person.</p>
   */
  inline const Aws::String& GetFirstName() const { return m_firstName; }
  inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
  template <typename FirstNameT = Aws::String>
  void SetFirstName(FirstNameT&& value) {
    m_firstNameHasBeenSet = true;
    m_firstName = std::forward<FirstNameT>(value);
  }
  template <typename FirstNameT = Aws::String>
  AllianceLeadContact& WithFirstName(FirstNameT&& value) {
    SetFirstName(std::forward<FirstNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The last name of the alliance lead contact person.</p>
   */
  inline const Aws::String& GetLastName() const { return m_lastName; }
  inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
  template <typename LastNameT = Aws::String>
  void SetLastName(LastNameT&& value) {
    m_lastNameHasBeenSet = true;
    m_lastName = std::forward<LastNameT>(value);
  }
  template <typename LastNameT = Aws::String>
  AllianceLeadContact& WithLastName(LastNameT&& value) {
    SetLastName(std::forward<LastNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The email address of the alliance lead contact person.</p>
   */
  inline const Aws::String& GetEmail() const { return m_email; }
  inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
  template <typename EmailT = Aws::String>
  void SetEmail(EmailT&& value) {
    m_emailHasBeenSet = true;
    m_email = std::forward<EmailT>(value);
  }
  template <typename EmailT = Aws::String>
  AllianceLeadContact& WithEmail(EmailT&& value) {
    SetEmail(std::forward<EmailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The business title or role of the alliance lead contact person.</p>
   */
  inline const Aws::String& GetBusinessTitle() const { return m_businessTitle; }
  inline bool BusinessTitleHasBeenSet() const { return m_businessTitleHasBeenSet; }
  template <typename BusinessTitleT = Aws::String>
  void SetBusinessTitle(BusinessTitleT&& value) {
    m_businessTitleHasBeenSet = true;
    m_businessTitle = std::forward<BusinessTitleT>(value);
  }
  template <typename BusinessTitleT = Aws::String>
  AllianceLeadContact& WithBusinessTitle(BusinessTitleT&& value) {
    SetBusinessTitle(std::forward<BusinessTitleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_firstName;

  Aws::String m_lastName;

  Aws::String m_email;

  Aws::String m_businessTitle;
  bool m_firstNameHasBeenSet = false;
  bool m_lastNameHasBeenSet = false;
  bool m_emailHasBeenSet = false;
  bool m_businessTitleHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
