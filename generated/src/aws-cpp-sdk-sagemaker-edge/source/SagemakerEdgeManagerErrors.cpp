/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker-edge/SagemakerEdgeManagerErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SagemakerEdgeManager;

namespace Aws
{
namespace SagemakerEdgeManager
{
namespace SagemakerEdgeManagerErrorMapper
{

static const int INTERNAL_SERVICE_HASH = HashingUtils::HashString("InternalServiceException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SagemakerEdgeManagerErrors::INTERNAL_SERVICE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SagemakerEdgeManagerErrorMapper
} // namespace SagemakerEdgeManager
} // namespace Aws
