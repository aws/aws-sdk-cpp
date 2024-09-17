/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> The alphanumeric sender ID in a specific country that you want to describe.
   * For more information on sender IDs see <a
   * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/sender-id-request.html">Requesting
   * sender IDs </a> in the <i>AWS End User Messaging SMS User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SenderIdAndCountry">AWS
   * API Reference</a></p>
   */
  class SenderIdAndCountry
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API SenderIdAndCountry();
    AWS_PINPOINTSMSVOICEV2_API SenderIdAndCountry(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API SenderIdAndCountry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the sender.</p>
     */
    inline const Aws::String& GetSenderId() const{ return m_senderId; }
    inline bool SenderIdHasBeenSet() const { return m_senderIdHasBeenSet; }
    inline void SetSenderId(const Aws::String& value) { m_senderIdHasBeenSet = true; m_senderId = value; }
    inline void SetSenderId(Aws::String&& value) { m_senderIdHasBeenSet = true; m_senderId = std::move(value); }
    inline void SetSenderId(const char* value) { m_senderIdHasBeenSet = true; m_senderId.assign(value); }
    inline SenderIdAndCountry& WithSenderId(const Aws::String& value) { SetSenderId(value); return *this;}
    inline SenderIdAndCountry& WithSenderId(Aws::String&& value) { SetSenderId(std::move(value)); return *this;}
    inline SenderIdAndCountry& WithSenderId(const char* value) { SetSenderId(value); return *this;}
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
    inline SenderIdAndCountry& WithIsoCountryCode(const Aws::String& value) { SetIsoCountryCode(value); return *this;}
    inline SenderIdAndCountry& WithIsoCountryCode(Aws::String&& value) { SetIsoCountryCode(std::move(value)); return *this;}
    inline SenderIdAndCountry& WithIsoCountryCode(const char* value) { SetIsoCountryCode(value); return *this;}
    ///@}
  private:

    Aws::String m_senderId;
    bool m_senderIdHasBeenSet = false;

    Aws::String m_isoCountryCode;
    bool m_isoCountryCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
