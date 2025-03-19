/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/NumberCapability.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>The metadata for an origination identity associated with a
   * pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/OriginationIdentityMetadata">AWS
   * API Reference</a></p>
   */
  class OriginationIdentityMetadata
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API OriginationIdentityMetadata() = default;
    AWS_PINPOINTSMSVOICEV2_API OriginationIdentityMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API OriginationIdentityMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) associated with the origination identity.</p>
     */
    inline const Aws::String& GetOriginationIdentityArn() const { return m_originationIdentityArn; }
    inline bool OriginationIdentityArnHasBeenSet() const { return m_originationIdentityArnHasBeenSet; }
    template<typename OriginationIdentityArnT = Aws::String>
    void SetOriginationIdentityArn(OriginationIdentityArnT&& value) { m_originationIdentityArnHasBeenSet = true; m_originationIdentityArn = std::forward<OriginationIdentityArnT>(value); }
    template<typename OriginationIdentityArnT = Aws::String>
    OriginationIdentityMetadata& WithOriginationIdentityArn(OriginationIdentityArnT&& value) { SetOriginationIdentityArn(std::forward<OriginationIdentityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the origination identity.</p>
     */
    inline const Aws::String& GetOriginationIdentity() const { return m_originationIdentity; }
    inline bool OriginationIdentityHasBeenSet() const { return m_originationIdentityHasBeenSet; }
    template<typename OriginationIdentityT = Aws::String>
    void SetOriginationIdentity(OriginationIdentityT&& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = std::forward<OriginationIdentityT>(value); }
    template<typename OriginationIdentityT = Aws::String>
    OriginationIdentityMetadata& WithOriginationIdentity(OriginationIdentityT&& value) { SetOriginationIdentity(std::forward<OriginationIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region. </p>
     */
    inline const Aws::String& GetIsoCountryCode() const { return m_isoCountryCode; }
    inline bool IsoCountryCodeHasBeenSet() const { return m_isoCountryCodeHasBeenSet; }
    template<typename IsoCountryCodeT = Aws::String>
    void SetIsoCountryCode(IsoCountryCodeT&& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = std::forward<IsoCountryCodeT>(value); }
    template<typename IsoCountryCodeT = Aws::String>
    OriginationIdentityMetadata& WithIsoCountryCode(IsoCountryCodeT&& value) { SetIsoCountryCode(std::forward<IsoCountryCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes if the origination identity can be used for text messages, voice
     * calls or both.</p>
     */
    inline const Aws::Vector<NumberCapability>& GetNumberCapabilities() const { return m_numberCapabilities; }
    inline bool NumberCapabilitiesHasBeenSet() const { return m_numberCapabilitiesHasBeenSet; }
    template<typename NumberCapabilitiesT = Aws::Vector<NumberCapability>>
    void SetNumberCapabilities(NumberCapabilitiesT&& value) { m_numberCapabilitiesHasBeenSet = true; m_numberCapabilities = std::forward<NumberCapabilitiesT>(value); }
    template<typename NumberCapabilitiesT = Aws::Vector<NumberCapability>>
    OriginationIdentityMetadata& WithNumberCapabilities(NumberCapabilitiesT&& value) { SetNumberCapabilities(std::forward<NumberCapabilitiesT>(value)); return *this;}
    inline OriginationIdentityMetadata& AddNumberCapabilities(NumberCapability value) { m_numberCapabilitiesHasBeenSet = true; m_numberCapabilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The phone number in E.164 format.</p>
     */
    inline const Aws::String& GetPhoneNumber() const { return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    template<typename PhoneNumberT = Aws::String>
    void SetPhoneNumber(PhoneNumberT&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::forward<PhoneNumberT>(value); }
    template<typename PhoneNumberT = Aws::String>
    OriginationIdentityMetadata& WithPhoneNumber(PhoneNumberT&& value) { SetPhoneNumber(std::forward<PhoneNumberT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_originationIdentityArn;
    bool m_originationIdentityArnHasBeenSet = false;

    Aws::String m_originationIdentity;
    bool m_originationIdentityHasBeenSet = false;

    Aws::String m_isoCountryCode;
    bool m_isoCountryCodeHasBeenSet = false;

    Aws::Vector<NumberCapability> m_numberCapabilities;
    bool m_numberCapabilitiesHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
