/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/marketplace-catalog/MarketplaceCatalogErrorMarshaller.h>
#include <aws/marketplace-catalog/MarketplaceCatalogErrors.h>

using namespace Aws::Client;
using namespace Aws::MarketplaceCatalog;

AWSError<CoreErrors> MarketplaceCatalogErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MarketplaceCatalogErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}