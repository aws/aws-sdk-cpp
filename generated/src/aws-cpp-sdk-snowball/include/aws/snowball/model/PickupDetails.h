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
    AWS_SNOWBALL_API PickupDetails();
    AWS_SNOWBALL_API PickupDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API PickupDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the person picking up the device.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the person picking up the device.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the person picking up the device.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the person picking up the device.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the person picking up the device.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the person picking up the device.</p>
     */
    inline PickupDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the person picking up the device.</p>
     */
    inline PickupDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the person picking up the device.</p>
     */
    inline PickupDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The phone number of the person picking up the device.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The phone number of the person picking up the device.</p>
     */
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    /**
     * <p>The phone number of the person picking up the device.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The phone number of the person picking up the device.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    /**
     * <p>The phone number of the person picking up the device.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>The phone number of the person picking up the device.</p>
     */
    inline PickupDetails& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number of the person picking up the device.</p>
     */
    inline PickupDetails& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number of the person picking up the device.</p>
     */
    inline PickupDetails& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}


    /**
     * <p>The email address of the person picking up the device.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email address of the person picking up the device.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The email address of the person picking up the device.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The email address of the person picking up the device.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The email address of the person picking up the device.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The email address of the person picking up the device.</p>
     */
    inline PickupDetails& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email address of the person picking up the device.</p>
     */
    inline PickupDetails& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email address of the person picking up the device.</p>
     */
    inline PickupDetails& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>The number on the credential identifying the person picking up the
     * device.</p>
     */
    inline const Aws::String& GetIdentificationNumber() const{ return m_identificationNumber; }

    /**
     * <p>The number on the credential identifying the person picking up the
     * device.</p>
     */
    inline bool IdentificationNumberHasBeenSet() const { return m_identificationNumberHasBeenSet; }

    /**
     * <p>The number on the credential identifying the person picking up the
     * device.</p>
     */
    inline void SetIdentificationNumber(const Aws::String& value) { m_identificationNumberHasBeenSet = true; m_identificationNumber = value; }

    /**
     * <p>The number on the credential identifying the person picking up the
     * device.</p>
     */
    inline void SetIdentificationNumber(Aws::String&& value) { m_identificationNumberHasBeenSet = true; m_identificationNumber = std::move(value); }

    /**
     * <p>The number on the credential identifying the person picking up the
     * device.</p>
     */
    inline void SetIdentificationNumber(const char* value) { m_identificationNumberHasBeenSet = true; m_identificationNumber.assign(value); }

    /**
     * <p>The number on the credential identifying the person picking up the
     * device.</p>
     */
    inline PickupDetails& WithIdentificationNumber(const Aws::String& value) { SetIdentificationNumber(value); return *this;}

    /**
     * <p>The number on the credential identifying the person picking up the
     * device.</p>
     */
    inline PickupDetails& WithIdentificationNumber(Aws::String&& value) { SetIdentificationNumber(std::move(value)); return *this;}

    /**
     * <p>The number on the credential identifying the person picking up the
     * device.</p>
     */
    inline PickupDetails& WithIdentificationNumber(const char* value) { SetIdentificationNumber(value); return *this;}


    /**
     * <p>Expiration date of the credential identifying the person picking up the
     * device.</p>
     */
    inline const Aws::Utils::DateTime& GetIdentificationExpirationDate() const{ return m_identificationExpirationDate; }

    /**
     * <p>Expiration date of the credential identifying the person picking up the
     * device.</p>
     */
    inline bool IdentificationExpirationDateHasBeenSet() const { return m_identificationExpirationDateHasBeenSet; }

    /**
     * <p>Expiration date of the credential identifying the person picking up the
     * device.</p>
     */
    inline void SetIdentificationExpirationDate(const Aws::Utils::DateTime& value) { m_identificationExpirationDateHasBeenSet = true; m_identificationExpirationDate = value; }

    /**
     * <p>Expiration date of the credential identifying the person picking up the
     * device.</p>
     */
    inline void SetIdentificationExpirationDate(Aws::Utils::DateTime&& value) { m_identificationExpirationDateHasBeenSet = true; m_identificationExpirationDate = std::move(value); }

    /**
     * <p>Expiration date of the credential identifying the person picking up the
     * device.</p>
     */
    inline PickupDetails& WithIdentificationExpirationDate(const Aws::Utils::DateTime& value) { SetIdentificationExpirationDate(value); return *this;}

    /**
     * <p>Expiration date of the credential identifying the person picking up the
     * device.</p>
     */
    inline PickupDetails& WithIdentificationExpirationDate(Aws::Utils::DateTime&& value) { SetIdentificationExpirationDate(std::move(value)); return *this;}


    /**
     * <p>Organization that issued the credential identifying the person picking up the
     * device.</p>
     */
    inline const Aws::String& GetIdentificationIssuingOrg() const{ return m_identificationIssuingOrg; }

    /**
     * <p>Organization that issued the credential identifying the person picking up the
     * device.</p>
     */
    inline bool IdentificationIssuingOrgHasBeenSet() const { return m_identificationIssuingOrgHasBeenSet; }

    /**
     * <p>Organization that issued the credential identifying the person picking up the
     * device.</p>
     */
    inline void SetIdentificationIssuingOrg(const Aws::String& value) { m_identificationIssuingOrgHasBeenSet = true; m_identificationIssuingOrg = value; }

    /**
     * <p>Organization that issued the credential identifying the person picking up the
     * device.</p>
     */
    inline void SetIdentificationIssuingOrg(Aws::String&& value) { m_identificationIssuingOrgHasBeenSet = true; m_identificationIssuingOrg = std::move(value); }

    /**
     * <p>Organization that issued the credential identifying the person picking up the
     * device.</p>
     */
    inline void SetIdentificationIssuingOrg(const char* value) { m_identificationIssuingOrgHasBeenSet = true; m_identificationIssuingOrg.assign(value); }

    /**
     * <p>Organization that issued the credential identifying the person picking up the
     * device.</p>
     */
    inline PickupDetails& WithIdentificationIssuingOrg(const Aws::String& value) { SetIdentificationIssuingOrg(value); return *this;}

    /**
     * <p>Organization that issued the credential identifying the person picking up the
     * device.</p>
     */
    inline PickupDetails& WithIdentificationIssuingOrg(Aws::String&& value) { SetIdentificationIssuingOrg(std::move(value)); return *this;}

    /**
     * <p>Organization that issued the credential identifying the person picking up the
     * device.</p>
     */
    inline PickupDetails& WithIdentificationIssuingOrg(const char* value) { SetIdentificationIssuingOrg(value); return *this;}


    /**
     * <p>The unique ID for a device that will be picked up.</p>
     */
    inline const Aws::String& GetDevicePickupId() const{ return m_devicePickupId; }

    /**
     * <p>The unique ID for a device that will be picked up.</p>
     */
    inline bool DevicePickupIdHasBeenSet() const { return m_devicePickupIdHasBeenSet; }

    /**
     * <p>The unique ID for a device that will be picked up.</p>
     */
    inline void SetDevicePickupId(const Aws::String& value) { m_devicePickupIdHasBeenSet = true; m_devicePickupId = value; }

    /**
     * <p>The unique ID for a device that will be picked up.</p>
     */
    inline void SetDevicePickupId(Aws::String&& value) { m_devicePickupIdHasBeenSet = true; m_devicePickupId = std::move(value); }

    /**
     * <p>The unique ID for a device that will be picked up.</p>
     */
    inline void SetDevicePickupId(const char* value) { m_devicePickupIdHasBeenSet = true; m_devicePickupId.assign(value); }

    /**
     * <p>The unique ID for a device that will be picked up.</p>
     */
    inline PickupDetails& WithDevicePickupId(const Aws::String& value) { SetDevicePickupId(value); return *this;}

    /**
     * <p>The unique ID for a device that will be picked up.</p>
     */
    inline PickupDetails& WithDevicePickupId(Aws::String&& value) { SetDevicePickupId(std::move(value)); return *this;}

    /**
     * <p>The unique ID for a device that will be picked up.</p>
     */
    inline PickupDetails& WithDevicePickupId(const char* value) { SetDevicePickupId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_identificationNumber;
    bool m_identificationNumberHasBeenSet = false;

    Aws::Utils::DateTime m_identificationExpirationDate;
    bool m_identificationExpirationDateHasBeenSet = false;

    Aws::String m_identificationIssuingOrg;
    bool m_identificationIssuingOrgHasBeenSet = false;

    Aws::String m_devicePickupId;
    bool m_devicePickupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
