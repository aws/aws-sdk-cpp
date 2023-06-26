/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/payment-cryptography/PaymentCryptographyErrorMarshaller.h>
#include <aws/payment-cryptography/PaymentCryptographyErrors.h>

using namespace Aws::Client;
using namespace Aws::PaymentCryptography;

AWSError<CoreErrors> PaymentCryptographyErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = PaymentCryptographyErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}