/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/HealthStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PrivateNetworks
  {
    namespace Model
    {
      namespace HealthStatusMapper
      {

        static constexpr uint32_t INITIAL_HASH = ConstExprHashingUtils::HashString("INITIAL");
        static constexpr uint32_t HEALTHY_HASH = ConstExprHashingUtils::HashString("HEALTHY");
        static constexpr uint32_t UNHEALTHY_HASH = ConstExprHashingUtils::HashString("UNHEALTHY");


        HealthStatus GetHealthStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIAL_HASH)
          {
            return HealthStatus::INITIAL;
          }
          else if (hashCode == HEALTHY_HASH)
          {
            return HealthStatus::HEALTHY;
          }
          else if (hashCode == UNHEALTHY_HASH)
          {
            return HealthStatus::UNHEALTHY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HealthStatus>(hashCode);
          }

          return HealthStatus::NOT_SET;
        }

        Aws::String GetNameForHealthStatus(HealthStatus enumValue)
        {
          switch(enumValue)
          {
          case HealthStatus::NOT_SET:
            return {};
          case HealthStatus::INITIAL:
            return "INITIAL";
          case HealthStatus::HEALTHY:
            return "HEALTHY";
          case HealthStatus::UNHEALTHY:
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

      } // namespace HealthStatusMapper
    } // namespace Model
  } // namespace PrivateNetworks
} // namespace Aws
