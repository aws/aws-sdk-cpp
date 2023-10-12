/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/workmailmessageflow/WorkMailMessageFlowErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::WorkMailMessageFlow;

namespace Aws
{
namespace WorkMailMessageFlow
{
namespace WorkMailMessageFlowErrorMapper
{

static constexpr uint32_t MESSAGE_FROZEN_HASH = ConstExprHashingUtils::HashString("MessageFrozen");
static constexpr uint32_t MESSAGE_REJECTED_HASH = ConstExprHashingUtils::HashString("MessageRejected");
static constexpr uint32_t INVALID_CONTENT_LOCATION_HASH = ConstExprHashingUtils::HashString("InvalidContentLocation");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == MESSAGE_FROZEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailMessageFlowErrors::MESSAGE_FROZEN), false);
  }
  else if (hashCode == MESSAGE_REJECTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailMessageFlowErrors::MESSAGE_REJECTED), false);
  }
  else if (hashCode == INVALID_CONTENT_LOCATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailMessageFlowErrors::INVALID_CONTENT_LOCATION), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace WorkMailMessageFlowErrorMapper
} // namespace WorkMailMessageFlow
} // namespace Aws
