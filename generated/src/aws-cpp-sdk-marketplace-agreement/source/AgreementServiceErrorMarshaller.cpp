/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/marketplace-agreement/AgreementServiceErrorMarshaller.h>
#include <aws/marketplace-agreement/AgreementServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::AgreementService;

AWSError<CoreErrors> AgreementServiceErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = AgreementServiceErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}