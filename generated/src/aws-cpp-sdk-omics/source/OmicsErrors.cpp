/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/omics/OmicsErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Omics;

namespace Aws
{
namespace Omics
{
namespace OmicsErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t NOT_SUPPORTED_OPERATION_HASH = ConstExprHashingUtils::HashString("NotSupportedOperationException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t RANGE_NOT_SATISFIABLE_HASH = ConstExprHashingUtils::HashString("RangeNotSatisfiableException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OmicsErrors::CONFLICT), false);
  }
  else if (hashCode == NOT_SUPPORTED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OmicsErrors::NOT_SUPPORTED_OPERATION), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OmicsErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OmicsErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == RANGE_NOT_SATISFIABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OmicsErrors::RANGE_NOT_SATISFIABLE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace OmicsErrorMapper
} // namespace Omics
} // namespace Aws
