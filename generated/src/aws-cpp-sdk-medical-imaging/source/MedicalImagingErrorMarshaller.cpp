/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/medical-imaging/MedicalImagingErrorMarshaller.h>
#include <aws/medical-imaging/MedicalImagingErrors.h>

using namespace Aws::Client;
using namespace Aws::MedicalImaging;

AWSError<CoreErrors> MedicalImagingErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MedicalImagingErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}