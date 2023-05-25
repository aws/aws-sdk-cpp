/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/HealthCheckType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceDiscovery
  {
    namespace Model
    {
      namespace HealthCheckTypeMapper
      {

        static const int HTTP_HASH = HashingUtils::HashString("HTTP");
        static const int HTTPS_HASH = HashingUtils::HashString("HTTPS");
        static const int TCP_HASH = HashingUtils::HashString("TCP");


        HealthCheckType GetHealthCheckTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HTTP_HASH)
          {
            return HealthCheckType::HTTP;
          }
          else if (hashCode == HTTPS_HASH)
          {
            return HealthCheckType::HTTPS;
          }
          else if (hashCode == TCP_HASH)
          {
            return HealthCheckType::TCP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HealthCheckType>(hashCode);
          }

          return HealthCheckType::NOT_SET;
        }

        Aws::String GetNameForHealthCheckType(HealthCheckType enumValue)
        {
          switch(enumValue)
          {
          case HealthCheckType::HTTP:
            return "HTTP";
          case HealthCheckType::HTTPS:
            return "HTTPS";
          case HealthCheckType::TCP:
            return "TCP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HealthCheckTypeMapper
    } // namespace Model
  } // namespace ServiceDiscovery
} // namespace Aws
