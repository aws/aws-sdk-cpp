/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/signer-data/SignerDataErrorMarshaller.h>
#include <aws/signer-data/SignerDataErrors.h>

using namespace Aws::Client;
using namespace Aws::SignerData;

AWSError<CoreErrors> SignerDataErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = SignerDataErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}