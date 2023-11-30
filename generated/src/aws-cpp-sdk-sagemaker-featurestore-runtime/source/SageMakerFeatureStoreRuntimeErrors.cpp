/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SageMakerFeatureStoreRuntime;

namespace Aws
{
namespace SageMakerFeatureStoreRuntime
{
namespace SageMakerFeatureStoreRuntimeErrorMapper
{

static const int ACCESS_FORBIDDEN_HASH = HashingUtils::HashString("AccessForbidden");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == ACCESS_FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerFeatureStoreRuntimeErrors::ACCESS_FORBIDDEN), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SageMakerFeatureStoreRuntimeErrorMapper
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
