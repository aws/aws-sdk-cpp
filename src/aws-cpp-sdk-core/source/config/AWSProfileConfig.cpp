/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/config/AWSProfileConfig.h>
#include <aws/core/utils/StringUtils.h>

namespace Aws
{
    namespace Config
    {
        using namespace Aws::Utils;

        Aws::Crt::Optional<Aws::String> Profile::GetServiceEndpointUrl(
            const Profile& profile,
            const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& services,
            const Aws::String& serviceId)
        {
            auto servicesName = profile.GetServicesName();
            if (!servicesName.has_value()) {
                return Aws::Crt::Optional<Aws::String>();
            }
            
            auto servicesIter = services.find(*servicesName);
            if (servicesIter == services.end()) {
                return Aws::Crt::Optional<Aws::String>();
            }

            Aws::String key = StringUtils::ToUpper(serviceId.c_str());
            StringUtils::Replace(key, " ", "_");
            auto serviceIter = servicesIter->second.find(key);
            
            return (serviceIter == servicesIter->second.end() || serviceIter->second.empty()) ? 
                Aws::Crt::Optional<Aws::String>() : 
                Aws::Crt::Optional<Aws::String>(serviceIter->second);
        }
    }
}