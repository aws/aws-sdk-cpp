/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An object that contains a <code>Customer Partner</code>'s contact
   * details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/Contact">AWS
   * API Reference</a></p>
   */
  class Contact
  {
  public:
    AWS_PARTNERCENTRALSELLING_API Contact() = default;
    AWS_PARTNERCENTRALSELLING_API Contact(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Contact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The contact's email address associated with the <code>Opportunity</code>.</p>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    Contact& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contact's first name associated with the <code>Opportunity</code>.</p>
     */
    inline const Aws::String& GetFirstName() const { return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    template<typename FirstNameT = Aws::String>
    void SetFirstName(FirstNameT&& value) { m_firstNameHasBeenSet = true; m_firstName = std::forward<FirstNameT>(value); }
    template<typename FirstNameT = Aws::String>
    Contact& WithFirstName(FirstNameT&& value) { SetFirstName(std::forward<FirstNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contact's last name associated with the <code>Opportunity</code>.</p>
     */
    inline const Aws::String& GetLastName() const { return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    template<typename LastNameT = Aws::String>
    void SetLastName(LastNameT&& value) { m_lastNameHasBeenSet = true; m_lastName = std::forward<LastNameT>(value); }
    template<typename LastNameT = Aws::String>
    Contact& WithLastName(LastNameT&& value) { SetLastName(std::forward<LastNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The partner contact's title (job title or role) associated with the
     * <code>Opportunity</code>. <code>BusinessTitle</code> supports either
     * <code>PartnerAccountManager</code> or <code>OpportunityOwner</code>.</p>
     */
    inline const Aws::String& GetBusinessTitle() const { return m_businessTitle; }
    inline bool BusinessTitleHasBeenSet() const { return m_businessTitleHasBeenSet; }
    template<typename BusinessTitleT = Aws::String>
    void SetBusinessTitle(BusinessTitleT&& value) { m_businessTitleHasBeenSet = true; m_businessTitle = std::forward<BusinessTitleT>(value); }
    template<typename BusinessTitleT = Aws::String>
    Contact& WithBusinessTitle(BusinessTitleT&& value) { SetBusinessTitle(std::forward<BusinessTitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contact's phone number associated with the <code>Opportunity</code>.</p>
     */
    inline const Aws::String& GetPhone() const { return m_phone; }
    inline bool PhoneHasBeenSet() const { return m_phoneHasBeenSet; }
    template<typename PhoneT = Aws::String>
    void SetPhone(PhoneT&& value) { m_phoneHasBeenSet = true; m_phone = std::forward<PhoneT>(value); }
    template<typename PhoneT = Aws::String>
    Contact& WithPhone(PhoneT&& value) { SetPhone(std::forward<PhoneT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet = false;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet = false;

    Aws::String m_businessTitle;
    bool m_businessTitleHasBeenSet = false;

    Aws::String m_phone;
    bool m_phoneHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
