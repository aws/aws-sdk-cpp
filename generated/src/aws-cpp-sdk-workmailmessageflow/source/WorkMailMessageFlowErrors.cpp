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

static const int MESSAGE_FROZEN_HASH = HashingUtils::HashString("MessageFrozen");
static const int MESSAGE_REJECTED_HASH = HashingUtils::HashString("MessageRejected");
static const int INVALID_CONTENT_LOCATION_HASH = HashingUtils::HashString("InvalidContentLocation");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == MESSAGE_FROZEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailMessageFlowErrors::MESSAGE_FROZEN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == MESSAGE_REJECTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailMessageFlowErrors::MESSAGE_REJECTED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_CONTENT_LOCATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WorkMailMessageFlowErrors::INVALID_CONTENT_LOCATION), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace WorkMailMessageFlowErrorMapper
} // namespace WorkMailMessageFlow
} // namespace Aws
