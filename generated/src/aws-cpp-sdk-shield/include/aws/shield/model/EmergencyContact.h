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
    AWS_SHIELD_API EmergencyContact();
    AWS_SHIELD_API EmergencyContact(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API EmergencyContact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The email address for the contact.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The email address for the contact.</p>
     */
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

    /**
     * <p>The email address for the contact.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>The email address for the contact.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

    /**
     * <p>The email address for the contact.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p>The email address for the contact.</p>
     */
    inline EmergencyContact& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The email address for the contact.</p>
     */
    inline EmergencyContact& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The email address for the contact.</p>
     */
    inline EmergencyContact& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}


    /**
     * <p>The phone number for the contact.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The phone number for the contact.</p>
     */
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    /**
     * <p>The phone number for the contact.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The phone number for the contact.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    /**
     * <p>The phone number for the contact.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>The phone number for the contact.</p>
     */
    inline EmergencyContact& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number for the contact.</p>
     */
    inline EmergencyContact& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number for the contact.</p>
     */
    inline EmergencyContact& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}


    /**
     * <p>Additional notes regarding the contact. </p>
     */
    inline const Aws::String& GetContactNotes() const{ return m_contactNotes; }

    /**
     * <p>Additional notes regarding the contact. </p>
     */
    inline bool ContactNotesHasBeenSet() const { return m_contactNotesHasBeenSet; }

    /**
     * <p>Additional notes regarding the contact. </p>
     */
    inline void SetContactNotes(const Aws::String& value) { m_contactNotesHasBeenSet = true; m_contactNotes = value; }

    /**
     * <p>Additional notes regarding the contact. </p>
     */
    inline void SetContactNotes(Aws::String&& value) { m_contactNotesHasBeenSet = true; m_contactNotes = std::move(value); }

    /**
     * <p>Additional notes regarding the contact. </p>
     */
    inline void SetContactNotes(const char* value) { m_contactNotesHasBeenSet = true; m_contactNotes.assign(value); }

    /**
     * <p>Additional notes regarding the contact. </p>
     */
    inline EmergencyContact& WithContactNotes(const Aws::String& value) { SetContactNotes(value); return *this;}

    /**
     * <p>Additional notes regarding the contact. </p>
     */
    inline EmergencyContact& WithContactNotes(Aws::String&& value) { SetContactNotes(std::move(value)); return *this;}

    /**
     * <p>Additional notes regarding the contact. </p>
     */
    inline EmergencyContact& WithContactNotes(const char* value) { SetContactNotes(value); return *this;}

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
