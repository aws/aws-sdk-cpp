/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Verify OTP message request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/VerifyOTPMessageRequestParameters">AWS
   * API Reference</a></p>
   */
  class VerifyOTPMessageRequestParameters
  {
  public:
    AWS_PINPOINT_API VerifyOTPMessageRequestParameters() = default;
    AWS_PINPOINT_API VerifyOTPMessageRequestParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API VerifyOTPMessageRequestParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The destination identity to send OTP to.</p>
     */
    inline const Aws::String& GetDestinationIdentity() const { return m_destinationIdentity; }
    inline bool DestinationIdentityHasBeenSet() const { return m_destinationIdentityHasBeenSet; }
    template<typename DestinationIdentityT = Aws::String>
    void SetDestinationIdentity(DestinationIdentityT&& value) { m_destinationIdentityHasBeenSet = true; m_destinationIdentity = std::forward<DestinationIdentityT>(value); }
    template<typename DestinationIdentityT = Aws::String>
    VerifyOTPMessageRequestParameters& WithDestinationIdentity(DestinationIdentityT&& value) { SetDestinationIdentity(std::forward<DestinationIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OTP the end user provided for verification.</p>
     */
    inline const Aws::String& GetOtp() const { return m_otp; }
    inline bool OtpHasBeenSet() const { return m_otpHasBeenSet; }
    template<typename OtpT = Aws::String>
    void SetOtp(OtpT&& value) { m_otpHasBeenSet = true; m_otp = std::forward<OtpT>(value); }
    template<typename OtpT = Aws::String>
    VerifyOTPMessageRequestParameters& WithOtp(OtpT&& value) { SetOtp(std::forward<OtpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference identifier provided when the OTP was previously sent.</p>
     */
    inline const Aws::String& GetReferenceId() const { return m_referenceId; }
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }
    template<typename ReferenceIdT = Aws::String>
    void SetReferenceId(ReferenceIdT&& value) { m_referenceIdHasBeenSet = true; m_referenceId = std::forward<ReferenceIdT>(value); }
    template<typename ReferenceIdT = Aws::String>
    VerifyOTPMessageRequestParameters& WithReferenceId(ReferenceIdT&& value) { SetReferenceId(std::forward<ReferenceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_destinationIdentity;
    bool m_destinationIdentityHasBeenSet = false;

    Aws::String m_otp;
    bool m_otpHasBeenSet = false;

    Aws::String m_referenceId;
    bool m_referenceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
