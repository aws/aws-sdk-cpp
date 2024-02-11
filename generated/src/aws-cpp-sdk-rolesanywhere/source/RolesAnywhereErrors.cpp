/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rolesanywhere/RolesAnywhereErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::RolesAnywhere;

namespace Aws
{
namespace RolesAnywhere
{
namespace RolesAnywhereErrorMapper
{

static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RolesAnywhereErrors::TOO_MANY_TAGS), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace RolesAnywhereErrorMapper
} // namespace RolesAnywhere
} // namespace Aws
