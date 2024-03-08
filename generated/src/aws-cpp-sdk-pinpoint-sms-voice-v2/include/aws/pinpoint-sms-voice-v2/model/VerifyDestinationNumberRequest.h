/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class VerifyDestinationNumberRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API VerifyDestinationNumberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "VerifyDestinationNumber"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier for the verififed destination phone number.</p>
     */
    inline const Aws::String& GetVerifiedDestinationNumberId() const{ return m_verifiedDestinationNumberId; }

    /**
     * <p>The unique identifier for the verififed destination phone number.</p>
     */
    inline bool VerifiedDestinationNumberIdHasBeenSet() const { return m_verifiedDestinationNumberIdHasBeenSet; }

    /**
     * <p>The unique identifier for the verififed destination phone number.</p>
     */
    inline void SetVerifiedDestinationNumberId(const Aws::String& value) { m_verifiedDestinationNumberIdHasBeenSet = true; m_verifiedDestinationNumberId = value; }

    /**
     * <p>The unique identifier for the verififed destination phone number.</p>
     */
    inline void SetVerifiedDestinationNumberId(Aws::String&& value) { m_verifiedDestinationNumberIdHasBeenSet = true; m_verifiedDestinationNumberId = std::move(value); }

    /**
     * <p>The unique identifier for the verififed destination phone number.</p>
     */
    inline void SetVerifiedDestinationNumberId(const char* value) { m_verifiedDestinationNumberIdHasBeenSet = true; m_verifiedDestinationNumberId.assign(value); }

    /**
     * <p>The unique identifier for the verififed destination phone number.</p>
     */
    inline VerifyDestinationNumberRequest& WithVerifiedDestinationNumberId(const Aws::String& value) { SetVerifiedDestinationNumberId(value); return *this;}

    /**
     * <p>The unique identifier for the verififed destination phone number.</p>
     */
    inline VerifyDestinationNumberRequest& WithVerifiedDestinationNumberId(Aws::String&& value) { SetVerifiedDestinationNumberId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the verififed destination phone number.</p>
     */
    inline VerifyDestinationNumberRequest& WithVerifiedDestinationNumberId(const char* value) { SetVerifiedDestinationNumberId(value); return *this;}


    /**
     * <p>The verification code that was received by the verified destination phone
     * number.</p>
     */
    inline const Aws::String& GetVerificationCode() const{ return m_verificationCode; }

    /**
     * <p>The verification code that was received by the verified destination phone
     * number.</p>
     */
    inline bool VerificationCodeHasBeenSet() const { return m_verificationCodeHasBeenSet; }

    /**
     * <p>The verification code that was received by the verified destination phone
     * number.</p>
     */
    inline void SetVerificationCode(const Aws::String& value) { m_verificationCodeHasBeenSet = true; m_verificationCode = value; }

    /**
     * <p>The verification code that was received by the verified destination phone
     * number.</p>
     */
    inline void SetVerificationCode(Aws::String&& value) { m_verificationCodeHasBeenSet = true; m_verificationCode = std::move(value); }

    /**
     * <p>The verification code that was received by the verified destination phone
     * number.</p>
     */
    inline void SetVerificationCode(const char* value) { m_verificationCodeHasBeenSet = true; m_verificationCode.assign(value); }

    /**
     * <p>The verification code that was received by the verified destination phone
     * number.</p>
     */
    inline VerifyDestinationNumberRequest& WithVerificationCode(const Aws::String& value) { SetVerificationCode(value); return *this;}

    /**
     * <p>The verification code that was received by the verified destination phone
     * number.</p>
     */
    inline VerifyDestinationNumberRequest& WithVerificationCode(Aws::String&& value) { SetVerificationCode(std::move(value)); return *this;}

    /**
     * <p>The verification code that was received by the verified destination phone
     * number.</p>
     */
    inline VerifyDestinationNumberRequest& WithVerificationCode(const char* value) { SetVerificationCode(value); return *this;}

  private:

    Aws::String m_verifiedDestinationNumberId;
    bool m_verifiedDestinationNumberIdHasBeenSet = false;

    Aws::String m_verificationCode;
    bool m_verificationCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
