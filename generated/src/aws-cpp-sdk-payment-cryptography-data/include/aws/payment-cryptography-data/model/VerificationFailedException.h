/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/VerificationFailedReason.h>
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
namespace PaymentCryptographyData
{
namespace Model
{

  /**
   * <p>This request failed verification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/VerificationFailedException">AWS
   * API Reference</a></p>
   */
  class VerificationFailedException
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VerificationFailedException();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VerificationFailedException(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VerificationFailedException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline VerificationFailedException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline VerificationFailedException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline VerificationFailedException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The reason for the exception.</p>
     */
    inline const VerificationFailedReason& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for the exception.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for the exception.</p>
     */
    inline void SetReason(const VerificationFailedReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for the exception.</p>
     */
    inline void SetReason(VerificationFailedReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for the exception.</p>
     */
    inline VerificationFailedException& WithReason(const VerificationFailedReason& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for the exception.</p>
     */
    inline VerificationFailedException& WithReason(VerificationFailedReason&& value) { SetReason(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    VerificationFailedReason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
