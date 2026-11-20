/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/payments/PaymentsErrorMarshaller.h>
#include <aws/payments/PaymentsErrors.h>

using namespace Aws::Client;
using namespace Aws::Payments;

AWSError<CoreErrors> PaymentsErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = PaymentsErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}