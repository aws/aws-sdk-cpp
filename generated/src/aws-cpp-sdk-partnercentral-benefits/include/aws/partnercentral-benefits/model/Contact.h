/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralBenefits {
namespace Model {

/**
 * <p>Represents contact information for a partner representative.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/Contact">AWS
 * API Reference</a></p>
 */
class Contact {
 public:
  AWS_PARTNERCENTRALBENEFITS_API Contact() = default;
  AWS_PARTNERCENTRALBENEFITS_API Contact(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API Contact& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The email address of the contact person.</p>
   */
  inline const Aws::String& GetEmail() const { return m_email; }
  inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
  template <typename EmailT = Aws::String>
  void SetEmail(EmailT&& value) {
    m_emailHasBeenSet = true;
    m_email = std::forward<EmailT>(value);
  }
  template <typename EmailT = Aws::String>
  Contact& WithEmail(EmailT&& value) {
    SetEmail(std::forward<EmailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The first name of the contact person.</p>
   */
  inline const Aws::String& GetFirstName() const { return m_firstName; }
  inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
  template <typename FirstNameT = Aws::String>
  void SetFirstName(FirstNameT&& value) {
    m_firstNameHasBeenSet = true;
    m_firstName = std::forward<FirstNameT>(value);
  }
  template <typename FirstNameT = Aws::String>
  Contact& WithFirstName(FirstNameT&& value) {
    SetFirstName(std::forward<FirstNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The last name of the contact person.</p>
   */
  inline const Aws::String& GetLastName() const { return m_lastName; }
  inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
  template <typename LastNameT = Aws::String>
  void SetLastName(LastNameT&& value) {
    m_lastNameHasBeenSet = true;
    m_lastName = std::forward<LastNameT>(value);
  }
  template <typename LastNameT = Aws::String>
  Contact& WithLastName(LastNameT&& value) {
    SetLastName(std::forward<LastNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The business title or role of the contact person within the organization.</p>
   */
  inline const Aws::String& GetBusinessTitle() const { return m_businessTitle; }
  inline bool BusinessTitleHasBeenSet() const { return m_businessTitleHasBeenSet; }
  template <typename BusinessTitleT = Aws::String>
  void SetBusinessTitle(BusinessTitleT&& value) {
    m_businessTitleHasBeenSet = true;
    m_businessTitle = std::forward<BusinessTitleT>(value);
  }
  template <typename BusinessTitleT = Aws::String>
  Contact& WithBusinessTitle(BusinessTitleT&& value) {
    SetBusinessTitle(std::forward<BusinessTitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The phone number of the contact person.</p>
   */
  inline const Aws::String& GetPhone() const { return m_phone; }
  inline bool PhoneHasBeenSet() const { return m_phoneHasBeenSet; }
  template <typename PhoneT = Aws::String>
  void SetPhone(PhoneT&& value) {
    m_phoneHasBeenSet = true;
    m_phone = std::forward<PhoneT>(value);
  }
  template <typename PhoneT = Aws::String>
  Contact& WithPhone(PhoneT&& value) {
    SetPhone(std::forward<PhoneT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_email;

  Aws::String m_firstName;

  Aws::String m_lastName;

  Aws::String m_businessTitle;

  Aws::String m_phone;
  bool m_emailHasBeenSet = false;
  bool m_firstNameHasBeenSet = false;
  bool m_lastNameHasBeenSet = false;
  bool m_businessTitleHasBeenSet = false;
  bool m_phoneHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
