/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>Contact information that the SRT can use to contact you if you have proactive
   * engagement enabled, for escalations to the SRT and to initiate proactive
   * customer support.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/EmergencyContact">AWS
   * API Reference</a></p>
   */
  class EmergencyContact
  {
  public:
    AWS_SHIELD_API EmergencyContact() = default;
    AWS_SHIELD_API EmergencyContact(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API EmergencyContact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The email address for the contact.</p>
     */
    inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    template<typename EmailAddressT = Aws::String>
    void SetEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::forward<EmailAddressT>(value); }
    template<typename EmailAddressT = Aws::String>
    EmergencyContact& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number for the contact.</p>
     */
    inline const Aws::String& GetPhoneNumber() const { return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    template<typename PhoneNumberT = Aws::String>
    void SetPhoneNumber(PhoneNumberT&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::forward<PhoneNumberT>(value); }
    template<typename PhoneNumberT = Aws::String>
    EmergencyContact& WithPhoneNumber(PhoneNumberT&& value) { SetPhoneNumber(std::forward<PhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional notes regarding the contact. </p>
     */
    inline const Aws::String& GetContactNotes() const { return m_contactNotes; }
    inline bool ContactNotesHasBeenSet() const { return m_contactNotesHasBeenSet; }
    template<typename ContactNotesT = Aws::String>
    void SetContactNotes(ContactNotesT&& value) { m_contactNotesHasBeenSet = true; m_contactNotes = std::forward<ContactNotesT>(value); }
    template<typename ContactNotesT = Aws::String>
    EmergencyContact& WithContactNotes(ContactNotesT&& value) { SetContactNotes(std::forward<ContactNotesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    Aws::String m_contactNotes;
    bool m_contactNotesHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
