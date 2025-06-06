﻿/**
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
    AWS_SOCIALMESSAGING_API LinkedWhatsAppBusinessAccount() = default;
    AWS_SOCIALMESSAGING_API LinkedWhatsAppBusinessAccount(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API LinkedWhatsAppBusinessAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the linked WhatsApp Business Account.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    LinkedWhatsAppBusinessAccount& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the linked WhatsApp Business Account, formatted as
     * <code>waba-01234567890123456789012345678901</code>.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    LinkedWhatsAppBusinessAccount& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The WhatsApp Business Account ID from meta.</p>
     */
    inline const Aws::String& GetWabaId() const { return m_wabaId; }
    inline bool WabaIdHasBeenSet() const { return m_wabaIdHasBeenSet; }
    template<typename WabaIdT = Aws::String>
    void SetWabaId(WabaIdT&& value) { m_wabaIdHasBeenSet = true; m_wabaId = std::forward<WabaIdT>(value); }
    template<typename WabaIdT = Aws::String>
    LinkedWhatsAppBusinessAccount& WithWabaId(WabaIdT&& value) { SetWabaId(std::forward<WabaIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The registration status of the linked WhatsApp Business Account.</p>
     */
    inline RegistrationStatus GetRegistrationStatus() const { return m_registrationStatus; }
    inline bool RegistrationStatusHasBeenSet() const { return m_registrationStatusHasBeenSet; }
    inline void SetRegistrationStatus(RegistrationStatus value) { m_registrationStatusHasBeenSet = true; m_registrationStatus = value; }
    inline LinkedWhatsAppBusinessAccount& WithRegistrationStatus(RegistrationStatus value) { SetRegistrationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the WhatsApp Business Account was linked.</p>
     */
    inline const Aws::Utils::DateTime& GetLinkDate() const { return m_linkDate; }
    inline bool LinkDateHasBeenSet() const { return m_linkDateHasBeenSet; }
    template<typename LinkDateT = Aws::Utils::DateTime>
    void SetLinkDate(LinkDateT&& value) { m_linkDateHasBeenSet = true; m_linkDate = std::forward<LinkDateT>(value); }
    template<typename LinkDateT = Aws::Utils::DateTime>
    LinkedWhatsAppBusinessAccount& WithLinkDate(LinkDateT&& value) { SetLinkDate(std::forward<LinkDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the linked WhatsApp Business Account.</p>
     */
    inline const Aws::String& GetWabaName() const { return m_wabaName; }
    inline bool WabaNameHasBeenSet() const { return m_wabaNameHasBeenSet; }
    template<typename WabaNameT = Aws::String>
    void SetWabaName(WabaNameT&& value) { m_wabaNameHasBeenSet = true; m_wabaName = std::forward<WabaNameT>(value); }
    template<typename WabaNameT = Aws::String>
    LinkedWhatsAppBusinessAccount& WithWabaName(WabaNameT&& value) { SetWabaName(std::forward<WabaNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event destinations for the linked WhatsApp Business Account.</p>
     */
    inline const Aws::Vector<WhatsAppBusinessAccountEventDestination>& GetEventDestinations() const { return m_eventDestinations; }
    inline bool EventDestinationsHasBeenSet() const { return m_eventDestinationsHasBeenSet; }
    template<typename EventDestinationsT = Aws::Vector<WhatsAppBusinessAccountEventDestination>>
    void SetEventDestinations(EventDestinationsT&& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations = std::forward<EventDestinationsT>(value); }
    template<typename EventDestinationsT = Aws::Vector<WhatsAppBusinessAccountEventDestination>>
    LinkedWhatsAppBusinessAccount& WithEventDestinations(EventDestinationsT&& value) { SetEventDestinations(std::forward<EventDestinationsT>(value)); return *this;}
    template<typename EventDestinationsT = WhatsAppBusinessAccountEventDestination>
    LinkedWhatsAppBusinessAccount& AddEventDestinations(EventDestinationsT&& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations.emplace_back(std::forward<EventDestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The phone numbers associated with the Linked WhatsApp Business Account.</p>
     */
    inline const Aws::Vector<WhatsAppPhoneNumberSummary>& GetPhoneNumbers() const { return m_phoneNumbers; }
    inline bool PhoneNumbersHasBeenSet() const { return m_phoneNumbersHasBeenSet; }
    template<typename PhoneNumbersT = Aws::Vector<WhatsAppPhoneNumberSummary>>
    void SetPhoneNumbers(PhoneNumbersT&& value) { m_phoneNumbersHasBeenSet = true; m_phoneNumbers = std::forward<PhoneNumbersT>(value); }
    template<typename PhoneNumbersT = Aws::Vector<WhatsAppPhoneNumberSummary>>
    LinkedWhatsAppBusinessAccount& WithPhoneNumbers(PhoneNumbersT&& value) { SetPhoneNumbers(std::forward<PhoneNumbersT>(value)); return *this;}
    template<typename PhoneNumbersT = WhatsAppPhoneNumberSummary>
    LinkedWhatsAppBusinessAccount& AddPhoneNumbers(PhoneNumbersT&& value) { m_phoneNumbersHasBeenSet = true; m_phoneNumbers.emplace_back(std::forward<PhoneNumbersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_wabaId;
    bool m_wabaIdHasBeenSet = false;

    RegistrationStatus m_registrationStatus{RegistrationStatus::NOT_SET};
    bool m_registrationStatusHasBeenSet = false;

    Aws::Utils::DateTime m_linkDate{};
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
