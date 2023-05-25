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

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int RANGE_NOT_SATISFIABLE_HASH = HashingUtils::HashString("RangeNotSatisfiableException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OmicsErrors::CONFLICT), false);
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
