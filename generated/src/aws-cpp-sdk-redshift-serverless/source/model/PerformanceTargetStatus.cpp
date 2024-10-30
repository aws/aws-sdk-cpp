/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/PerformanceTargetStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RedshiftServerless
  {
    namespace Model
    {
      namespace PerformanceTargetStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        PerformanceTargetStatus GetPerformanceTargetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return PerformanceTargetStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return PerformanceTargetStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PerformanceTargetStatus>(hashCode);
          }

          return PerformanceTargetStatus::NOT_SET;
        }

        Aws::String GetNameForPerformanceTargetStatus(PerformanceTargetStatus enumValue)
        {
          switch(enumValue)
          {
          case PerformanceTargetStatus::NOT_SET:
            return {};
          case PerformanceTargetStatus::ENABLED:
            return "ENABLED";
          case PerformanceTargetStatus::DISABLED:
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

      } // namespace PerformanceTargetStatusMapper
    } // namespace Model
  } // namespace RedshiftServerless
} // namespace Aws
