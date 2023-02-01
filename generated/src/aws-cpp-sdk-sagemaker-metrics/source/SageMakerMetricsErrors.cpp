/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker-metrics/SageMakerMetricsErrors.h>
#include <aws/core/utils/UnreferencedParam.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SageMakerMetrics;

namespace Aws
{
namespace SageMakerMetrics
{
namespace SageMakerMetricsErrorMapper
{



AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  AWS_UNREFERENCED_PARAM(errorName);
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SageMakerMetricsErrorMapper
} // namespace SageMakerMetrics
} // namespace Aws
