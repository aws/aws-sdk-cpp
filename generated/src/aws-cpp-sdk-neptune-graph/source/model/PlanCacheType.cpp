/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/PlanCacheType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NeptuneGraph
  {
    namespace Model
    {
      namespace PlanCacheTypeMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int AUTO_HASH = HashingUtils::HashString("AUTO");


        PlanCacheType GetPlanCacheTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return PlanCacheType::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return PlanCacheType::DISABLED;
          }
          else if (hashCode == AUTO_HASH)
          {
            return PlanCacheType::AUTO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PlanCacheType>(hashCode);
          }

          return PlanCacheType::NOT_SET;
        }

        Aws::String GetNameForPlanCacheType(PlanCacheType enumValue)
        {
          switch(enumValue)
          {
          case PlanCacheType::NOT_SET:
            return {};
          case PlanCacheType::ENABLED:
            return "ENABLED";
          case PlanCacheType::DISABLED:
            return "DISABLED";
          case PlanCacheType::AUTO:
            return "AUTO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PlanCacheTypeMapper
    } // namespace Model
  } // namespace NeptuneGraph
} // namespace Aws
