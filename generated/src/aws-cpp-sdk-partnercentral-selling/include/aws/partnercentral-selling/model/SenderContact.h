﻿/**
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
   * <p>An object that contains the details of the sender-provided contact person for
   * the <code>EngagementInvitation</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/SenderContact">AWS
   * API Reference</a></p>
   */
  class SenderContact
  {
  public:
    AWS_PARTNERCENTRALSELLING_API SenderContact();
    AWS_PARTNERCENTRALSELLING_API SenderContact(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API SenderContact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sender-provided contact's title (job title or role) associated with the
     * <code>EngagementInvitation</code>.</p>
     */
    inline const Aws::String& GetBusinessTitle() const{ return m_businessTitle; }
    inline bool BusinessTitleHasBeenSet() const { return m_businessTitleHasBeenSet; }
    inline void SetBusinessTitle(const Aws::String& value) { m_businessTitleHasBeenSet = true; m_businessTitle = value; }
    inline void SetBusinessTitle(Aws::String&& value) { m_businessTitleHasBeenSet = true; m_businessTitle = std::move(value); }
    inline void SetBusinessTitle(const char* value) { m_businessTitleHasBeenSet = true; m_businessTitle.assign(value); }
    inline SenderContact& WithBusinessTitle(const Aws::String& value) { SetBusinessTitle(value); return *this;}
    inline SenderContact& WithBusinessTitle(Aws::String&& value) { SetBusinessTitle(std::move(value)); return *this;}
    inline SenderContact& WithBusinessTitle(const char* value) { SetBusinessTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sender-provided contact's email address associated with the
     * <code>EngagementInvitation</code>.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }
    inline SenderContact& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}
    inline SenderContact& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}
    inline SenderContact& WithEmail(const char* value) { SetEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sender-provided contact's last name associated with the
     * <code>EngagementInvitation</code>.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }
    inline SenderContact& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}
    inline SenderContact& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}
    inline SenderContact& WithFirstName(const char* value) { SetFirstName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sender-provided contact's first name associated with the
     * <code>EngagementInvitation</code>.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }
    inline SenderContact& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}
    inline SenderContact& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}
    inline SenderContact& WithLastName(const char* value) { SetLastName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sender-provided contact's phone number associated with the
     * <code>EngagementInvitation</code>.</p>
     */
    inline const Aws::String& GetPhone() const{ return m_phone; }
    inline bool PhoneHasBeenSet() const { return m_phoneHasBeenSet; }
    inline void SetPhone(const Aws::String& value) { m_phoneHasBeenSet = true; m_phone = value; }
    inline void SetPhone(Aws::String&& value) { m_phoneHasBeenSet = true; m_phone = std::move(value); }
    inline void SetPhone(const char* value) { m_phoneHasBeenSet = true; m_phone.assign(value); }
    inline SenderContact& WithPhone(const Aws::String& value) { SetPhone(value); return *this;}
    inline SenderContact& WithPhone(Aws::String&& value) { SetPhone(std::move(value)); return *this;}
    inline SenderContact& WithPhone(const char* value) { SetPhone(value); return *this;}
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

    Aws::String m_phone;
    bool m_phoneHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
