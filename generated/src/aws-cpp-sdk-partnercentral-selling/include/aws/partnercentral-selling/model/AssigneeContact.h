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
    AWS_PARTNERCENTRALSELLING_API AssigneeContact();
    AWS_PARTNERCENTRALSELLING_API AssigneeContact(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API AssigneeContact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the business title of the assignee managing the opportunity. This
     * helps clarify the individual's role and responsibilities within the
     * organization. Use the value <code>PartnerAccountManager</code> to update details
     * of the opportunity owner.</p>
     */
    inline const Aws::String& GetBusinessTitle() const{ return m_businessTitle; }
    inline bool BusinessTitleHasBeenSet() const { return m_businessTitleHasBeenSet; }
    inline void SetBusinessTitle(const Aws::String& value) { m_businessTitleHasBeenSet = true; m_businessTitle = value; }
    inline void SetBusinessTitle(Aws::String&& value) { m_businessTitleHasBeenSet = true; m_businessTitle = std::move(value); }
    inline void SetBusinessTitle(const char* value) { m_businessTitleHasBeenSet = true; m_businessTitle.assign(value); }
    inline AssigneeContact& WithBusinessTitle(const Aws::String& value) { SetBusinessTitle(value); return *this;}
    inline AssigneeContact& WithBusinessTitle(Aws::String&& value) { SetBusinessTitle(std::move(value)); return *this;}
    inline AssigneeContact& WithBusinessTitle(const char* value) { SetBusinessTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the email address of the assignee. This email is used for
     * communications and notifications related to the opportunity.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }
    inline AssigneeContact& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}
    inline AssigneeContact& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}
    inline AssigneeContact& WithEmail(const char* value) { SetEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the first name of the assignee managing the opportunity. The system
     * automatically retrieves this value from the user profile by referencing the
     * associated email address.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }
    inline AssigneeContact& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}
    inline AssigneeContact& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}
    inline AssigneeContact& WithFirstName(const char* value) { SetFirstName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the last name of the assignee managing the opportunity. The system
     * automatically retrieves this value from the user profile by referencing the
     * associated email address.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }
    inline AssigneeContact& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}
    inline AssigneeContact& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}
    inline AssigneeContact& WithLastName(const char* value) { SetLastName(value); return *this;}
    ///@}
  private:

    Aws::String m_businessTitle;
    bool m_businessTitleHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet = false;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
