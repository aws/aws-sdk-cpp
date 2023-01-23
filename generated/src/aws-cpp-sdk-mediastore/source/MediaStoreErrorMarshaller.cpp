/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/mediastore/MediaStoreErrorMarshaller.h>
#include <aws/mediastore/MediaStoreErrors.h>

using namespace Aws::Client;
using namespace Aws::MediaStore;

AWSError<CoreErrors> MediaStoreErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MediaStoreErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}