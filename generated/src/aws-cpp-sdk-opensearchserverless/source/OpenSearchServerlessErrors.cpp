/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearchserverless/OpenSearchServerlessErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::OpenSearchServerless;

namespace Aws
{
namespace OpenSearchServerless
{
namespace OpenSearchServerlessErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServerlessErrors::CONFLICT), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServerlessErrors::INTERNAL_SERVER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace OpenSearchServerlessErrorMapper
} // namespace OpenSearchServerless
} // namespace Aws
