/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>Information identifying the person picking up the device.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/PickupDetails">AWS
   * API Reference</a></p>
   */
  class PickupDetails
  {
  public:
    AWS_SNOWBALL_API PickupDetails() = default;
    AWS_SNOWBALL_API PickupDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API PickupDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the person picking up the device.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PickupDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number of the person picking up the device.</p>
     */
    inline const Aws::String& GetPhoneNumber() const { return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    template<typename PhoneNumberT = Aws::String>
    void SetPhoneNumber(PhoneNumberT&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::forward<PhoneNumberT>(value); }
    template<typename PhoneNumberT = Aws::String>
    PickupDetails& WithPhoneNumber(PhoneNumberT&& value) { SetPhoneNumber(std::forward<PhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the person picking up the device.</p>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    PickupDetails& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number on the credential identifying the person picking up the
     * device.</p>
     */
    inline const Aws::String& GetIdentificationNumber() const { return m_identificationNumber; }
    inline bool IdentificationNumberHasBeenSet() const { return m_identificationNumberHasBeenSet; }
    template<typename IdentificationNumberT = Aws::String>
    void SetIdentificationNumber(IdentificationNumberT&& value) { m_identificationNumberHasBeenSet = true; m_identificationNumber = std::forward<IdentificationNumberT>(value); }
    template<typename IdentificationNumberT = Aws::String>
    PickupDetails& WithIdentificationNumber(IdentificationNumberT&& value) { SetIdentificationNumber(std::forward<IdentificationNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Expiration date of the credential identifying the person picking up the
     * device.</p>
     */
    inline const Aws::Utils::DateTime& GetIdentificationExpirationDate() const { return m_identificationExpirationDate; }
    inline bool IdentificationExpirationDateHasBeenSet() const { return m_identificationExpirationDateHasBeenSet; }
    template<typename IdentificationExpirationDateT = Aws::Utils::DateTime>
    void SetIdentificationExpirationDate(IdentificationExpirationDateT&& value) { m_identificationExpirationDateHasBeenSet = true; m_identificationExpirationDate = std::forward<IdentificationExpirationDateT>(value); }
    template<typename IdentificationExpirationDateT = Aws::Utils::DateTime>
    PickupDetails& WithIdentificationExpirationDate(IdentificationExpirationDateT&& value) { SetIdentificationExpirationDate(std::forward<IdentificationExpirationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Organization that issued the credential identifying the person picking up the
     * device.</p>
     */
    inline const Aws::String& GetIdentificationIssuingOrg() const { return m_identificationIssuingOrg; }
    inline bool IdentificationIssuingOrgHasBeenSet() const { return m_identificationIssuingOrgHasBeenSet; }
    template<typename IdentificationIssuingOrgT = Aws::String>
    void SetIdentificationIssuingOrg(IdentificationIssuingOrgT&& value) { m_identificationIssuingOrgHasBeenSet = true; m_identificationIssuingOrg = std::forward<IdentificationIssuingOrgT>(value); }
    template<typename IdentificationIssuingOrgT = Aws::String>
    PickupDetails& WithIdentificationIssuingOrg(IdentificationIssuingOrgT&& value) { SetIdentificationIssuingOrg(std::forward<IdentificationIssuingOrgT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID for a device that will be picked up.</p>
     */
    inline const Aws::String& GetDevicePickupId() const { return m_devicePickupId; }
    inline bool DevicePickupIdHasBeenSet() const { return m_devicePickupIdHasBeenSet; }
    template<typename DevicePickupIdT = Aws::String>
    void SetDevicePickupId(DevicePickupIdT&& value) { m_devicePickupIdHasBeenSet = true; m_devicePickupId = std::forward<DevicePickupIdT>(value); }
    template<typename DevicePickupIdT = Aws::String>
    PickupDetails& WithDevicePickupId(DevicePickupIdT&& value) { SetDevicePickupId(std::forward<DevicePickupIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_identificationNumber;
    bool m_identificationNumberHasBeenSet = false;

    Aws::Utils::DateTime m_identificationExpirationDate{};
    bool m_identificationExpirationDateHasBeenSet = false;

    Aws::String m_identificationIssuingOrg;
    bool m_identificationIssuingOrgHasBeenSet = false;

    Aws::String m_devicePickupId;
    bool m_devicePickupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
