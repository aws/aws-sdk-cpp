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
   * <p>Represents the contact details of the individual assigned to manage the
   * opportunity within the partner organization. This helps to ensure that there is
   * a point of contact for the opportunity's progress.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AssigneeContact">AWS
   * API Reference</a></p>
   */
  class AssigneeContact
  {
  public:
    AWS_PARTNERCENTRALSELLING_API AssigneeContact() = default;
    AWS_PARTNERCENTRALSELLING_API AssigneeContact(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API AssigneeContact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides the email address of the assignee. This email is used for
     * communications and notifications related to the opportunity.</p>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    AssigneeContact& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the first name of the assignee managing the opportunity. The system
     * automatically retrieves this value from the user profile by referencing the
     * associated email address.</p>
     */
    inline const Aws::String& GetFirstName() const { return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    template<typename FirstNameT = Aws::String>
    void SetFirstName(FirstNameT&& value) { m_firstNameHasBeenSet = true; m_firstName = std::forward<FirstNameT>(value); }
    template<typename FirstNameT = Aws::String>
    AssigneeContact& WithFirstName(FirstNameT&& value) { SetFirstName(std::forward<FirstNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the last name of the assignee managing the opportunity. The system
     * automatically retrieves this value from the user profile by referencing the
     * associated email address.</p>
     */
    inline const Aws::String& GetLastName() const { return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    template<typename LastNameT = Aws::String>
    void SetLastName(LastNameT&& value) { m_lastNameHasBeenSet = true; m_lastName = std::forward<LastNameT>(value); }
    template<typename LastNameT = Aws::String>
    AssigneeContact& WithLastName(LastNameT&& value) { SetLastName(std::forward<LastNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the business title of the assignee managing the opportunity. This
     * helps clarify the individual's role and responsibilities within the
     * organization. Use the value <code>PartnerAccountManager</code> to update details
     * of the opportunity owner.</p>
     */
    inline const Aws::String& GetBusinessTitle() const { return m_businessTitle; }
    inline bool BusinessTitleHasBeenSet() const { return m_businessTitleHasBeenSet; }
    template<typename BusinessTitleT = Aws::String>
    void SetBusinessTitle(BusinessTitleT&& value) { m_businessTitleHasBeenSet = true; m_businessTitle = std::forward<BusinessTitleT>(value); }
    template<typename BusinessTitleT = Aws::String>
    AssigneeContact& WithBusinessTitle(BusinessTitleT&& value) { SetBusinessTitle(std::forward<BusinessTitleT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
