/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/socialmessaging/model/RegistrationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/socialmessaging/model/WhatsAppPhoneNumberDetail.h>
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
   * <p>Contains your WhatsApp registration status and details of any unregistered
   * WhatsApp phone number.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/LinkedWhatsAppBusinessAccountIdMetaData">AWS
   * API Reference</a></p>
   */
  class LinkedWhatsAppBusinessAccountIdMetaData
  {
  public:
    AWS_SOCIALMESSAGING_API LinkedWhatsAppBusinessAccountIdMetaData();
    AWS_SOCIALMESSAGING_API LinkedWhatsAppBusinessAccountIdMetaData(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API LinkedWhatsAppBusinessAccountIdMetaData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of your account.</p>
     */
    inline const Aws::String& GetAccountName() const{ return m_accountName; }
    inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }
    inline void SetAccountName(const Aws::String& value) { m_accountNameHasBeenSet = true; m_accountName = value; }
    inline void SetAccountName(Aws::String&& value) { m_accountNameHasBeenSet = true; m_accountName = std::move(value); }
    inline void SetAccountName(const char* value) { m_accountNameHasBeenSet = true; m_accountName.assign(value); }
    inline LinkedWhatsAppBusinessAccountIdMetaData& WithAccountName(const Aws::String& value) { SetAccountName(value); return *this;}
    inline LinkedWhatsAppBusinessAccountIdMetaData& WithAccountName(Aws::String&& value) { SetAccountName(std::move(value)); return *this;}
    inline LinkedWhatsAppBusinessAccountIdMetaData& WithAccountName(const char* value) { SetAccountName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The registration status of the linked WhatsApp Business Account.</p>
     */
    inline const RegistrationStatus& GetRegistrationStatus() const{ return m_registrationStatus; }
    inline bool RegistrationStatusHasBeenSet() const { return m_registrationStatusHasBeenSet; }
    inline void SetRegistrationStatus(const RegistrationStatus& value) { m_registrationStatusHasBeenSet = true; m_registrationStatus = value; }
    inline void SetRegistrationStatus(RegistrationStatus&& value) { m_registrationStatusHasBeenSet = true; m_registrationStatus = std::move(value); }
    inline LinkedWhatsAppBusinessAccountIdMetaData& WithRegistrationStatus(const RegistrationStatus& value) { SetRegistrationStatus(value); return *this;}
    inline LinkedWhatsAppBusinessAccountIdMetaData& WithRegistrationStatus(RegistrationStatus&& value) { SetRegistrationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for unregistered WhatsApp phone numbers.</p>
     */
    inline const Aws::Vector<WhatsAppPhoneNumberDetail>& GetUnregisteredWhatsAppPhoneNumbers() const{ return m_unregisteredWhatsAppPhoneNumbers; }
    inline bool UnregisteredWhatsAppPhoneNumbersHasBeenSet() const { return m_unregisteredWhatsAppPhoneNumbersHasBeenSet; }
    inline void SetUnregisteredWhatsAppPhoneNumbers(const Aws::Vector<WhatsAppPhoneNumberDetail>& value) { m_unregisteredWhatsAppPhoneNumbersHasBeenSet = true; m_unregisteredWhatsAppPhoneNumbers = value; }
    inline void SetUnregisteredWhatsAppPhoneNumbers(Aws::Vector<WhatsAppPhoneNumberDetail>&& value) { m_unregisteredWhatsAppPhoneNumbersHasBeenSet = true; m_unregisteredWhatsAppPhoneNumbers = std::move(value); }
    inline LinkedWhatsAppBusinessAccountIdMetaData& WithUnregisteredWhatsAppPhoneNumbers(const Aws::Vector<WhatsAppPhoneNumberDetail>& value) { SetUnregisteredWhatsAppPhoneNumbers(value); return *this;}
    inline LinkedWhatsAppBusinessAccountIdMetaData& WithUnregisteredWhatsAppPhoneNumbers(Aws::Vector<WhatsAppPhoneNumberDetail>&& value) { SetUnregisteredWhatsAppPhoneNumbers(std::move(value)); return *this;}
    inline LinkedWhatsAppBusinessAccountIdMetaData& AddUnregisteredWhatsAppPhoneNumbers(const WhatsAppPhoneNumberDetail& value) { m_unregisteredWhatsAppPhoneNumbersHasBeenSet = true; m_unregisteredWhatsAppPhoneNumbers.push_back(value); return *this; }
    inline LinkedWhatsAppBusinessAccountIdMetaData& AddUnregisteredWhatsAppPhoneNumbers(WhatsAppPhoneNumberDetail&& value) { m_unregisteredWhatsAppPhoneNumbersHasBeenSet = true; m_unregisteredWhatsAppPhoneNumbers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the WhatsApp Business Account ID.</p>
     */
    inline const Aws::String& GetWabaId() const{ return m_wabaId; }
    inline bool WabaIdHasBeenSet() const { return m_wabaIdHasBeenSet; }
    inline void SetWabaId(const Aws::String& value) { m_wabaIdHasBeenSet = true; m_wabaId = value; }
    inline void SetWabaId(Aws::String&& value) { m_wabaIdHasBeenSet = true; m_wabaId = std::move(value); }
    inline void SetWabaId(const char* value) { m_wabaIdHasBeenSet = true; m_wabaId.assign(value); }
    inline LinkedWhatsAppBusinessAccountIdMetaData& WithWabaId(const Aws::String& value) { SetWabaId(value); return *this;}
    inline LinkedWhatsAppBusinessAccountIdMetaData& WithWabaId(Aws::String&& value) { SetWabaId(std::move(value)); return *this;}
    inline LinkedWhatsAppBusinessAccountIdMetaData& WithWabaId(const char* value) { SetWabaId(value); return *this;}
    ///@}
  private:

    Aws::String m_accountName;
    bool m_accountNameHasBeenSet = false;

    RegistrationStatus m_registrationStatus;
    bool m_registrationStatusHasBeenSet = false;

    Aws::Vector<WhatsAppPhoneNumberDetail> m_unregisteredWhatsAppPhoneNumbers;
    bool m_unregisteredWhatsAppPhoneNumbersHasBeenSet = false;

    Aws::String m_wabaId;
    bool m_wabaIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
