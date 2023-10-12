/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/personalize-events/PersonalizeEventsErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::PersonalizeEvents;

namespace Aws
{
namespace PersonalizeEvents
{
namespace PersonalizeEventsErrorMapper
{

static constexpr uint32_t INVALID_INPUT_HASH = ConstExprHashingUtils::HashString("InvalidInputException");
static constexpr uint32_t RESOURCE_IN_USE_HASH = ConstExprHashingUtils::HashString("ResourceInUseException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PersonalizeEventsErrors::INVALID_INPUT), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PersonalizeEventsErrors::RESOURCE_IN_USE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace PersonalizeEventsErrorMapper
} // namespace PersonalizeEvents
} // namespace Aws
