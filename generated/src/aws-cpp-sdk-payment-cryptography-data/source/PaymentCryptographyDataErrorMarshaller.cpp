/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataErrorMarshaller.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataErrors.h>

using namespace Aws::Client;
using namespace Aws::PaymentCryptographyData;

AWSError<CoreErrors> PaymentCryptographyDataErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = PaymentCryptographyDataErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}