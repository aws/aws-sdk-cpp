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
    AWS_PINPOINTSMSVOICEV2_API OriginationIdentityMetadata();
    AWS_PINPOINTSMSVOICEV2_API OriginationIdentityMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API OriginationIdentityMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) associated with the origination identity.</p>
     */
    inline const Aws::String& GetOriginationIdentityArn() const{ return m_originationIdentityArn; }
    inline bool OriginationIdentityArnHasBeenSet() const { return m_originationIdentityArnHasBeenSet; }
    inline void SetOriginationIdentityArn(const Aws::String& value) { m_originationIdentityArnHasBeenSet = true; m_originationIdentityArn = value; }
    inline void SetOriginationIdentityArn(Aws::String&& value) { m_originationIdentityArnHasBeenSet = true; m_originationIdentityArn = std::move(value); }
    inline void SetOriginationIdentityArn(const char* value) { m_originationIdentityArnHasBeenSet = true; m_originationIdentityArn.assign(value); }
    inline OriginationIdentityMetadata& WithOriginationIdentityArn(const Aws::String& value) { SetOriginationIdentityArn(value); return *this;}
    inline OriginationIdentityMetadata& WithOriginationIdentityArn(Aws::String&& value) { SetOriginationIdentityArn(std::move(value)); return *this;}
    inline OriginationIdentityMetadata& WithOriginationIdentityArn(const char* value) { SetOriginationIdentityArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the origination identity.</p>
     */
    inline const Aws::String& GetOriginationIdentity() const{ return m_originationIdentity; }
    inline bool OriginationIdentityHasBeenSet() const { return m_originationIdentityHasBeenSet; }
    inline void SetOriginationIdentity(const Aws::String& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = value; }
    inline void SetOriginationIdentity(Aws::String&& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = std::move(value); }
    inline void SetOriginationIdentity(const char* value) { m_originationIdentityHasBeenSet = true; m_originationIdentity.assign(value); }
    inline OriginationIdentityMetadata& WithOriginationIdentity(const Aws::String& value) { SetOriginationIdentity(value); return *this;}
    inline OriginationIdentityMetadata& WithOriginationIdentity(Aws::String&& value) { SetOriginationIdentity(std::move(value)); return *this;}
    inline OriginationIdentityMetadata& WithOriginationIdentity(const char* value) { SetOriginationIdentity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region. </p>
     */
    inline const Aws::String& GetIsoCountryCode() const{ return m_isoCountryCode; }
    inline bool IsoCountryCodeHasBeenSet() const { return m_isoCountryCodeHasBeenSet; }
    inline void SetIsoCountryCode(const Aws::String& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = value; }
    inline void SetIsoCountryCode(Aws::String&& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = std::move(value); }
    inline void SetIsoCountryCode(const char* value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode.assign(value); }
    inline OriginationIdentityMetadata& WithIsoCountryCode(const Aws::String& value) { SetIsoCountryCode(value); return *this;}
    inline OriginationIdentityMetadata& WithIsoCountryCode(Aws::String&& value) { SetIsoCountryCode(std::move(value)); return *this;}
    inline OriginationIdentityMetadata& WithIsoCountryCode(const char* value) { SetIsoCountryCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes if the origination identity can be used for text messages, voice
     * calls or both.</p>
     */
    inline const Aws::Vector<NumberCapability>& GetNumberCapabilities() const{ return m_numberCapabilities; }
    inline bool NumberCapabilitiesHasBeenSet() const { return m_numberCapabilitiesHasBeenSet; }
    inline void SetNumberCapabilities(const Aws::Vector<NumberCapability>& value) { m_numberCapabilitiesHasBeenSet = true; m_numberCapabilities = value; }
    inline void SetNumberCapabilities(Aws::Vector<NumberCapability>&& value) { m_numberCapabilitiesHasBeenSet = true; m_numberCapabilities = std::move(value); }
    inline OriginationIdentityMetadata& WithNumberCapabilities(const Aws::Vector<NumberCapability>& value) { SetNumberCapabilities(value); return *this;}
    inline OriginationIdentityMetadata& WithNumberCapabilities(Aws::Vector<NumberCapability>&& value) { SetNumberCapabilities(std::move(value)); return *this;}
    inline OriginationIdentityMetadata& AddNumberCapabilities(const NumberCapability& value) { m_numberCapabilitiesHasBeenSet = true; m_numberCapabilities.push_back(value); return *this; }
    inline OriginationIdentityMetadata& AddNumberCapabilities(NumberCapability&& value) { m_numberCapabilitiesHasBeenSet = true; m_numberCapabilities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The phone number in E.164 format.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }
    inline OriginationIdentityMetadata& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}
    inline OriginationIdentityMetadata& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}
    inline OriginationIdentityMetadata& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}
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
