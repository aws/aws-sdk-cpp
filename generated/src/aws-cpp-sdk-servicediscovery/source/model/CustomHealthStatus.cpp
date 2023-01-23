/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/CustomHealthStatus.h>
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
      namespace CustomHealthStatusMapper
      {

        static const int HEALTHY_HASH = HashingUtils::HashString("HEALTHY");
        static const int UNHEALTHY_HASH = HashingUtils::HashString("UNHEALTHY");


        CustomHealthStatus GetCustomHealthStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEALTHY_HASH)
          {
            return CustomHealthStatus::HEALTHY;
          }
          else if (hashCode == UNHEALTHY_HASH)
          {
            return CustomHealthStatus::UNHEALTHY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomHealthStatus>(hashCode);
          }

          return CustomHealthStatus::NOT_SET;
        }

        Aws::String GetNameForCustomHealthStatus(CustomHealthStatus enumValue)
        {
          switch(enumValue)
          {
          case CustomHealthStatus::HEALTHY:
            return "HEALTHY";
          case CustomHealthStatus::UNHEALTHY:
            return "UNHEALTHY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomHealthStatusMapper
    } // namespace Model
  } // namespace ServiceDiscovery
} // namespace Aws
