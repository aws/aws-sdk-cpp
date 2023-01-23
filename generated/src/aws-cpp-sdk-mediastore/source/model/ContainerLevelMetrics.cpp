/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediastore/model/ContainerLevelMetrics.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaStore
  {
    namespace Model
    {
      namespace ContainerLevelMetricsMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        ContainerLevelMetrics GetContainerLevelMetricsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return ContainerLevelMetrics::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ContainerLevelMetrics::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerLevelMetrics>(hashCode);
          }

          return ContainerLevelMetrics::NOT_SET;
        }

        Aws::String GetNameForContainerLevelMetrics(ContainerLevelMetrics enumValue)
        {
          switch(enumValue)
          {
          case ContainerLevelMetrics::ENABLED:
            return "ENABLED";
          case ContainerLevelMetrics::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContainerLevelMetricsMapper
    } // namespace Model
  } // namespace MediaStore
} // namespace Aws
