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

static constexpr uint32_t REQUESTED_RANGE_NOT_SATISFIABLE_HASH = ConstExprHashingUtils::HashString("RequestedRangeNotSatisfiableException");
static constexpr uint32_t CONTAINER_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ContainerNotFoundException");
static constexpr uint32_t OBJECT_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ObjectNotFoundException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == REQUESTED_RANGE_NOT_SATISFIABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaStoreDataErrors::REQUESTED_RANGE_NOT_SATISFIABLE), false);
  }
  else if (hashCode == CONTAINER_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaStoreDataErrors::CONTAINER_NOT_FOUND), false);
  }
  else if (hashCode == OBJECT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaStoreDataErrors::OBJECT_NOT_FOUND), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MediaStoreDataErrorMapper
} // namespace MediaStoreData
} // namespace Aws
