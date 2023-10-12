/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/LifecycleManagementStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SimSpaceWeaver
  {
    namespace Model
    {
      namespace LifecycleManagementStrategyMapper
      {

        static constexpr uint32_t Unknown_HASH = ConstExprHashingUtils::HashString("Unknown");
        static constexpr uint32_t PerWorker_HASH = ConstExprHashingUtils::HashString("PerWorker");
        static constexpr uint32_t BySpatialSubdivision_HASH = ConstExprHashingUtils::HashString("BySpatialSubdivision");
        static constexpr uint32_t ByRequest_HASH = ConstExprHashingUtils::HashString("ByRequest");


        LifecycleManagementStrategy GetLifecycleManagementStrategyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Unknown_HASH)
          {
            return LifecycleManagementStrategy::Unknown;
          }
          else if (hashCode == PerWorker_HASH)
          {
            return LifecycleManagementStrategy::PerWorker;
          }
          else if (hashCode == BySpatialSubdivision_HASH)
          {
            return LifecycleManagementStrategy::BySpatialSubdivision;
          }
          else if (hashCode == ByRequest_HASH)
          {
            return LifecycleManagementStrategy::ByRequest;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LifecycleManagementStrategy>(hashCode);
          }

          return LifecycleManagementStrategy::NOT_SET;
        }

        Aws::String GetNameForLifecycleManagementStrategy(LifecycleManagementStrategy enumValue)
        {
          switch(enumValue)
          {
          case LifecycleManagementStrategy::NOT_SET:
            return {};
          case LifecycleManagementStrategy::Unknown:
            return "Unknown";
          case LifecycleManagementStrategy::PerWorker:
            return "PerWorker";
          case LifecycleManagementStrategy::BySpatialSubdivision:
            return "BySpatialSubdivision";
          case LifecycleManagementStrategy::ByRequest:
            return "ByRequest";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LifecycleManagementStrategyMapper
    } // namespace Model
  } // namespace SimSpaceWeaver
} // namespace Aws
