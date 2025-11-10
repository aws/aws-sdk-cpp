/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/config/AWSProfileConfig.h>
#include <aws/core/config/ConfigAndCredentialsCacheManager.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/http/Scheme.h>

namespace Aws
{
    namespace Config
    {
        static const char ENDPOINT_RESOLVER_TAG[] = "EndpointResolver";

        /**
         * Resolver that sources endpoints from configuration.
         */
        namespace EndpointResolver
        {
            /**
             * Convert service ID to environment variable suffix format
             */
            AWS_CORE_API Aws::String ToEnvSuffix(const Aws::String& serviceId);

            /**
             * Sources endpoint URL from configuration.
             * 
             * @param serviceId Service identifier (e.g., "s3", "Elastic Beanstalk")
             * @param profileName Profile name for shared config lookup
             * @return Optional endpoint URL if found, empty if not configured
             */
            AWS_CORE_API Aws::String EndpointSource(const Aws::String& serviceId,
                                                   const Aws::String& profileName);
        }

    } // namespace Config
} // namespace Aws