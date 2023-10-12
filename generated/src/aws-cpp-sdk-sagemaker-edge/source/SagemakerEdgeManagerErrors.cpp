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

static constexpr uint32_t INTERNAL_SERVICE_HASH = ConstExprHashingUtils::HashString("InternalServiceException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SagemakerEdgeManagerErrors::INTERNAL_SERVICE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SagemakerEdgeManagerErrorMapper
} // namespace SagemakerEdgeManager
} // namespace Aws
