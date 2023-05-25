/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/servicecatalog/ServiceCatalogErrorMarshaller.h>
#include <aws/servicecatalog/ServiceCatalogErrors.h>

using namespace Aws::Client;
using namespace Aws::ServiceCatalog;

AWSError<CoreErrors> ServiceCatalogErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ServiceCatalogErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}