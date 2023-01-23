﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opsworks/OpsWorksErrors.h>
#include <aws/core/utils/UnreferencedParam.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::OpsWorks;

namespace Aws
{
namespace OpsWorks
{
namespace OpsWorksErrorMapper
{



AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  AWS_UNREFERENCED_PARAM(errorName);
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace OpsWorksErrorMapper
} // namespace OpsWorks
} // namespace Aws
