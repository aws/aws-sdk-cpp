/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediastore-data/MediaStoreDataErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::MediaStoreData;

namespace Aws
{
namespace MediaStoreData
{
namespace MediaStoreDataErrorMapper
{

static const int REQUESTED_RANGE_NOT_SATISFIABLE_HASH = HashingUtils::HashString("RequestedRangeNotSatisfiableException");
static const int CONTAINER_NOT_FOUND_HASH = HashingUtils::HashString("ContainerNotFoundException");
static const int OBJECT_NOT_FOUND_HASH = HashingUtils::HashString("ObjectNotFoundException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == REQUESTED_RANGE_NOT_SATISFIABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaStoreDataErrors::REQUESTED_RANGE_NOT_SATISFIABLE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CONTAINER_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaStoreDataErrors::CONTAINER_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == OBJECT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaStoreDataErrors::OBJECT_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MediaStoreDataErrorMapper
} // namespace MediaStoreData
} // namespace Aws
