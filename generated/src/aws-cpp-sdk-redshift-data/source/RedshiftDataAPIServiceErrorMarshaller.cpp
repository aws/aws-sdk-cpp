/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/redshift-data/RedshiftDataAPIServiceErrorMarshaller.h>
#include <aws/redshift-data/RedshiftDataAPIServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::RedshiftDataAPIService;

AWSError<CoreErrors> RedshiftDataAPIServiceErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = RedshiftDataAPIServiceErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}