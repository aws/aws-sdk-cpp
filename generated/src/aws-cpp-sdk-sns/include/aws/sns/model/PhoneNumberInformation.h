/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sns/model/RouteType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sns/model/NumberCapability.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SNS
{
namespace Model
{

  /**
   * <p>A list of phone numbers and their metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/PhoneNumberInformation">AWS
   * API Reference</a></p>
   */
  class PhoneNumberInformation
  {
  public:
    AWS_SNS_API PhoneNumberInformation();
    AWS_SNS_API PhoneNumberInformation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SNS_API PhoneNumberInformation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SNS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SNS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The date and time when the phone number was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time when the phone number was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time when the phone number was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time when the phone number was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time when the phone number was created.</p>
     */
    inline PhoneNumberInformation& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time when the phone number was created.</p>
     */
    inline PhoneNumberInformation& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The phone number.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The phone number.</p>
     */
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    /**
     * <p>The phone number.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The phone number.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    /**
     * <p>The phone number.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>The phone number.</p>
     */
    inline PhoneNumberInformation& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number.</p>
     */
    inline PhoneNumberInformation& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number.</p>
     */
    inline PhoneNumberInformation& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}


    /**
     * <p>The status of the phone number.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the phone number.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the phone number.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the phone number.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the phone number.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the phone number.</p>
     */
    inline PhoneNumberInformation& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the phone number.</p>
     */
    inline PhoneNumberInformation& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the phone number.</p>
     */
    inline PhoneNumberInformation& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The two-character code for the country or region, in ISO 3166-1 alpha-2
     * format.</p>
     */
    inline const Aws::String& GetIso2CountryCode() const{ return m_iso2CountryCode; }

    /**
     * <p>The two-character code for the country or region, in ISO 3166-1 alpha-2
     * format.</p>
     */
    inline bool Iso2CountryCodeHasBeenSet() const { return m_iso2CountryCodeHasBeenSet; }

    /**
     * <p>The two-character code for the country or region, in ISO 3166-1 alpha-2
     * format.</p>
     */
    inline void SetIso2CountryCode(const Aws::String& value) { m_iso2CountryCodeHasBeenSet = true; m_iso2CountryCode = value; }

    /**
     * <p>The two-character code for the country or region, in ISO 3166-1 alpha-2
     * format.</p>
     */
    inline void SetIso2CountryCode(Aws::String&& value) { m_iso2CountryCodeHasBeenSet = true; m_iso2CountryCode = std::move(value); }

    /**
     * <p>The two-character code for the country or region, in ISO 3166-1 alpha-2
     * format.</p>
     */
    inline void SetIso2CountryCode(const char* value) { m_iso2CountryCodeHasBeenSet = true; m_iso2CountryCode.assign(value); }

    /**
     * <p>The two-character code for the country or region, in ISO 3166-1 alpha-2
     * format.</p>
     */
    inline PhoneNumberInformation& WithIso2CountryCode(const Aws::String& value) { SetIso2CountryCode(value); return *this;}

    /**
     * <p>The two-character code for the country or region, in ISO 3166-1 alpha-2
     * format.</p>
     */
    inline PhoneNumberInformation& WithIso2CountryCode(Aws::String&& value) { SetIso2CountryCode(std::move(value)); return *this;}

    /**
     * <p>The two-character code for the country or region, in ISO 3166-1 alpha-2
     * format.</p>
     */
    inline PhoneNumberInformation& WithIso2CountryCode(const char* value) { SetIso2CountryCode(value); return *this;}


    /**
     * <p>The list of supported routes.</p>
     */
    inline const RouteType& GetRouteType() const{ return m_routeType; }

    /**
     * <p>The list of supported routes.</p>
     */
    inline bool RouteTypeHasBeenSet() const { return m_routeTypeHasBeenSet; }

    /**
     * <p>The list of supported routes.</p>
     */
    inline void SetRouteType(const RouteType& value) { m_routeTypeHasBeenSet = true; m_routeType = value; }

    /**
     * <p>The list of supported routes.</p>
     */
    inline void SetRouteType(RouteType&& value) { m_routeTypeHasBeenSet = true; m_routeType = std::move(value); }

    /**
     * <p>The list of supported routes.</p>
     */
    inline PhoneNumberInformation& WithRouteType(const RouteType& value) { SetRouteType(value); return *this;}

    /**
     * <p>The list of supported routes.</p>
     */
    inline PhoneNumberInformation& WithRouteType(RouteType&& value) { SetRouteType(std::move(value)); return *this;}


    /**
     * <p>The capabilities of each phone number.</p>
     */
    inline const Aws::Vector<NumberCapability>& GetNumberCapabilities() const{ return m_numberCapabilities; }

    /**
     * <p>The capabilities of each phone number.</p>
     */
    inline bool NumberCapabilitiesHasBeenSet() const { return m_numberCapabilitiesHasBeenSet; }

    /**
     * <p>The capabilities of each phone number.</p>
     */
    inline void SetNumberCapabilities(const Aws::Vector<NumberCapability>& value) { m_numberCapabilitiesHasBeenSet = true; m_numberCapabilities = value; }

    /**
     * <p>The capabilities of each phone number.</p>
     */
    inline void SetNumberCapabilities(Aws::Vector<NumberCapability>&& value) { m_numberCapabilitiesHasBeenSet = true; m_numberCapabilities = std::move(value); }

    /**
     * <p>The capabilities of each phone number.</p>
     */
    inline PhoneNumberInformation& WithNumberCapabilities(const Aws::Vector<NumberCapability>& value) { SetNumberCapabilities(value); return *this;}

    /**
     * <p>The capabilities of each phone number.</p>
     */
    inline PhoneNumberInformation& WithNumberCapabilities(Aws::Vector<NumberCapability>&& value) { SetNumberCapabilities(std::move(value)); return *this;}

    /**
     * <p>The capabilities of each phone number.</p>
     */
    inline PhoneNumberInformation& AddNumberCapabilities(const NumberCapability& value) { m_numberCapabilitiesHasBeenSet = true; m_numberCapabilities.push_back(value); return *this; }

    /**
     * <p>The capabilities of each phone number.</p>
     */
    inline PhoneNumberInformation& AddNumberCapabilities(NumberCapability&& value) { m_numberCapabilitiesHasBeenSet = true; m_numberCapabilities.push_back(std::move(value)); return *this; }

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_iso2CountryCode;
    bool m_iso2CountryCodeHasBeenSet = false;

    RouteType m_routeType;
    bool m_routeTypeHasBeenSet = false;

    Aws::Vector<NumberCapability> m_numberCapabilities;
    bool m_numberCapabilitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
