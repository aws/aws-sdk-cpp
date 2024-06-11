﻿/**
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
    AWS_PINPOINT_API VerifyOTPMessageRequestParameters();
    AWS_PINPOINT_API VerifyOTPMessageRequestParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API VerifyOTPMessageRequestParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The destination identity to send OTP to.</p>
     */
    inline const Aws::String& GetDestinationIdentity() const{ return m_destinationIdentity; }
    inline bool DestinationIdentityHasBeenSet() const { return m_destinationIdentityHasBeenSet; }
    inline void SetDestinationIdentity(const Aws::String& value) { m_destinationIdentityHasBeenSet = true; m_destinationIdentity = value; }
    inline void SetDestinationIdentity(Aws::String&& value) { m_destinationIdentityHasBeenSet = true; m_destinationIdentity = std::move(value); }
    inline void SetDestinationIdentity(const char* value) { m_destinationIdentityHasBeenSet = true; m_destinationIdentity.assign(value); }
    inline VerifyOTPMessageRequestParameters& WithDestinationIdentity(const Aws::String& value) { SetDestinationIdentity(value); return *this;}
    inline VerifyOTPMessageRequestParameters& WithDestinationIdentity(Aws::String&& value) { SetDestinationIdentity(std::move(value)); return *this;}
    inline VerifyOTPMessageRequestParameters& WithDestinationIdentity(const char* value) { SetDestinationIdentity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OTP the end user provided for verification.</p>
     */
    inline const Aws::String& GetOtp() const{ return m_otp; }
    inline bool OtpHasBeenSet() const { return m_otpHasBeenSet; }
    inline void SetOtp(const Aws::String& value) { m_otpHasBeenSet = true; m_otp = value; }
    inline void SetOtp(Aws::String&& value) { m_otpHasBeenSet = true; m_otp = std::move(value); }
    inline void SetOtp(const char* value) { m_otpHasBeenSet = true; m_otp.assign(value); }
    inline VerifyOTPMessageRequestParameters& WithOtp(const Aws::String& value) { SetOtp(value); return *this;}
    inline VerifyOTPMessageRequestParameters& WithOtp(Aws::String&& value) { SetOtp(std::move(value)); return *this;}
    inline VerifyOTPMessageRequestParameters& WithOtp(const char* value) { SetOtp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference identifier provided when the OTP was previously sent.</p>
     */
    inline const Aws::String& GetReferenceId() const{ return m_referenceId; }
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }
    inline void SetReferenceId(const Aws::String& value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }
    inline void SetReferenceId(Aws::String&& value) { m_referenceIdHasBeenSet = true; m_referenceId = std::move(value); }
    inline void SetReferenceId(const char* value) { m_referenceIdHasBeenSet = true; m_referenceId.assign(value); }
    inline VerifyOTPMessageRequestParameters& WithReferenceId(const Aws::String& value) { SetReferenceId(value); return *this;}
    inline VerifyOTPMessageRequestParameters& WithReferenceId(Aws::String&& value) { SetReferenceId(std::move(value)); return *this;}
    inline VerifyOTPMessageRequestParameters& WithReferenceId(const char* value) { SetReferenceId(value); return *this;}
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
