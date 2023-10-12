/**
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

static constexpr uint32_t TAG_OPTION_NOT_MIGRATED_HASH = ConstExprHashingUtils::HashString("TagOptionNotMigratedException");
static constexpr uint32_t OPERATION_NOT_SUPPORTED_HASH = ConstExprHashingUtils::HashString("OperationNotSupportedException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t DUPLICATE_RESOURCE_HASH = ConstExprHashingUtils::HashString("DuplicateResourceException");
static constexpr uint32_t RESOURCE_IN_USE_HASH = ConstExprHashingUtils::HashString("ResourceInUseException");
static constexpr uint32_t INVALID_PARAMETERS_HASH = ConstExprHashingUtils::HashString("InvalidParametersException");
static constexpr uint32_t INVALID_STATE_HASH = ConstExprHashingUtils::HashString("InvalidStateException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
