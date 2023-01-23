﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/servicecatalog/ServiceCatalogErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ServiceCatalog;

namespace Aws
{
namespace ServiceCatalog
{
namespace ServiceCatalogErrorMapper
{

static const int TAG_OPTION_NOT_MIGRATED_HASH = HashingUtils::HashString("TagOptionNotMigratedException");
static const int OPERATION_NOT_SUPPORTED_HASH = HashingUtils::HashString("OperationNotSupportedException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int DUPLICATE_RESOURCE_HASH = HashingUtils::HashString("DuplicateResourceException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int INVALID_PARAMETERS_HASH = HashingUtils::HashString("InvalidParametersException");
static const int INVALID_STATE_HASH = HashingUtils::HashString("InvalidStateException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == TAG_OPTION_NOT_MIGRATED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceCatalogErrors::TAG_OPTION_NOT_MIGRATED), false);
  }
  else if (hashCode == OPERATION_NOT_SUPPORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceCatalogErrors::OPERATION_NOT_SUPPORTED), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceCatalogErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == DUPLICATE_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceCatalogErrors::DUPLICATE_RESOURCE), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceCatalogErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == INVALID_PARAMETERS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceCatalogErrors::INVALID_PARAMETERS), false);
  }
  else if (hashCode == INVALID_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceCatalogErrors::INVALID_STATE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ServiceCatalogErrorMapper
} // namespace ServiceCatalog
} // namespace Aws
