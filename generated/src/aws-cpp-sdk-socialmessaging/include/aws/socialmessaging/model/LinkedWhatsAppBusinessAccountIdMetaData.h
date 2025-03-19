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
    AWS_SOCIALMESSAGING_API LinkedWhatsAppBusinessAccountIdMetaData() = default;
    AWS_SOCIALMESSAGING_API LinkedWhatsAppBusinessAccountIdMetaData(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API LinkedWhatsAppBusinessAccountIdMetaData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of your account.</p>
     */
    inline const Aws::String& GetAccountName() const { return m_accountName; }
    inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }
    template<typename AccountNameT = Aws::String>
    void SetAccountName(AccountNameT&& value) { m_accountNameHasBeenSet = true; m_accountName = std::forward<AccountNameT>(value); }
    template<typename AccountNameT = Aws::String>
    LinkedWhatsAppBusinessAccountIdMetaData& WithAccountName(AccountNameT&& value) { SetAccountName(std::forward<AccountNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The registration status of the linked WhatsApp Business Account.</p>
     */
    inline RegistrationStatus GetRegistrationStatus() const { return m_registrationStatus; }
    inline bool RegistrationStatusHasBeenSet() const { return m_registrationStatusHasBeenSet; }
    inline void SetRegistrationStatus(RegistrationStatus value) { m_registrationStatusHasBeenSet = true; m_registrationStatus = value; }
    inline LinkedWhatsAppBusinessAccountIdMetaData& WithRegistrationStatus(RegistrationStatus value) { SetRegistrationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for unregistered WhatsApp phone numbers.</p>
     */
    inline const Aws::Vector<WhatsAppPhoneNumberDetail>& GetUnregisteredWhatsAppPhoneNumbers() const { return m_unregisteredWhatsAppPhoneNumbers; }
    inline bool UnregisteredWhatsAppPhoneNumbersHasBeenSet() const { return m_unregisteredWhatsAppPhoneNumbersHasBeenSet; }
    template<typename UnregisteredWhatsAppPhoneNumbersT = Aws::Vector<WhatsAppPhoneNumberDetail>>
    void SetUnregisteredWhatsAppPhoneNumbers(UnregisteredWhatsAppPhoneNumbersT&& value) { m_unregisteredWhatsAppPhoneNumbersHasBeenSet = true; m_unregisteredWhatsAppPhoneNumbers = std::forward<UnregisteredWhatsAppPhoneNumbersT>(value); }
    template<typename UnregisteredWhatsAppPhoneNumbersT = Aws::Vector<WhatsAppPhoneNumberDetail>>
    LinkedWhatsAppBusinessAccountIdMetaData& WithUnregisteredWhatsAppPhoneNumbers(UnregisteredWhatsAppPhoneNumbersT&& value) { SetUnregisteredWhatsAppPhoneNumbers(std::forward<UnregisteredWhatsAppPhoneNumbersT>(value)); return *this;}
    template<typename UnregisteredWhatsAppPhoneNumbersT = WhatsAppPhoneNumberDetail>
    LinkedWhatsAppBusinessAccountIdMetaData& AddUnregisteredWhatsAppPhoneNumbers(UnregisteredWhatsAppPhoneNumbersT&& value) { m_unregisteredWhatsAppPhoneNumbersHasBeenSet = true; m_unregisteredWhatsAppPhoneNumbers.emplace_back(std::forward<UnregisteredWhatsAppPhoneNumbersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the WhatsApp Business Account ID.</p>
     */
    inline const Aws::String& GetWabaId() const { return m_wabaId; }
    inline bool WabaIdHasBeenSet() const { return m_wabaIdHasBeenSet; }
    template<typename WabaIdT = Aws::String>
    void SetWabaId(WabaIdT&& value) { m_wabaIdHasBeenSet = true; m_wabaId = std::forward<WabaIdT>(value); }
    template<typename WabaIdT = Aws::String>
    LinkedWhatsAppBusinessAccountIdMetaData& WithWabaId(WabaIdT&& value) { SetWabaId(std::forward<WabaIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountName;
    bool m_accountNameHasBeenSet = false;

    RegistrationStatus m_registrationStatus{RegistrationStatus::NOT_SET};
    bool m_registrationStatusHasBeenSet = false;

    Aws::Vector<WhatsAppPhoneNumberDetail> m_unregisteredWhatsAppPhoneNumbers;
    bool m_unregisteredWhatsAppPhoneNumbersHasBeenSet = false;

    Aws::String m_wabaId;
    bool m_wabaIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
