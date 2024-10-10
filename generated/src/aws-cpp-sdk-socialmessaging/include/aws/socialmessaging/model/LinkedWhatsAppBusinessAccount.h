/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/socialmessaging/model/RegistrationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/socialmessaging/model/WhatsAppBusinessAccountEventDestination.h>
#include <aws/socialmessaging/model/WhatsAppPhoneNumberSummary.h>
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
namespace SocialMessaging
{
namespace Model
{

  /**
   * <p>The details of your linked WhatsApp Business Account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/LinkedWhatsAppBusinessAccount">AWS
   * API Reference</a></p>
   */
  class LinkedWhatsAppBusinessAccount
  {
  public:
    AWS_SOCIALMESSAGING_API LinkedWhatsAppBusinessAccount();
    AWS_SOCIALMESSAGING_API LinkedWhatsAppBusinessAccount(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API LinkedWhatsAppBusinessAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the linked WhatsApp Business Account.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline LinkedWhatsAppBusinessAccount& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline LinkedWhatsAppBusinessAccount& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline LinkedWhatsAppBusinessAccount& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the linked WhatsApp Business Account, formatted as
     * <code>waba-01234567890123456789012345678901</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline LinkedWhatsAppBusinessAccount& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline LinkedWhatsAppBusinessAccount& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline LinkedWhatsAppBusinessAccount& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The WhatsApp Business Account ID from meta.</p>
     */
    inline const Aws::String& GetWabaId() const{ return m_wabaId; }
    inline bool WabaIdHasBeenSet() const { return m_wabaIdHasBeenSet; }
    inline void SetWabaId(const Aws::String& value) { m_wabaIdHasBeenSet = true; m_wabaId = value; }
    inline void SetWabaId(Aws::String&& value) { m_wabaIdHasBeenSet = true; m_wabaId = std::move(value); }
    inline void SetWabaId(const char* value) { m_wabaIdHasBeenSet = true; m_wabaId.assign(value); }
    inline LinkedWhatsAppBusinessAccount& WithWabaId(const Aws::String& value) { SetWabaId(value); return *this;}
    inline LinkedWhatsAppBusinessAccount& WithWabaId(Aws::String&& value) { SetWabaId(std::move(value)); return *this;}
    inline LinkedWhatsAppBusinessAccount& WithWabaId(const char* value) { SetWabaId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The registration status of the linked WhatsApp Business Account.</p>
     */
    inline const RegistrationStatus& GetRegistrationStatus() const{ return m_registrationStatus; }
    inline bool RegistrationStatusHasBeenSet() const { return m_registrationStatusHasBeenSet; }
    inline void SetRegistrationStatus(const RegistrationStatus& value) { m_registrationStatusHasBeenSet = true; m_registrationStatus = value; }
    inline void SetRegistrationStatus(RegistrationStatus&& value) { m_registrationStatusHasBeenSet = true; m_registrationStatus = std::move(value); }
    inline LinkedWhatsAppBusinessAccount& WithRegistrationStatus(const RegistrationStatus& value) { SetRegistrationStatus(value); return *this;}
    inline LinkedWhatsAppBusinessAccount& WithRegistrationStatus(RegistrationStatus&& value) { SetRegistrationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the WhatsApp Business Account was linked.</p>
     */
    inline const Aws::Utils::DateTime& GetLinkDate() const{ return m_linkDate; }
    inline bool LinkDateHasBeenSet() const { return m_linkDateHasBeenSet; }
    inline void SetLinkDate(const Aws::Utils::DateTime& value) { m_linkDateHasBeenSet = true; m_linkDate = value; }
    inline void SetLinkDate(Aws::Utils::DateTime&& value) { m_linkDateHasBeenSet = true; m_linkDate = std::move(value); }
    inline LinkedWhatsAppBusinessAccount& WithLinkDate(const Aws::Utils::DateTime& value) { SetLinkDate(value); return *this;}
    inline LinkedWhatsAppBusinessAccount& WithLinkDate(Aws::Utils::DateTime&& value) { SetLinkDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the linked WhatsApp Business Account.</p>
     */
    inline const Aws::String& GetWabaName() const{ return m_wabaName; }
    inline bool WabaNameHasBeenSet() const { return m_wabaNameHasBeenSet; }
    inline void SetWabaName(const Aws::String& value) { m_wabaNameHasBeenSet = true; m_wabaName = value; }
    inline void SetWabaName(Aws::String&& value) { m_wabaNameHasBeenSet = true; m_wabaName = std::move(value); }
    inline void SetWabaName(const char* value) { m_wabaNameHasBeenSet = true; m_wabaName.assign(value); }
    inline LinkedWhatsAppBusinessAccount& WithWabaName(const Aws::String& value) { SetWabaName(value); return *this;}
    inline LinkedWhatsAppBusinessAccount& WithWabaName(Aws::String&& value) { SetWabaName(std::move(value)); return *this;}
    inline LinkedWhatsAppBusinessAccount& WithWabaName(const char* value) { SetWabaName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event destinations for the linked WhatsApp Business Account.</p>
     */
    inline const Aws::Vector<WhatsAppBusinessAccountEventDestination>& GetEventDestinations() const{ return m_eventDestinations; }
    inline bool EventDestinationsHasBeenSet() const { return m_eventDestinationsHasBeenSet; }
    inline void SetEventDestinations(const Aws::Vector<WhatsAppBusinessAccountEventDestination>& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations = value; }
    inline void SetEventDestinations(Aws::Vector<WhatsAppBusinessAccountEventDestination>&& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations = std::move(value); }
    inline LinkedWhatsAppBusinessAccount& WithEventDestinations(const Aws::Vector<WhatsAppBusinessAccountEventDestination>& value) { SetEventDestinations(value); return *this;}
    inline LinkedWhatsAppBusinessAccount& WithEventDestinations(Aws::Vector<WhatsAppBusinessAccountEventDestination>&& value) { SetEventDestinations(std::move(value)); return *this;}
    inline LinkedWhatsAppBusinessAccount& AddEventDestinations(const WhatsAppBusinessAccountEventDestination& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations.push_back(value); return *this; }
    inline LinkedWhatsAppBusinessAccount& AddEventDestinations(WhatsAppBusinessAccountEventDestination&& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The phone numbers associated with the Linked WhatsApp Business Account.</p>
     */
    inline const Aws::Vector<WhatsAppPhoneNumberSummary>& GetPhoneNumbers() const{ return m_phoneNumbers; }
    inline bool PhoneNumbersHasBeenSet() const { return m_phoneNumbersHasBeenSet; }
    inline void SetPhoneNumbers(const Aws::Vector<WhatsAppPhoneNumberSummary>& value) { m_phoneNumbersHasBeenSet = true; m_phoneNumbers = value; }
    inline void SetPhoneNumbers(Aws::Vector<WhatsAppPhoneNumberSummary>&& value) { m_phoneNumbersHasBeenSet = true; m_phoneNumbers = std::move(value); }
    inline LinkedWhatsAppBusinessAccount& WithPhoneNumbers(const Aws::Vector<WhatsAppPhoneNumberSummary>& value) { SetPhoneNumbers(value); return *this;}
    inline LinkedWhatsAppBusinessAccount& WithPhoneNumbers(Aws::Vector<WhatsAppPhoneNumberSummary>&& value) { SetPhoneNumbers(std::move(value)); return *this;}
    inline LinkedWhatsAppBusinessAccount& AddPhoneNumbers(const WhatsAppPhoneNumberSummary& value) { m_phoneNumbersHasBeenSet = true; m_phoneNumbers.push_back(value); return *this; }
    inline LinkedWhatsAppBusinessAccount& AddPhoneNumbers(WhatsAppPhoneNumberSummary&& value) { m_phoneNumbersHasBeenSet = true; m_phoneNumbers.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_wabaId;
    bool m_wabaIdHasBeenSet = false;

    RegistrationStatus m_registrationStatus;
    bool m_registrationStatusHasBeenSet = false;

    Aws::Utils::DateTime m_linkDate;
    bool m_linkDateHasBeenSet = false;

    Aws::String m_wabaName;
    bool m_wabaNameHasBeenSet = false;

    Aws::Vector<WhatsAppBusinessAccountEventDestination> m_eventDestinations;
    bool m_eventDestinationsHasBeenSet = false;

    Aws::Vector<WhatsAppPhoneNumberSummary> m_phoneNumbers;
    bool m_phoneNumbersHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
