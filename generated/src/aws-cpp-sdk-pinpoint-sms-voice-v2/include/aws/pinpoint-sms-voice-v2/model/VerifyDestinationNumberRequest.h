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
    AWS_PINPOINTSMSVOICEV2_API VerifyDestinationNumberRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "VerifyDestinationNumber"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier for the verififed destination phone number.</p>
     */
    inline const Aws::String& GetVerifiedDestinationNumberId() const { return m_verifiedDestinationNumberId; }
    inline bool VerifiedDestinationNumberIdHasBeenSet() const { return m_verifiedDestinationNumberIdHasBeenSet; }
    template<typename VerifiedDestinationNumberIdT = Aws::String>
    void SetVerifiedDestinationNumberId(VerifiedDestinationNumberIdT&& value) { m_verifiedDestinationNumberIdHasBeenSet = true; m_verifiedDestinationNumberId = std::forward<VerifiedDestinationNumberIdT>(value); }
    template<typename VerifiedDestinationNumberIdT = Aws::String>
    VerifyDestinationNumberRequest& WithVerifiedDestinationNumberId(VerifiedDestinationNumberIdT&& value) { SetVerifiedDestinationNumberId(std::forward<VerifiedDestinationNumberIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The verification code that was received by the verified destination phone
     * number.</p>
     */
    inline const Aws::String& GetVerificationCode() const { return m_verificationCode; }
    inline bool VerificationCodeHasBeenSet() const { return m_verificationCodeHasBeenSet; }
    template<typename VerificationCodeT = Aws::String>
    void SetVerificationCode(VerificationCodeT&& value) { m_verificationCodeHasBeenSet = true; m_verificationCode = std::forward<VerificationCodeT>(value); }
    template<typename VerificationCodeT = Aws::String>
    VerifyDestinationNumberRequest& WithVerificationCode(VerificationCodeT&& value) { SetVerificationCode(std::forward<VerificationCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_verifiedDestinationNumberId;
    bool m_verifiedDestinationNumberIdHasBeenSet = false;

    Aws::String m_verificationCode;
    bool m_verificationCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
