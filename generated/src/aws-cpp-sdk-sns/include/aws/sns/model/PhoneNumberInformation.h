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
    AWS_SNS_API PhoneNumberInformation() = default;
    AWS_SNS_API PhoneNumberInformation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SNS_API PhoneNumberInformation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SNS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SNS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The date and time when the phone number was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    PhoneNumberInformation& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number.</p>
     */
    inline const Aws::String& GetPhoneNumber() const { return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    template<typename PhoneNumberT = Aws::String>
    void SetPhoneNumber(PhoneNumberT&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::forward<PhoneNumberT>(value); }
    template<typename PhoneNumberT = Aws::String>
    PhoneNumberInformation& WithPhoneNumber(PhoneNumberT&& value) { SetPhoneNumber(std::forward<PhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the phone number.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    PhoneNumberInformation& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The two-character code for the country or region, in ISO 3166-1 alpha-2
     * format.</p>
     */
    inline const Aws::String& GetIso2CountryCode() const { return m_iso2CountryCode; }
    inline bool Iso2CountryCodeHasBeenSet() const { return m_iso2CountryCodeHasBeenSet; }
    template<typename Iso2CountryCodeT = Aws::String>
    void SetIso2CountryCode(Iso2CountryCodeT&& value) { m_iso2CountryCodeHasBeenSet = true; m_iso2CountryCode = std::forward<Iso2CountryCodeT>(value); }
    template<typename Iso2CountryCodeT = Aws::String>
    PhoneNumberInformation& WithIso2CountryCode(Iso2CountryCodeT&& value) { SetIso2CountryCode(std::forward<Iso2CountryCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of supported routes.</p>
     */
    inline RouteType GetRouteType() const { return m_routeType; }
    inline bool RouteTypeHasBeenSet() const { return m_routeTypeHasBeenSet; }
    inline void SetRouteType(RouteType value) { m_routeTypeHasBeenSet = true; m_routeType = value; }
    inline PhoneNumberInformation& WithRouteType(RouteType value) { SetRouteType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capabilities of each phone number.</p>
     */
    inline const Aws::Vector<NumberCapability>& GetNumberCapabilities() const { return m_numberCapabilities; }
    inline bool NumberCapabilitiesHasBeenSet() const { return m_numberCapabilitiesHasBeenSet; }
    template<typename NumberCapabilitiesT = Aws::Vector<NumberCapability>>
    void SetNumberCapabilities(NumberCapabilitiesT&& value) { m_numberCapabilitiesHasBeenSet = true; m_numberCapabilities = std::forward<NumberCapabilitiesT>(value); }
    template<typename NumberCapabilitiesT = Aws::Vector<NumberCapability>>
    PhoneNumberInformation& WithNumberCapabilities(NumberCapabilitiesT&& value) { SetNumberCapabilities(std::forward<NumberCapabilitiesT>(value)); return *this;}
    inline PhoneNumberInformation& AddNumberCapabilities(NumberCapability value) { m_numberCapabilitiesHasBeenSet = true; m_numberCapabilities.push_back(value); return *this; }
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_iso2CountryCode;
    bool m_iso2CountryCodeHasBeenSet = false;

    RouteType m_routeType{RouteType::NOT_SET};
    bool m_routeTypeHasBeenSet = false;

    Aws::Vector<NumberCapability> m_numberCapabilities;
    bool m_numberCapabilitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
