/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/config/EndpointResolver.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/StringUtils.h>

using namespace Aws::Config;
using namespace Aws::Utils;

Aws::String EndpointResolver::ToEnvSuffix(const Aws::String& serviceId)
{
    Aws::String result = StringUtils::ToUpper(serviceId.c_str());
    StringUtils::Replace(result, " ", "_");
    return result;
}